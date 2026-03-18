/*
 * XREFs of rimDoRimDevChange @ 0x1C0055BCC
 * Callers:
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 *     RIMCreateDev @ 0x1C0057C10 (RIMCreateDev.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0058E4C (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMRemoveDevOfInputType @ 0x1C005B43C (RIMRemoveDevOfInputType.c)
 *     RIMFreeSpecificDev @ 0x1C005B798 (RIMFreeSpecificDev.c)
 *     RIMDoOnPnpNotification @ 0x1C00A4EFC (RIMDoOnPnpNotification.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0135600 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01370C8 (RIMIDERemoveInjectionDevice.c)
 *     RIMVirtCreateDev @ 0x1C014B864 (RIMVirtCreateDev.c)
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     rimDoRimDevChangeCallback @ 0x1C0055C98 (rimDoRimDevChangeCallback.c)
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C0058A7C (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMHandleTTMDeviceRemoval @ 0x1C00A4970 (RIMHandleTTMDeviceRemoval.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00A49D8 (RIMHandleTTMDeviceArrival.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // r9d

  v3 = a3;
  switch ( (_DWORD)a3 )
  {
    case 1:
      goto LABEL_5;
    case 2:
      *(_DWORD *)(a2 + 184) |= 0x10000000u;
      LOBYTE(v6) = 1;
      v7 = RIMHandleTTMDeviceArrival(a2);
      if ( v7 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v9 = 14;
LABEL_20:
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_D((_DWORD)gRimLog, v8, 1, v9, (__int64)&WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids, v7);
      goto LABEL_6;
    case 3:
      v6 = (*(_DWORD *)(a2 + 184) & 0x10000000u) >> 28;
      v7 = RIMHandleTTMDeviceRemoval(a2);
      if ( v7 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_6;
      v9 = 15;
      goto LABEL_20;
  }
  if ( (unsigned int)(a3 - 4) <= 1 )
  {
LABEL_5:
    LOBYTE(v6) = 1;
    goto LABEL_6;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  LOBYTE(v6) = 0;
LABEL_6:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, v3);
  if ( (_BYTE)v6 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(a2 + 32) + 80LL))(*(_QWORD *)(a2 + 32), v3);
    rimDoRimDevChangeCallback(a1, a2, v3);
  }
  if ( v3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x10000000u;
}
