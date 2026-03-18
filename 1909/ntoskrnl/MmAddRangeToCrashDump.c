/*
 * XREFs of MmAddRangeToCrashDump @ 0x1402C5CB4
 * Callers:
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x14029C94C (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     IopAddMiniDumpPagesToPartialKernelDump @ 0x14029CC68 (IopAddMiniDumpPagesToPartialKernelDump.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14029CE54 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopMarkPagesForDeviceNode @ 0x14029CFD0 (IopMarkPagesForDeviceNode.c)
 *     IopMarkPagesForDpcData @ 0x14029D030 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14029D154 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForProcessorData @ 0x14029D210 (IopMarkPagesForProcessorData.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14029D324 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     MmAddPrivateDataToCrashDump @ 0x1402C5B80 (MmAddPrivateDataToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x1402C5DB8 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     MmGetDumpRange @ 0x1402C5E4C (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x140338B20 (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1405A8BE8 (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1405A8C48 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1405A8D30 (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1405A8DF0 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1405A8F04 (IopLiveDumpMarkRequiredDumpData.c)
 * Callees:
 *     MiIsWorkingSetTrimThread @ 0x14011CAF8 (MiIsWorkingSetTrimThread.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiAddRangeToCrashDump @ 0x1402C5658 (MiAddRangeToCrashDump.c)
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
