/*
 * XREFs of VerifierExAllocatePoolWithQuotaTag @ 0x140972520
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015A10 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     VfCheckPoolType @ 0x140965B08 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithQuotaTag(unsigned int PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  PVOID result; // rax
  __int64 v7; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (dword_140509E14 & 8) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, Tag);
    if ( (MmVerifierData & 8) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
    }
    v7 = PoolType & 0xFFFFFFF7;
    if ( (PoolType & 8) == 0 )
      v7 = PoolType;
    LODWORD(v7) = v7 | 0x80;
    result = (PVOID)pXdvExAllocatePoolWithTagPriority(
                      v7,
                      NumberOfBytes,
                      Tag,
                      32,
                      retaddr,
                      (__int64)VeAllocatePoolWithTagPriority);
    if ( !result && (PoolType & 8) == 0 )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0);
    return ExAllocatePoolWithQuotaTag((POOL_TYPE)PoolType, NumberOfBytes, Tag);
  }
  return result;
}
