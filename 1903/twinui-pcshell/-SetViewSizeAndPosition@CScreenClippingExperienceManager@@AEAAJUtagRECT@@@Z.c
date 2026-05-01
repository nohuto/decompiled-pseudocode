/*
 * XREFs of ?SetViewSizeAndPosition@CScreenClippingExperienceManager@@AEAAJUtagRECT@@@Z @ 0x1801B25DC
 * Callers:
 *     ?SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B2B2C (-SizeViewOnCreation@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z @ 0x18004CDD4 (-SetPosition@CSingleViewShellExperience@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::SetViewSizeAndPosition(
        CScreenClippingExperienceManager *this,
        struct tagRECT *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  WINBOOL fPending; // [rsp+30h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct tagRECT *v11; // [rsp+60h] [rbp-9h]
  int v12; // [rsp+68h] [rbp-1h]
  int v13; // [rsp+6Ch] [rbp+3h]
  LONG *p_top; // [rsp+70h] [rbp+7h]
  int v15; // [rsp+78h] [rbp+Fh]
  int v16; // [rsp+7Ch] [rbp+13h]
  LONG *p_right; // [rsp+80h] [rbp+17h]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+8Ch] [rbp+23h]
  LONG *p_bottom; // [rsp+90h] [rbp+27h]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

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
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v13 = 0;
    v16 = 0;
    v19 = 0;
    v22 = 0;
    p_top = &a2->top;
    p_right = &a2->right;
    p_bottom = &a2->bottom;
    v11 = a2;
    v12 = 4;
    v15 = 4;
    v18 = 4;
    v21 = 4;
    TlgWrite(v4, &unk_1804C3810, 0LL, 0LL, 6u, &pData);
  }
  if ( !*((_QWORD *)this + 14) )
  {
    v5 = -2147418113;
    v6 = 1060LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v5 = CSingleViewShellExperience::SetPosition((CScreenClippingExperienceManager *)((char *)this + 88), a2);
  if ( v5 < 0 )
  {
    v6 = 1061LL;
    goto LABEL_8;
  }
  return 0LL;
}
