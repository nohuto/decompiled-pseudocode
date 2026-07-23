/*
 * XREFs of VfIrpLogRecordEvent @ 0x1409422B0
 * Callers:
 *     IovpCallDriver1 @ 0x14092FC8C (IovpCallDriver1.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409365A0 (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x14093697C (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x1409428BC (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  KIRQL v6; // di
  __int64 Pointer; // rax
  _DWORD *v8; // rbp
  unsigned int *v9; // rbx
  _QWORD *v10; // rcx
  unsigned int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v18; // [rsp+28h] [rbp-60h] BYREF
  _OWORD v19[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v20; // [rsp+50h] [rbp-38h]

  if ( (a1 & 0x400) == 0 )
    return;
  if ( ViIrpLogDdiLock != 2 && !_InterlockedCompareExchange(&ViIrpLogDdiLock, 1, 0) )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x77496656u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))ViIrpLogExposeWmiCallback;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
    }
    else
    {
      ViIrpLogDdiLock = 0;
    }
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  if ( !(unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
  {
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v18);
    v8 = v18;
    v9 = (unsigned int *)Pointer;
    if ( !*v18 )
    {
      if ( Pointer )
      {
LABEL_14:
        v14 = v9[6];
        if ( (v14 & 6) == 0 )
        {
          v15 = v14 == 1 ? v9[8] : v9[9];
          if ( (unsigned int)VfMajorBuildIrpLogEntry(a3, v15, (__int64)&v9[10 * v9[9] + 10], (__int64)v19) )
          {
            v16 = 5 * (v9[9] + 1LL);
            *(_OWORD *)&v9[2 * v16] = v19[0];
            *(_OWORD *)&v9[2 * v16 + 4] = v19[1];
            *(_QWORD *)&v9[2 * v16 + 8] = v20;
            if ( ++v9[9] == v9[8] )
            {
              v9[6] |= 1u;
              v9[9] = 0;
            }
          }
        }
        goto LABEL_21;
      }
      v9 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x348uLL, 0x65496656u);
      if ( v9 )
      {
        ObfReferenceObject(a2);
        v9[6] = 0;
        v10 = v8 + 2;
        *(_QWORD *)v9 = a2;
        v11 = a2[18];
        v9[9] = 0;
        v9[7] = v11;
        v12 = v9 + 2;
        v9[8] = 20;
        v13 = *((_QWORD *)v8 + 1);
        if ( *(_DWORD **)(v13 + 8) != v8 + 2 )
          __fastfail(3u);
        *v12 = v13;
        *((_QWORD *)v9 + 2) = v10;
        *(_QWORD *)(v13 + 8) = v12;
        *v10 = v12;
        goto LABEL_14;
      }
    }
  }
LABEL_21:
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  __writecr8(v6);
}
