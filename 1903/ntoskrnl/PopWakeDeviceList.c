/*
 * XREFs of PopWakeDeviceList @ 0x14015E824
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FF0 (PoBroadcastSystemState.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     PopIsNotifyForDirectedPowerTransition @ 0x14015EC84 (PopIsNotifyForDirectedPowerTransition.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopNotifyDevice @ 0x1405985F0 (PopNotifyDevice.c)
 *     PopIssueDirectedPowerTransition @ 0x1408AC59C (PopIssueDirectedPowerTransition.c)
 */

int __fastcall PopWakeDeviceList(_QWORD *a1, __int64 a2)
{
  __int64 **v4; // r15
  __int64 **v5; // rax
  int v6; // ecx
  int v7; // edi
  int v8; // r14d
  _QWORD *v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 **v12; // rcx
  unsigned __int8 OldIrql; // r12
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v17[4]; // [rsp+50h] [rbp-1h] BYREF
  _QWORD Object[5]; // [rsp+70h] [rbp+1Fh] BYREF

  memset(v17, 0, sizeof(v17));
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(Object, 0, 0x20uLL);
  v4 = (__int64 **)(a2 + 40);
  v5 = *(__int64 ***)(a2 + 40);
  v6 = 0;
  v7 = 0;
  v8 = *(_DWORD *)a2 - *(_DWORD *)(a2 + 4);
  while ( v5 != v4 )
  {
    v5 = (__int64 **)*v5;
    ++v6;
  }
  HIDWORD(v17[0]) = 0;
  Object[2] = &Object[1];
  Object[1] = &Object[1];
  v17[2] = &v17[1];
  v17[1] = &v17[1];
  a1[4] = Object;
  v9 = v17;
  a1[5] = v17;
  LOBYTE(Object[0]) = 5;
  BYTE2(Object[0]) = 8;
  HIDWORD(Object[0]) = v6;
  LODWORD(Object[3]) = v8;
  LOBYTE(v17[0]) = 5;
  BYTE2(v17[0]) = 8;
  LODWORD(v17[3]) = v8;
  if ( v8 > 0 )
  {
    do
    {
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)qword_140442FD0 + 1, &LockHandle);
      v10 = *v4;
      v11 = **v4;
      if ( (__int64 **)(*v4)[1] != v4
        || *(__int64 **)(v11 + 8) != v10
        || (*v4 = (__int64 *)v11, *(_QWORD *)(v11 + 8) = v4, v12 = (__int64 **)a1[55], *v12 != a1 + 54) )
      {
        __fastfail(3u);
      }
      v10[1] = (__int64)v12;
      *v10 = (__int64)(a1 + 54);
      *v12 = v10;
      a1[55] = v10;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(OldIrql);
      --v8;
      ++v7;
      if ( (unsigned __int8)PopIsNotifyForDirectedPowerTransition(v10) )
        LODWORD(v9) = PopIssueDirectedPowerTransition(a1, v10);
      else
        LODWORD(v9) = PopNotifyDevice(a1, v10);
      if ( (PopSimulate & 0x80000) != 0 )
      {
        while ( v7 > 0 )
        {
          LODWORD(v9) = KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
          --v7;
        }
      }
    }
    while ( v8 > 0 );
    while ( v7 > 0 )
    {
      LODWORD(v9) = KeWaitForSingleObject(v17, Executive, 0, 0, 0LL);
      --v7;
    }
  }
  a1[4] = 0LL;
  a1[5] = 0LL;
  return (int)v9;
}
