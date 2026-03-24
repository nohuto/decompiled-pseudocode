/*
 * XREFs of MiFreeRotateView @ 0x14084F294
 * Callers:
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140068270 (MiGetVadWakeList.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x140068570 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall MiFreeRotateView(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *result; // rax
  __int64 *v4; // rbx
  void *v5; // rcx

  result = MiGetVadWakeList(a1, (__int64 *)8, a3);
  v4 = result;
  if ( result )
  {
    v5 = (void *)result[1];
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    ExFreePoolWithTag(v4, 0);
    return (__int64 *)PsReturnProcessNonPagedPoolQuota(KeGetCurrentThread()->ApcState.Process, 520LL);
  }
  return result;
}
