/*
 * XREFs of memset_0 @ 0x1400101EF
 * Callers:
 *     SmscpExecuteInitialCommand @ 0x140001540 (SmscpExecuteInitialCommand.c)
 *     SmExecPgmEx @ 0x1400015E8 (SmExecPgmEx.c)
 *     SmscpLoadSubSystem @ 0x14000169C (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140001EE4 (SmpExecuteImage.c)
 *     SmpApiCallback @ 0x140003860 (SmpApiCallback.c)
 *     SmpInitializeControlBlock @ 0x1400044D4 (SmpInitializeControlBlock.c)
 *     SmpStartCsr @ 0x140004B30 (SmpStartCsr.c)
 *     SmpInit @ 0x14000619C (SmpInit.c)
 *     SmpSaveOldPageFiles @ 0x14000B98C (SmpSaveOldPageFiles.c)
 *     SmpPagefileInitialize @ 0x14000BD30 (SmpPagefileInitialize.c)
 *     QueryFeatureOverride @ 0x14000D820 (QueryFeatureOverride.c)
 *     BaseFindFirstDevice @ 0x14000F948 (BaseFindFirstDevice.c)
 *     RtlStringCbPrintfExW @ 0x140014AC8 (RtlStringCbPrintfExW.c)
 *     RtlStringExHandleOtherFlagsW @ 0x140014C8C (RtlStringExHandleOtherFlagsW.c)
 *     SmpForceDeleteTargetFile @ 0x1400153E0 (SmpForceDeleteTargetFile.c)
 *     SmpLoadSubSystem @ 0x140015654 (SmpLoadSubSystem.c)
 *     SmpRenameTargetFile @ 0x140015B24 (SmpRenameTargetFile.c)
 *     SmpSetTargetAttributes @ 0x140015F14 (SmpSetTargetAttributes.c)
 *     SmscpNotifySmOfFailure @ 0x140016B14 (SmscpNotifySmOfFailure.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
