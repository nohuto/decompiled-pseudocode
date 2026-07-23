/*
 * XREFs of VerifierExAllocatePoolWithQuotaTag @ 0x140926500
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x140128F60 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x1409285EC (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x140930D84 (VerifierBugCheckIfAppropriate.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithQuotaTag(__int64 PoolType, SIZE_T NumberOfBytes, __int64 Tag)
{
  ULONG v3; // edi
  POOL_TYPE v5; // ebx
  PVOID result; // rax
  __int64 v7; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = Tag;
  v5 = (int)PoolType;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    if ( (MmVerifierData & 8) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
    }
    v7 = v5 & 0xFFFFFFF7;
    if ( (v5 & 8) == 0 )
      v7 = (unsigned int)v5;
    LODWORD(v7) = v7 | 0x80;
    result = (PVOID)pXdvExAllocatePoolWithTagPriority(
                      v7,
                      NumberOfBytes,
                      v3,
                      32,
                      retaddr,
                      (__int64)VeAllocatePoolWithTagPriority);
    if ( !result && (v5 & 8) == 0 )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0LL);
    return ExAllocatePoolWithQuotaTag(v5, NumberOfBytes, v3);
  }
  return result;
}
