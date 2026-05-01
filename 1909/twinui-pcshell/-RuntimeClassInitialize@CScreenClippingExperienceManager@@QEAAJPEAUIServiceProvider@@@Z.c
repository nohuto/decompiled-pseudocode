/*
 * XREFs of ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801D12C4
 * Callers:
 *     ??$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801CA5DC (--$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18005066C (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     ?Close@CScreenClippingExperienceManager@@EEAAJXZ @ 0x1801CB7D0 (-Close@CScreenClippingExperienceManager@@EEAAJXZ.c)
 *     ?RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z @ 0x1801D0C0C (-RegisterWithServiceProvider@CScreenClippingExperienceManager@@AEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::RuntimeClassInitialize(
        CScreenClippingExperienceManager *this,
        struct IServiceProvider *a2)
{
  const struct _TlgProvider_t *v4; // rcx
  char v5; // si
  int v6; // eax
  unsigned int v7; // ebx
  WINBOOL v9; // [rsp+30h] [rbp-58h] BYREF
  _QWORD *v10; // [rsp+38h] [rbp-50h] BYREF
  char v11; // [rsp+40h] [rbp-48h]
  __int64 v12; // [rsp+48h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v12 = -2LL;
  v10 = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &v9, (LPVOID *)&v10) && v9 )
  {
    v10 = qword_1805C20F0;
    qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
    qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
  }
  v4 = (const struct _TlgProvider_t *)v10[1];
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_1804E9B64, 0LL, 0LL, 2u, &pData);
  v10 = this;
  v5 = 1;
  v11 = 1;
  v6 = CScreenClippingExperienceManager::RegisterWithServiceProvider(this, a2);
  v7 = v6;
  if ( v6 >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::operator=((__int64 *)this + 51, (__int64)this);
    v7 = 0;
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1A4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
  }
  if ( v5 )
    CScreenClippingExperienceManager::Close((CScreenClippingExperienceManager *)((char *)this + 16));
  return v7;
}
