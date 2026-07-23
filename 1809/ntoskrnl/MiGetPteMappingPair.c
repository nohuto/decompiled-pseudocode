/*
 * XREFs of MiGetPteMappingPair @ 0x1402CE358
 * Callers:
 *     MiSlowRotateCopy @ 0x1402AF728 (MiSlowRotateCopy.c)
 * Callees:
 *     MiAllocateHyperSpace @ 0x1400B39C0 (MiAllocateHyperSpace.c)
 *     MiCreatePteCopyList @ 0x14012ECB0 (MiCreatePteCopyList.c)
 */

ULONG_PTR __fastcall MiGetPteMappingPair(volatile signed __int32 *SchedulerAssist, __int64 a2)
{
  ULONG_PTR result; // rax
  __int64 CurrentIrql; // rdx

  if ( (_DWORD)SchedulerAssist != 1 || (result = MiCreatePteCopyList(2uLL, 2uLL, a2), !*(_DWORD *)(a2 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
    {
      SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
      _InterlockedOr(SchedulerAssist, 0x10000u);
    }
    *(_BYTE *)(a2 + 8) = CurrentIrql;
    result = ((MiAllocateHyperSpace((__int64)SchedulerAssist, CurrentIrql) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *(_DWORD *)(a2 + 4) = 2;
    *(_DWORD *)a2 = 0;
    *(_QWORD *)(a2 + 16) = result;
    *(_BYTE *)(a2 + 9) = 1;
  }
  return result;
}
