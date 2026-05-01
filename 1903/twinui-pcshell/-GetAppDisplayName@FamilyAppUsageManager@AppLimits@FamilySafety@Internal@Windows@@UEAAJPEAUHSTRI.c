/*
 * XREFs of ?GetAppDisplayName@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@PEAPEAU6@@Z @ 0x1800A2910
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800549D0 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ @ 0x1800A54E0 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetAppDisplayName(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  const char *v3; // r9
  struct wil::details::IFunctorHost *v4; // r8
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-78h] BYREF
  struct DiagnosticsInfo v8; // [rsp+48h] [rbp-60h] BYREF
  const char *v9; // [rsp+50h] [rbp-58h]
  __int64 v10; // [rsp+58h] [rbp-50h]
  __int16 v11; // [rsp+60h] [rbp-48h]
  __int64 v12; // [rsp+68h] [rbp-40h]
  _BYTE v13[8]; // [rsp+70h] [rbp-38h] BYREF
  __int64 v14; // [rsp+78h] [rbp-30h]
  int v15; // [rsp+84h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  HSTRING v17; // [rsp+B8h] [rbp+10h] BYREF
  HSTRING *v18; // [rsp+C0h] [rbp+18h] BYREF

  v18 = a3;
  v17 = a2;
  v12 = -2LL;
  *a3 = 0LL;
  v7[0] = &v17;
  v7[1] = (char *)this - 120;
  v7[2] = &v18;
  v8 = (struct DiagnosticsInfo)retaddr;
  v9 = "pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp";
  v10 = 0LL;
  v11 = 147;
  try
  {
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::__private_IsEnabled(
                            this,
                            a2,
                            a3) )
    {
      v6[0] = off_180430C20;
      v6[1] = v7;
      wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v13, 20295383, &v8);
      wil::details::RunFunctor((wil::details *)v6, (struct wil::details::IFunctor *)v13, v4);
      if ( v14 )
        *(_DWORD *)(v14 + 16) = v15;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v18) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x9C,
                     (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                     v3);
    return (unsigned int)v18;
  }
  return result;
}
