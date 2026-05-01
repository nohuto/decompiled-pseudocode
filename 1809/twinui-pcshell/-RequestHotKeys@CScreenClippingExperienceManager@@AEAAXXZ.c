/*
 * XREFs of ?RequestHotKeys@CScreenClippingExperienceManager@@AEAAXXZ @ 0x180181FEC
 * Callers:
 *     ?LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ @ 0x18017FC48 (-LookUpPrintScreenSetting@CScreenClippingExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CScreenClippingExperienceManager::RequestHotKeys(CScreenClippingExperienceManager *this)
{
  const struct _TlgProvider_t *v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  WINBOOL v6; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v7; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v2 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v2 > 5u )
    TlgWrite(v2, &unk_180452616, 0LL, 0LL, 2u, &pData);
  v3 = *((_QWORD *)this + 38);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  v4 = (*(__int64 (__fastcall **)(__int64, GUID *, GUID *, char *))(*(_QWORD *)v3 + 24LL))(
         v3,
         &IID_IImmersiveWindowMessageService,
         &GUID_bf8b6ede_2069_4010_a9e7_4480e24c01ca,
         (char *)this + 344);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1344LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, void *, unsigned __int64, char *))(**((_QWORD **)this + 43) + 56LL))(
         *((_QWORD *)this + 43),
         1LL,
         &unk_180473698,
         ((unsigned __int64)this + 56) & -(__int64)(this != 0LL),
         (char *)this + 352);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      1346LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
}
