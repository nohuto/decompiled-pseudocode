/*
 * XREFs of memset_0 @ 0x14000D643
 * Callers:
 *     SmscpExecuteInitialCommand @ 0x140001540 (SmscpExecuteInitialCommand.c)
 *     SmExecPgmEx @ 0x1400015E8 (SmExecPgmEx.c)
 *     SmscpLoadSubSystem @ 0x1400016A8 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140001F14 (SmpExecuteImage.c)
 *     SmpApiCallback @ 0x140003880 (SmpApiCallback.c)
 *     SmpInitializeControlBlock @ 0x1400044EC (SmpInitializeControlBlock.c)
 *     SmpStartCsr @ 0x140004B40 (SmpStartCsr.c)
 *     SmpInit @ 0x1400061AC (SmpInit.c)
 *     SmpSaveOldPageFiles @ 0x14000B524 (SmpSaveOldPageFiles.c)
 *     SmpPagefileInitialize @ 0x14000B8B8 (SmpPagefileInitialize.c)
 *     RtlStringCbPrintfExW @ 0x14001200C (RtlStringCbPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1400121D0 (RtlStringExHandleOtherFlagsW.c)
 *     SmpForceDeleteTargetFile @ 0x140012920 (SmpForceDeleteTargetFile.c)
 *     SmpLoadSubSystem @ 0x140012B94 (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x14001300C (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x1400133B0 (SmpSetTargetAttributes.c)
 *     SmscpNotifySmOfFailure @ 0x140013E6C (SmscpNotifySmOfFailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
