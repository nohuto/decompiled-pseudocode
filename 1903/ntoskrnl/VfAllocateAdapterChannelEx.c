/*
 * XREFs of VfAllocateAdapterChannelEx @ 0x140968390
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140084098 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x14008D57C (ExAllocateFromNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     ExInterlockedInsertTailList @ 0x14010A7C0 (ExInterlockedInsertTailList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ViIsActiveChannelWcb @ 0x140327F24 (ViIsActiveChannelWcb.c)
 *     ADD_MAP_REGISTERS @ 0x1409677FC (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140967908 (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140967B60 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140967C00 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140967D20 (VF_ASSERT_IRQL.c)
 *     ViGetAdapterInformationInternal @ 0x14096C0D8 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14096C3A4 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateAdapterChannelEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        void *a6,
        __int64 a7,
        _QWORD *a8)
{
  void *v8; // rsi
  int v12; // r12d
  __int64 v13; // rbx
  __int64 AdapterInformationInternal; // rdi
  PVOID v15; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *); // rax
  unsigned int v20; // ebp
  KIRQL v21; // si
  __int64 v22; // r9
  _QWORD *v23; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  v8 = a6;
  v12 = a1;
  v13 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v15 = ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v13 = (__int64)v15;
    if ( !v15 )
      return 3221225626LL;
    memset(v15, 0, 0x98uLL);
    v17 = a7;
    *(_QWORD *)v13 = a7;
    *(_QWORD *)(v13 + 8) = a6;
    *(_QWORD *)(v13 + 56) = AdapterInformationInternal;
    *(_DWORD *)(v13 + 48) = a4;
    *(_QWORD *)(v13 + 40) = a3;
    if ( !*(_QWORD *)(AdapterInformationInternal + 24) )
      *(_QWORD *)(AdapterInformationInternal + 24) = a2;
    if ( a6 )
      v17 = v13;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a4, 1);
    v18 = AdapterInformationInternal + 144;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 128),
      (PLIST_ENTRY)(v13 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 144));
    v8 = &ViAdapterCallback;
    if ( !a6 )
      v8 = 0LL;
  }
  else
  {
    v17 = a7;
    v18 = 144LL;
  }
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, void *, __int64, _QWORD *))ViGetRealDmaOperation(v12);
  v20 = RealDmaOperation(a1, a2, a3, a4, a5, v8, v17, a8);
  if ( AdapterInformationInternal && ViIsActiveChannelWcb(AdapterInformationInternal, v13) )
  {
    if ( v20 )
    {
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v18);
      v22 = *(_QWORD *)(v13 + 72);
      v23 = *(_QWORD **)(v13 + 80);
      if ( *(_QWORD *)(v22 + 8) != v13 + 72 || *v23 != v13 + 72 )
        __fastfail(3u);
      *v23 = v22;
      *(_QWORD *)(v22 + 8) = v23;
      KxReleaseSpinLock((PKSPIN_LOCK)v18);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v21 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v21);
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a4);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v13);
    }
    else if ( !v8 )
    {
      *(_DWORD *)(v13 + 52) = 1;
      *(_QWORD *)(v13 + 88) = *a8;
    }
  }
  return v20;
}
