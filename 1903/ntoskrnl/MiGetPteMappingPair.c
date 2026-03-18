/*
 * XREFs of MiGetPteMappingPair @ 0x1402E8A6C
 * Callers:
 *     MiSlowRotateCopy @ 0x1402C739C (MiSlowRotateCopy.c)
 * Callees:
 *     MiAllocateHyperSpace @ 0x14011C564 (MiAllocateHyperSpace.c)
 *     MiCreatePteCopyList @ 0x14012F194 (MiCreatePteCopyList.c)
 */

ULONG_PTR __fastcall MiGetPteMappingPair(int a1, __int64 a2)
{
  ULONG_PTR result; // rax
  unsigned __int8 CurrentIrql; // dl

  if ( a1 != 1 || (result = MiCreatePteCopyList(2uLL, 2uLL, a2), !*(_DWORD *)(a2 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    *(_BYTE *)(a2 + 8) = CurrentIrql;
    result = ((MiAllocateHyperSpace(2uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = result;
    *(_BYTE *)(a2 + 9) = 1;
  }
  return result;
}
