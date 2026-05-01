/*
 * XREFs of ?TerminateApplication@FamilyAppUsageManager@AppLimits@FamilySafety@Internal@Windows@@UEAAJPEAUHSTRING__@@EW4AppLimitsTerminationType@2345@@Z @ 0x1800A5200
 * Callers:
 *     <none>
 * Callees:
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x1800549D0 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z @ 0x180055138 (-RunFunctor@details@wil@@YAJAEAUIFunctor@12@AEAUIFunctorHost@12@@Z.c)
 *     ?__private_IsEnabled@?$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ @ 0x1800A54E0 (-__private_IsEnabled@-$Feature@U__WilFeatureTraits_Feature_FamilyAppUsageTracking@@@wil@@SA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::FamilySafety::AppLimits::FamilyAppUsageManager::TerminateApplication(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4)
{
  const char *v4; // r9
  struct wil::details::IFunctorHost *v5; // r8
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v8[4]; // [rsp+30h] [rbp-78h] BYREF
  struct DiagnosticsInfo v9; // [rsp+50h] [rbp-58h] BYREF
  const char *v10; // [rsp+58h] [rbp-50h]
  __int64 v11; // [rsp+60h] [rbp-48h]
  __int16 v12; // [rsp+68h] [rbp-40h]
  __int64 v13; // [rsp+70h] [rbp-38h]
  _BYTE v14[8]; // [rsp+78h] [rbp-30h] BYREF
  __int64 v15; // [rsp+80h] [rbp-28h]
  int v16; // [rsp+8Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v18; // [rsp+B8h] [rbp+10h] BYREF
  char v19; // [rsp+C0h] [rbp+18h] BYREF
  int v20; // [rsp+C8h] [rbp+20h] BYREF

  v20 = a4;
  v19 = a3;
  v18 = a2;
  v13 = -2LL;
  v8[0] = &v18;
  v8[1] = &v19;
  v8[2] = &v20;
  v8[3] = a1 - 120;
  v9 = (struct DiagnosticsInfo)retaddr;
  v10 = "pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp";
  v11 = 0LL;
  v12 = 162;
  try
  {
    if ( (unsigned __int8)wil::Feature<__WilFeatureTraits_Feature_FamilyAppUsageTracking>::__private_IsEnabled(
                            a1,
                            a2,
                            a3) )
    {
      v7[0] = off_180430C18;
      v7[1] = v8;
      wil::details::FeatureFunctorHost::FeatureFunctorHost((wil::details::FeatureFunctorHost *)v14, 20295383, &v9);
      wil::details::RunFunctor((wil::details *)v7, (struct wil::details::IFunctor *)v14, v5);
      if ( v15 )
        *(_DWORD *)(v15 + 16) = v16;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB2,
                           (unsigned int)"pcshell\\twinui\\familyappusagemanager\\lib\\familyappusagemanager.cpp",
                           v4);
  }
  return result;
}
