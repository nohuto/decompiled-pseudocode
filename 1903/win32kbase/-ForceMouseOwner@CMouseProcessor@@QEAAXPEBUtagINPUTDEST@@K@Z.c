/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00BA7A4
 * Callers:
 *     ForceCapture @ 0x1C00BA760 (ForceCapture.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0030D3C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031210 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C0043910 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
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
      (__int64)&WPP_a819e7d240c13332848bedce030fc704_Traceguids,
      a3);
  }
  if ( v3 )
  {
    CInputDest::CInputDest((CInputDest *)v8, v3);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 3312), (const struct CInputDest *)v8, v5);
    CInputDest::SetEmpty((CInputDest *)v8, v6, v7);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 860, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 3312), (__int64)a2, a3);
    _InterlockedExchange((volatile __int32 *)this + 860, 0);
  }
}
