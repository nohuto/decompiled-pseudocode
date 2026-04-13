/*
 * XREFs of _lambda_437d9aff03d6676e5c9009da627b8fcc_::operator() @ 0x18000B238
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_437d9aff03d6676e5c9009da627b8fcc__&___ptr64_::Run @ 0x180018400 (wil--details--functor_wrapper_void__lambda_437d9aff03d6676e5c9009da627b8fcc__-___ptr64_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000366C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003864 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18000480C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000A088 (-ReportUsageToService@details@wil@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_.c)
 *     ?isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ @ 0x18000AF68 (-isTaskbarIconCreationBlockedByPolicy@Policy@Mobility@@YA_NXZ.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18001407C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_NW4Variant_YourPhoneTaskbarIcon@@W4VariantReportingKind@2@_N@Z @ 0x1800141E4 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_YourPhoneTaskbarIcon@@@wil@@SA_N.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180014F6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTelemetry@Telemetry@MobilityExperience@@SAXAEAW4TaskbarPinReason@Pinning@Mobility@@@Z @ 0x180015004 (--$YourPhoneTaskbarIconCreated@AEAW4TaskbarPinReason@Pinning@Mobility@@@MobilityExperienceTeleme.c)
 *     __security_check_cookie @ 0x1800C6A00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C7DF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall lambda_437d9aff03d6676e5c9009da627b8fcc_::operator()(_DWORD *a1)
{
  void *v1; // rbx
  LSTATUS ValueW; // eax
  unsigned __int64 v4; // rcx
  char v5; // si
  void *pvData; // r14
  HRESULT v7; // eax
  __int64 v8; // rcx
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rbx
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  const WCHAR *StringRawBuffer; // rax
  bool v14; // bl
  HRESULT Instance; // eax
  wil::details::in1diag3 *v16; // rcx
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // rbx
  HRESULT v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  LSTATUS v25; // eax
  DWORD v26; // eax
  int pdwType; // [rsp+28h] [rbp-59h]
  DWORD pdwValue[2]; // [rsp+48h] [rbp-39h] BYREF
  __int64 Data; // [rsp+50h] [rbp-31h] BYREF
  __int64 v30; // [rsp+58h] [rbp-29h] BYREF
  LPVOID ppv[2]; // [rsp+60h] [rbp-21h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp-11h] BYREF
  HSTRING string; // [rsp+88h] [rbp+7h] BYREF
  _BYTE v34[32]; // [rsp+90h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  ppv[1] = (LPVOID)-2LL;
  pdwValue[0] = 4;
  ValueW = RegGetValueW(
             HKEY_CURRENT_USER,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
             L"YourPhoneAppTaskbarIconCreated",
             0x20000010u,
             0LL,
             &Data,
             pdwValue);
  v4 = (unsigned __int16)ValueW | 0x80070000;
  if ( ValueW <= 0 )
    v4 = (unsigned int)ValueW;
  if ( (v4 & 0x80000000) == 0LL && (_DWORD)Data )
    return;
  if ( Mobility::Policy::isTaskbarIconCreationBlockedByPolicy((Mobility::Policy *)v4) )
    return;
  pdwValue[0] = 0;
  SLGetWindowsInformationDWORD(L"ContentDeliveryManager-License-ContentDeliveryAllowed", pdwValue);
  if ( pdwValue[0] < 2 )
    return;
  v5 = 1;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Hardware\\Description\\System\\BIOS",
          L"SystemProductName",
          2u,
          0LL,
          0LL,
          pdwValue) )
  {
    pvData = CoTaskMemAlloc(pdwValue[0]);
    v1 = pvData;
    if ( RegGetValueW(
           HKEY_LOCAL_MACHINE,
           L"Hardware\\Description\\System\\BIOS",
           L"SystemProductName",
           2u,
           0LL,
           pvData,
           pdwValue) )
    {
      goto LABEL_11;
    }
    v1 = 0LL;
    if ( CompareStringOrdinal((LPCWCH)pvData, -1, L"Surface Go", -1, 1) == 2 )
    {
      v5 = 0;
LABEL_11:
      if ( v1 )
        CoTaskMemFree(v1);
      if ( !v5 )
        return;
    }
  }
  if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::__private_IsVariantEqual() )
    goto LABEL_32;
  Data = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(L"Windows.Globalization.GeographicRegion", 0x26u, &hstringHeader, &string);
  if ( v7 < 0 )
  {
LABEL_58:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
LABEL_59:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x85,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
      (const char *)(unsigned int)v1);
    goto LABEL_60;
  }
  v8 = Data;
  Data = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  Data = 0LL;
  LODWORD(v1) = RoActivateInstance(string, &v30);
  if ( (int)v1 >= 0 )
  {
    if ( *(_QWORD *)&GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      Data = v30;
    }
    else
    {
      LODWORD(v1) = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v30)(
                      v30,
                      &GUID_01e9a621_4a64_4ed9_954f_9edeb07bd903,
                      &Data);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
  v9 = retaddr;
  if ( (int)v1 < 0 )
    goto LABEL_59;
  *(_QWORD *)pdwValue = 0LL;
  v10 = Data;
  WindowsDeleteString(0LL);
  *(_QWORD *)pdwValue = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, DWORD *))(*(_QWORD *)v10 + 56LL))(v10, pdwValue);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_60:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x87,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
      (const char *)(unsigned int)v11);
LABEL_61:
    wil::details::in1diag3::Throw_Hr(
      v16,
      (void *)0x93,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
      (const char *)(unsigned int)Instance);
LABEL_62:
    wil::details::in1diag3::Throw_Hr(
      v18,
      (void *)0x96,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
      (const char *)(unsigned int)v17);
    __debugbreak();
  }
  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)pdwValue, 0LL);
  v14 = CompareStringOrdinal(StringRawBuffer, -1, L"CN", -1, 0) == 2;
  WindowsDeleteString(*(HSTRING *)pdwValue);
  *(_QWORD *)pdwValue = 0LL;
  if ( Data )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Data + 16LL))(Data);
  if ( !v14 )
  {
LABEL_32:
    if ( *a1 == 2 || a1[1] == 2 || *a1 != 1 && a1[1] != 1 && a1[2] != 1 )
      return;
    ppv[0] = 0LL;
    Instance = CoCreateInstance(
                 &GUID_228826af_02e1_4226_a9e0_99a855e455a6,
                 0LL,
                 0x404u,
                 &GUID_9767060c_9476_42e2_8f7b_2f10fd13765c,
                 ppv);
    v16 = retaddr;
    if ( Instance < 0 )
      goto LABEL_61;
    v30 = 0LL;
    v17 = (*(__int64 (__fastcall **)(LPVOID, GUID *, GUID *, __int64 *))(*(_QWORD *)ppv[0] + 96LL))(
            ppv[0],
            &GUID_db147050_dcbf_4699_abaf_273e512e2a91,
            &GUID_8fe68768_eeb4_415e_b678_ddaf57ffab61,
            &v30);
    v18 = retaddr;
    if ( v17 < 0 )
      goto LABEL_62;
    v19 = v30;
    string = 0LL;
    v20 = WindowsCreateStringReference(&Src, 0, &hstringHeader, &string);
    if ( v20 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v20);
    }
    else
    {
      v21 = *(_QWORD *)(Microsoft::WRL::Wrappers::HStringReference::HStringReference(v34, &off_1800D4F50) + 24);
      LOBYTE(pdwType) = 1;
      LOBYTE(v22) = 1;
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, HSTRING, int))(*(_QWORD *)v19 + 48LL))(
              v19,
              v21,
              v22,
              string,
              pdwType);
      v24 = retaddr;
      if ( v23 >= 0 )
      {
        LODWORD(Data) = 1;
        v25 = RegSetKeyValueW(
                HKEY_CURRENT_USER,
                L"Software\\Microsoft\\Windows\\CurrentVersion\\Mobility",
                L"YourPhoneAppTaskbarIconCreated",
                4u,
                &Data,
                4u);
        LODWORD(v1) = (unsigned __int16)v25 | 0x80070000;
        if ( v25 <= 0 )
          LODWORD(v1) = v25;
        if ( (int)v1 >= 0 )
          LODWORD(v1) = 0;
        else
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x27,
            (__int64)"internal\\onecoreuapshell\\inc\\mobilityexperiencesettings.h",
            (const char *)(unsigned int)v1);
        if ( (int)v1 >= 0 )
        {
          pdwValue[0] = 0;
          v26 = 0;
          if ( *a1 == 1 )
          {
            pdwValue[0] = 1;
            v26 = 1;
          }
          if ( a1[1] == 1 )
          {
            v26 |= 2u;
            pdwValue[0] = v26;
          }
          if ( a1[2] == 1 )
            pdwValue[0] = v26 | 4;
          MobilityExperience::Telemetry::MobilityExperienceTelemetry::YourPhoneTaskbarIconCreated<enum Mobility::Pinning::TaskbarPinReason &>(pdwValue);
          if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
          {
            wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState();
            if ( (`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
              wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetCachedFeatureEnabledState();
          }
          LODWORD(Data) = 2;
          BYTE4(Data) = 3;
          pdwValue[0] = 2;
          LOWORD(pdwValue[1]) = WORD2(Data);
          wil::details::ReportUsageToService(
            &`wil::Feature<__WilFeatureTraits_Feature_YourPhoneTaskbarIcon>::GetFeaturePropertyCache'::`2'::data,
            0xF81202u,
            (const struct FEATURE_LOGGED_TRAITS *)pdwValue,
            1);
          if ( v30 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
          if ( ppv[0] )
            (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
          return;
        }
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x9D,
          (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
          (const char *)(unsigned int)v1);
        goto LABEL_58;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v24,
      (void *)0x9A,
      (__int64)"internal\\onecoreuapshell\\inc\\mobilitypinning.h",
      (const char *)(unsigned int)v23);
    JUMPOUT(0x18000B7F1LL);
  }
}
