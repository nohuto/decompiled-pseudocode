/*
 * XREFs of HUBPDO_PoFxDripsWatchdogCallback @ 0x1C0019F30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqhhh @ 0x1C00122A8 (McTemplateK0pqhhh.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

void __fastcall HUBPDO_PoFxDripsWatchdogCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  NTSTATUS v4; // eax
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // eax
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 RemlockSize; // [rsp+28h] [rbp-19h]
  __int64 RemlockSizea; // [rsp+28h] [rbp-19h]
  __int64 v14; // [rsp+30h] [rbp-11h]
  __int64 v15; // [rsp+48h] [rbp+7h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+50h] [rbp+Fh]
  __int64 v17; // [rsp+58h] [rbp+17h]
  _QWORD v18[7]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+B0h] [rbp+6Fh] BYREF

  memset(v18, 0, sizeof(v18));
  v3 = *(_QWORD *)(a2 + 64);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      10836LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    memset(v18, 0, sizeof(v18));
    v18[6] = off_1C0064108;
    LODWORD(v18[0]) = 56;
    v18[3] = 0x100000001LL;
    v18[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
    v17 = 1LL;
    v16 = HUBPDO_EvtWorkItemDripsWatchDogCallback;
    v15 = 24LL;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           &v15,
           v18,
           &v19);
    if ( v8 >= 0 )
    {
      *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v19,
                   off_1C0064108) = a2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v19);
    }
    else
    {
      v9 = (struct _MCGEN_TRACE_CONTEXT *)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
          2u,
          2u,
          0x91u,
          (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
          v8);
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      {
        v10 = *(_QWORD *)(v3 + 24);
        LOWORD(v14) = *(_WORD *)(v10 + 1996);
        LODWORD(RemlockSizea) = 10;
        McTemplateK0pqhhh(
          v9,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
          (const GUID *)(v10 + 1516),
          *(_QWORD *)(v10 + 24),
          RemlockSizea,
          v14,
          *(_WORD *)(v10 + 1998),
          *(_WORD *)(v10 + 2000));
      }
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v3);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v11,
        "DRIPS SR Tag",
        10864LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v3 + 424), "DRIPS SR Tag", 0x20u);
    }
  }
  else
  {
    v5 = (struct _MCGEN_TRACE_CONTEXT *)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL) + 1432LL),
        2u,
        2u,
        0x90u,
        (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
        v4);
    if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      v6 = *(_QWORD *)(v3 + 24);
      LOWORD(v14) = *(_WORD *)(v6 + 1996);
      LODWORD(RemlockSize) = 9;
      McTemplateK0pqhhh(
        v5,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
        (const GUID *)(v6 + 1516),
        *(_QWORD *)(v6 + 24),
        RemlockSize,
        v14,
        *(_WORD *)(v6 + 1998),
        *(_WORD *)(v6 + 2000));
    }
  }
}
