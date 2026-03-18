/*
 * XREFs of ?CsExitInitiatedWnfSubscription@DXGGLOBAL@@QEAAJXZ @ 0x1C016C54C
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0169FCC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGGLOBAL::CsExitInitiatedWnfSubscription(DXGGLOBAL *this)
{
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp-18h] BYREF

  v8 = WNF_PO_MODERN_STANDBY_EXIT_INITIATED;
  v1 = ExSubscribeWnfStateChange((char *)this + 1488, &v8, 1LL, 0LL, CsExitInitiatedWnfCallback, this);
  v5 = v1;
  if ( v1 < 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(v3, v2, v4);
    *(_QWORD *)(v7 + 24) = v5;
    WdLogEvent5_WdWarning(v7);
  }
  return (unsigned int)v5;
}
