/*
 * XREFs of ?CanApplyMDMLayout@TaskbarLayoutPolicyManager@@AEAAHXZ @ 0x18016390C
 * Callers:
 *     ?CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z @ 0x180163960 (-CanApplyTaskbarLayout@TaskbarLayoutPolicyManager@@UEAAJW4TaskbarLayoutType@@PEAH1@Z.c)
 *     ?PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV?$CCoSimpleArray@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskbarLayoutItem@@@WRL@Microsoft@@@@@@@Z @ 0x180165A60 (-PopulateEnterpriseLayoutItems@TaskbarLayoutPolicyManager@@AEAAJAEAV-$CCoSimpleArray@V-$ComPtr@U.c)
 * Callees:
 *     wil::details::RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c__&_ @ 0x180162BF0 (wil--details--RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c__-_.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180166320 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MdmSupportForEdu@@@wil@@CAX_NW4Repor.c)
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
  v8 = 283;
  v10 = this;
  wil::Feature<__WilFeatureTraits_Feature_MdmSupportForEdu>::ReportUsageToService(this, a2, a3, a4);
  return wil::details::RunFeatureDispatch__lambda_402144f3e77278201ba8e2dd3da35b8c____(v4, v7, (__int64)&v10, v5);
}
