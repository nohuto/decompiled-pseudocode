/*
 * XREFs of KiMaskSecondaryInterruptInternal @ 0x140293A70
 * Callers:
 *     KeMaskInterrupt @ 0x14016D648 (KeMaskInterrupt.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KiAcquireSecondaryInterruptConnectLock @ 0x14029355C (KiAcquireSecondaryInterruptConnectLock.c)
 */

__int64 __fastcall KiMaskSecondaryInterruptInternal(int a1, unsigned int a2)
{
  __int64 v3; // rbx
  KSPIN_LOCK *v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // rax
  __int64 *v10; // rcx
  struct _KPRCB *v11; // rcx
  unsigned __int8 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)(a1 - 256);
  v4 = (KSPIN_LOCK *)(KiGlobalSecondaryIDT + 48 * v3);
  v5 = 0;
  KiAcquireSecondaryInterruptConnectLock(v4, &v12);
  v6 = KiGlobalSecondaryIDT + 48 * v3;
  if ( *(_BYTE *)(v6 + 32) || (v9 = *(_QWORD *)(v6 + 40)) == 0 )
  {
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v12);
    return 0LL;
  }
  else
  {
    v10 = (__int64 *)(v9 + 8);
    while ( (v10[12] & 1) != 0 )
    {
      v10 = (__int64 *)*v10;
      if ( v10 == (__int64 *)(v9 + 8) )
      {
        *(_BYTE *)(v6 + 32) = 1;
        goto LABEL_14;
      }
    }
    v5 = 296;
LABEL_14:
    KxReleaseSpinLock(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v12 < 2u )
    {
      v11 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v11->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)v11);
    }
    __writecr8(v12);
    if ( !v5 )
      ((void (__fastcall *)(_QWORD, _QWORD))off_1403FF4B0[0])(a2, 0LL);
    return v5;
  }
}
