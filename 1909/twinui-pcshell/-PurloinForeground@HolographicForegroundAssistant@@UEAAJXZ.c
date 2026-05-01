/*
 * XREFs of ?PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ @ 0x1802261B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180039514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180039540 (_TlgWrite.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x180083234 (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800A6650 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180172458 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x1801A4DE0 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x18022560C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall HolographicForegroundAssistant::PurloinForeground(HolographicForegroundAssistant *this)
{
  enum Windows::Internal::Shell::Holographic::UserDisplayContext *v2; // rdx
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  enum Windows::Internal::Shell::Holographic::UserInputContext *v5; // rdx
  int UserDisplayContext; // ebx
  __int64 v7; // rdx
  bool v9; // r14
  HWND ForegroundWindow; // rsi
  __int64 v11; // rdi
  int (__fastcall *v12)(__int64, HWND, __int64 *); // rbx
  __int64 v13; // rbx
  int (__fastcall *v14)(__int64, __int64 *); // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, const wchar_t *, int *); // rdi
  __int64 v20; // rcx
  int v21; // [rsp+38h] [rbp-19h] BYREF
  int v22; // [rsp+3Ch] [rbp-15h] BYREF
  int v23; // [rsp+40h] [rbp-11h] BYREF
  __int64 v24; // [rsp+48h] [rbp-9h] BYREF
  __int64 v25; // [rsp+50h] [rbp-1h] BYREF
  __int64 v26[2]; // [rsp+58h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v26[1] = -2LL;
  v3 = (const struct _TlgProvider_t *)*((_QWORD *)wil::details::static_lazy<HolographicPositionerProvider>::get(
                                                    (__int64)this,
                                                    (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_)
                                      + 1);
  if ( *(_DWORD *)v3 > 4u && TlgKeywordOn(v3, 0x400000000000uLL) )
    TlgWrite(v4, &unk_1804F01F6, 0LL, 0LL, 2u, &pData);
  v21 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v21,
                         v2);
  if ( UserDisplayContext < 0 )
  {
    v7 = 96LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicforegroundassistant.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return (unsigned int)UserDisplayContext;
  }
  v22 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserInputContext(
                         (Windows::Internal::Shell::Holographic *)&v22,
                         v5);
  if ( UserDisplayContext < 0 )
  {
    v7 = 99LL;
    goto LABEL_6;
  }
  if ( v21 || v22 )
    goto LABEL_19;
  v9 = 0;
  ForegroundWindow = GetForegroundWindow();
  v25 = 0LL;
  v11 = *((_QWORD *)this + 8);
  v12 = *(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v11 + 48LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  if ( v12(v11, ForegroundWindow, &v25) >= 0 )
  {
    v24 = 0LL;
    v26[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v25, v26) >= 0 )
    {
      v13 = v26[0];
      v14 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26[0] + 24LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
      if ( v14(v13, &v24) >= 0 )
      {
        v23 = 0;
        v18 = v24;
        v19 = *(int (__fastcall **)(__int64, const wchar_t *, int *))(*(_QWORD *)v24 + 88LL);
        wil::Feature<__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp>::ReportUsageToService(v16, v15, v17);
        if ( v19(v18, L"Microsoft.MixedReality.Portal_8wekyb3d8bbwe!App", &v23) >= 0 )
          v9 = v23 != 0;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v24);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v25);
  if ( !v9 )
    return 2147942405LL;
LABEL_19:
  v20 = *((_QWORD *)this + 9);
  if ( !v20 )
  {
    UserDisplayContext = -2147467261;
    v7 = 129LL;
    goto LABEL_6;
  }
  UserDisplayContext = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20);
  if ( UserDisplayContext < 0 )
  {
    v7 = 130LL;
    goto LABEL_6;
  }
  return 0LL;
}
