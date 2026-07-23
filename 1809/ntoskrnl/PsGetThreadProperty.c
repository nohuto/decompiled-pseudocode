/*
 * XREFs of PsGetThreadProperty @ 0x14010F220
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     PspValidateThread @ 0x14010F354 (PspValidateThread.c)
 *     PsGetJobProperty @ 0x14010F3D0 (PsGetJobProperty.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

PVOID __stdcall PsGetThreadProperty(PETHREAD Thread, ULONG_PTR Key, ULONG Flags)
{
  void *v3; // rdi
  char v4; // bp
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  unsigned __int8 CurrentIrql; // r12
  _QWORD *v10; // rcx
  _QWORD *v11; // r15
  struct _LIST_ENTRY *Blink; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v3 = 0LL;
  v4 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 || (int)PspValidateThread(Thread, Key, Flags) < 0 )
    return 0LL;
  v8 = (_QWORD *)(v7 + 1920);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 1936));
  v10 = (_QWORD *)*v8;
  v11 = 0LL;
  if ( (_QWORD *)*v8 != v8 )
  {
    while ( v10[2] != Key )
    {
      v10 = (_QWORD *)*v10;
      if ( v10 == v8 )
        goto LABEL_5;
    }
    v11 = v10;
    if ( v10 )
      ObfReferenceObjectWithTag((PVOID)v10[3], 0x72507350u);
  }
LABEL_5:
  KxReleaseSpinLock(v8 + 2);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  if ( v11 )
    return (PVOID)v11[3];
  if ( (v4 & 1) == 0 )
  {
    Blink = Thread[1].WaitBlock[3].WaitListEntry.Blink;
    if ( Blink == (struct _LIST_ENTRY *)-3LL )
      Blink = (struct _LIST_ENTRY *)Thread->Process[1].Affinity.Bitmap[16];
    if ( Blink )
      return (PVOID)PsGetJobProperty(Blink, Key);
  }
  return v3;
}
