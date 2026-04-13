/*
 * XREFs of _lambda_67d3978e1092d2b882811411f68ad6cb_::operator() @ 0x18000B7EC
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_67d3978e1092d2b882811411f68ad6cb__&_::Run @ 0x180018740 (wil--details--functor_wrapper_void__lambda_67d3978e1092d2b882811411f68ad6cb__-_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000482C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180005D24 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18000B048 (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 *     ?Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ @ 0x18000B2DC (-Instance@TaskbarContentDeliveryPinningTelemetry@@KAPEAV1@XZ.c)
 *     ?TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z @ 0x18000B3F4 (-TaskbarOutOfSpaceForPin_@TaskbarContentDeliveryPinningTelemetry@@QEAAXPEBG@Z.c)
 *     ?IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ @ 0x18000B4E0 (-IsInRestrictedRegion@Pinning@Mobility@@YA_NXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180014368 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_N@Z @ 0x1800144D0 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_N.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001524C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x1800152C4 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall lambda_67d3978e1092d2b882811411f68ad6cb_::operator()(_DWORD *a1)
{
  LSTATUS ValueW; // eax
  unsigned __int64 v3; // rcx
  char v4; // si
  WCHAR *pvData; // r14
  WCHAR *v6; // rbx
  Mobility::Pinning *v7; // rcx
  HRESULT Instance; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  int v13; // eax
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64, HSTRING, int); // rsi
  HRESULT v16; // eax
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  DWORD v21; // eax
  _DWORD *v22; // rcx
  TaskbarContentDeliveryPinningTelemetry *v23; // rcx
  LSTATUS v24; // eax
  signed int v25; // ebx
  int pdwType; // [rsp+28h] [rbp-69h]
  DWORD pdwValue; // [rsp+48h] [rbp-49h] BYREF
  __int16 v28; // [rsp+4Ch] [rbp-45h]
  _BYTE v29[4]; // [rsp+50h] [rbp-41h] BYREF
  int Data; // [rsp+54h] [rbp-3Dh] BYREF
  __int16 v31; // [rsp+58h] [rbp-39h]
  __int64 v32; // [rsp+60h] [rbp-31h] BYREF
  LPVOID ppv[2]; // [rsp+68h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+78h] [rbp-19h] BYREF
  HSTRING string; // [rsp+90h] [rbp-1h] BYREF
  _BYTE v36[32]; // [rsp+98h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  ppv[1] = (LPVOID)-2LL;
  pdwValue = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"YourPhoneAppTaskbarIconCreated",
             0x20000010u,
             0LL,
             &Data,
             &pdwValue);
  v3 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v3 = (unsigned int)ValueW;
  if ( ((v3 & 0x80000000) != 0LL || !Data)
    && !Mobility::Policy::isTaskbarIconCreationBlockedByPolicy((Mobility::Policy *)v3) )
  {
    pdwValue = 0;
    SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", &pdwValue);
    if ( pdwValue >= 2 )
    {
      v4 = 1;
      if ( RegGetValueW(
             HKEY_LOCAL_MACHINE,
             L"Hardware\\Description\\System\\BIOS",
             L"SystemProductName",
             2u,
             0LL,
             0LL,
             &pdwValue) )
      {
        goto LABEL_14;
      }
      pvData = (WCHAR *)CoTaskMemAlloc(pdwValue);
      v6 = pvData;
      if ( !RegGetValueW(
              HKEY_LOCAL_MACHINE,
              L"Hardware\\Description\\System\\BIOS",
              L"SystemProductName",
              2u,
              0LL,
              pvData,
              &pdwValue) )
      {
        v6 = 0LL;
        if ( CompareStringOrdinal(pvData, -1, L"Surface Go", -1, 1) != 2 )
          goto LABEL_14;
        v4 = 0;
      }
      if ( v6 )
        CoTaskMemFree(v6);
      if ( v4 )
      {
LABEL_14:
        if ( !(unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::__private_IsVariantEqual()
          && Mobility::Pinning::IsInRestrictedRegion(v7)
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
        v9 = retaddr;
        if ( Instance < 0 )
        {
LABEL_52:
          wil::details::in1diag3::Throw_Hr(
            v9,
            (void *)0x9C,
            (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
            (const char *)(unsigned int)Instance);
LABEL_53:
          wil::details::in1diag3::Throw_Hr(
            v12,
            (void *)0x9F,
            (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
            (const char *)(unsigned int)v11);
          __debugbreak();
        }
        v32 = 0LL;
        v10 = *(_QWORD *)ppv[0];
        v32 = 0LL;
        v11 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(v10 + 96))(
                ppv[0],
                &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
                &GUID_f96b5c0d_8f3b_42bd_a71d_20081f499cb3,
                &v32);
        v12 = retaddr;
        if ( v11 < 0 )
          goto LABEL_53;
        v13 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v32 + 96LL))(v32, v29);
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xA2,
            (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
            (const char *)(unsigned int)v13);
          __debugbreak();
        }
        if ( v29[0] )
        {
          v14 = v32;
          v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, HSTRING, int))(*(_QWORD *)v32 + 48LL);
          string = 0LL;
          v16 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
          if ( v16 < 0 )
          {
            Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16);
          }
          else
          {
            v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v36, &off_1800D90A8);
            LOBYTE(pdwType) = 1;
            LOBYTE(v18) = 1;
            v19 = v15(v14, *(_QWORD *)(v17 + 24), v18, string, pdwType);
            v20 = retaddr;
            if ( v19 >= 0 )
            {
              pdwValue = 0;
              v21 = 0;
              if ( *a1 == 1 )
              {
                pdwValue = 1;
                v21 = 1;
              }
              if ( a1[1] == 1 )
              {
                v21 |= 2u;
                pdwValue = v21;
              }
              if ( a1[2] == 1 )
                pdwValue = v21 | 4;
              MobilityExperience::Telemetry::MobilityExperienceTelemetry::YourPhoneTaskbarIconCreated<enum Mobility::Pinning::TaskbarPinReason &>(&pdwValue);
              if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
              {
                wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState();
                if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
                  wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState();
              }
              Data = 2;
              LOBYTE(v31) = 3;
              pdwValue = 2;
              v28 = v31;
              wil_details_FeaturePropertyCache_ReportUsageToService(
                &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data,
                0xF81202u,
                (const struct FEATURE_LOGGED_TRAITS *)&pdwValue,
                1,
                1);
LABEL_40:
              Data = 1;
              v24 = RegSetKeyValueW(
                      HKEY_CURRENT_USER,
                      L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
                      L"YourPhoneAppTaskbarIconCreated",
                      4u,
                      &Data,
                      4u);
              v25 = (unsigned __int16)v24 | 0x80070000;
              if ( v24 <= 0 )
                v25 = v24;
              if ( v25 >= 0 )
                v25 = 0;
              else
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x2A,
                  (__int64)"internal\\onecoreuapshell\\inc\\mobilityexperiencesettings.h",
                  (const char *)(unsigned int)v25);
              if ( v25 >= 0 )
              {
                if ( v32 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
                if ( ppv[0] )
                  (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
                return;
              }
              wil::details::in1diag3::Throw_Hr(
                retaddr,
                (void *)0xB9,
                (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
                (const char *)(unsigned int)v25);
              goto LABEL_52;
            }
          }
          wil::details::in1diag3::Throw_Hr(
            v20,
            (void *)0xA9,
            (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
            (const char *)(unsigned int)v19);
          JUMPOUT(0x18000BC9ALL);
        }
        v22 = (_DWORD *)*((_QWORD *)TaskbarContentDeliveryPinningTelemetry::Instance() + 1);
        if ( v22 && *v22 )
        {
          TaskbarContentDeliveryPinningTelemetry::Instance();
          TaskbarContentDeliveryPinningTelemetry::TaskbarOutOfSpaceForPin_(
            v23,
            L"Microsoft.YourPhone_8wekyb3d8bbwe!App");
        }
        goto LABEL_40;
      }
    }
  }
}
