/*
 * XREFs of VerifierExAllocatePoolWithQuota @ 0x1409253D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x140128E90 (RtlRaiseStatus.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithQuota @ 0x14031A460 (ExAllocatePoolWithQuota.c)
 *     VfCheckPoolType @ 0x1409275EC (VfCheckPoolType.c)
 *     VerifierBugCheckIfAppropriate @ 0x14092FD84 (VerifierBugCheckIfAppropriate.c)
 */

PVOID __fastcall VerifierExAllocatePoolWithQuota(__int64 PoolType, SIZE_T NumberOfBytes)
{
  POOL_TYPE v3; // ebx
  PVOID result; // rax
  __int64 v5; // rcx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = (int)PoolType;
  if ( (MmVerifierData & 0x400000) == 0 || (MmVerifierData & 1) != 0 )
  {
    VfCheckPoolType(PoolType, retaddr, 0LL);
    ++dword_14041A99C;
    if ( (MmVerifierData & 8) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL);
      if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL);
    }
    v5 = v3 & 0xFFFFFFF7;
    if ( (v3 & 8) == 0 )
      v5 = (unsigned int)v3;
    LODWORD(v5) = v5 | 0x80;
    result = (PVOID)pXdvExAllocatePoolWithTagPriority(
                      v5,
                      NumberOfBytes,
                      1885434455,
                      32,
                      retaddr,
                      (__int64)VeAllocatePoolWithTagPriority);
    if ( !result && (v3 & 8) == 0 )
      RtlRaiseStatus(-1073741670);
  }
  else
  {
    if ( (MmVerifierData & 0x2000000) != 0 )
      VfCheckPoolType(PoolType, retaddr, 0LL);
    return ExAllocatePoolWithQuota(v3, NumberOfBytes);
  }
  return result;
}
