/*
 * XREFs of sub_140625A74 @ 0x140625A74
 * Callers:
 *     sub_140625890 @ 0x140625890 (sub_140625890.c)
 *     WbGetHeapExecutedBlock @ 0x14062592C (WbGetHeapExecutedBlock.c)
 *     WbHeapExecuteCall @ 0x140625ADC (WbHeapExecuteCall.c)
 *     WbFreeWarbirdProcess @ 0x140691158 (WbFreeWarbirdProcess.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 *     WbHeapExecutionUnloadModule @ 0x1406B1E5C (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406B1F60 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WbFreeUserMemory @ 0x1406B2E3C (WbFreeUserMemory.c)
 */

signed __int64 __fastcall sub_140625A74(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rdi

  v2 = 0LL;
  if ( a2 )
  {
    v2 = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 80));
    if ( !v2 )
    {
      if ( *(_QWORD *)(a2 + 40) )
      {
        WbFreeUserMemory();
        *(_QWORD *)(a2 + 40) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_DWORD *)(a2 + 72) = 0;
      }
      ExFreePoolWithTag((PVOID)a2, 0x42524157u);
    }
  }
  return v2;
}
