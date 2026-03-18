/*
 * XREFs of MiCreateLargePageVad @ 0x140899B54
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiAllocateChildVads @ 0x14089A8C0 (MiAllocateChildVads.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14003FCE0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400538D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiInsertVadEvent @ 0x1400727FC (MiInsertVadEvent.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x140898420 (MiChargeProcessPhysicalPages.c)
 */

__int64 __fastcall MiCreateLargePageVad(ULONG_PTR a1, __int64 a2, void *a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r13
  _KPROCESS *Process; // r12
  PVOID PoolWithTag; // rax
  PVOID v11; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  int v15; // r14d
  int v16; // r15d

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x624C6D4Du);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0x48uLL);
  v13 = *(unsigned int *)(a2 + 52);
  if ( (int)v13 >= 0 )
    goto LABEL_17;
  LODWORD(v13) = v13 & 0x7FFFFFFF;
  v14 = v13 | ((unsigned __int64)*(unsigned __int8 *)(a2 + 34) << 31);
  if ( !(unsigned int)MiChargeProcessPhysicalPages(a1, v14) )
  {
    v15 = -1073741523;
LABEL_15:
    ExFreePoolWithTag(v11, 0);
    return (unsigned int)v15;
  }
  if ( a3 )
  {
    *(_DWORD *)(a2 + 52) &= 0x80000000;
    *(_BYTE *)(a2 + 34) = 0;
LABEL_17:
    if ( a3 )
    {
      ObfReferenceObjectWithTag(a3, 0x746C6644u);
      *((_QWORD *)v11 + 3) = a3;
    }
    goto LABEL_19;
  }
  if ( a4 || Process != (_KPROCESS *)a1 )
  {
    v16 = 0;
  }
  else
  {
    v16 = 1;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  }
  v15 = MiChargeFullProcessCommitment(a1, v14);
  if ( v16 )
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v15 < 0 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1648), -(__int64)v14);
    goto LABEL_15;
  }
LABEL_19:
  *((_DWORD *)v11 + 16) = 16;
  MiInsertVadEvent(a2, (__int64 *)v11, 0);
  return 0LL;
}
