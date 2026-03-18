/*
 * XREFs of rimDoRimDevChange @ 0x1C004E4B0
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00520F8 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMRemoveDevOfInputType @ 0x1C00892D4 (RIMRemoveDevOfInputType.c)
 *     RIMFreeSpecificDev @ 0x1C00893B0 (RIMFreeSpecificDev.c)
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C010CFE0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C010E850 (RIMIDERemoveInjectionDevice.c)
 *     RIMVirtCreateDev @ 0x1C0122170 (RIMVirtCreateDev.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     rimDoRimDevChangeCallback @ 0x1C004E754 (rimDoRimDevChangeCallback.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0051990 (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C009248C (RIMHandleTTMDeviceRemoval.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00924DC (RIMHandleTTMDeviceArrival.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  unsigned __int16 v8; // r9

  switch ( a3 )
  {
    case 1u:
      goto LABEL_5;
    case 2u:
      *(_DWORD *)(a2 + 184) |= 0x10000000u;
      LOBYTE(v6) = 1;
      v7 = RIMHandleTTMDeviceArrival(a2);
      if ( v7 >= 0 )
        goto LABEL_6;
      v8 = 14;
LABEL_16:
      WPP_RECORDER_SF_d(gRimLog, 3u, 0x16u, v8, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, v7);
      goto LABEL_6;
    case 3u:
      v6 = (*(_DWORD *)(a2 + 184) & 0x10000000u) >> 28;
      v7 = RIMHandleTTMDeviceRemoval(a2);
      if ( v7 >= 0 )
        goto LABEL_6;
      v8 = 15;
      goto LABEL_16;
  }
  if ( a3 - 4 <= 1 )
  {
LABEL_5:
    LOBYTE(v6) = 1;
    goto LABEL_6;
  }
  MicrosoftTelemetryAssertTriggeredMsgKM("Unknown RIM_DEVICE_XXX notification. Bug");
  LOBYTE(v6) = 0;
LABEL_6:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, a3);
  if ( (_BYTE)v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 80LL))(*(_QWORD *)(a2 + 32), a3);
    rimDoRimDevChangeCallback(a1, a2, a3);
  }
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x10000000u;
}
