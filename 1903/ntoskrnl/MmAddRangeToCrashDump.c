/*
 * XREFs of MmAddRangeToCrashDump @ 0x1402C5F54
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14029CBEC (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14029CF08 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14029D0F4 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDeviceNode @ 0x14029D270 (IopMarkPagesForDeviceNode.c)
 *     IopMarkPagesForDpcData @ 0x14029D2D0 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14029D3F4 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x14029D4B0 (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14029D5C4 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     MmAddPrivateDataToCrashDump @ 0x1402C5E20 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x1402C6058 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x1402C60EC (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x1403390C0 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1405A8C08 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1405A8C68 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1405A8D50 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1405A8E10 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405A8F24 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MiIsWorkingSetTrimThread @ 0x14011C5DC (MiIsWorkingSetTrimThread.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiAddRangeToCrashDump @ 0x1402C58F8 (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64, __int64),
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v6; // r10
  BOOL IsWorkingSetTrimThread; // eax
  int v8; // ecx
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // rdx
  __int64 v11; // r9
  _QWORD v13[12]; // [rsp+30h] [rbp-88h] BYREF

  memset(v13, 0, 0x58uLL);
  v6 = 1LL;
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) != 0 )
  {
    IsWorkingSetTrimThread = MiIsWorkingSetTrimThread();
    v8 = v13[10];
    if ( !IsWorkingSetTrimThread )
      v8 = v6;
    LODWORD(v13[10]) = v8;
  }
  v13[8] = a2;
  v9 = a3 + a2 - 1;
  v13[9] = v9;
  v10 = &v13[1];
  v11 = 4LL;
  do
  {
    a2 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(v10 - 1) = a2;
    *v10 = v9;
    v10 += 2;
    v11 -= v6;
  }
  while ( v11 );
  return MiAddRangeToCrashDump(a1, a2, v9, (__int64)v13, 3);
}
