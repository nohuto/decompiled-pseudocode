/*
 * XREFs of MiGetPoolPages @ 0x1400CB2A0
 * Callers:
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 * Callees:
 *     MiReturnPoolCharges @ 0x140023984 (MiReturnPoolCharges.c)
 *     MiReturnPhysicalPoolPages @ 0x140025380 (MiReturnPhysicalPoolPages.c)
 *     MiInitializePageColorBase @ 0x14002C4C0 (MiInitializePageColorBase.c)
 *     MiGetPage @ 0x140049D50 (MiGetPage.c)
 *     MiSufficientAvailablePages @ 0x140055A50 (MiSufficientAvailablePages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     MiRetryNonPagedAllocation @ 0x1400CB4EC (MiRetryNonPagedAllocation.c)
 *     MiObtainPoolCharges @ 0x140109864 (MiObtainPoolCharges.c)
 *     MiFillPhysicalPages @ 0x14012B050 (MiFillPhysicalPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

unsigned __int64 __fastcall MiGetPoolPages(int a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  _SLIST_HEADER *v6; // rsi
  unsigned int v8; // esi
  __int16 v9; // cx
  __int64 Page; // rax
  __int64 v11; // r9
  signed __int64 v12; // rdx
  signed __int64 v13; // r8
  unsigned __int64 Region; // rdx
  unsigned __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  unsigned __int8 OldIrql; // si
  _QWORD *v20; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int64 v22; // rcx
  volatile signed __int32 *v23; // [rsp+20h] [rbp-68h] BYREF
  __int16 v24; // [rsp+28h] [rbp-60h]
  unsigned __int16 v25; // [rsp+2Ah] [rbp-5Eh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v27[5]; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0LL;
  v6 = &qword_14043B118[25 * a2];
  if ( v6[18].Region )
  {
    KeAcquireInStackQueuedSpinLock(&v6[19].Alignment, &LockHandle);
    Region = v6[18].Region;
    v16 = Region;
    if ( Region > a3 )
      v16 = a3;
    if ( v16 )
    {
      v17 = (_QWORD *)v6[19].Region;
      a3 -= v16;
      v4 = (unsigned __int64)v17;
      v6[18].Region = Region - v16;
      do
      {
        v18 = v17;
        v17 = (_QWORD *)*v17;
        --v16;
      }
      while ( v16 );
      *v18 = 0LL;
      v6[19].Region = (unsigned __int64)v17;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
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
      v20 = (_QWORD *)v4;
      if ( v4 )
      {
        do
        {
          MiFillPhysicalPages((__int64)(v20 + 0xB000000000LL) / 48);
          v20 = (_QWORD *)*v20;
        }
        while ( v20 );
      }
    }
    if ( !a3 )
      return v4;
  }
  if ( (unsigned int)MiObtainPoolCharges(a3, 0LL) )
  {
    MiInitializePageColorBase(0LL, a2 + 1, (__int64)&v23);
    v8 = 782;
    if ( (a1 & 0x40000000) == 0 )
      v8 = 524;
    if ( a3 )
    {
      while ( a3 <= 1
           || (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) == 0
           || (unsigned int)MiSufficientAvailablePages((__int64)&MiSystemPartition, a3 + 160) )
      {
        MiRetryNonPagedAllocation();
        v9 = _InterlockedExchangeAdd(v23, 1u);
        Page = MiGetPage((__int64)&MiSystemPartition, v25 | (unsigned int)(unsigned __int16)(v9 & v24), v8);
        if ( Page == -1 )
        {
          if ( !(unsigned int)MiRetryNonPagedAllocation() )
          {
            ++dword_140439B5C;
            break;
          }
        }
        else
        {
          v11 = 48 * Page - 0x58000000000LL;
          v12 = *(_QWORD *)(v11 + 24);
          v13 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 24), v12 & 0xF0FFFFFFFFFFFFFFuLL, v12);
          if ( v12 != v13 )
          {
            do
            {
              v22 = v13;
              v13 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v11 + 24),
                      v13 & 0xF0FFFFFFFFFFFFFFuLL,
                      v13);
            }
            while ( v22 != v13 );
          }
          *(_QWORD *)v11 = v4;
          --a3;
          v4 = 48 * Page - 0x58000000000LL;
        }
        if ( !a3 )
          return v4;
      }
      memset(v27, 0, sizeof(v27));
      if ( v4 )
      {
        MiReturnPhysicalPoolPages(v4, 0);
        v4 = 0LL;
      }
      v27[0] = a3;
      v27[3] = a3;
      MiReturnPoolCharges(v27, 0);
    }
    return v4;
  }
  if ( v4 )
    MiReturnPhysicalPoolPages(v4, 0);
  return 0LL;
}
