/*
 * XREFs of VfAllocateAdapterChannel @ 0x14092AAE0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocateFromNPagedLookasideList @ 0x140018B38 (ExAllocateFromNPagedLookasideList.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     ExInterlockedInsertTailList @ 0x14010BFD0 (ExInterlockedInsertTailList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ViIsActiveChannelWcb @ 0x14030A4A4 (ViIsActiveChannelWcb.c)
 *     ADD_MAP_REGISTERS @ 0x14092A17C (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14092A288 (DECREMENT_ADAPTER_CHANNELS.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x14092A4E0 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14092A580 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x14092A6A0 (VF_ASSERT_IRQL.c)
 *     ViAllocateMapRegisterFile @ 0x14092D790 (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14092E524 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfAllocateAdapterChannel(__int64 a1, __int64 a2, unsigned int a3, void *a4, __int64 a5)
{
  char *v6; // rdi
  __int64 AdapterInformationInternal; // rbx
  char *v11; // rax
  __int64 v13; // r15
  __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // r15d
  KIRQL v17; // bp
  char **v18; // r9
  void **v19; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, _QWORD, void *, __int64); // [rsp+30h] [rbp-38h]

  v6 = 0LL;
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, _QWORD, void *, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v11 = (char *)ExAllocateFromNPagedLookasideList(&ViHalWaitBlockLookaside);
    v6 = v11;
    if ( !v11 )
      return 3221225626LL;
    memset(v11, 0, 0x98uLL);
    *(_QWORD *)v6 = a5;
    *((_QWORD *)v6 + 1) = a4;
    *((_QWORD *)v6 + 7) = AdapterInformationInternal;
    *((_DWORD *)v6 + 12) = a3;
    if ( !*(_BYTE *)(AdapterInformationInternal + 33) && *(_DWORD *)(AdapterInformationInternal + 192) < 3u )
      *((_QWORD *)v6 + 12) = ViAllocateMapRegisterFile(AdapterInformationInternal, a3);
    if ( !*(_QWORD *)(AdapterInformationInternal + 24) )
      *(_QWORD *)(AdapterInformationInternal + 24) = a2;
    a4 = &ViAdapterCallback;
    v13 = (__int64)v6;
    INCREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    ADD_MAP_REGISTERS(AdapterInformationInternal, a3, 0);
    v14 = AdapterInformationInternal + 144;
    ExInterlockedInsertTailList(
      (PLIST_ENTRY)(AdapterInformationInternal + 128),
      (PLIST_ENTRY)(v6 + 72),
      (PKSPIN_LOCK)(AdapterInformationInternal + 144));
  }
  else
  {
    v13 = a5;
    v14 = 144LL;
  }
  v15 = RealDmaOperation(a1, a2, a3, a4, v13);
  v16 = v15;
  if ( AdapterInformationInternal && v15 && ViIsActiveChannelWcb(AdapterInformationInternal, (__int64)v6) )
  {
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v14);
    v18 = (char **)*((_QWORD *)v6 + 9);
    v19 = (void **)*((_QWORD *)v6 + 10);
    if ( v18[1] != v6 + 72 || *v19 != v6 + 72 )
      __fastfail(3u);
    *v19 = v18;
    v18[1] = (char *)v19;
    KxReleaseSpinLock((PKSPIN_LOCK)v14);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v17);
    DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, a3);
    if ( *((_QWORD *)v6 + 12) )
      ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v6);
  }
  return v16;
}
