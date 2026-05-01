/*
 * XREFs of ??$ApplicationViewManagerInitializationFailed@AEAY06$$CBGAEAJ@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAY06$$CBGAEAJ@Z @ 0x180134524
 * Callers:
 *     ?Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ @ 0x180134828 (-Initialize@CPersistence@ApplicationViewManagement@@QEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 */

TLG_STATUS __fastcall ApplicationViewManagement::ApplicationViewTelemetry::ApplicationViewManagerInitializationFailed<unsigned short const (&)[7],long &>(
        __int64 a1,
        __int64 a2)
{
  TLG_STATUS result; // eax
  TraceLoggingHProvider v4; // r10
  WINBOOL v5; // [rsp+30h] [rbp-68h] BYREF
  _DWORD **v6; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 v9; // [rsp+70h] [rbp-28h]
  int v10; // [rsp+78h] [rbp-20h]
  int v11; // [rsp+7Ch] [rbp-1Ch]

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = (_DWORD **)qword_18050F870;
    qword_18050F870[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F888 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F870, qword_18050F888);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_18050F870);
  }
  result = (int)v6;
  if ( *v6[1] > 5u )
  {
    TlgCreateWsz(&pDesc, L"SubKey");
    v11 = 0;
    v10 = 4;
    v9 = a2;
    return TlgWrite(v4, &unk_18044B8A6, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
