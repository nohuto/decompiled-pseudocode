/*
 * XREFs of RtlpAllocateAtom @ 0x14068A184
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x140088BBC (RtlpLookupOrCreateLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x1400FD1BC (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x1401112B0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1405C9B24 (PsChargeSharedPoolQuota.c)
 */

_QWORD *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  ULONG_PTR v3; // rdi
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rax

  if ( a1 + 16 < a1 )
    return 0LL;
  v3 = a1 + 16;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a1 + 16, a2);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, v3, 0LL);
    *PoolWithTag = v5;
    if ( v5 )
    {
      PoolWithTag[1] = v3;
      PoolWithTag += 2;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, a2);
      return 0LL;
    }
  }
  return PoolWithTag;
}
