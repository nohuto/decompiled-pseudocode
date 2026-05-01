/*
 * XREFs of ?PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ @ 0x1801B9540
 * Callers:
 *     <none>
 * Callees:
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x18000B1B8 (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x18000B684 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     _TlgKeywordOn @ 0x180015F5C (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180017494 (_TlgWrite.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x180129AF8 (--$As@UIWinRTApplicationView@@@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801B4B1C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp@@@wi.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x1801B8A68 (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
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
  bool v9; // si
  HWND ForegroundWindow; // rdi
  __int64 v11; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18; // [rsp+38h] [rbp-19h] BYREF
  int v19; // [rsp+3Ch] [rbp-15h] BYREF
  int v20; // [rsp+40h] [rbp-11h] BYREF
  __int64 v21; // [rsp+48h] [rbp-9h] BYREF
  __int64 v22; // [rsp+50h] [rbp-1h] BYREF
  __int64 v23[2]; // [rsp+58h] [rbp+7h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v23[1] = -2LL;
  v3 = (const struct _TlgProvider_t *)wil::details::static_lazy<HolographicPositionerProvider>::get(
                                        (__int64)this,
                                        (void (__cdecl *)())lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_)[1];
  if ( *(_DWORD *)v3 > 4u && TlgKeywordOn(v3, 0x400000000000uLL) )
    TlgWrite(v4, &unk_180455DA0, 0LL, 0LL, 2u, &pData);
  v18 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v18,
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
  v19 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserInputContext(
                         (Windows::Internal::Shell::Holographic *)&v19,
                         v5);
  if ( UserDisplayContext < 0 )
  {
    v7 = 99LL;
    goto LABEL_6;
  }
  if ( v18 || v19 )
    goto LABEL_19;
  v9 = 0;
  ForegroundWindow = GetForegroundWindow();
  v22 = 0LL;
  v11 = *((_QWORD *)this + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( (*(int (__fastcall **)(__int64, HWND, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, ForegroundWindow, &v22) >= 0 )
  {
    v21 = 0LL;
    v23[0] = 0LL;
    if ( (int)Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(&v22, v23) >= 0 )
    {
      v12 = v23[0];
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v21) >= 0 )
      {
        v20 = 0;
        v16 = v21;
        wil::Feature<__WilFeatureTraits_Feature_MixedRealityPortalInboxStoreApp>::ReportUsageToService(v14, v13, v15);
        if ( (*(int (__fastcall **)(__int64, const wchar_t *, int *))(*(_QWORD *)v16 + 88LL))(
               v16,
               L"Microsoft.MixedReality.Portal_8wekyb3d8bbwe!App",
               &v20) >= 0 )
          v9 = v20 != 0;
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v23);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
  if ( !v9 )
    return 2147942405LL;
LABEL_19:
  v17 = *((_QWORD *)this + 9);
  if ( !v17 )
  {
    UserDisplayContext = -2147467261;
    v7 = 129LL;
    goto LABEL_6;
  }
  UserDisplayContext = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 24LL))(v17);
  if ( UserDisplayContext < 0 )
  {
    v7 = 130LL;
    goto LABEL_6;
  }
  return 0LL;
}
