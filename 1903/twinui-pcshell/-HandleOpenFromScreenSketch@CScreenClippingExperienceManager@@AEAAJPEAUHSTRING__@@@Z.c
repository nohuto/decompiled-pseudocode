/*
 * XREFs of ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AE1C0
 * Callers:
 *     ?HandleProtocolActivation@CScreenClippingExperienceManager@@EEAAJW4ScreenClipProtocolActivationSourceType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1801AEB40 (-HandleProtocolActivation@CScreenClippingExperienceManager@@EEAAJW4ScreenClipProtocolActivationS.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001D97C (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x180030B18 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800828D0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser @ 0x1801ABEE8 (_anonymous_namespace_--ScreenClipOpenUrlParser--ScreenClipOpenUrlParser.c)
 *     _anonymous_namespace_::GetScreenSketchWindowIfValid @ 0x1801AD670 (_anonymous_namespace_--GetScreenSketchWindowIfValid.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds @ 0x1801AD6AC (_anonymous_namespace_--ScreenClipOpenUrlParser--GetTimeDelayInSeconds.c)
 *     ?HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z @ 0x1801AE9D4 (-HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z.c)
 *     _anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay @ 0x1801AF28C (_anonymous_namespace_--ScreenClipOpenUrlParser--HasTimeDelay.c)
 *     ?SetWindowVisibility@CScreenClippingExperienceManager@@AEAA_N_NPEAUHWND__@@@Z @ 0x1801B2758 (-SetWindowVisibility@CScreenClippingExperienceManager@@AEAA_N_NPEAUHWND__@@@Z.c)
 *     ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801B28D0 (-ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@She.c)
 *     ?StartScreenClippingPendingShowTimer@CScreenClippingExperienceManager@@AEAAXKW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x1801B2FD4 (-StartScreenClippingPendingShowTimer@CScreenClippingExperienceManager@@AEAAXKW4ScreenClipInvocat.c)
 *     ?value@?$optional@_N@std@@QEGBAAEB_NXZ @ 0x1801B4050 (-value@-$optional@_N@std@@QEGBAAEB_NXZ.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::HandleOpenFromScreenSketch(HWND *this, HSTRING a2)
{
  unsigned int v3; // r14d
  const WCHAR *StringRawBuffer; // rsi
  TraceLoggingHProvider v5; // r10
  HWND v6; // rdx
  const unsigned __int16 *v7; // r8
  struct IUnknown *v8; // r9
  bool v9; // zf
  char v10; // al
  HWND ScreenSketchWindowIfValid; // rsi
  const struct _TlgProvider_t *v12; // rcx
  int v13; // ebx
  __int64 v14; // rdx
  const struct _TlgProvider_t *v16; // rcx
  const struct _TlgProvider_t *v17; // rcx
  const struct _TlgProvider_t *v18; // rcx
  bool v19; // [rsp+30h] [rbp-89h] BYREF
  char HasTimeDelay; // [rsp+31h] [rbp-88h] BYREF
  char v21; // [rsp+32h] [rbp-87h] BYREF
  LPVOID v22; // [rsp+38h] [rbp-81h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-79h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-71h] BYREF
  UINT32 length; // [rsp+50h] [rbp-69h] BYREF
  HWND v26; // [rsp+58h] [rbp-61h] BYREF
  HWND hwnd; // [rsp+60h] [rbp-59h] BYREF
  char v28; // [rsp+68h] [rbp-51h]
  _BYTE v29[16]; // [rsp+70h] [rbp-49h] BYREF
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
    Context = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, StringRawBuffer);
    TlgWrite(v5, &unk_1804C3E47, 0LL, 0LL, 3u, &pData);
  }
  if ( !length )
    return v3;
  anonymous_namespace_::ScreenClipOpenUrlParser::ScreenClipOpenUrlParser((__int64)&hwnd);
  if ( !v29[1] || (v9 = *(_BYTE *)std::optional<bool>::value(v29) == 0, v10 = 1, v9) )
    v10 = 0;
  v21 = v10;
  if ( v28 && hwnd )
    ScreenSketchWindowIfValid = anonymous_namespace_::GetScreenSketchWindowIfValid((CallerIdentity *)hwnd, v6, v7, v8);
  else
    ScreenSketchWindowIfValid = 0LL;
  HasTimeDelay = anonymous_namespace_::ScreenClipOpenUrlParser::HasTimeDelay(&hwnd);
  fPending = anonymous_namespace_::ScreenClipOpenUrlParser::GetTimeDelayInSeconds((__int64)&hwnd);
  v22 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v22)
    && (_DWORD)Context )
  {
    v22 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v12 = (const struct _TlgProvider_t *)*((_QWORD *)v22 + 1);
  if ( *(_DWORD *)v12 > 5u )
  {
    *(_QWORD *)&pDesc.Size = 1LL;
    pDesc.Ptr = (ULONGLONG)&v21;
    v32 = &v26;
    p_HasTimeDelay = &HasTimeDelay;
    p_fPending = &fPending;
    v26 = ScreenSketchWindowIfValid;
    v33 = 8LL;
    v35 = 1LL;
    v37 = 4LL;
    TlgWrite(v12, &unk_1804C3EA7, 0LL, 0LL, 6u, &pData);
  }
  v19 = 0;
  v13 = CScreenClippingExperienceManager::HandlePendingShowExperience((CScreenClippingExperienceManager *)this, &v19);
  if ( v13 < 0 )
  {
    v14 = 831LL;
LABEL_21:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
    return (unsigned int)v13;
  }
  if ( !v19 )
  {
    this[49] = ScreenSketchWindowIfValid;
    if ( ScreenSketchWindowIfValid )
    {
      v22 = 0LL;
      if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v22)
        && (_DWORD)Context )
      {
        v22 = qword_180599CD0;
        qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
        qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
        InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
      }
      v17 = (const struct _TlgProvider_t *)*((_QWORD *)v22 + 1);
      if ( *(_DWORD *)v17 > 5u )
        TlgWrite(v17, &unk_1804C3CA6, 0LL, 0LL, 2u, &pData);
      *((_BYTE *)this + 384) = CScreenClippingExperienceManager::SetWindowVisibility(
                                 (CScreenClippingExperienceManager *)this,
                                 0,
                                 this[49]);
      if ( HasTimeDelay && fPending )
      {
        v22 = 0LL;
        if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v22)
          && (_DWORD)Context )
        {
          v22 = qword_180599CD0;
          qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
          qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
          InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
        }
        v18 = (const struct _TlgProvider_t *)*((_QWORD *)v22 + 1);
        if ( *(_DWORD *)v18 > 5u )
          TlgWrite(v18, &unk_1804C3D11, 0LL, 0LL, 2u, &pData);
        CScreenClippingExperienceManager::StartScreenClippingPendingShowTimer(
          this,
          (unsigned int)(1000 * fPending),
          5LL);
      }
      else
      {
        v13 = CScreenClippingExperienceManager::ShowExperience(this, 5LL);
        if ( v13 < 0 )
        {
          v14 = 857LL;
          goto LABEL_21;
        }
      }
      return 0;
    }
    return v3;
  }
  v22 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, (PBOOL)&Context, &v22)
    && (_DWORD)Context )
  {
    v22 = qword_180599CD0;
    qword_180599CD0[0] = &ShellScreenClippingLogging::`vftable';
    qword_180599CE8 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180599CD0, qword_180599CE8);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_180599CD0);
  }
  v16 = (const struct _TlgProvider_t *)*((_QWORD *)v22 + 1);
  if ( *(_DWORD *)v16 > 5u )
    TlgWrite(v16, &unk_1804C3F55, 0LL, 0LL, 2u, &pData);
  return 0LL;
}
