/*
 * XREFs of VfPutScatterGatherList @ 0x14092D170
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x14092A3B8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14092A580 (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x14092A6A0 (VF_ASSERT_IRQL.c)
 *     ViFlushDoubleBuffer @ 0x14092E374 (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegisterFile @ 0x14092E524 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 */

void __fastcall VfPutScatterGatherList(__int64 a1, __int64 a2, char a3)
{
  __int64 AdapterInformationInternal; // rsi
  __int64 v7; // r8
  _QWORD *v8; // rdi
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // bp
  _QWORD *v12; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  int v14; // edi
  __int64 v15; // r8
  _QWORD *v16; // rdx
  __int64 v17; // r8
  struct _KPRCB *v18; // rcx
  __int64 v19; // rax
  void (__fastcall *RealDmaOperation)(__int64, __int64, __int64); // [rsp+78h] [rbp+20h]

  RealDmaOperation = (void (__fastcall *)(__int64, __int64, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v8 = (_QWORD *)(AdapterInformationInternal + 56), (_QWORD *)*v8 == v8) )
  {
LABEL_13:
    LOBYTE(v7) = a3;
    RealDmaOperation(a1, a2, v7);
    if ( AdapterInformationInternal )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
    v10 = (_QWORD *)*v8;
    v11 = v9;
    while ( 1 )
    {
      v12 = v10 - 9;
      if ( v8 == v12 + 9 )
      {
        KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72));
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v11);
        goto LABEL_13;
      }
      if ( v12[8] == a2 )
        break;
      v10 = (_QWORD *)v12[9];
    }
    v14 = *(_DWORD *)a2;
    v15 = v12[9];
    v16 = (_QWORD *)v12[10];
    if ( *(_QWORD **)(v15 + 8) != v12 + 9 || (_QWORD *)*v16 != v12 + 9 )
      __fastfail(3u);
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 72));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v18 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v18);
    }
    __writecr8(v11);
    v19 = v12[12];
    if ( *(_QWORD *)(a2 + 8) == -559026163LL && v19 )
      *(_QWORD *)(a2 + 8) = *(_QWORD *)(v19 + 48);
    LOBYTE(v17) = a3;
    RealDmaOperation(a1, a2, v17);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v14);
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    ViFlushDoubleBuffer(v12[12], a3);
    ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v12);
  }
}
