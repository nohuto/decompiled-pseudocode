/*
 * XREFs of ??$ReportWindowPosition@AEAJAEAJJJAEAE_NAEAW4PositionMenuFlags@CStartExperienceManager@@@StartMenuReposition@StartMenuExperienceTelemetry@@QEAAXAEAJ0$$QEAJ1AEAE$$QEA_NAEAW4PositionMenuFlags@CStartExperienceManager@@@Z @ 0x18004B5C0
 * Callers:
 *     ?PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@1@@Z @ 0x18004C374 (-PositionMenu@CStartExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@W4PositionMenuFlags@.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

TLG_STATUS __fastcall StartMenuExperienceTelemetry::StartMenuReposition::ReportWindowPosition<long &,long &,long,long,unsigned char &,bool,enum CStartExperienceManager::PositionMenuFlags &>(
        __int64 a1,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        int *a8)
{
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v13; // r10
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // edx
  WINBOOL fPending; // [rsp+38h] [rbp-A9h] BYREF
  int v20; // [rsp+3Ch] [rbp-A5h] BYREF
  int v21; // [rsp+40h] [rbp-A1h] BYREF
  int v22; // [rsp+44h] [rbp-9Dh] BYREF
  int v23; // [rsp+48h] [rbp-99h] BYREF
  int v24; // [rsp+4Ch] [rbp-95h] BYREF
  int v25; // [rsp+50h] [rbp-91h] BYREF
  int v26; // [rsp+54h] [rbp-8Dh] BYREF
  LPVOID Context; // [rsp+58h] [rbp-89h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-79h] BYREF
  int *v29; // [rsp+88h] [rbp-59h]
  int v30; // [rsp+90h] [rbp-51h]
  int v31; // [rsp+94h] [rbp-4Dh]
  int *v32; // [rsp+98h] [rbp-49h]
  int v33; // [rsp+A0h] [rbp-41h]
  int v34; // [rsp+A4h] [rbp-3Dh]
  int *v35; // [rsp+A8h] [rbp-39h]
  int v36; // [rsp+B0h] [rbp-31h]
  int v37; // [rsp+B4h] [rbp-2Dh]
  int *v38; // [rsp+B8h] [rbp-29h]
  int v39; // [rsp+C0h] [rbp-21h]
  int v40; // [rsp+C4h] [rbp-1Dh]
  int *v41; // [rsp+C8h] [rbp-19h]
  int v42; // [rsp+D0h] [rbp-11h]
  int v43; // [rsp+D4h] [rbp-Dh]
  int *v44; // [rsp+D8h] [rbp-9h]
  int v45; // [rsp+E0h] [rbp-1h]
  int v46; // [rsp+E4h] [rbp+3h]
  int *v47; // [rsp+E8h] [rbp+7h]
  int v48; // [rsp+F0h] [rbp+Fh]
  int v49; // [rsp+F4h] [rbp+13h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = &qword_18059A3C8;
    qword_18059A3C8 = &ShellScreenClippingLogging::`vftable';
    qword_18059A3E0 = (struct _TlgProvider_t *)&`StartMenuExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b070bc67e2c9c03cf4cc93f221b7b97d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_18059A3C8, qword_18059A3E0);
    InitOnceComplete(&`StartMenuExperienceLogging::Instance'::`2'::wrapper, 0, &qword_18059A3C8);
  }
  result = (int)Context;
  v13 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v13 > 4u )
  {
    v14 = *a2;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v40 = 0;
    v43 = 0;
    v46 = 0;
    v49 = 0;
    v20 = v14;
    v29 = &v20;
    v21 = *a3;
    v32 = &v21;
    v22 = *a4;
    v35 = &v22;
    v30 = 4;
    v33 = 4;
    v36 = 4;
    v15 = *a5;
    v38 = &v23;
    v23 = v15;
    v39 = 4;
    v42 = 4;
    v16 = *a6;
    v41 = &v24;
    v24 = v16;
    v45 = 4;
    v48 = 4;
    v17 = *a7;
    v44 = &v25;
    v25 = v17;
    v18 = *a8;
    v47 = &v26;
    v26 = v18;
    return TlgWrite(v13, &unk_1804C0922, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 9u, &pData);
  }
  return result;
}
