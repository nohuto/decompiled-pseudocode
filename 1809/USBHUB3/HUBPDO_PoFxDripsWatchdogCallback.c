/*
 * XREFs of HUBPDO_PoFxDripsWatchdogCallback @ 0x1C0018760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqhhh @ 0x1C00110FC (McTemplateK0pqhhh.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

void __fastcall HUBPDO_PoFxDripsWatchdogCallback(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  NTSTATUS v4; // eax
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  __int64 v6; // r9
  __int64 v7; // rax
  int v8; // eax
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // [rsp+28h] [rbp-19h]
  __int64 v13; // [rsp+28h] [rbp-19h]
  __int64 v14; // [rsp+30h] [rbp-11h]
  __int64 v15; // [rsp+30h] [rbp-11h]
  _QWORD v16[3]; // [rsp+48h] [rbp+7h] BYREF
  _QWORD v17[7]; // [rsp+60h] [rbp+1Fh] BYREF
  __int64 v18; // [rsp+B0h] [rbp+6Fh] BYREF

  v2 = *(_QWORD *)(a2 + 64);
  v4 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v4 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1640))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      10806LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
    memset(v17, 0, sizeof(v17));
    v17[6] = off_1C005F108;
    LODWORD(v17[0]) = 56;
    v17[3] = 0x100000001LL;
    v17[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    v16[2] = 1LL;
    v16[1] = HUBPDO_EvtWorkItemDripsWatchDogCallback;
    v16[0] = 24LL;
    v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v16,
           v17,
           &v18);
    if ( v8 >= 0 )
    {
      *(_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                   WdfDriverGlobals,
                   v18,
                   off_1C005F108) = a2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v18);
    }
    else
    {
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
        2u,
        2u,
        0x91u,
        (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
        v8);
      if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      {
        v10 = *(_QWORD *)(v2 + 24);
        LOWORD(v15) = *(_WORD *)(v10 + 1996);
        LODWORD(v13) = 10;
        McTemplateK0pqhhh(
          v9,
          &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
          (const GUID *)(v10 + 1516),
          *(_QWORD *)(v10 + 24),
          v13,
          v15,
          *(_WORD *)(v10 + 1998),
          *(_WORD *)(v10 + 2000));
      }
      v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015
                                                                                                + 1648))(
        WdfDriverGlobals,
        v11,
        "DRIPS SR Tag",
        10834LL,
        "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", 0x20u);
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL) + 1432LL),
      2u,
      2u,
      0x90u,
      (__int64)&WPP_7c9a8c1f1a7c3ca72e1c468f1757432b_Traceguids,
      v4);
    if ( (BYTE3(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    {
      v6 = *(_QWORD *)(v2 + 24);
      LOWORD(v14) = *(_WORD *)(v6 + 1996);
      LODWORD(v12) = 9;
      McTemplateK0pqhhh(
        v5,
        &USBHUB3_ETW_EVENT_DEVICE_DRIPS_WATCHDOG_COMPLETE,
        (const GUID *)(v6 + 1516),
        *(_QWORD *)(v6 + 24),
        v12,
        v14,
        *(_WORD *)(v6 + 1998),
        *(_WORD *)(v6 + 2000));
    }
  }
}
