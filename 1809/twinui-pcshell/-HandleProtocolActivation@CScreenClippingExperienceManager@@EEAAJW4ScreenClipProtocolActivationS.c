/*
 * XREFs of ?HandleProtocolActivation@CScreenClippingExperienceManager@@EEAAJW4ScreenClipProtocolActivationSourceType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x18017F1A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x180033780 (_TlgCreateWsz.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     ?HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18017E8D8 (-HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x18017EAF8 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x18017F484 (-HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall CScreenClippingExperienceManager::HandleProtocolActivation(
        CScreenClippingExperienceManager *a1,
        int a2,
        HSTRING a3)
{
  const struct _TlgProvider_t *v6; // rsi
  const WCHAR *StringRawBuffer; // rax
  int v8; // ebx
  __int64 v9; // rdx
  int v11; // eax
  WINBOOL fPending; // [rsp+30h] [rbp-19h] BYREF
  int v13; // [rsp+34h] [rbp-15h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+6Ch] [rbp+23h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  Context = 0LL;
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
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v18 = 0;
    v16 = &v13;
    v13 = a2;
    v17 = 4;
    StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
    TlgCreateWsz(&pDesc, StringRawBuffer);
    TlgWrite(v6, &unk_180453605, 0LL, 0LL, 4u, &pData);
  }
  switch ( a2 )
  {
    case 2:
      v8 = CScreenClippingExperienceManager::HandleOpenFromActionCenter(a1);
      if ( v8 < 0 )
      {
        v9 = 460LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
        return (unsigned int)v8;
      }
      break;
    case 1:
      v11 = CScreenClippingExperienceManager::HandleOpenFromScreenSketch((HWND *)a1, a3);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          464LL,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
      break;
    case 0:
      v8 = CScreenClippingExperienceManager::HandleUnknownProtocolActivation(a1, a3);
      if ( v8 < 0 )
      {
        v9 = 468LL;
        goto LABEL_9;
      }
      break;
  }
  return 0LL;
}
