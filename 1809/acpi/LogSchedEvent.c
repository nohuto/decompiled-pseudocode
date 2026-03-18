/*
 * XREFs of LogSchedEvent @ 0x1C0064328
 * Callers:
 *     SyncEvalObject @ 0x1C0003F70 (SyncEvalObject.c)
 *     InsertReadyQueue @ 0x1C0004270 (InsertReadyQueue.c)
 *     RunContext @ 0x1C00048A0 (RunContext.c)
 *     AMLIPauseInterpreter @ 0x1C0061130 (AMLIPauseInterpreter.c)
 *     AMLIResumeInterpreter @ 0x1C0061260 (AMLIResumeInterpreter.c)
 *     AsyncCallBack @ 0x1C0065DAC (AsyncCallBack.c)
 *     NestAsyncEvalObject @ 0x1C0065EDC (NestAsyncEvalObject.c)
 * Callees:
 *     LogEvent @ 0x1C002975C (LogEvent.c)
 */

PVOID __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r8

  v6 = 0LL;
  if ( a2 )
    v6 = *(_QWORD *)(a2 + 408);
  return LogEvent(a1, (__int64)KeGetCurrentThread(), v6, a2, (unsigned int)gReadyQueue, a3, a4, a5);
}
