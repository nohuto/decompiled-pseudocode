/*
 * XREFs of ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x1800B13E0
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004E04C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     memset_0 @ 0x18004E2A2 (memset_0.c)
 *     ?DoStackCapture@@YAXIJI@Z @ 0x1800B127C (-DoStackCapture@@YAXIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x1800B13B8 (-IsOOM@@YA_NJ@Z.c)
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1800B1560 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 */

void __fastcall MilInstrumentationHandleFailure_MaybeFailFast(__int64 a1, int a2, unsigned int a3, int a4)
{
  struct _EXCEPTION_RECORD pExceptionRecord; // [rsp+20h] [rbp-B8h] BYREF

  if ( (a3 & 0x10) != 0 && IsOOM(a2) )
    TerminateProcessOnMemoryExhaustion(0LL);
  if ( a2 == -2003303421 )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -2003303421;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  if ( (a3 & 4) != 0 )
    DoStackCapture(2, a2, a4);
  if ( (a3 & 1) != 0 )
    MilInstrumentationBreak(a3, a2);
}
