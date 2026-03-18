/*
 * XREFs of HUBPDO_EvtDeviceCleanup @ 0x1C0017E20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBSM_AddEvent @ 0x1C000A734 (HUBSM_AddEvent.c)
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1C00134EC (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 *     HUBMISC_WaitForSignal @ 0x1C002EB20 (HUBMISC_WaitForSignal.c)
 *     HUBIDLE_AddEvent @ 0x1C003AB30 (HUBIDLE_AddEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     HUBPDO_BillboardCleanup @ 0x1C007591C (HUBPDO_BillboardCleanup.c)
 */

void __fastcall HUBPDO_EvtDeviceCleanup(__int64 a1)
{
  struct _MCGEN_TRACE_CONTEXT *v1; // rcx
  __int64 v2; // rdi
  struct _KEVENT *v3; // r14
  __int64 v4; // rbp
  NTSTATUS v5; // eax
  void *v6; // rcx
  __int64 v7; // rax
  void *v8; // rcx
  __int64 v9; // rax
  PVOID *v10; // rbx
  __int64 v11; // rsi
  NTSTATUS v12; // eax
  __int64 v13; // rbp
  __int64 v14; // rax
  struct _MCGEN_TRACE_CONTEXT *v15; // rcx
  __int64 v16; // [rsp+28h] [rbp-30h]
  char v17; // [rsp+68h] [rbp+10h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h]

  v17 = 0;
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0064040);
  v3 = *(struct _KEVENT **)(v2 + 24);
  v4 = *(_QWORD *)&v3[1].Header.Lock;
  v18 = v4;
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v1, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_START, 0LL, v4);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", File, 1u, 0x20u);
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)v3->Header.WaitListHead.Flink[89].Blink,
      2u,
      5u,
      0x55u,
      (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
      v5);
  IoReleaseRemoveLockAndWaitEx((PIO_REMOVE_LOCK)(v2 + 424), "DRIPS SR Tag", 0x20u);
  v6 = *(void **)(v2 + 408);
  if ( v6 )
  {
    PoUnregisterPowerSettingCallback(v6);
    *(_QWORD *)(v2 + 408) = 0LL;
    v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v7,
      "DRIPS SR Tag",
      6320LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  wil_details_FeaturePropertyCache_ReportUsageToService(1LL, 3LL);
  v8 = *(void **)(v2 + 416);
  if ( v8 )
  {
    PoUnregisterPowerSettingCallback(v8);
    *(_QWORD *)(v2 + 416) = 0LL;
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v2);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
      WdfDriverGlobals,
      v9,
      "DRIPS IO Tag",
      6328LL,
      "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  }
  v10 = (PVOID *)(v2 + 272);
  v11 = 5LL;
  do
  {
    if ( *v10 )
    {
      v12 = PoUnregisterPowerSettingCallback(*v10);
      if ( v12 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v16) = v12;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(v2 + 24) + 8LL),
          2u,
          5u,
          0x54u,
          (__int64)&WPP_e683e3a97dd23da98d402d95dd0016a2_Traceguids,
          v16);
      }
      *v10 = 0LL;
    }
    ++v10;
    --v11;
  }
  while ( v11 );
  v13 = v18;
  if ( (*(_DWORD *)(v2 + 32) & 0x1000) != 0 )
    HUBIDLE_AddEvent(v2 + 72, 6006LL, 0LL);
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)&v3->Header.Lock + 560LL))(
    *(_QWORD *)(*(_QWORD *)&v3->Header.Lock + 248LL),
    &v17);
  KeClearEvent(v3 + 66);
  HUBSM_AddEvent((__int64)&v3[21], 4063);
  HUBMISC_WaitForSignal(&v3[66]);
  HUBPDO_BillboardCleanup(v3);
  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)&v3->Header.Lock + 568LL))(
    *(_QWORD *)(*(_QWORD *)&v3->Header.Lock + 248LL),
    &v17);
  v3->Header.WaitListHead.Blink = 0LL;
  v14 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, struct _KEVENT *))(WdfFunctions_01015 + 1632))(
          WdfDriverGlobals,
          v3);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const char *, __int64, const char *))(WdfFunctions_01015 + 1648))(
    WdfDriverGlobals,
    v14,
    "DSM PDO Tag",
    6389LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubpdo.c");
  v15 = *(struct _MCGEN_TRACE_CONTEXT **)(v2 + 56);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x64334855u);
    *(_QWORD *)(v2 + 56) = 0LL;
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 2) != 0 )
    McTemplateK0p(v15, &USBHUB3_ETW_EVENT_DEVICE_CLEANUP_COMPLETE, 0LL, v13);
}
