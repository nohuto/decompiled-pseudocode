/*
 * XREFs of ZwPowerInformation @ 0x1401B8ED0
 * Callers:
 *     PopInvokeWin32Callout @ 0x1405B1C84 (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x140719DB0 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x14071D774 (RtlpSystemBootStatusRequest.c)
 *     PdcPortOpen @ 0x140746570 (PdcPortOpen.c)
 *     PoGetLightestSystemStateForEject @ 0x140866F4C (PoGetLightestSystemStateForEject.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x14088A1C0 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140896F90 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1408970E0 (RtlRestoreSystemBootStatusDefaults.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&InformationLevel);
}
