/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C006F38C
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C006F344 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_3c748daedd635e352974c5d47d13e30a_::_lambda_invoker_cdecl_ @ 0x1C0130CA0 (_lambda_3c748daedd635e352974c5d47d13e30a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C006F410 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this)
{
  char v2; // al
  char v3; // al

  if ( !*((_DWORD *)this + 21) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Should not be getting thus-far is object is not backed by window");
  v2 = *((_BYTE *)this + 176);
  if ( !v2 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("This object is not marked as ThreadLocked. Bug!!!");
    v2 = *((_BYTE *)this + 176);
  }
  v3 = v2 - 1;
  *((_BYTE *)this + 176) = v3;
  if ( !v3
    && ((*((_BYTE *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)**((_DWORD **)this + 9) + 25) & 1) != 0
     || CInputDest::TestWindowFlag(this, 0x480u)
     || CInputDest::TestWindowFlag(this, 0x380u)) )
  {
    CInputDest::SetEmpty(this);
  }
}
