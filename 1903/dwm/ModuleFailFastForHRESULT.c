/*
 * XREFs of ModuleFailFastForHRESULT @ 0x140005BC0
 * Callers:
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x140008F1C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1400090C4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 * Callees:
 *     ?IsOOM@@YA_NJ@Z @ 0x140001850 (-IsOOM@@YA_NJ@Z.c)
 *     memset_0 @ 0x1400040EC (memset_0.c)
 */

void __fastcall ModuleFailFastForHRESULT(int a1, void *a2)
{
  ULONG_PTR v2; // rbx
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-A8h] BYREF

  v2 = a1;
  if ( IsOOM(a1) )
    TerminateProcessOnMemoryExhaustion(0LL);
  memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
  pExceptionRecord.ExceptionCode = -532265403;
  pExceptionRecord.ExceptionAddress = a2;
  pExceptionRecord.NumberParameters = 1;
  pExceptionRecord.ExceptionInformation[0] = v2;
  RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  MEMORY[0] = 0;
  JUMPOUT(0x140005C2DLL);
}
