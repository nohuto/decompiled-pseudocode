/*
 * XREFs of PopInternalAddToDumpFile @ 0x1402D3324
 * Callers:
 *     PopSetRange @ 0x14014496C (PopSetRange.c)
 *     IopUpdateMinidumpContext @ 0x140281C68 (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 *     PopIrpWatchdogBugcheck @ 0x1402D356C (PopIrpWatchdogBugcheck.c)
 *     PopRestoreHiberContext @ 0x140569770 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x140569E60 (PopDecompressHiberBlocks.c)
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x14056A410 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x14056A5F4 (PopRequestWrite.c)
 *     PopHiberReadChecksums @ 0x14057CDB8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x14057D27C (PopRequestRead.c)
 *     PopAllocateHiberContext @ 0x1406DF534 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1406DFFA0 (PopFreeHiberContext.c)
 *     PopThermalWorker @ 0x140750F60 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x14086BEC0 (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191CEC (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402D33E0 (PopInternalSaveStackToDumpFile.c)
 */

__int64 __fastcall PopInternalAddToDumpFile(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (_DWORD)v4 << 12);
  }
  if ( a3 )
    PopInternalSaveStackToDumpFile(a3);
  IoAddTriageDumpDataBlock((int)&PopHiberInfo, 216);
  IoAddTriageDumpDataBlock((int)&PopAction, 280);
  if ( qword_140417738 )
    IoAddTriageDumpDataBlock(qword_140417738, 472);
  if ( BugCheckParameter4 )
    IoAddTriageDumpDataBlock(BugCheckParameter4, 456);
  return IoAddTriageDumpDataBlock((int)&PopCB, 512);
}
