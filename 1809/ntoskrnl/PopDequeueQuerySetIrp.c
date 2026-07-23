/*
 * XREFs of PopDequeueQuerySetIrp @ 0x140171184
 * Callers:
 *     PopRequestCompletion @ 0x140170F50 (PopRequestCompletion.c)
 *     PopSystemIrpCompletion @ 0x14056D720 (PopSystemIrpCompletion.c)
 * Callees:
 *     PopDeepSleepClearDisengageReason @ 0x140004E80 (PopDeepSleepClearDisengageReason.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     IofCallDriver @ 0x1400B8D30 (IofCallDriver.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     PopDiagTraceIrpFinish @ 0x140171368 (PopDiagTraceIrpFinish.c)
 *     PopEnableIrpWatchdog @ 0x140172D4C (PopEnableIrpWatchdog.c)
 *     PopDiagTraceIrpStart @ 0x140172E20 (PopDiagTraceIrpStart.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIrpWatchdogBugcheck @ 0x1402D375C (PopIrpWatchdogBugcheck.c)
 */

__int64 __fastcall PopDequeueQuerySetIrp(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  unsigned __int8 OldIrql; // bl
  __int64 *v10; // rdi
  __int64 result; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rdx
  __int64 ***v14; // rcx
  _QWORD *v15; // rax
  __int64 *v16; // rax
  IRP *v17; // rdi
  struct _DEVICE_OBJECT *DeviceObject; // rbx
  __int64 *i; // rdx
  __int64 *v20; // r9
  __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 *v24; // rax
  __int64 ***v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 *v29; // [rsp+20h] [rbp-40h] BYREF
  __int64 **v30; // [rsp+28h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v32; // [rsp+48h] [rbp-18h] BYREF

  PopDiagTraceIrpFinish(a1);
  v2 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  if ( *(_BYTE *)(v2 + 196) && !KeCancelTimer((PKTIMER)(v2 + 56)) )
  {
    KeAcquireInStackQueuedSpinLock(&PopIrpLock, &v32);
    PopIrpWatchdogBugcheck(v2);
  }
  v30 = &v29;
  v29 = (__int64 *)&v29;
  v3 = *(_QWORD *)(a1 + 72LL * *(char *)(a1 + 66) + 200);
  v4 = *(_QWORD *)(v3 + 24);
  if ( v4 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = 248LL;
  if ( *(_DWORD *)(v3 + 188) != 1 )
    v6 = 264LL;
  v7 = (_QWORD *)(v5 + v6);
  KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
  *v7 = 0LL;
  if ( a1 != PopInrushIrp )
    goto LABEL_8;
  PopInrushIrp = 0LL;
  for ( i = (__int64 *)PopInrushIrpList; ; i = (__int64 *)*i )
  {
    if ( i == &PopInrushIrpList )
      goto LABEL_8;
    v20 = i - 21;
    v21 = *(_QWORD *)(i[9 * *((char *)i - 102) + 4] + 24);
    v22 = v21 ? *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL) : 0LL;
    if ( !*(_QWORD *)(v22 + 248) && *(__int64 **)(v22 + 256) == v20 )
      break;
  }
  v23 = *i;
  v24 = (__int64 *)i[1];
  if ( *(__int64 **)(*i + 8) != i )
    goto LABEL_24;
  if ( (__int64 *)*v24 != i )
    goto LABEL_24;
  *v24 = v23;
  *(_QWORD *)(v23 + 8) = v24;
  v25 = (__int64 ***)(v20 + 15);
  *(_QWORD *)(v22 + 248) = v20;
  *(_QWORD *)(v22 + 256) = v20[15];
  v26 = v30;
  PopInrushIrp = (__int64)(i - 21);
  if ( *v30 != (__int64 *)&v29 )
    goto LABEL_24;
  v20[16] = (__int64)v30;
  *v25 = &v29;
  *v26 = v25;
  v30 = (__int64 **)(v20 + 15);
  if ( !*v7 )
  {
LABEL_8:
    v8 = (_QWORD *)v7[1];
    if ( !v8 )
      goto LABEL_9;
    v12 = v8 + 21;
    v13 = (_QWORD *)v8[21];
    if ( v13 != v8 + 21 )
    {
      if ( PopInrushIrp )
      {
        v8 = 0LL;
      }
      else
      {
        v27 = (_QWORD *)v8[22];
        PopInrushIrp = v7[1];
        if ( (_QWORD *)v13[1] != v12 || (_QWORD *)*v27 != v12 )
          goto LABEL_24;
        *v27 = v13;
        v13[1] = v27;
      }
    }
    if ( !v8 )
      goto LABEL_9;
    *v7 = v8;
    v14 = (__int64 ***)(v8 + 15);
    v7[1] = v8[15];
    v15 = v30;
    if ( *v30 == (__int64 *)&v29 )
    {
      v14[1] = v30;
      *v14 = &v29;
      *v15 = v14;
      v30 = (__int64 **)v14;
      goto LABEL_9;
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_9:
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(OldIrql);
  while ( 1 )
  {
    v10 = v29;
    result = (__int64)&v29;
    if ( v29 == (__int64 *)&v29 )
      break;
    v16 = (__int64 *)*v29;
    if ( (__int64 **)v29[1] != &v29 || (__int64 *)v16[1] != v29 )
      goto LABEL_24;
    v29 = (__int64 *)*v29;
    v16[1] = (__int64)&v29;
    v17 = (IRP *)(v10 - 15);
    DeviceObject = v17->Tail.Overlay.CurrentStackLocation[-1].DeviceObject;
    PopDiagTraceIrpStart(DeviceObject, v17);
    PopEnableIrpWatchdog(v17);
    IofCallDriver(DeviceObject, v17);
  }
  if ( *(_BYTE *)(v3 + 184) == 2 && *(_DWORD *)(v3 + 188) == 1 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(&PopPendingSetPowerDeviceIrps, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return PopDeepSleepClearDisengageReason(2u);
  }
  return result;
}
