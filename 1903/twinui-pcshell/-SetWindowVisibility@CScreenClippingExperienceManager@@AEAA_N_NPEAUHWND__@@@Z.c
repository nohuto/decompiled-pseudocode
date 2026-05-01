/*
 * XREFs of ?SetWindowVisibility@CScreenClippingExperienceManager@@AEAA_N_NPEAUHWND__@@@Z @ 0x1801B2758
 * Callers:
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AE1C0 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?OnViewHidden@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801B0400 (-OnViewHidden@CScreenClippingExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z.c)
 *     ?OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B0858 (-OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CScreenClippingExperienceManager::SetWindowVisibility(
        CScreenClippingExperienceManager *this,
        char a2,
        HWND a3)
{
  const struct _TlgProvider_t *v5; // rcx
  __int64 v6; // rcx
  int v7; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-29h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-21h] BYREF
  HWND v11; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  char *v13; // [rsp+70h] [rbp+17h]
  int v14; // [rsp+78h] [rbp+1Fh]
  int v15; // [rsp+7Ch] [rbp+23h]
  HWND *v16; // [rsp+80h] [rbp+27h]
  int v17; // [rsp+88h] [rbp+2Fh]
  int v18; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  char v20; // [rsp+C8h] [rbp+6Fh] BYREF

  v20 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v5 > 5u )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v20;
    v16 = &v11;
    v14 = 1;
    v11 = a3;
    v17 = 8;
    TlgWrite(v5, &unk_1804C3A73, 0LL, 0LL, 4u, &pData);
  }
  if ( !a3 )
    return 0;
  v6 = *((_QWORD *)this + 47);
  if ( !v6 )
    return 0;
  v7 = (*(__int64 (__fastcall **)(__int64, HWND, bool))(*(_QWORD *)v6 + 64LL))(v6, a3, v20 == 0);
  if ( v7 < 0 )
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3CD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    return 0;
  }
  return 1;
}
