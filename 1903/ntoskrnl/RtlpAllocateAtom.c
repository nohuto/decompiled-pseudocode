/*
 * XREFs of RtlpAllocateAtom @ 0x140668954
 * Callers:
 *     RtlpLookupOrCreateLowBox @ 0x14001CF58 (RtlpLookupOrCreateLowBox.c)
 *     RtlpAllocateAtomTableEntry @ 0x140099B20 (RtlpAllocateAtomTableEntry.c)
 *     RtlCreateAtomTableEx @ 0x14010AEA0 (RtlCreateAtomTableEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1405D6A3C (PsChargeSharedPoolQuota.c)
 */

_QWORD *__fastcall RtlpAllocateAtom(unsigned __int64 a1, ULONG a2)
{
  SIZE_T v2; // rdi
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rax

  v2 = a1 + 16;
  if ( a1 + 16 < a1 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, a2);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, v2, 0LL);
    *PoolWithTag = v5;
    if ( v5 )
    {
      PoolWithTag[1] = v2;
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
