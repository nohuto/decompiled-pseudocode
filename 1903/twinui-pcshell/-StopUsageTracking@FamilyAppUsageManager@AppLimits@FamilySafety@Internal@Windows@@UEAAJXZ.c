/*
 * XREFs of ?StopUsageTracking@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJXZ @ 0x1800A5050
 * Callers:
 *     ?UnsubscribeFromServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800A5320 (-UnsubscribeFromServices@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEA.c)
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800549D0 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ @ 0x1800A54E0 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::StopUsageTracking(
        Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager *this,
        __int64 a2,
        __int64 a3)
{
  const char *v3; // r9
  struct wil::details::IFunctorHost *v4; // r8
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+28h] [rbp-60h] BYREF
  struct DiagnosticsInfo v7; // [rsp+38h] [rbp-50h] BYREF
  const char *v8; // [rsp+40h] [rbp-48h]
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int16 v10; // [rsp+50h] [rbp-38h]
  _BYTE v11[8]; // [rsp+58h] [rbp-30h] BYREF
  __int64 v12; // [rsp+60h] [rbp-28h]
  int v13; // [rsp+6Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char *v15; // [rsp+90h] [rbp+8h] BYREF

  v15 = (char *)this - 120;
  v7 = (struct DiagnosticsInfo)retaddr;
  v8 = "pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp";
  v9 = 0LL;
  v10 = 99;
  try
  {
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::__private_IsEnabled(
                            this,
                            a2,
                            a3) )
    {
      v6[0] = off_180430BF8;
      v6[1] = &v15;
      wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v11, 20295383, &v7);
      wil::details::RunFunctor((wil::details *)v6, (struct wil::details::IFunctor *)v11, v4);
      if ( v12 )
        *(_DWORD *)(v12 + 16) = v13;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v15) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x6A,
                     (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                     v3);
    return (unsigned int)v15;
  }
  return result;
}
