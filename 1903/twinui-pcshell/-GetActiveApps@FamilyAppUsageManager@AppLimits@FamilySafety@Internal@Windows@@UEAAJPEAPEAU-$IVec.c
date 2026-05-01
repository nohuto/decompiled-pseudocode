/*
 * XREFs of ?GetActiveApps@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@5@@Z @ 0x1800A2800
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800549D0 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ @ 0x1800A54E0 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::GetActiveApps(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  const char *v3; // r9
  struct wil::details::IFunctorHost *v4; // r8
  __int64 result; // rax
  _QWORD v6[2]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v7[2]; // [rsp+38h] [rbp-60h] BYREF
  struct DiagnosticsInfo v8; // [rsp+48h] [rbp-50h] BYREF
  const char *v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int16 v11; // [rsp+60h] [rbp-38h]
  _BYTE v12[8]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v13; // [rsp+70h] [rbp-28h]
  int v14; // [rsp+7Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  _QWORD *v16; // [rsp+A8h] [rbp+10h] BYREF

  v16 = a2;
  *a2 = 0LL;
  v6[0] = a1 - 120;
  v6[1] = &v16;
  v8 = (struct DiagnosticsInfo)retaddr;
  v9 = "pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp";
  v10 = 0LL;
  v11 = 111;
  try
  {
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::__private_IsEnabled(
                            a1,
                            a2,
                            a3) )
    {
      v7[0] = off_180430C10;
      v7[1] = v6;
      wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v12, 20295383, &v8);
      wil::details::RunFunctor((wil::details *)v7, (struct wil::details::IFunctor *)v12, v4);
      if ( v13 )
        *(_DWORD *)(v13 + 16) = v14;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x82,
                     (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                     v3);
    return (unsigned int)v16;
  }
  return result;
}
