/*
 * XREFs of KiIntSteerDisable @ 0x14016D520
 * Callers:
 *     KeDisconnectInterrupt @ 0x14016D3C0 (KeDisconnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x14012F790 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerLogState @ 0x14016E32C (KiIntSteerLogState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiIntSteerDisable(__int64 *a1, unsigned int a2)
{
  __int64 *v2; // rdi
  _QWORD *v4; // rbx
  KIRQL v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = a1;
  v4 = *(_QWORD **)(*a1 + 168);
  if ( !v4 )
    return 0LL;
  KiIntSteerLogState(*(_QWORD *)(*a1 + 168), &PPM_ETW_INTERRUPT_STEERING_STATE_DISCONNECT);
  v5 = KeAcquireSpinLockRaiseToDpc(&KiIntTrackSpinlock);
  if ( a2 )
  {
    v6 = a2;
    do
    {
      v7 = *v2;
      _InterlockedAnd((volatile signed __int32 *)(*v2 + 104), 0xFFFFFFFB);
      *(_QWORD *)(v7 + 168) = 0LL;
      ++v2;
      --v6;
    }
    while ( v6 );
  }
  v8 = *v4;
  v9 = (__int64 *)v4[2];
  v10 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v10 != v4 )
    goto LABEL_14;
  *v10 = v8;
  *(_QWORD *)(v8 + 8) = v10;
  ExFreePoolWithTag(v4, 0x6B725449u);
  if ( (__int64 *)v9[2] != v9 + 2 )
    goto LABEL_11;
  --KiIntTrackRootCount;
  v11 = *v9;
  v12 = (__int64 *)v9[1];
  if ( *(__int64 **)(*v9 + 8) != v9 || (__int64 *)*v12 != v9 )
LABEL_14:
    __fastfail(3u);
  *v12 = v11;
  *(_QWORD *)(v11 + 8) = v12;
  KiIntSteerUpdateDeviceInterruptMask((__int64)(v9 + 20), 1, v11);
  ExFreePoolWithTag(v9, 0x6B725449u);
LABEL_11:
  KxReleaseSpinLock(&KiIntTrackSpinlock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  return 0LL;
}
