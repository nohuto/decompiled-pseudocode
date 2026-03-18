/*
 * XREFs of MiMarkBootGuardPage @ 0x14074D994
 * Callers:
 *     MmAllocateIsrStack @ 0x14074D918 (MmAllocateIsrStack.c)
 *     MiInitializeKernelStacks @ 0x1409EDBB0 (MiInitializeKernelStacks.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002A860 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 *     KeFlushSingleTb @ 0x14009F7D4 (KeFlushSingleTb.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockAndDecrementShareCount @ 0x14010DC9C (MiLockAndDecrementShareCount.c)
 *     MiWritePteShadow @ 0x1401223FC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14012245C (MiPteHasShadow.c)
 *     MiPartitionIdToPointer @ 0x1401367DC (MiPartitionIdToPointer.c)
 *     MiReturnPartitionResidentAvailable @ 0x1402D996C (MiReturnPartitionResidentAvailable.c)
 */

void __fastcall MiMarkBootGuardPage(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdi
  ULONG_PTR v2; // rsi
  ULONG_PTR v3; // rbp
  ULONG_PTR *v4; // rbx
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // r8d
  _QWORD *v8; // r9
  int v9; // esi
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( (*(_BYTE *)a1 & 1) == 0 )
    return;
  v1 = (__int64)(a1 << 25) >> 16;
  v10 = MI_READ_PTE_LOCK_FREE(a1);
  v2 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v10) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v3 = 48 * (*(_QWORD *)(v2 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v4 = (ULONG_PTR *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v2 + 40)) >> 8) & 0x3FF);
  if ( MiPteInShadowRange(v5) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v7 = 1;
      if ( HIBYTE(word_140465BEC) )
        goto LABEL_3;
    }
    else if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
    {
      goto LABEL_3;
    }
    if ( (v6 & 1) != 0 )
      v6 |= 0x8000000000000000uLL;
  }
LABEL_3:
  *v8 = v6;
  if ( v7 )
    MiWritePteShadow((__int64)v8);
  KeFlushSingleTb(v1, 0, 1u);
  v9 = MiLockAndDecrementShareCount(v2, 1);
  MiLockAndDecrementShareCount(v3, 0);
  if ( v4 == &MiSystemPartition )
    MiReturnResidentAvailable(1uLL);
  else
    MiReturnPartitionResidentAvailable((__int64)v4, 1uLL);
  if ( v9 != 3 )
    MiReturnCommit((__int64)v4, 1uLL);
  if ( v4 == &MiSystemPartition )
  {
    if ( (unsigned int)MiGetSystemRegionType(v1) == 14 )
      _InterlockedExchangeAdd64(&qword_140466A48, 0xFFFFFFFFFFFFFFFFuLL);
    else
      --qword_140466A30;
  }
}
