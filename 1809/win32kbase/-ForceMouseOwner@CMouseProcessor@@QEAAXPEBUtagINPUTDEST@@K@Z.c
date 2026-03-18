/*
 * XREFs of ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C00939D4
 * Callers:
 *     ForceCapture @ 0x1C0093980 (ForceCapture.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1C0031750 (--0CInputDest@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     ?Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z @ 0x1C0070194 (-Set@MouseOwner@CMouseProcessor@@QEAAXAEBVCInputDest@@@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

void __fastcall CMouseProcessor::ForceMouseOwner(CMouseProcessor *this, const struct tagINPUTDEST *a2, int a3)
{
  __int64 v5; // r8
  _BYTE v6[192]; // [rsp+30h] [rbp-D8h] BYREF

  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 1),
    4u,
    0xAu,
    0x11u,
    (__int64)&WPP_c4e458f8521336340531e679a09eecc3_Traceguids,
    a3);
  if ( a2 )
  {
    CInputDest::CInputDest((CInputDest *)v6, a2);
    CMouseProcessor::MouseOwner::Set((CMouseProcessor *)((char *)this + 2552), (const struct CInputDest *)v6, v5);
    CInputDest::SetEmpty((CInputDest *)v6);
  }
  else if ( _InterlockedCompareExchange((volatile signed __int32 *)this + 684, 1, 1) )
  {
    CInputDest::SetEmpty((CMouseProcessor *)((char *)this + 2552));
    _InterlockedExchange((volatile __int32 *)this + 684, 0);
  }
}
