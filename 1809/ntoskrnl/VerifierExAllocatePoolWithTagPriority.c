/*
 * XREFs of VerifierExAllocatePoolWithTagPriority @ 0x1409266D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1400FD8B0 (ExAllocatePoolWithTagPriority.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1409285EC (VfCheckPoolType.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithTagPriority(
        __int64 PoolType,
        SIZE_T NumberOfBytes,
        __int64 Tag,
        __int32 Priority)
{
  ULONG v5; // edi
  POOL_TYPE v7; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v5 = Tag;
  v7 = (int)PoolType;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    return (PVOID)pXdvExAllocatePoolWithTagPriority(
                    v7 | 0x80u,
                    NumberOfBytes,
                    v5,
                    Priority,
                    retaddr,
                    (__int64)VeAllocatePoolWithTagPriority);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0LL);
    return ExAllocatePoolWithTagPriority(v7, NumberOfBytes, v5, (EX_POOL_PRIORITY)Priority);
  }
}
