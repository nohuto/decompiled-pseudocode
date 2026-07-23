/*
 * XREFs of MiGetPoolPages @ 0x14007C1AC
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140022C54 (MiInitializePoolCommitPacket.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiRetryNonPagedAllocation @ 0x14007C3F8 (MiRetryNonPagedAllocation.c)
 *     MiSufficientAvailablePages @ 0x14007D460 (MiSufficientAvailablePages.c)
 *     MiInitializePageColorBase @ 0x1400938D8 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x1400AFCC0 (MiGetPage.c)
 *     MiObtainPoolCharges @ 0x1400DE368 (MiObtainPoolCharges.c)
 *     MiReturnPhysicalPoolPages @ 0x140110524 (MiReturnPhysicalPoolPages.c)
 *     MiReturnPoolCharges @ 0x14011072C (MiReturnPoolCharges.c)
 *     MiFillPhysicalPages @ 0x14012C484 (MiFillPhysicalPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

_QWORD *__fastcall MiGetPoolPages(int a1, unsigned int a2, unsigned __int64 a3)
{
  _QWORD *v4; // rsi
  _SLIST_HEADER *v5; // r14
  unsigned __int64 Region; // rdx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  unsigned __int8 OldIrql; // r14
  _QWORD *i; // r14
  signed __int32 v15; // ecx
  __int64 Page; // rax
  __int64 v17; // r9
  signed __int64 v18; // rdx
  signed __int64 v19; // rax
  bool j; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 v22; // rcx
  volatile signed __int32 *v23; // [rsp+20h] [rbp-60h] BYREF
  __int64 v24; // [rsp+28h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-38h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h]
  unsigned __int64 v28; // [rsp+60h] [rbp-20h]
  __int128 v29; // [rsp+68h] [rbp-18h]

  v4 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = &qword_140465758[11 * a2];
  v23 = 0LL;
  v24 = 0LL;
  if ( v5[8].Region )
  {
    KeAcquireInStackQueuedSpinLock(&v5[9].Alignment, &LockHandle);
    Region = v5[8].Region;
    v9 = Region;
    if ( Region > a3 )
      v9 = a3;
    if ( v9 )
    {
      v10 = (_QWORD *)v5[9].Region;
      a3 -= v9;
      v4 = v10;
      v5[8].Region = Region - v9;
      do
      {
        v11 = v10;
        v10 = (_QWORD *)*v10;
        --v9;
      }
      while ( v9 );
      *v11 = 0LL;
      v5[9].Region = (unsigned __int64)v10;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
    if ( (a1 & 0x40000000) != 0 )
    {
      for ( i = v4; i; i = (_QWORD *)*i )
        MiFillPhysicalPages((__int64)(i + 0xB000000000LL) / 48);
    }
    if ( !a3 )
      return v4;
  }
  if ( (unsigned int)MiObtainPoolCharges(a3, 0LL) )
  {
    MiInitializePageColorBase(0LL, a2 + 1, &v23);
    if ( a3 )
    {
      while ( a3 <= 1
           || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
           || (unsigned int)MiSufficientAvailablePages(&MiSystemPartition, a3 + 160) )
      {
        MiRetryNonPagedAllocation();
        v15 = _InterlockedExchangeAdd(v23, 1u);
        Page = MiGetPage(&MiSystemPartition, HIDWORD(v24) | v15 & (unsigned int)v24, (a1 & 0x40000000) != 0 ? 782 : 524);
        if ( Page == -1 )
        {
          if ( !(unsigned int)MiRetryNonPagedAllocation() )
            break;
        }
        else
        {
          v17 = 48 * Page - 0x58000000000LL;
          v18 = *(_QWORD *)(v17 + 24);
          v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), v18 & 0xF0FFFFFFFFFFFFFFuLL, v18);
          for ( j = v18 == v19; !j; j = v22 == v19 )
          {
            v22 = v19;
            v19 = _InterlockedCompareExchange64((volatile signed __int64 *)(v17 + 24), v19 & 0xF0FFFFFFFFFFFFFFuLL, v19);
          }
          *(_QWORD *)v17 = v4;
          --a3;
          v4 = (_QWORD *)v17;
        }
        if ( !a3 )
          break;
      }
      if ( a3 )
      {
        v27 = 0LL;
        v29 = 0LL;
        if ( v4 )
        {
          MiReturnPhysicalPoolPages(v4, 0LL);
          v4 = 0LL;
        }
        v26 = a3;
        v28 = a3;
        MiReturnPoolCharges(&v26, 0LL);
      }
    }
    return v4;
  }
  if ( v4 )
    MiReturnPhysicalPoolPages(v4, 0LL);
  return 0LL;
}
