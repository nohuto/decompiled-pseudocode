/*
 * XREFs of ZwPowerInformation @ 0x1401B8D70
 * Callers:
 *     PopInvokeWin32Callout @ 0x1405B0C84 (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x140718B10 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x14071C4D4 (RtlpSystemBootStatusRequest.c)
 *     PdcPortOpen @ 0x140745380 (PdcPortOpen.c)
 *     PoGetLightestSystemStateForEject @ 0x140865CEC (PoGetLightestSystemStateForEject.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140888F60 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140895D30 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140895E80 (RtlRestoreSystemBootStatusDefaults.c)
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
  return KiServiceInternal(*(_QWORD *)&InformationLevel, InputBuffer, *(_QWORD *)&InputBufferLength);
}
