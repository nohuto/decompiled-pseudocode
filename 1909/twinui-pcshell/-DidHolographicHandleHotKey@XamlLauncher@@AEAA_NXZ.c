/*
 * XREFs of ?DidHolographicHandleHotKey@XamlLauncher@@AEAA_NXZ @ 0x1800470B4
 * Callers:
 *     ?ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180046FD0 (-ShowStartView@XamlLauncher@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@.c)
 * Callees:
 *     ?QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x1800448F0 (-QueryService@XamlLauncher@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180047124 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride@@@w.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall XamlLauncher::DidHolographicHandleHotKey(XamlLauncher *this)
{
  __int64 v2; // rcx
  int v3; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF
  void *v10; // [rsp+58h] [rbp+20h] BYREF

  v6 = -2;
  wil::Feature<__WilFeatureTraits_Feature_HolographicHShellTaskmanOverride>::ReportUsageToService();
  v2 = *((_QWORD *)this + 18);
  if ( !v2 )
    return 0;
  v8 = 0;
  v9 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 56LL))(v2, &v9);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x429,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v3,
      -2);
  if ( v9 == 1 )
  {
    v10 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    if ( XamlLauncher::QueryService(
           (XamlLauncher *)((char *)this + 48),
           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
           &v10) >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(void *, __int64, char *))(*(_QWORD *)v10 + 48LL))(v10, 1LL, &v8);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x436,
          (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v5,
          v6);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  }
  return v8 != 0;
}
