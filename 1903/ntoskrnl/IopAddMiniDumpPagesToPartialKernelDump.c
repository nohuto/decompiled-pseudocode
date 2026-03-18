/*
 * XREFs of IopAddMiniDumpPagesToPartialKernelDump @ 0x14029CF08
 * Callers:
 *     IoAddPagesForPartialKernelDump @ 0x14029CA20 (IoAddPagesForPartialKernelDump.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IopUpdateMinidumpContext @ 0x140297338 (IopUpdateMinidumpContext.c)
 *     IopAddTriageDumpDataToPartialKernelDump @ 0x14029D0F4 (IopAddTriageDumpDataToPartialKernelDump.c)
 *     IopCalculateStackInformation @ 0x14029D190 (IopCalculateStackInformation.c)
 *     IopMarkPagesForDpcData @ 0x14029D2D0 (IopMarkPagesForDpcData.c)
 *     IopMarkPagesForLoadedDriverInformation @ 0x14029D3F4 (IopMarkPagesForLoadedDriverInformation.c)
 *     IopMarkPagesForRunTimeTriageDataBlocks @ 0x14029D5C4 (IopMarkPagesForRunTimeTriageDataBlocks.c)
 *     MmAddRangeToCrashDump @ 0x1402C5F54 (MmAddRangeToCrashDump.c)
 *     MmAddUnloadedDriverInformationToCrashDump @ 0x1402C6058 (MmAddUnloadedDriverInformationToCrashDump.c)
 *     RtlNumberOfSetBitsEx @ 0x14030DAB0 (RtlNumberOfSetBitsEx.c)
 */

__int64 __fastcall IopAddMiniDumpPagesToPartialKernelDump(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        _KTHREAD *a7,
        unsigned int a8)
{
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 result; // rax
  char v16; // al
  __int64 v17; // rbx
  __int64 v18; // [rsp+48h] [rbp-39h] BYREF
  __int64 v19; // [rsp+50h] [rbp-31h] BYREF
  __int64 v20; // [rsp+58h] [rbp-29h] BYREF
  __int64 v21; // [rsp+60h] [rbp-21h]
  _QWORD v22[6]; // [rsp+68h] [rbp-19h] BYREF

  memset(v22, 0, sizeof(v22));
  v20 = 0LL;
  v21 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  a8 = 0;
  v12 = *(_QWORD *)(CrashdmpDumpBlock + 8);
  v20 = *(_QWORD *)(v12 + 48);
  v21 = v12 + 56;
  if ( *(_QWORD *)(CrashdmpDumpBlock + 1424) <= (unsigned __int64)RtlNumberOfSetBitsEx(&v20) )
    return 3221225473LL;
  v13 = RtlNumberOfSetBitsEx(&v20);
  v14 = *(_QWORD *)(CrashdmpDumpBlock + 1424);
  LODWORD(v22[5]) |= 3u;
  v22[1] = 0LL;
  v22[2] = &v20;
  v22[4] = &v18;
  v22[0] = IoSetDumpRangeForPartialKernelDump;
  v18 = v14 - v13;
  v22[3] = v12;
  IopUpdateMinidumpContext(a1, a2, a3, a4, a5, a6, a7);
  result = MmAddUnloadedDriverInformationToCrashDump(v22);
  if ( (int)result >= 0 )
  {
    result = IopMarkPagesForLoadedDriverInformation(v22);
    if ( (int)result >= 0 )
    {
      v16 = IopCalculateStackInformation(a7, a6, &v19, &a8);
      v17 = v19;
      if ( !v16 || (result = IopMarkPagesForRunTimeTriageDataBlocks(v22, a6, v19, v19 + a8), (int)result >= 0) )
      {
        result = IopMarkPagesForDpcData(v22);
        if ( (int)result >= 0 )
        {
          result = MmAddRangeToCrashDump(v22, a7->ApcState.Process, 2176LL);
          if ( (int)result >= 0 )
          {
            result = MmAddRangeToCrashDump(v22, a7, 2080LL);
            if ( (int)result >= 0 )
            {
              result = MmAddRangeToCrashDump(v22, v17, a8);
              if ( (int)result >= 0 )
                return IopAddTriageDumpDataToPartialKernelDump(v22, *(_QWORD *)(CrashdmpDumpBlock + 1416));
            }
          }
        }
      }
    }
  }
  return result;
}
