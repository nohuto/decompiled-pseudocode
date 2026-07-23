/*
 * XREFs of KeRegisterBugCheckCallback @ 0x1401911E0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x140173474 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckCallback(
        PKBUGCHECK_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_CALLBACK_ROUTINE CallbackRoutine,
        PVOID Buffer,
        ULONG Length,
        PUCHAR Component)
{
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // di
  BOOLEAN v10; // si
  struct _LIST_ENTRY *v11; // r8
  __int64 v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v5 = Length;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  v10 = 0;
  if ( !CallbackRecord->State && !KiCheckForDuplicateBugCheckCallback(&KeBugCheckCallbackListHead, CallbackRecord) )
  {
    CallbackRecord->CallbackRoutine = CallbackRoutine;
    CallbackRecord->Buffer = Buffer;
    CallbackRecord->Checksum = (ULONG_PTR)&Component[(unsigned __int64)CallbackRoutine + v5 + (_QWORD)Buffer];
    CallbackRecord->Length = v5;
    CallbackRecord->Component = Component;
    CallbackRecord->State = 1;
    v12 = KeBugCheckCallbackListHead;
    if ( *(struct _LIST_ENTRY **)(KeBugCheckCallbackListHead + 8) != v11 )
      __fastfail(3u);
    CallbackRecord->Entry.Flink = (struct _LIST_ENTRY *)KeBugCheckCallbackListHead;
    v10 = 1;
    CallbackRecord->Entry.Blink = v11;
    *(_QWORD *)(v12 + 8) = CallbackRecord;
    KeBugCheckCallbackListHead = (__int64)CallbackRecord;
  }
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v10;
}
