/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0036E58
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0066B5C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_3c748daedd635e352974c5d47d13e30a_::_lambda_invoker_cdecl_ @ 0x1C0109660 (_lambda_3c748daedd635e352974c5d47d13e30a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0036F3C (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this, __int64 a2)
{
  char v3; // al
  char v4; // al

  if ( !*((_DWORD *)this + 21) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v4 = *((_BYTE *)this + 176);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
    v4 = *((_BYTE *)this + 176);
  }
  v3 = v4 - 1;
  *((_BYTE *)this + 176) = v3;
  if ( !v3
    && ((*((_BYTE *)qword_1C01A0E28 + dword_1C01A0E30 * (unsigned int)(unsigned __int16)**((_DWORD **)this + 9) + 25) & 1) != 0
     || CInputDest::TestWindowFlag(this, 0x480u)
     || CInputDest::TestWindowFlag(this, 0x380u)) )
  {
    CInputDest::SetEmpty(this);
  }
}
