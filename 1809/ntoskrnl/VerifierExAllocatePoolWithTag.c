/*
 * XREFs of VerifierExAllocatePoolWithTag @ 0x140926630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     VfCheckPoolType @ 0x1409285EC (VfCheckPoolType.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithTag(__int64 PoolType, SIZE_T NumberOfBytes, __int64 Tag)
{
  ULONG v3; // edi
  POOL_TYPE v5; // ebx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = Tag;
  v5 = (int)PoolType;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    return (PVOID)pXdvExAllocatePoolWithTagPriority(
                    v5 | 0x80u,
                    NumberOfBytes,
                    v3,
                    32,
                    retaddr,
                    (__int64)VeAllocatePoolWithTagPriority);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0LL);
    return ExAllocatePoolWithTag(v5, NumberOfBytes, v3);
  }
}
