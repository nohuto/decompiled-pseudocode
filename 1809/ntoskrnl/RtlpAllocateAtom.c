/*
 * XREFs of RtlpAllocateAtom @ 0x14068B324
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x140088BAC (RtlpLookupOrCreateLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x1400FD25C (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x140111340 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1405CAB24 (PsChargeSharedPoolQuota.c)
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
