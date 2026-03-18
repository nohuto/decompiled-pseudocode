/*
 * XREFs of PopQueueTargetDpc @ 0x14009A8B8
 * Callers:
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     PopExecuteProcessorCallback @ 0x140098FC0 (PopExecuteProcessorCallback.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KeInsertQueueDpc @ 0x14009C950 (KeInsertQueueDpc.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
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
