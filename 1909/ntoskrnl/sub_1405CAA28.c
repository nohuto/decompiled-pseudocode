/*
 * XREFs of sub_1405CAA28 @ 0x1405CAA28
 * Callers:
 *     sub_1405CA02C @ 0x1405CA02C (sub_1405CA02C.c)
 *     WbHeapExecuteCall @ 0x1405CA6C8 (WbHeapExecuteCall.c)
 *     WbGetHeapExecutedBlock @ 0x1405CA8C8 (WbGetHeapExecutedBlock.c)
 *     WbFreeWarbirdProcess @ 0x1406AFA70 (WbFreeWarbirdProcess.c)
 *     WbCreateHeapExecutedBlock @ 0x1406AFEE0 (WbCreateHeapExecutedBlock.c)
 *     WbHeapExecutionUnloadModule @ 0x1406D5528 (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406D563C (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     sub_1406D4D08 @ 0x1406D4D08 (sub_1406D4D08.c)
 */

signed __int64 __fastcall sub_1405CAA28(__int64 a1, __int64 a2)
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
        sub_1406D4D08();
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
