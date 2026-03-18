/*
 * XREFs of VerifierExAllocatePoolWithQuota @ 0x1409723E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140015E00 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithQuota @ 0x140338C30 (ExAllocatePoolWithQuota.c)
 *     VfCheckPoolType @ 0x140965B08 (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14096E604 (VerifierBugCheckIfAppropriate.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithQuota(unsigned int PoolType, SIZE_T NumberOfBytes)
{
  PVOID result; // rax
  __int64 v5; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x400000) == 0 || (dword_140509B54 & 8) != 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, 0);
    ++dword_14044633C;
    if ( (MmVerifierData & 8) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
    }
    v5 = PoolType & 0xFFFFFFF7;
    if ( (PoolType & 8) == 0 )
      v5 = PoolType;
    LODWORD(v5) = v5 | 0x80;
    result = (PVOID)pXdvExAllocatePoolWithTagPriority(
                      v5,
                      NumberOfBytes,
                      1885434455,
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
    return ExAllocatePoolWithQuota((POOL_TYPE)PoolType, NumberOfBytes);
  }
  return result;
}
