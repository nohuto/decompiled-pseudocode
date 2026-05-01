/*
 * XREFs of ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x18033C480
 * Callers:
 *     <none>
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180066A44 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@.c)
 *     ??$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJU_GUID@@PEAPEAUIInspectable@@@Z1@Z @ 0x180071638 (--$SetValue@U_GUID@@@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPro.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008901C (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800EE584 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop.c)
 *     ?CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z @ 0x180109160 (-CreateFromValueSet@PropertySetHelper@ShellHelpers@Internal@Windows@@SAJAEAV1234@@Z.c)
 *     _lambda_a4c092b385a4fac3af45bae97c388695_::operator() @ 0x18033BE28 (_lambda_a4c092b385a4fac3af45bae97c388695_--operator().c)
 *     ?SetActiveTabsOnTabletModeExit@CDesktopPositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x18033EE3C (-SetActiveTabsOnTabletModeExit@CDesktopPositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18034213C (-DesktopOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall CDesktopPositioner::ControlGained(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int (__fastcall ***a4)(_QWORD, GUID *, __int64 *))
{
  __int64 v6; // rbx
  int v7; // eax
  const struct _GUID *v8; // rcx
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rdx
  int active; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  HSTRING_HEADER *v18; // rax
  __int64 v19; // r8
  int v20; // eax
  __int64 v21; // rcx
  unsigned int i; // [rsp+38h] [rbp-79h] BYREF
  __int16 v24; // [rsp+3Ch] [rbp-75h]
  void *v25; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-69h] BYREF
  struct IAppLayout *v27; // [rsp+50h] [rbp-61h] BYREF
  __int64 v28; // [rsp+58h] [rbp-59h] BYREF
  __int64 v29; // [rsp+60h] [rbp-51h] BYREF
  __int64 v30[2]; // [rsp+68h] [rbp-49h] BYREF
  GUID v31; // [rsp+78h] [rbp-39h] BYREF
  _QWORD v32[2]; // [rsp+88h] [rbp-29h] BYREF
  HSTRING_HEADER v33; // [rsp+98h] [rbp-19h] BYREF
  __int64 *v34; // [rsp+B0h] [rbp-1h]
  int *v35; // [rsp+B8h] [rbp+7h]
  struct IAppLayout **v36; // [rsp+C0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]
  int v38; // [rsp+128h] [rbp+77h] BYREF

  v38 = a3;
  v32[1] = -2LL;
  v32[0] = a2;
  wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::ReportUsageToService(a1, a2, a3);
  v27 = 0LL;
  v30[0] = 0LL;
  if ( a4 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
    if ( (**a4)(a4, &GUID_0480d776_b053_4a1f_945d_fac2debae8e6, v30) >= 0 )
    {
      *(_QWORD *)&v31.Data1 = 0LL;
      v6 = v30[0];
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
      v7 = (*(__int64 (__fastcall **)(__int64, GUID *, unsigned int *))(*(_QWORD *)v6 + 24LL))(v6, &v31, &i);
      if ( v7 < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          900LL,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v7);
LABEL_20:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v31);
        goto LABEL_21;
      }
      if ( i )
        goto LABEL_20;
      v25 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
      v9 = DesktopOperation_CreateInstance(v8, &v25);
      v10 = retaddr;
      if ( v9 < 0 )
      {
        v11 = 904LL;
LABEL_10:
        wil::details::in1diag3::_Log_Hr(
          v10,
          v11,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v9);
LABEL_19:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v25);
        goto LABEL_20;
      }
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)v25 + 24LL))(v25, *(_QWORD *)&v31.Data1);
      v9 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v25 + 40LL))(v25);
      v10 = retaddr;
      if ( v9 < 0 )
      {
        v11 = 907LL;
        goto LABEL_10;
      }
      v28 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      active = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v25)(
                 v25,
                 &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
                 &v28);
      v13 = retaddr;
      if ( active >= 0 )
      {
        v15 = v28;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
        v16 = (*(__int64 (__fastcall **)(__int64, struct IAppLayout **))(*(_QWORD *)v15 + 48LL))(v15, &v27);
        if ( v16 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            912LL,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v16);
        active = CDesktopPositioner::SetActiveTabsOnTabletModeExit((CDesktopPositioner *)(a1 - 136), v27);
        v13 = retaddr;
        if ( active >= 0 )
          goto LABEL_18;
        v14 = 913LL;
      }
      else
      {
        v14 = 910LL;
      }
      wil::details::in1diag3::_Log_Hr(
        v13,
        v14,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)active);
LABEL_18:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
      goto LABEL_19;
    }
  }
LABEL_21:
  v29 = 0LL;
  v17 = Windows::Internal::ShellHelpers::PropertySetHelper::CreateFromValueSet((struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v29);
  if ( v17 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      923LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v17);
  v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v33, (const WCHAR **)off_180400408);
  v31 = GUID_NULL;
  v20 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<_GUID>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
          (HSTRING)v18[1].Reserved.Reserved1,
          v19,
          (__int128 *)&v31);
  if ( v20 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      924LL,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v20);
  v34 = 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)v32[0] + 24LL))(v32[0], &v26);
  for ( i = 0; i < v26; ++i )
  {
    v33.Reserved.Reserved1 = v32;
    *(_QWORD *)&v33.Reserved.Reserved2[8] = &i;
    *(_QWORD *)&v33.Reserved.Reserved2[16] = a1 - 136;
    v34 = &v29;
    v35 = &v38;
    v36 = &v27;
    lambda_a4c092b385a4fac3af45bae97c388695_::operator()(&v33);
  }
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetCachedFeatureEnabledState(v21);
  i = 0;
  LOBYTE(v24) = 2;
  LODWORD(v25) = 0;
  WORD2(v25) = v24;
  wil::details::ReportUsageToService(
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_WindowingEnvironmentsDesktop>::GetFeaturePropertyCache'::`2'::data,
    15441787LL,
    (const struct FEATURE_LOGGED_TRAITS *)&v25,
    0,
    3);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v30);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v27);
}
