/*
 * XREFs of VfIrpLogRecordEvent @ 0x140980B50
 * Callers:
 *     IovpCallDriver1 @ 0x14096D504 (IovpCallDriver1.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140974BCC (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x140974FA8 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x14098116C (ViIrpLogDatabaseFindPointer.c)
 */

void *__fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  void *result; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  KIRQL v8; // di
  __int64 Pointer; // rax
  _DWORD *v10; // rbp
  unsigned int *v11; // rbx
  _QWORD *v12; // rcx
  unsigned int v13; // eax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v20; // [rsp+28h] [rbp-60h] BYREF
  _BYTE v21[40]; // [rsp+30h] [rbp-58h] BYREF

  result = memset(v21, 0, sizeof(v21));
  if ( (a1 & 0x400) == 0 )
    return result;
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
  v8 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  if ( !(unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
  {
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v20);
    v10 = v20;
    v11 = (unsigned int *)Pointer;
    if ( !*v20 )
    {
      if ( Pointer )
      {
LABEL_14:
        v16 = v11[6];
        if ( (v16 & 6) == 0 )
        {
          v17 = v16 == 1 ? v11[8] : v11[9];
          if ( (unsigned int)VfMajorBuildIrpLogEntry(a3, v17, (__int64)&v11[10 * v11[9] + 10], (__int64)v21) )
          {
            v18 = 5 * (v11[9] + 1LL);
            *(_OWORD *)&v11[2 * v18] = *(_OWORD *)v21;
            *(_OWORD *)&v11[2 * v18 + 4] = *(_OWORD *)&v21[16];
            *(_QWORD *)&v11[2 * v18 + 8] = *(_QWORD *)&v21[32];
            if ( ++v11[9] == v11[8] )
            {
              v11[6] |= 1u;
              v11[9] = 0;
            }
          }
        }
        goto LABEL_21;
      }
      v11 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x348uLL, 0x65496656u);
      if ( v11 )
      {
        ObfReferenceObject(a2);
        v11[6] = 0;
        v12 = v10 + 2;
        *(_QWORD *)v11 = a2;
        v13 = a2[18];
        v11[9] = 0;
        v11[7] = v13;
        v14 = v11 + 2;
        v11[8] = 20;
        v15 = *((_QWORD *)v10 + 1);
        if ( *(_DWORD **)(v15 + 8) != v10 + 2 )
          __fastfail(3u);
        *v14 = v15;
        *((_QWORD *)v11 + 2) = v12;
        *(_QWORD *)(v15 + 8) = v14;
        *v12 = v14;
        goto LABEL_14;
      }
    }
  }
LABEL_21:
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = (void *)v8;
  __writecr8(v8);
  return result;
}
