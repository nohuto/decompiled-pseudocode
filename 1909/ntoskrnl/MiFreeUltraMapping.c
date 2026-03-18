/*
 * XREFs of MiFreeUltraMapping @ 0x14019A2AC
 * Callers:
 *     MiZeroPage @ 0x140029400 (MiZeroPage.c)
 *     MiReleaseLargeZeroingVa @ 0x1402DB154 (MiReleaseLargeZeroingVa.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14002AC50 (MiPteInShadowRange.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiWritePteShadow @ 0x1400F8750 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1400F87B0 (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUltraMapping(unsigned __int64 a1)
{
  _QWORD *v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // r8d
  unsigned __int8 OldIrql; // bl
  __int64 result; // rax
  bool v7; // zf
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v1 = (_QWORD *)(((a1 >> 27) & 0x1FFFF8) - 0x90482600000LL);
  v2 = (a1 - qword_140466438) >> 30;
  KeAcquireInStackQueuedSpinLock(&qword_140466430, &LockHandle);
  _bittestandset64((signed __int64 *)qword_140466460, v2);
  if ( MiPteInShadowRange((unsigned __int64)v1) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v4 = 1;
      if ( HIBYTE(word_1404658EC) )
        goto LABEL_2;
      v7 = (v3 & 1) == 0;
    }
    else
    {
      if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[4] & 0x100000000000LL) == 0 )
        goto LABEL_2;
      v7 = (v3 & 1) == 0;
    }
    if ( !v7 )
      v3 |= 0x8000000000000000uLL;
  }
LABEL_2:
  *v1 = v3;
  if ( v4 )
    MiWritePteShadow((__int64)v1);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = OldIrql;
  __writecr8(OldIrql);
  return result;
}
