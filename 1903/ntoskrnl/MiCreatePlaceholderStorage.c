/*
 * XREFs of MiCreatePlaceholderStorage @ 0x14089922C
 * Callers:
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiAllocateChildVads @ 0x14089A8C0 (MiAllocateChildVads.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x140059060 (PsReturnProcessNonPagedPoolQuota.c)
 *     MiInsertVadEvent @ 0x1400727FC (MiInsertVadEvent.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x140073230 (PsChargeProcessNonPagedPoolQuota.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiAllocateVad @ 0x140692B84 (MiAllocateVad.c)
 */

__int64 __fastcall MiCreatePlaceholderStorage(__int64 a1)
{
  struct _KPROCESS *Process; // rdi
  __int64 result; // rax
  __int64 *PoolWithTag; // rax
  __int64 *v5; // rbx
  __int64 Vad; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = PsChargeProcessNonPagedPoolQuota((__int64)Process, 0x88uLL);
  if ( (int)result >= 0 )
  {
    PoolWithTag = (__int64 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x73706D4Du);
    v5 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 16) = 128;
      Vad = MiAllocateVad(0LL, 0LL, 2);
      v5[1] = Vad;
      if ( Vad )
      {
        MiInsertVadEvent(a1, v5, 0);
        return 0LL;
      }
      ExFreePoolWithTag(v5, 0);
    }
    PsReturnProcessNonPagedPoolQuota(Process, 136LL);
    return 3221225626LL;
  }
  return result;
}
