/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406D0BF0
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MiAllocateChildVads @ 0x14085DA18 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14085E4E8 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140068270 (MiGetVadWakeList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068570 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreePlaceholderStorage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 *v4; // rbx
  void *v5; // rcx
  __int64 v6; // rdi

  result = MiGetVadWakeList(a1, (__int64 *)0x80, a3);
  v4 = result;
  if ( result )
  {
    v5 = (void *)result[1];
    v6 = 72LL;
    if ( v5 )
    {
      v6 = 136LL;
      ExFreePoolWithTag(v5, 0);
    }
    ExFreePoolWithTag(v4, 0);
    return (__int64 *)PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, v6);
  }
  return result;
}
