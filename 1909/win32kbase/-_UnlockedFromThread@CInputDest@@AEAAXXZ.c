/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C004C0B4
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C004C06C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_3c748daedd635e352974c5d47d13e30a_::_lambda_invoker_cdecl_ @ 0x1C015B560 (_lambda_3c748daedd635e352974c5d47d13e30a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C004C148 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this, __int64 a2, __int64 a3)
{
  char v4; // al
  char v5; // al
  _DWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( !*((_DWORD *)this + 23) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  v4 = *((_BYTE *)this + 120);
  if ( !v4 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v4 = *((_BYTE *)this + 120);
  }
  v5 = v4 - 1;
  *((_BYTE *)this + 120) = v5;
  if ( !v5 )
  {
    v6 = (_DWORD *)*((_QWORD *)this + 10);
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v9,
      a2,
      a3);
    if ( (*((_BYTE *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*v6 + 25) & 1) != 0
      || CInputDest::TestWindowFlag(this, 0x480u)
      || CInputDest::TestWindowFlag(this, 0x380u) )
    {
      CInputDest::SetEmpty(this, v7, v8);
    }
  }
}
