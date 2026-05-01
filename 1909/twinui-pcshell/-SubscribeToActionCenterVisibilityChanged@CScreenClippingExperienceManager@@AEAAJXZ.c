/*
 * XREFs of ?SubscribeToActionCenterVisibilityChanged@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D20C4
 * Callers:
 *     ?StartClosingActionCenterAndOpenScreenClipping@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801D1D90 (-StartClosingActionCenterAndOpenScreenClipping@CScreenClippingExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180085500 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     atexit @ 0x18008A080 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801A3988 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIBaseExperie.c)
 *     ?GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1801CBEC4 (-GetActionCenterBaseExperienceManager@CScreenClippingExperienceManager@@AEAAJAEAV-$ComPtr@UIBase.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CScreenClippingExperienceManager::SubscribeToActionCenterVisibilityChanged(
        CScreenClippingExperienceManager *this)
{
  _QWORD *v2; // r15
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v5; // rcx
  int ActionCenterBaseExperienceManager; // eax
  unsigned int v7; // ebx
  void *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  int v11; // eax
  const struct _TlgProvider_t *v12; // rcx
  LPVOID Context; // [rsp+30h] [rbp-50h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15[2]; // [rsp+40h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v15[1] = -2LL;
  v2 = 0LL;
  Context = 0LL;
  if ( *((_QWORD *)this + 58) )
  {
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1805C20F0;
      qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
    }
    v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v3 > 5u )
      TlgWrite(v3, &unk_1804E8BCE, 0LL, 0LL, 2u, &pData);
    return 0LL;
  }
  else
  {
    if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1805C20F0;
      qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
      qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
      InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
    }
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 5u )
      TlgWrite(v5, &unk_1804E89D1, 0LL, 0LL, 2u, &pData);
    v15[0] = 0LL;
    ActionCenterBaseExperienceManager = CScreenClippingExperienceManager::GetActionCenterBaseExperienceManager(
                                          (__int64)this,
                                          v15);
    v7 = ActionCenterBaseExperienceManager;
    if ( ActionCenterBaseExperienceManager >= 0 )
    {
      v8 = 0LL;
      v9 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      v10 = v9;
      if ( v9 )
      {
        Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>((__int64)v9);
        v10[2] = this;
        *v10 = off_18045C898;
        v8 = v10;
        v2 = v10;
      }
      Context = v8;
      v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *, char *))(*(_QWORD *)v15[0] + 64LL))(
              v15[0],
              v2,
              (char *)this + 464);
      v7 = v11;
      if ( v11 >= 0 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = qword_1805C20F0;
          qword_1805C20F0[0] = &ShellScreenClippingLogging::`vftable';
          qword_1805C2108 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1805C20F0, qword_1805C2108);
          InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_1805C20F0);
        }
        v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
        if ( *(_DWORD *)v12 > 5u )
          TlgWrite(v12, &unk_1804E8A33, 0LL, 0LL, 2u, &pData);
        v7 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x539,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
          (const char *)(unsigned int)v11);
      }
      if ( v2 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x52D,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)ActionCenterBaseExperienceManager);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v15);
    return v7;
  }
}
