/*
 * XREFs of HUBMUX_QueuePowerUpEventToDSMs @ 0x1C000E588
 * Callers:
 *     HUBHSM_NotifyingHubResumeInS0ToDevices @ 0x1C0007930 (HUBHSM_NotifyingHubResumeInS0ToDevices.c)
 *     HUBHSM_NotifyingHubResumeToDevices @ 0x1C0007960 (HUBHSM_NotifyingHubResumeToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevices @ 0x1C00079A0 (HUBHSM_NotifyingHubResumeWithResetToDevices.c)
 *     HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure @ 0x1C00079E0 (HUBHSM_NotifyingHubResumeWithResetToDevicesOnFailure.c)
 *     HUBHSM_WaitingForDevicesToAcquireReferenceOnStart @ 0x1C0008190 (HUBHSM_WaitingForDevicesToAcquireReferenceOnStart.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C0009D94 (HUBSM_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBMUX_QueuePowerUpEventToDSMs(__int64 a1, int a2)
{
  __int64 v3; // rsi
  KIRQL v5; // al
  int v6; // edi
  __int64 v7; // r8
  KIRQL v8; // r15
  bool v9; // zf
  __int64 v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // [rsp+30h] [rbp-38h] BYREF
  _QWORD **v20; // [rsp+38h] [rbp-30h]

  v20 = &v19;
  v3 = a1 + 2320;
  v19 = &v19;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 2320));
  v6 = 0;
  v7 = *(_QWORD *)(v3 + 64);
  v8 = v5;
  v9 = v3 + 64 == v7;
  v10 = v7 - 192;
  while ( !v9 )
  {
    if ( (*(_DWORD *)(v10 + 240) & 1) != 0 )
    {
      _InterlockedAnd((volatile signed __int32 *)(v10 + 240), 0xFFFFFFFE);
      _InterlockedOr((volatile signed __int32 *)(v10 + 240), 4u);
      v11 = v20;
      ++v6;
      v12 = (_QWORD *)(v10 + 208);
      if ( *v20 != &v19 )
        __fastfail(3u);
      *(_QWORD *)(v10 + 216) = v20;
      *v12 = &v19;
      *v11 = v12;
      v20 = (_QWORD **)(v10 + 208);
      v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v10);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1640))(
        WdfDriverGlobals,
        v13,
        "DSM PnPPower Tag",
        2350LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
    }
    v14 = *(_QWORD *)(v10 + 192);
    v9 = v3 + 64 == v14;
    v10 = v14 - 192;
  }
  *(_DWORD *)(v3 + 12) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v8);
  if ( v6 )
  {
    v15 = v19 - 26;
    v16 = *v19 - 208LL;
    if ( &v19 != v19 )
    {
      do
      {
        HUBSM_AddEvent((__int64)(v15 + 63), a2);
        v17 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *))(WdfFunctions_01015 + 1632))(
                WdfDriverGlobals,
                v15);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                  + 1648))(
          WdfDriverGlobals,
          v17,
          "DSM PnPPower Tag",
          2391LL,
          "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hsmmux.c");
        v18 = (_QWORD *)(v16 + 208);
        v15 = (_QWORD *)v16;
        v16 = *(_QWORD *)(v16 + 208) - 208LL;
      }
      while ( &v19 != v18 );
    }
  }
  else
  {
    HUBSM_AddEvent(a1 + 1264, 2014);
  }
}
