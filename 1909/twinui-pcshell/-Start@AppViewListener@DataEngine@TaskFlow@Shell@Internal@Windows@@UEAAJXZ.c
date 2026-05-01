/*
 * XREFs of ?Start@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1802186B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x18004A5D8 (--0ThreadErrorContext@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_8f04b5e4cd4461d09cdf6c279a7c8340_::operator() @ 0x1800A5274 (_lambda_8f04b5e4cd4461d09cdf6c279a7c8340_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E190 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x1801F1A58 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowSnapSignalsForActivities@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18021845C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowSnapSignalsForActivities@@@wil.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Start(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  HRESULT Instance; // eax
  int v3; // ebx
  __int64 v4; // rdx
  struct DiagnosticsInfo v5; // rbx
  __int64 (__fastcall *v6)(struct DiagnosticsInfo, GUID *, GUID *, char *); // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  bool v10; // dl
  int v11; // eax
  unsigned __int64 v12; // r9
  int v14[2]; // [rsp+38h] [rbp-48h] BYREF
  int v15; // [rsp+44h] [rbp-3Ch]
  _QWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v17[2]; // [rsp+58h] [rbp-28h] BYREF
  const char *v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  __int16 v20; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  struct DiagnosticsInfo ppv; // [rsp+A8h] [rbp+28h] BYREF

  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  Instance = CoCreateInstance(
               &CLSID_ImmersiveShell,
               0LL,
               4u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               (LPVOID *)&ppv);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 48LL;
LABEL_15:
    v12 = (unsigned int)Instance;
    goto LABEL_16;
  }
  v5 = ppv;
  v6 = *(__int64 (__fastcall **)(struct DiagnosticsInfo, GUID *, GUID *, char *))(**(_QWORD **)&ppv + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 12);
  Instance = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v6)(
               v5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               &GUID_1841c6d7_4f9d_42c0_af41_8747538f10e5,
               (char *)this + 96);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 49LL;
    goto LABEL_15;
  }
  Instance = (*(__int64 (__fastcall **)(_QWORD, char *, char *))(**((_QWORD **)this + 12) + 96LL))(
               *((_QWORD *)this + 12),
               (char *)this + 16,
               (char *)this + 104);
  v3 = Instance;
  if ( Instance < 0 )
  {
    v4 = 51LL;
    goto LABEL_15;
  }
  v16[0] = &ppv;
  v16[1] = this;
  *(_QWORD *)v17 = retaddr;
  v18 = "pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp";
  v19 = 0LL;
  v20 = 53;
  wil::Feature<__WilFeatureTraits_Feature_WindowSnapSignalsForActivities>::ReportUsageToService(v8, v7, v9);
  wil::ThreadErrorContext::ThreadErrorContext((wil::ThreadErrorContext *)v14, v10);
  v11 = lambda_8f04b5e4cd4461d09cdf6c279a7c8340_::operator()((__int64)v16);
  v3 = v11;
  if ( v11 < 0 )
    wil::details::ReportFeatureError(
      (wil::details *)(unsigned int)v11,
      (__int64)v14,
      (struct wil::ThreadErrorContext *)0x119D464,
      (__int64)v17);
  if ( *(_QWORD *)v14 )
    *(_DWORD *)(*(_QWORD *)v14 + 16LL) = v15;
  if ( v3 >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *))(**((_QWORD **)this + 11) + 48LL))(
                 *((_QWORD *)this + 11),
                 this);
    v3 = Instance;
    if ( Instance >= 0 )
    {
      v3 = 0;
      goto LABEL_18;
    }
    v4 = 67LL;
    goto LABEL_15;
  }
  v12 = (unsigned int)v3;
  v4 = 65LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
    (const char *)v12);
LABEL_18:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&ppv);
  return (unsigned int)v3;
}
