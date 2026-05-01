/*
 * XREFs of ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x180138B30
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180138B80 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x18013AC88 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     wil::details::RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__&___ptr64_ @ 0x180137EE0 (wil--details--RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15__-___ptr64_.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18013B4A0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@wil@@CAX_NW4Repor.c)
 */

__int64 __fastcall TaskbarLayoutPolicyManager::CanApplyMDMLayout(
        TaskbarLayoutPolicyManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rcx
  char v5; // r9
  struct DiagnosticsInfo v7[3]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+38h] [rbp-10h]
  struct DiagnosticsInfo retaddr; // [rsp+48h] [rbp+0h]
  TaskbarLayoutPolicyManager *v10; // [rsp+50h] [rbp+8h] BYREF

  v7[2] = 0LL;
  v7[0] = retaddr;
  v7[1] = (struct DiagnosticsInfo)"pcshell\\twinui\\flexibletaskbarlayout\\lib\\taskbarlayoutpolicymanager.cpp";
  v8 = 285;
  v10 = this;
  wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::ReportUsageToService(this, a2, a3, a4);
  return wil::details::RunFeatureDispatch__lambda_d6345a2b433034ec221583a2ac3cef15______ptr64_(
           v4,
           v7,
           (__int64)&v10,
           v5);
}
