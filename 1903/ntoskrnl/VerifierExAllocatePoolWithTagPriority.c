/*
 * XREFs of VerifierExAllocatePoolWithTagPriority @ 0x140972730
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400377B0 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x140965B08 (VfCheckPoolType.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithTagPriority(
        __int32 PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        __int32 Priority)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (dword_140509E14 & 8) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    return (PVOID)pXdvExAllocatePoolWithTagPriority(
                    PoolType | 0x80u,
                    NumberOfBytes,
                    Tag,
                    Priority,
                    retaddr,
                    (__int64)VeAllocatePoolWithTagPriority);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePoolWithTagPriority((POOL_TYPE)PoolType, NumberOfBytes, Tag, (EX_POOL_PRIORITY)Priority);
  }
}
