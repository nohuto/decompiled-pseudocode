/*
 * XREFs of PopInternalAddToDumpFile @ 0x1402D3514
 * Callers:
 *     PopSetRange @ 0x140144A6C (PopSetRange.c)
 *     IopUpdateMinidumpContext @ 0x140281E58 (IopUpdateMinidumpContext.c)
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     PopIrpWatchdogBugcheck @ 0x1402D375C (PopIrpWatchdogBugcheck.c)
 *     PopRestoreHiberContext @ 0x14056A770 (PopRestoreHiberContext.c)
 *     PopDecompressHiberBlocks @ 0x14056AE60 (PopDecompressHiberBlocks.c)
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x14056B410 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x14056B5F4 (PopRequestWrite.c)
 *     PopHiberReadChecksums @ 0x14057DDB8 (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x14057E27C (PopRequestRead.c)
 *     PopAllocateHiberContext @ 0x1406E07D4 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 *     PopThermalWorker @ 0x140752150 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x14086D120 (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402D35D0 (PopInternalSaveStackToDumpFile.c)
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
  if ( qword_1404187D8 )
    IoAddTriageDumpDataBlock(qword_1404187D8, 472);
  if ( BugCheckParameter4 )
    IoAddTriageDumpDataBlock(BugCheckParameter4, 456);
  return IoAddTriageDumpDataBlock((int)&PopCB, 512);
}
