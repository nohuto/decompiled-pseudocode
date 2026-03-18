/*
 * XREFs of ZwPowerInformation @ 0x1401B8D50
 * Callers:
 *     PopInvokeWin32Callout @ 0x1405B0C84 (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x140718B30 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x14071C4F4 (RtlpSystemBootStatusRequest.c)
 *     PdcPortOpen @ 0x1407453A0 (PdcPortOpen.c)
 *     PoGetLightestSystemStateForEject @ 0x140865D0C (PoGetLightestSystemStateForEject.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x140888F80 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x140895D50 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x140895EA0 (RtlRestoreSystemBootStatusDefaults.c)
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
