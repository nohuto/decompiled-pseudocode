/*
 * XREFs of _lambda_67d3978e1092d2b882811411f68ad6cb_::operator() @ 0x18000B8AC
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_67d3978e1092d2b882811411f68ad6cb__&_::Run @ 0x180018BD0 (wil--details--functor_wrapper_void__lambda_67d3978e1092d2b882811411f68ad6cb__-_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?IsActiveSessionCountLimited@@YA_NXZ @ 0x18000A6F0 (-IsActiveSessionCountLimited@@YA_NXZ.c)
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18000B108 (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 *     ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000B39C (-Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ.c)
 *     ?TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z @ 0x18000B4B4 (-TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z.c)
 *     ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x18000B5A0 (-IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241@@@wil@@SA_NXZ @ 0x18001369C (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241@@@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800145E4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_N@Z @ 0x18001474C (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_N.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001563C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x1800156B4 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 *     __security_check_cookie @ 0x1800CAA90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBEA0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_67d3978e1092d2b882811411f68ad6cb_::operator()(_DWORD *a1)
{
  LSTATUS ValueW; // eax
  unsigned __int64 v3; // rcx
  DWORD v4; // eax
  char v5; // si
  WCHAR *pvData; // r14
  WCHAR *v7; // rbx
  Mobility::Pinning *v8; // rcx
  HRESULT Instance; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, _QWORD, __int64, HSTRING, int); // rsi
  HRESULT v17; // eax
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // eax
  wil::details::in1diag3 *v21; // rcx
  DWORD v22; // eax
  _DWORD *v23; // rcx
  TaskbarContentDeliveryPinningTelemetry *v24; // rcx
  LSTATUS v25; // eax
  signed int v26; // ebx
  int pdwType; // [rsp+28h] [rbp-69h]
  DWORD Data; // [rsp+48h] [rbp-49h] BYREF
  __int16 v29; // [rsp+4Ch] [rbp-45h]
  DWORD pdwValue; // [rsp+50h] [rbp-41h] BYREF
  __int16 v31; // [rsp+54h] [rbp-3Dh]
  _BYTE v32[8]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v33; // [rsp+60h] [rbp-31h] BYREF
  LPVOID ppv[2]; // [rsp+68h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-19h] BYREF
  HSTRING string; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v37[32]; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  ppv[1] = (LPVOID)-2LL;
  Data = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"YourPhoneAppTaskbarIconCreated",
             0x20000010u,
             0LL,
             &pdwValue,
             &Data);
  v3 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v3 = (unsigned int)ValueW;
  if ( (v3 & 0x80000000) == 0LL && pdwValue
    || Mobility::Policy::isTaskbarIconCreationBlockedByPolicy((Mobility::Policy *)v3) )
  {
    return;
  }
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_Servicing_DisableCDMInWVD_33207241>::__private_IsEnabled() )
  {
    pdwValue = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", &pdwValue);
    v4 = pdwValue;
    goto LABEL_10;
  }
  if ( IsActiveSessionCountLimited() )
  {
    Data = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", &Data);
    v4 = Data;
LABEL_10:
    if ( v4 < 2 )
      return;
  }
  v5 = 1;
  if ( RegGetValueW(
         HKEY_LOCAL_MACHINE,
         L"Hardware\\Description\\System\\BIOS",
         L"SystemProductName",
         2u,
         0LL,
         0LL,
         &Data) )
  {
    goto LABEL_18;
  }
  pvData = (WCHAR *)CoTaskMemAlloc(Data);
  v7 = pvData;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Hardware\\Description\\System\\BIOS",
          L"SystemProductName",
          2u,
          0LL,
          pvData,
          &Data) )
  {
    v7 = 0LL;
    if ( CompareStringOrdinal(pvData, -1, L"Surface Go", -1, 1) != 2 )
      goto LABEL_18;
    v5 = 0;
  }
  if ( v7 )
    CoTaskMemFree(v7);
  if ( v5 )
  {
LABEL_18:
    if ( !(unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::__private_IsVariantEqual()
      && Mobility::Pinning::IsInRestrictedRegion(v8)
      || *a1 == 2
      || a1[1] == 2
      || *a1 != 1 && a1[1] != 1 && a1[2] != 1 )
    {
      return;
    }
    ppv[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
                 0LL,
                 0x404u,
                 &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
                 ppv);
    v10 = retaddr;
    if ( Instance < 0 )
    {
LABEL_56:
      wil::details::in1diag3::Throw_Hr(
        v10,
        (void *)0x9C,
        (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
        (const char *)(unsigned int)Instance);
LABEL_57:
      wil::details::in1diag3::Throw_Hr(
        v13,
        (void *)0x9F,
        (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
        (const char *)(unsigned int)v12);
      __debugbreak();
    }
    v33 = 0LL;
    v11 = *(_QWORD *)ppv[0];
    v33 = 0LL;
    v12 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(v11 + 96))(
            ppv[0],
            &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
            &GUID_f96b5c0d_8f3b_42bd_a71d_20081f499cb3,
            &v33);
    v13 = retaddr;
    if ( v12 < 0 )
      goto LABEL_57;
    v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v33 + 96LL))(v33, v32);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    if ( v32[0] )
    {
      v15 = v33;
      v16 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, HSTRING, int))(*(_QWORD *)v33 + 48LL);
      string = 0LL;
      v17 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
      if ( v17 < 0 )
      {
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v17);
      }
      else
      {
        v18 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v37, &off_1800D9258);
        LOBYTE(pdwType) = 1;
        LOBYTE(v19) = 1;
        v20 = v16(v15, *(_QWORD *)(v18 + 24), v19, string, pdwType);
        v21 = retaddr;
        if ( v20 >= 0 )
        {
          pdwValue = 0;
          v22 = 0;
          if ( *a1 == 1 )
          {
            pdwValue = 1;
            v22 = 1;
          }
          if ( a1[1] == 1 )
          {
            v22 |= 2u;
            pdwValue = v22;
          }
          if ( a1[2] == 1 )
            pdwValue = v22 | 4;
          MobilityExperience::Telemetry::MobilityExperienceTelemetry::YourPhoneTaskbarIconCreated<enum Mobility::Pinning::TaskbarPinReason &>(&pdwValue);
          if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
          {
            wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState();
            if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
              wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState();
          }
          Data = 2;
          LOBYTE(v29) = 3;
          pdwValue = 2;
          v31 = v29;
          wil_details_FeaturePropertyCache_ReportUsageToService(
            &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data,
            0xF81202u,
            (const struct FEATURE_LOGGED_TRAITS *)&pdwValue,
            1,
            1);
LABEL_44:
          Data = 1;
          v25 = RegSetKeyValueW(
                  HKEY_CURRENT_USER,
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
                  L"YourPhoneAppTaskbarIconCreated",
                  4u,
                  &Data,
                  4u);
          v26 = (unsigned __int16)v25 | 0x80070000;
          if ( v25 <= 0 )
            v26 = v25;
          if ( v26 >= 0 )
            v26 = 0;
          else
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2A,
              (__int64)"internal\\onecoreuapshell\\inc\\mobilityexperiencesettings.h",
              (const char *)(unsigned int)v26);
          if ( v26 >= 0 )
          {
            if ( v33 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            if ( ppv[0] )
              (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
            return;
          }
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xB9,
            (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
            (const char *)(unsigned int)v26);
          goto LABEL_56;
        }
      }
      wil::details::in1diag3::Throw_Hr(
        v21,
        (void *)0xA9,
        (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
        (const char *)(unsigned int)v20);
      JUMPOUT(0x18000BD8ALL);
    }
    v23 = (_DWORD *)*((_QWORD *)TaskbarContentDeliveryPinningTelemetry::Instance() + 1);
    if ( v23 && *v23 )
    {
      TaskbarContentDeliveryPinningTelemetry::Instance();
      TaskbarContentDeliveryPinningTelemetry::TaskbarOutOfSpaceForPin_(v24, L"Microsoft.YourPhone_8wekyb3d8bbwe!App");
    }
    goto LABEL_44;
  }
}
