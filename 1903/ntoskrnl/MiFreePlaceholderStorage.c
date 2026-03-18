/*
 * XREFs of MiFreePlaceholderStorage @ 0x1406F01E0
 * Callers:
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x14089A8C0 (MiAllocateChildVads.c)
 *     MiDeletePartialCloneVads @ 0x14089B3A0 (MiDeletePartialCloneVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x1400573D0 (MiGetVadWakeList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059060 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
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
