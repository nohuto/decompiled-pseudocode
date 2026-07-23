/*
 * XREFs of MiCreateLargePageVad @ 0x14085E288
 * Callers:
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiAllocateChildVads @ 0x14085EC58 (MiAllocateChildVads.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x1400531B0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x140075450 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiInsertVadEvent @ 0x140087B20 (MiInsertVadEvent.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiChargeFullProcessCommitment @ 0x1405E1510 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x14085CAF0 (MiChargeProcessPhysicalPages.c)
 */

__int64 __fastcall MiCreateLargePageVad(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 v8; // rdi
  _KPROCESS *Process; // r12
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // r14
  __int64 v13; // r9
  int v14; // ebp

  v3 = *(unsigned int *)(a2 + 52);
  CurrentThread = KeGetCurrentThread();
  LODWORD(v3) = v3 & 0x7FFFFFFF;
  v8 = ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31) | v3;
  Process = CurrentThread->ApcState.Process;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x624C6D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  if ( !(unsigned int)MiChargeProcessPhysicalPages(a1, v8) )
  {
    v14 = -1073741523;
LABEL_12:
    ExFreePoolWithTag(v11, 0);
    return (unsigned int)v14;
  }
  if ( a3 )
  {
    *(_DWORD *)(a2 + 52) &= 0x80000000;
    *(_BYTE *)(a2 + 34) = 0;
  }
  else
  {
    if ( Process == (_KPROCESS *)a1 )
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v14 = MiChargeFullProcessCommitment(a1, v8);
    if ( Process == (_KPROCESS *)a1 )
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    if ( v14 < 0 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1600), -(__int64)v8);
      goto LABEL_12;
    }
  }
  v11[16] = 16;
  MiInsertVadEvent(a2, v11, 0LL, v13);
  return 0LL;
}
