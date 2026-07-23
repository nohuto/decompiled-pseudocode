/*
 * XREFs of CcMapDataForOverwrite @ 0x14011A7D4
 * Callers:
 *     CcPreparePinWrite @ 0x1406A1050 (CcPreparePinWrite.c)
 * Callees:
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 *     MmCheckCachedPageStates @ 0x1400B01F0 (MmCheckCachedPageStates.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CcMapDataCommon @ 0x1406A1224 (CcMapDataCommon.c)
 */

__int64 __fastcall CcMapDataForOverwrite(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4, unsigned __int64 *a5)
{
  int v5; // r15d
  int v6; // r12d
  int v7; // r13d
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // r14d
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned int v14; // ebx
  int v15; // eax
  __int64 result; // rax
  __int64 Partition; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v20; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+10h] BYREF
  char v23; // [rsp+B0h] [rbp+18h] BYREF
  _QWORD *v24; // [rsp+B8h] [rbp+20h]

  v24 = a4;
  v5 = a3;
  v6 = (int)a2;
  v7 = a1;
  v20 = ((unsigned int)a3 + 4095LL + (unsigned __int64)(*a2 & 0xFFF)) >> 12;
  CurrentThread = KeGetCurrentThread();
  v9 = *(_QWORD *)(a1 + 40);
  v10 = *(_QWORD *)(v9 + 8);
  if ( (*(_DWORD *)(v10 + 152) & 0x20000) == 0 )
  {
    Partition = CcGetPartition(*(_QWORD **)(v9 + 8), (__int64)a2, a3);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    *(_DWORD *)(v10 + 152) |= 0x20000u;
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(OldIrql);
  }
  v11 = BYTE4(CurrentThread[1].Queue) + 4 * LODWORD(CurrentThread[1].WaitListEntry.Flink);
  v12 = a5;
  CcMapDataCommon(v7, v6, v5, 1, (__int64)&v22, (__int64)a5);
  v13 = *v12;
  v14 = v20;
  while ( v14 )
  {
    v23 = 1;
    BYTE4(CurrentThread[1].Queue) = 1;
    if ( --v14 > LODWORD(CurrentThread[1].WaitListEntry.Flink) )
    {
      v15 = v14;
      if ( v14 > 0xF )
        v15 = 15;
      LODWORD(CurrentThread[1].WaitListEntry.Flink) = v15;
    }
    MmCheckCachedPageStates(v13, 1LL, 5, &v23);
    if ( !v23 )
      MmCheckCachedPageStates(v13, 1LL, 4, 0LL);
    v13 += 4096LL;
  }
  BYTE4(CurrentThread[1].Queue) = v11 & 3;
  LODWORD(CurrentThread[1].WaitListEntry.Flink) = v11 >> 2;
  __addgsdword(0x5E50u, HIDWORD(KeGetCurrentThread()[1].Timer.Header.WaitListHead.Blink));
  result = v22;
  *v24 = v22;
  return result;
}
