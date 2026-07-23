/*
 * XREFs of ZwPowerInformation @ 0x1401C1830
 * Callers:
 *     PopInvokeWin32Callout @ 0x14067098C (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x140743D68 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x1407599E8 (RtlpSystemBootStatusRequest.c)
 *     PdcPortOpenCommon @ 0x14078953C (PdcPortOpenCommon.c)
 *     PoGetLightestSystemStateForEject @ 0x1408A1A5C (PoGetLightestSystemStateForEject.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1408C6768 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1408D3590 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1408D3780 (RtlRestoreSystemBootStatusDefaults.c)
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
