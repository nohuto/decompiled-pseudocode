/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00B76E4
 * Callers:
 *     ForceCapture @ 0x1C00B76A0 (ForceCapture.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C00304C0 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C004EF20 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, __int64 a3)
{
  const struct tagINPUTDEST *v3; // rsi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  _BYTE v8[128]; // [rsp+30h] [rbp-98h] BYREF

  v3 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D(
      (_DWORD)gBaseLog,
      (_DWORD)a2,
      6,
      18,
      (__int64)&WPP_b8c433785e023797b5d19953e3eae191_Traceguids,
      a3);
  }
  if ( v3 )
  {
    CInputDest::CInputDest((CInputDest *)v8, v3);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3272), (const struct CInputDest *)v8, v5);
    CInputDest::SetEmpty((CInputDest *)v8, v6, v7);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 850, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3272), (__int64)a2, a3);
    _InterlockedExchange((volatile __int32 *)this + 850, 0);
  }
}
