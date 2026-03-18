/*
 * XREFs of PopInternalAddToDumpFile @ 0x1402ED910
 * Callers:
 *     PopSetRange @ 0x14015F9BC (PopSetRange.c)
 *     IopAddBugcheckTriageDataFromParameters @ 0x140295F8C (IopAddBugcheckTriageDataFromParameters.c)
 *     PopIrpWatchdogBugcheck @ 0x1402EDB68 (PopIrpWatchdogBugcheck.c)
 *     PoAddPowerTriageData @ 0x1402F71F4 (PoAddPowerTriageData.c)
 *     PopPowerActionWatchdog @ 0x1402F7D60 (PopPowerActionWatchdog.c)
 *     PopRestoreHiberContext @ 0x140599380 (PopRestoreHiberContext.c)
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 *     PopCreateDumpMdl @ 0x140599A54 (PopCreateDumpMdl.c)
 *     PopRequestWrite @ 0x14059A134 (PopRequestWrite.c)
 *     PopDecompressHiberBlocks @ 0x14059A700 (PopDecompressHiberBlocks.c)
 *     PopHiberReadChecksums @ 0x1405ACC6C (PopHiberReadChecksums.c)
 *     PopRequestRead @ 0x1405AD13C (PopRequestRead.c)
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     PopThermalWorker @ 0x140778A10 (PopThermalWorker.c)
 *     PoShutdownBugCheck @ 0x1408A87D0 (PoShutdownBugCheck.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14019B8D8 (IoAddTriageDumpDataBlock.c)
 *     PopInternalSaveStackToDumpFile @ 0x1402ED9CC (PopInternalSaveStackToDumpFile.c)
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
  if ( *(_QWORD *)&qword_140443078 )
    IoAddTriageDumpDataBlock(qword_140443078, (PVOID)0x1D8);
  if ( qword_140443080 )
    IoAddTriageDumpDataBlock(qword_140443080, (PVOID)0x1C8);
  return IoAddTriageDumpDataBlock((ULONG)&PopCB, (PVOID)0x1F8);
}
