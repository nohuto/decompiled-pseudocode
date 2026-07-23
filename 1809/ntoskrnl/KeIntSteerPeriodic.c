/*
 * XREFs of KeIntSteerPeriodic @ 0x1400626A0
 * Callers:
 *     PpmParkSteerInterrupts @ 0x140063560 (PpmParkSteerInterrupts.c)
 * Callees:
 *     KiIntSteerEtwEventEnabled @ 0x14005B8E0 (KiIntSteerEtwEventEnabled.c)
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiIntSteerDistributeInterrupts @ 0x140063190 (KiIntSteerDistributeInterrupts.c)
 *     KiIntSteerCalculateDistribution @ 0x1400632E0 (KiIntSteerCalculateDistribution.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 *     KiIntSteerLogState @ 0x14016E32C (KiIntSteerLogState.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeIntSteerPeriodic(int *a1, unsigned int a2)
{
  unsigned __int8 CurrentIrql; // si
  unsigned __int16 v5; // dx
  __int64 v6; // rax
  __int64 v7; // r11
  ULONG_PTR *i; // rbx
  ULONG_PTR *j; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  int v12; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-61h] BYREF
  __int16 v14; // [rsp+58h] [rbp-51h]
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-49h] BYREF
  __int64 v16; // [rsp+70h] [rbp-39h]
  __int64 v17; // [rsp+78h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+80h] [rbp-29h] BYREF
  int *v19; // [rsp+90h] [rbp-19h]
  __int64 v20; // [rsp+98h] [rbp-11h]
  int *v21; // [rsp+A0h] [rbp-9h]
  __int64 v22; // [rsp+A8h] [rbp-1h]
  __int64 v23; // [rsp+B0h] [rbp+7h]
  __int64 v24; // [rsp+B8h] [rbp+Fh]
  __int64 *v25; // [rsp+C0h] [rbp+17h]
  int v26; // [rsp+C8h] [rbp+1Fh]
  int v27; // [rsp+CCh] [rbp+23h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock(&KiIntTrackSpinlock);
  KiIntSteerCalculateDistribution(a1, a2);
  KiIntSteerMask[0] = *a1;
  v5 = 0;
  for ( dword_14041C2C4 = 0; v5 < *(_WORD *)a1; *(_QWORD *)&KiIntSteerMask[2 * v6 + 2] = *(_QWORD *)&a1[2 * v6 + 2] )
    v6 = v5++;
  KiIntSteerMaskCount = a2;
  if ( KiIntSteerEtwEventEnabled((__int64)&PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE) )
  {
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&KiIntSteerLoadPercent;
    v20 = 4LL;
    v19 = &KiIntTrackRootCount;
    v22 = 4LL;
    v21 = &KiIntSteerMaskCount;
    v23 = v7;
    v24 = 2LL;
    v27 = 0;
    v25 = &qword_14041C2C8;
    v26 = 160 * LOWORD(KiIntSteerMask[0]);
    EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_MASK_CHANGE, 0LL, 0, 0LL, 0LL, 5u, &UserData);
  }
  if ( KiIntSteerEtwEventEnabled((__int64)&PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE) )
  {
    v13[1] = qword_1405426A8;
    v13[0] = KeActiveProcessors;
    v14 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v12, v13) )
    {
      v15.Ptr = (ULONGLONG)&v12;
      *(_QWORD *)&v15.Size = 4LL;
      v17 = 4LL;
      v16 = KiProcessorBlock[v12] + 11672;
      EtwWriteEx(KiIntSteerEtwHandle, &PPM_ETW_INTERRUPT_STEERING_PROC_CHANGE, 0LL, 0, 0LL, 0LL, 2u, &v15);
    }
  }
  if ( KiIntSteerEtwEventEnabled((__int64)&PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET) )
  {
    for ( i = (ULONG_PTR *)KiIntTrackRootList; i != &KiIntTrackRootList; i = (ULONG_PTR *)*i )
    {
      if ( i[22] != i[20] )
      {
        for ( j = (ULONG_PTR *)i[2]; j != i + 2; j = (ULONG_PTR *)*j )
          KiIntSteerLogState(j, &PPM_ETW_INTERRUPT_STEERING_STATE_RETARGET);
      }
    }
  }
  KiIntSteerDistributeInterrupts();
  KxReleaseSpinLock(&KiIntTrackSpinlock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return 0LL;
}
