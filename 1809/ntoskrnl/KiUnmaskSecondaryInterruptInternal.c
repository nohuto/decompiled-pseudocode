/*
 * XREFs of KiUnmaskSecondaryInterruptInternal @ 0x140293CE8
 * Callers:
 *     KeUnmaskInterrupt @ 0x140158BA0 (KeUnmaskInterrupt.c)
 *     KeConnectInterrupt @ 0x14016DC40 (KeConnectInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14029355C (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiUnmaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v8; // rax
  struct _KPRCB *v9; // rcx
  __int64 *v10; // rdx
  __int64 *v11; // rax
  int v12; // ebx
  struct _KPRCB *v13; // rcx
  unsigned __int8 v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)(a1 - 256);
  v4 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48 * v3);
  v5 = 0;
  KiAcquireSecondaryInterruptConnectLock(v4, &v15);
  v6 = KiGlobalSecondaryIDT + 48 * v3;
  if ( !*(_BYTE *)(v6 + 32) )
  {
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    v5 = 296;
LABEL_14:
    __writecr8(v15);
    return v5;
  }
  v8 = *(_QWORD *)(v6 + 40);
  if ( !v8 )
  {
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
    {
      v9 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v9);
    }
    goto LABEL_14;
  }
  v10 = (__int64 *)(v8 + 8);
  v11 = (__int64 *)(v8 + 8);
  while ( 1 )
  {
    v12 = -(v11[12] & 1);
    if ( (v11[12] & 1) == 0 )
      break;
    v11 = (__int64 *)*v11;
    if ( v11 == v10 )
      goto LABEL_20;
  }
  *(_BYTE *)(v6 + 32) = 0;
LABEL_20:
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v15 < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v13);
  }
  __writecr8(v15);
  if ( !v12 )
    return ((unsigned int (__fastcall *)(_QWORD, _QWORD))off_1403FF4B8[0])(a2, 0LL);
  return v5;
}
