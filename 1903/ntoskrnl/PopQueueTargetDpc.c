/*
 * XREFs of PopQueueTargetDpc @ 0x1400BAA48
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x1400B9068 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x1400B9150 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x1400BCAD0 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 */

BOOLEAN __fastcall PopQueueTargetDpc(PRKDPC Dpc, __int64 a2)
{
  __int16 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)KeEnumerateNextProcessor(&v5, *(_QWORD *)(a2 + 32)) < 0 )
    return KeSetEvent(*(PRKEVENT *)(a2 + 24), 0, 0);
  Dpc->TargetInfoAsUlong = 787;
  Dpc->DeferredRoutine = (PKDEFERRED_ROUTINE)PopExecuteProcessorCallback;
  Dpc->DeferredContext = (PVOID)a2;
  Dpc->DpcData = 0LL;
  Dpc->ProcessorHistory = 0LL;
  if ( !Dpc->DpcData )
    Dpc->Number = v5 + 1280;
  return KeInsertQueueDpc(Dpc, 0LL, 0LL);
}
