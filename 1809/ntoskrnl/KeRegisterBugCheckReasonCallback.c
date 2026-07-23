/*
 * XREFs of KeRegisterBugCheckReasonCallback @ 0x140173360
 * Callers:
 *     HvlPhase1Initialize @ 0x140193B34 (HvlPhase1Initialize.c)
 *     HvlpInitializeHvCrashdump @ 0x14027804C (HvlpInitializeHvCrashdump.c)
 *     SmPrepareForFatalHeapCorruption @ 0x1403093BC (SmPrepareForFatalHeapCorruption.c)
 *     SmPrepareForFatalPageError @ 0x1403094CC (SmPrepareForFatalPageError.c)
 *     PspInitPhase0 @ 0x1409B20C8 (PspInitPhase0.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 *     PopRecorderInit @ 0x1409DB6BC (PopRecorderInit.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiCheckForDuplicateBugCheckCallback @ 0x140173474 (KiCheckForDuplicateBugCheckCallback.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

BOOLEAN __stdcall KeRegisterBugCheckReasonCallback(
        PKBUGCHECK_REASON_CALLBACK_RECORD CallbackRecord,
        PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine,
        KBUGCHECK_CALLBACK_REASON Reason,
        PUCHAR Component)
{
  __int64 v5; // rdi
  BOOLEAN v8; // si
  unsigned __int8 CurrentIrql; // bp
  __int64 *v10; // rcx
  struct _LIST_ENTRY *v11; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v5 = Reason;
  v8 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  KxAcquireSpinLock(&KeBugCheckCallbackLock);
  if ( CallbackRecord->State )
    goto LABEL_12;
  if ( (_DWORD)v5 == 4 || (v10 = (__int64 *)&KeBugCheckReasonCallbackListHead, (_DWORD)v5 == 6) )
    v10 = &KeBugCheckAddRemovePagesCallbackListHead;
  if ( (unsigned __int8)KiCheckForDuplicateBugCheckCallback(v10, CallbackRecord) )
  {
LABEL_12:
    v8 = 0;
    goto LABEL_9;
  }
  CallbackRecord->CallbackRoutine = CallbackRoutine;
  CallbackRecord->Reason = v5;
  CallbackRecord->Component = Component;
  CallbackRecord->Checksum = (ULONG_PTR)CallbackRoutine + v5 + (_QWORD)Component;
  CallbackRecord->State = 1;
  if ( (_DWORD)v5 == 7 )
  {
    Blink = v11->Blink;
    if ( Blink->Flink == v11 )
    {
      CallbackRecord->Entry.Flink = v11;
      CallbackRecord->Entry.Blink = Blink;
      Blink->Flink = &CallbackRecord->Entry;
      v11->Blink = &CallbackRecord->Entry;
      goto LABEL_9;
    }
LABEL_18:
    __fastfail(3u);
  }
  Flink = v11->Flink;
  if ( v11->Flink->Blink != v11 )
    goto LABEL_18;
  CallbackRecord->Entry.Flink = Flink;
  CallbackRecord->Entry.Blink = v11;
  Flink->Blink = &CallbackRecord->Entry;
  v11->Flink = &CallbackRecord->Entry;
LABEL_9:
  KxReleaseSpinLock(&KeBugCheckCallbackLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  return v8;
}
