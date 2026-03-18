/*
 * XREFs of sub_140624A54 @ 0x140624A54
 * Callers:
 *     sub_140624870 @ 0x140624870 (sub_140624870.c)
 *     WbGetHeapExecutedBlock @ 0x14062490C (WbGetHeapExecutedBlock.c)
 *     WbHeapExecuteCall @ 0x140624ABC (WbHeapExecuteCall.c)
 *     WbFreeWarbirdProcess @ 0x14068FFB8 (WbFreeWarbirdProcess.c)
 *     sub_1406901F0 @ 0x1406901F0 (sub_1406901F0.c)
 *     WbHeapExecutionUnloadModule @ 0x1406B0BDC (WbHeapExecutionUnloadModule.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x1406B0CE0 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     WbFreeUserMemory @ 0x1406B1BBC (WbFreeUserMemory.c)
 */

signed __int64 __fastcall sub_140624A54(__int64 a1, __int64 a2)
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
