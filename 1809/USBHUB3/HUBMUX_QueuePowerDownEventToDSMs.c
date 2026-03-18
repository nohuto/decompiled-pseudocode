/*
 * XREFs of HUBMUX_QueuePowerDownEventToDSMs @ 0x1C000E0E8
 * Callers:
 *     HUBHSM_NotifyingHubStopToDevices @ 0x1C0007A30 (HUBHSM_NotifyingHubStopToDevices.c)
 *     HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset @ 0x1C00081C0 (HUBHSM_WaitingForDevicesToReleaseReferenceOnD0ExitFinalFromReset.c)
 *     HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend @ 0x1C0008200 (HUBHSM_WaitingForDevicesToReleaseReferenceOnSuspend.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerDownEventToDSMs(__int64 a1, int a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  KIRQL v5; // r12
  int v6; // ebp
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v19; // [rsp+38h] [rbp-30h]

  v2 = a1;
  v19 = &v18;
  v3 = a1 + 2320;
  v18 = &v18;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2320));
  _InterlockedOr((volatile signed __int32 *)(v3 + 32), 8u);
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 64);
  v8 = 0;
  v9 = v7 - 192;
  if ( v3 + 64 != v7 )
  {
    do
    {
      if ( (*(_DWORD *)(v9 + 240) & 2) != 0 )
      {
        ++v8;
        _InterlockedOr((volatile signed __int32 *)(v9 + 240), 4u);
      }
      v10 = v19;
      ++v6;
      v11 = (_QWORD *)(v9 + 208);
      if ( *v19 != &v18 )
        __fastfail(3u);
      *(_QWORD *)(v9 + 216) = v19;
      *v11 = &v18;
      *v10 = v11;
      v19 = (_QWORD **)(v9 + 208);
      v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v9);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v12,
        "DSM PnPPower Tag",
        1992LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
      v13 = *(_QWORD *)(v9 + 192);
      v9 = v13 - 192;
    }
    while ( v3 + 64 != v13 );
  }
  *(_DWORD *)(v3 + 12) = v8;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v5);
  if ( !v6 )
    goto LABEL_11;
  v14 = v18 - 26;
  v15 = *v18 - 208LL;
  if ( &v18 != v18 )
  {
    do
    {
      HUBSM_AddEvent((__int64)(v14 + 63), a2);
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
              WdfDriverGlobals,
              v14);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v16,
        "DSM PnPPower Tag",
        2041LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
      v17 = (_QWORD *)(v15 + 208);
      v14 = (_QWORD *)v15;
      v15 = *(_QWORD *)(v15 + 208) - 208LL;
    }
    while ( &v18 != v17 );
    v2 = a1;
  }
  if ( !v8 )
LABEL_11:
    HUBSM_AddEvent(v2 + 1264, 2018);
}
