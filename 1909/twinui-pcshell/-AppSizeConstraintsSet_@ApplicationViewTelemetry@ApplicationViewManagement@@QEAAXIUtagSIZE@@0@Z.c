/*
 * XREFs of ?AppSizeConstraintsSet_@ApplicationViewTelemetry@ApplicationViewManagement@@QEAAXIUtagSIZE@@0@Z @ 0x18017E31C
 * Callers:
 *     ??$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationViewManagement@@SAXAEAIAEBUCSize@Geometry@@1@Z @ 0x180076188 (--$AppSizeConstraintsSet@AEAIAEBUCSize@Geometry@@AEBU12@@ApplicationViewTelemetry@ApplicationVie.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 */

void __fastcall ApplicationViewManagement::ApplicationViewTelemetry::AppSizeConstraintsSet_(
        ApplicationViewManagement::ApplicationViewTelemetry *this,
        int a2,
        struct tagSIZE a3,
        struct tagSIZE a4)
{
  const struct _TlgProvider_t *v4; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-41h] BYREF
  struct tagSIZE v7; // [rsp+40h] [rbp-39h] BYREF
  struct tagSIZE v8; // [rsp+48h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-29h] BYREF
  int *v10; // [rsp+70h] [rbp-9h]
  int v11; // [rsp+78h] [rbp-1h]
  int v12; // [rsp+7Ch] [rbp+3h]
  struct tagSIZE *v13; // [rsp+80h] [rbp+7h]
  int v14; // [rsp+88h] [rbp+Fh]
  int v15; // [rsp+8Ch] [rbp+13h]
  LONG *p_cy; // [rsp+90h] [rbp+17h]
  int v17; // [rsp+98h] [rbp+1Fh]
  int v18; // [rsp+9Ch] [rbp+23h]
  struct tagSIZE *v19; // [rsp+A0h] [rbp+27h]
  int v20; // [rsp+A8h] [rbp+2Fh]
  int v21; // [rsp+ACh] [rbp+33h]
  LONG *v22; // [rsp+B0h] [rbp+37h]
  int v23; // [rsp+B8h] [rbp+3Fh]
  int v24; // [rsp+BCh] [rbp+43h]
  int v25; // [rsp+E8h] [rbp+6Fh] BYREF

  v25 = a2;
  Context = 0LL;
  v7 = a3;
  v8 = a4;
  if ( InitOnceBeginInitialize(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1805C2010;
    qword_1805C2010[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2028 = (struct _TlgProvider_t *)&`ApplicationViewManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_9a0e71fa5596e2c383ee2a905b77935f_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C2010, qword_1805C2028);
    InitOnceComplete(&`ApplicationViewManagementLogging::Instance'::`2'::wrapper, 0, qword_1805C2010);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v12 = 0;
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v10 = &v25;
    v13 = &v7;
    p_cy = &v7.cy;
    v19 = &v8;
    v22 = &v8.cy;
    v11 = 4;
    v14 = 4;
    v17 = 4;
    v20 = 4;
    v23 = 4;
    TlgWrite(v4, &unk_1804E0D12, 0LL, 0LL, 7u, &pData);
  }
}
