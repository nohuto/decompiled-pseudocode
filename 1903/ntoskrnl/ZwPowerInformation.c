/*
 * XREFs of ZwPowerInformation @ 0x1401C0CB0
 * Callers:
 *     PopInvokeWin32Callout @ 0x1406A2EE4 (PopInvokeWin32Callout.c)
 *     RtlpRecordBootStatusData @ 0x140741E68 (RtlpRecordBootStatusData.c)
 *     RtlpSystemBootStatusRequest @ 0x14076A018 (RtlpSystemBootStatusRequest.c)
 *     PdcPortOpenCommon @ 0x1407871DC (PdcPortOpenCommon.c)
 *     PoGetLightestSystemStateForEject @ 0x1408A221C (PoGetLightestSystemStateForEject.c)
 *     PspRecordCrashedProcessIntoBlackbox @ 0x1408C6E88 (PspRecordCrashedProcessIntoBlackbox.c)
 *     RtlCheckSystemBootStatusIntegrity @ 0x1408D3C90 (RtlCheckSystemBootStatusIntegrity.c)
 *     RtlRestoreSystemBootStatusDefaults @ 0x1408D3E80 (RtlRestoreSystemBootStatusDefaults.c)
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
