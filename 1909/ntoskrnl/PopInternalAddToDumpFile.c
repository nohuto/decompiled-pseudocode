/*
 * XREFs of PopInternalAddToDumpFile @ 0x1402ED674
 * Callers:
 *     PopSetRange @ 0x14016005C (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140295CEC (IopAddBugcheckTriageDataFromParameters.c)
 *     PopIrpWatchdogBugcheck @ 0x1402ED8C8 (PopIrpWatchdogBugcheck.c)
 *     PoAddPowerTriageData @ 0x1402F6CA4 (PoAddPowerTriageData.c)
 *     PopPowerActionWatchdog @ 0x1402F7810 (PopPowerActionWatchdog.c)
 *     PopRestoreHiberContext @ 0x140599360 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140599A34 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x14059A114 (PopRequestWrite.c)
 *     PopDecompressHiberBlocks @ 0x14059A6E0 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x1405ACC4C (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1405AD11C (PopRequestRead.c)
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     PopThermalWorker @ 0x14077BFF0 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1408A8030 (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14019BF38 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402ED730 (PopInternalSaveStackToDumpFile.c)
 */

char __fastcall PopInternalAddToDumpFile(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int64 v4; // rdx

  if ( a1 )
  {
    if ( a2 )
      v4 = ((a1 & 0xFFF) + (unsigned __int64)a2 + 4095) >> 12;
    else
      LODWORD(v4) = 1;
    IoAddTriageDumpDataBlock(a1 & 0xFFFFF000, (PVOID)(unsigned int)((_DWORD)v4 << 12));
  }
  if ( a3 )
    PopInternalSaveStackToDumpFile(a3);
  IoAddTriageDumpDataBlock((ULONG)&PopHiberInfo, (PVOID)0xD8);
  IoAddTriageDumpDataBlock((ULONG)&PopAction, (PVOID)0x1C0);
  if ( *(_QWORD *)&qword_140442FF8 )
    IoAddTriageDumpDataBlock(qword_140442FF8, (PVOID)0x1D8);
  if ( qword_140443000 )
    IoAddTriageDumpDataBlock(qword_140443000, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x1F8);
}
