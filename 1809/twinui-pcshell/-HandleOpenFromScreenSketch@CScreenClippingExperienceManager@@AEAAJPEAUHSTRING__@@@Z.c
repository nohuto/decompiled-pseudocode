/*
 * XREFs of ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x18017EAF8
 * Callers:
 *     ?HandleProtocolActivation@CScreenClippingExperienceManager@@EEAAJW4ScreenClipProtocolActivationSourceType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x18017F1A0 (-HandleProtocolActivation@CScreenClippingExperienceManager@@EEAAJW4ScreenClipProtocolActivationS.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser @ 0x18017C7C4 (_anonymous_namespace_--ScreenClipOpenUrlParser--ScreenClipOpenUrlParser.c)
 *     _anonymous_namespace_::GetScreenSketchWindowIfValid @ 0x18017DFA0 (_anonymous_namespace_--GetScreenSketchWindowIfValid.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds @ 0x18017DFDC (_anonymous_namespace_--ScreenClipOpenUrlParser--GetTimeDelayInSeconds.c)
 *     ?HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z @ 0x18017F02C (-HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay @ 0x18017F8C8 (_anonymous_namespace_--ScreenClipOpenUrlParser--HasTimeDelay.c)
 *     ?SetWindowVisibility@CScreenClippingExperienceManager@@AEAA_N_NPEAUHWND__@@@Z @ 0x1801825A8 (-SetWindowVisibility@CScreenClippingExperienceManager@@AEAA_N_NPEAUHWND__@@@Z.c)
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180182720 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ?StartScreenClippingPendingShowTimer@CScreenClippingExperienceManager@@AEAAXKW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180182F94 (-StartScreenClippingPendingShowTimer@CScreenClippingExperienceManager@@AEAAXKW4ScreenClipInvocat.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::HandleOpenFromScreenSketch(HWND *this, HSTRING a2)
{
  unsigned int v3; // r14d
  const WCHAR *StringRawBuffer; // rsi
  TraceLoggingHProvider v5; // r10
  HWND v6; // rdx
  const unsigned __int16 *v7; // r8
  struct IUnknown *v8; // r9
  char v9; // al
  HWND ScreenSketchWindowIfValid; // rsi
  const struct _TlgProvider_t *v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  const struct _TlgProvider_t *v15; // rcx
  const struct _TlgProvider_t *v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  bool v18; // [rsp+30h] [rbp-89h] BYREF
  char HasTimeDelay; // [rsp+31h] [rbp-88h] BYREF
  char v20; // [rsp+32h] [rbp-87h] BYREF
  LPVOID v21; // [rsp+38h] [rbp-81h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-79h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-71h] BYREF
  UINT32 length; // [rsp+50h] [rbp-69h] BYREF
  HWND v25; // [rsp+58h] [rbp-61h] BYREF
  HWND hwnd; // [rsp+60h] [rbp-59h] BYREF
  char v27; // [rsp+68h] [rbp-51h]
  char v28; // [rsp+70h] [rbp-49h]
  char v29; // [rsp+71h] [rbp-48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-19h] BYREF
  HWND *v32; // [rsp+B0h] [rbp-9h]
  __int64 v33; // [rsp+B8h] [rbp-1h]
  char *p_HasTimeDelay; // [rsp+C0h] [rbp+7h]
  __int64 v35; // [rsp+C8h] [rbp+Fh]
  WINBOOL *p_fPending; // [rsp+D0h] [rbp+17h]
  __int64 v37; // [rsp+D8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  length = 0;
  v3 = -2147024809;
  Context = 0LL;
  StringRawBuffer = WindowsGetStringRawBuffer(a2, &length);
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, StringRawBuffer);
    TlgWrite(v5, &unk_18045307F, 0LL, 0LL, 3u, &pData);
  }
  if ( !length )
    return v3;
  anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser((__int64)&hwnd);
  if ( !v29 || (v9 = 1, !v28) )
    v9 = 0;
  v20 = v9;
  if ( v27 && hwnd )
    ScreenSketchWindowIfValid = anonymous_namespace_::GetScreenSketchWindowIfValid((CallerIdentity *)hwnd, v6, v7, v8);
  else
    ScreenSketchWindowIfValid = 0LL;
  HasTimeDelay = anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay(&hwnd);
  fPending = anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds((__int64)&hwnd);
  v21 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v21)
    && (_DWORD)Context )
  {
    v21 = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)v21 + 1);
  if ( *(_DWORD *)v11 > 5u )
  {
    *(_QWORD *)&pDesc.Size = 1LL;
    pDesc.Ptr = (ULONGLONG)&v20;
    v32 = &v25;
    p_HasTimeDelay = &HasTimeDelay;
    p_fPending = &fPending;
    v25 = ScreenSketchWindowIfValid;
    v33 = 8LL;
    v35 = 1LL;
    v37 = 4LL;
    TlgWrite(v11, &unk_1804530DF, 0LL, 0LL, 6u, &pData);
  }
  v18 = 0;
  v12 = CScreenClippingExperienceManager::HandlePendingShowExperience((CScreenClippingExperienceManager *)this, &v18);
  if ( v12 < 0 )
  {
    v13 = 780LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v12);
    return (unsigned int)v12;
  }
  if ( !v18 )
  {
    this[49] = ScreenSketchWindowIfValid;
    if ( ScreenSketchWindowIfValid )
    {
      v21 = 0LL;
      if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v21)
        && (_DWORD)Context )
      {
        v21 = qword_18050F938;
        qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
        qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
        InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
      }
      v16 = (const struct _TlgProvider_t *)*((_QWORD *)v21 + 1);
      if ( *(_DWORD *)v16 > 5u )
        TlgWrite(v16, &unk_180452EE0, 0LL, 0LL, 2u, &pData);
      *((_BYTE *)this + 384) = CScreenClippingExperienceManager::SetWindowVisibility(
                                 (CScreenClippingExperienceManager *)this,
                                 0,
                                 this[49]);
      if ( HasTimeDelay && fPending )
      {
        v21 = 0LL;
        if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v21)
          && (_DWORD)Context )
        {
          v21 = qword_18050F938;
          qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
          qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
          InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
        }
        v17 = (const struct _TlgProvider_t *)*((_QWORD *)v21 + 1);
        if ( *(_DWORD *)v17 > 5u )
          TlgWrite(v17, &unk_180452F4B, 0LL, 0LL, 2u, &pData);
        CScreenClippingExperienceManager::StartScreenClippingPendingShowTimer(
          this,
          (unsigned int)(1000 * fPending),
          5LL);
      }
      else
      {
        v12 = CScreenClippingExperienceManager::ShowExperience(this, 5LL);
        if ( v12 < 0 )
        {
          v13 = 806LL;
          goto LABEL_21;
        }
      }
      return 0;
    }
    return v3;
  }
  v21 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v21)
    && (_DWORD)Context )
  {
    v21 = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v15 = (const struct _TlgProvider_t *)*((_QWORD *)v21 + 1);
  if ( *(_DWORD *)v15 > 5u )
    TlgWrite(v15, &unk_180452E81, 0LL, 0LL, 2u, &pData);
  return 0LL;
}
