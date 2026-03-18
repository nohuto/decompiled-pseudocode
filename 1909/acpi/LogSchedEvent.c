/*
 * XREFs of LogSchedEvent @ 0x1C002880C
 * Callers:
 *     SyncEvalObject @ 0x1C0002800 (SyncEvalObject.c)
 *     RunContext @ 0x1C0003C90 (RunContext.c)
 *     InsertReadyQueue @ 0x1C0004A80 (InsertReadyQueue.c)
 *     AMLIPauseInterpreter @ 0x1C00630B0 (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C00631E0 (AMLIResumeInterpreter.c)
 *     AsyncCallBack @ 0x1C0067E10 (AsyncCallBack.c)
 *     NestAsyncEvalObject @ 0x1C0067F3C (NestAsyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C0028868 (LogEvent.c)
 */

__int64 __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r11

  v5 = a3;
  LODWORD(a3) = 0;
  if ( a2 )
    a3 = *(_QWORD *)(a2 + 408);
  return LogEvent(a1, (unsigned int)KeGetCurrentThread(), a3, a2, (unsigned int)gReadyQueue, v5, a4, a5);
}
