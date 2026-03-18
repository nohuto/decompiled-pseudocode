/*
 * XREFs of ACPIGlobalInitialize @ 0x1C00B80EC
 * Callers:
 *     DriverEntry @ 0x1C00B7818 (DriverEntry.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000F2A0 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D030 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0030D60 (_guard_dispatch_icall_nop.c)
 *     ACPIGetUsedDebuggingDevices @ 0x1C008E944 (ACPIGetUsedDebuggingDevices.c)
 */

void *ACPIGlobalInitialize()
{
  __int64 v0; // rbx

  AcpiHalDispatchTable = 1094930505;
  qword_1C0080A20 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_1C0080A1C = 2;
  qword_1C0080A28 = (__int64)ACPIEnableInitializeACPI;
  qword_1C0080A30 = (__int64)ACPIWakeEnableWakeEvents;
  qword_1C0080A38 = (__int64)ACPIWakeMarkHiberPhase;
  ((void (__fastcall *)(int *, __int64 *))HalDispatchTable->HalInitPowerManagement)(
    &AcpiHalDispatchTable,
    &PmHalDispatchTable);
  v0 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763922LL, 0LL, 0LL);
  if ( !v0 )
  {
    v0 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1413763928LL, 0LL, 0LL);
    if ( !v0 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xAu,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
      KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
    }
  }
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x1Eu,
    (__int64)&WPP_101522befb9b326c10c5678fcf1ebe5d_Traceguids,
    v0);
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = v0;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
