/*
 * XREFs of ?ShowExperience@CScreenClippingExperienceManager@@AEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x180182720
 * Callers:
 *     ?HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18017E8D8 (-HandleOpenFromActionCenter@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x18017EAF8 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z @ 0x18017F02C (-HandlePendingShowExperience@CScreenClippingExperienceManager@@AEAAJAEA_N@Z.c)
 *     ?HandleScreenClippingPendingShowReturn@CScreenClippingExperienceManager@@AEAAXXZ @ 0x18017F354 (-HandleScreenClippingPendingShowReturn@CScreenClippingExperienceManager@@AEAAXXZ.c)
 *     ?HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x18017F484 (-HandleUnknownProtocolActivation@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@Shell@Internal@Windows@@@Z @ 0x18017FAF0 (-LaunchOrToggle@CScreenClippingExperienceManager@@EEAAJW4ScreenClipInvocationType@Experience@She.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180018C04 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18007FF10 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     atexit @ 0x1800848AC (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ @ 0x18017D70C (-EnsureScreenClippingBroker@CScreenClippingExperienceManager@@AEAAJXZ.c)
 *     ?get@?$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging@@P6AXXZ@Z @ 0x18018391C (-get@-$static_lazy@VShellScreenClippingLogging@@@details@wil@@QEAAPEAVShellScreenClippingLogging.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CScreenClippingExperienceManager::ShowExperience(__int64 a1, int a2)
{
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v13; // [rsp+38h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-31h] BYREF
  int v15; // [rsp+44h] [rbp-2Dh] BYREF
  LPVOID Context[2]; // [rsp+48h] [rbp-29h] BYREF
  GUID v17; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+68h] [rbp-9h] BYREF
  int *v19; // [rsp+88h] [rbp+17h]
  int v20; // [rsp+90h] [rbp+1Fh]
  int v21; // [rsp+94h] [rbp+23h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  Context[1] = (LPVOID)-2LL;
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, &fPending, Context)
    && fPending )
  {
    Context[0] = qword_18050F938;
    qword_18050F938[0] = &ShellScreenClippingLogging::`vftable';
    qword_18050F950 = (struct _TlgProvider_t *)&`SingleViewExperienceLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_06f5e94c872aa149ebfb08f8c984f403_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18050F938, qword_18050F950);
    InitOnceComplete(&`SingleViewExperienceLogging::Instance'::`2'::wrapper, 0, qword_18050F938);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context[0] + 1);
  if ( *(_DWORD *)v4 > 5u )
    TlgWrite(v4, &unk_180452C02, 0LL, 0LL, 2u, &pData);
  v15 = a2;
  v5 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<ShellScreenClippingLogging>::get(
                                           v4,
                                           lambda_d71f6d60408a6de3c75f9a9c93a2d5fc_::_lambda_invoker_cdecl_)
                                       + 8);
  if ( *(_DWORD *)v5 > 5u && TlgKeywordOn(v5, 0x400000000000uLL) )
  {
    v19 = &v15;
    v20 = 4;
    v21 = 0;
    TlgWrite(v6, &unk_1804521E7, 0LL, 0LL, 3u, &v18);
  }
  *(_BYTE *)(a1 + 424) = 0;
  v7 = CScreenClippingExperienceManager::EnsureScreenClippingBroker((CScreenClippingExperienceManager *)a1);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v13 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    v9 = (***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 368))(
           *(_QWORD *)(a1 + 368),
           &GUID_9c3e7124_7a72_487e_b6ed_12b7c3abff4a,
           &v13);
    v8 = v9;
    if ( v9 >= 0 )
    {
      v17 = GUID_NULL;
      LOBYTE(v10) = a2 == 3;
      v9 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v13 + 24LL))(v13, &v17, v10);
      v8 = v9;
      if ( v9 >= 0 )
      {
        v9 = CSingleViewShellExperience::Show(
               a1 + 88,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
        v8 = v9;
        if ( v9 >= 0 )
        {
          v8 = 0;
          goto LABEL_19;
        }
        v11 = 926LL;
      }
      else
      {
        v11 = 924LL;
      }
    }
    else
    {
      v11 = 921LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
    return v8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x396,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
