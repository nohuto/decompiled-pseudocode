/*
 * XREFs of ?ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z @ 0x18026512C
 * Callers:
 *     ?EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH@Z @ 0x18024E1D0 (-EvaluateViewGroupingAndManagement@TabViewManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAH.c)
 *     _anonymous_namespace_::IsTabGroupAppManaged @ 0x180251400 (_anonymous_namespace_--IsTabGroupAppManaged.c)
 * Callees:
 *     _lambda_d7abd66dc512e2fb4770cc647848e269_::operator() @ 0x180264488 (_lambda_d7abd66dc512e2fb4770cc647848e269_--operator().c)
 */

char __fastcall TabAppPolicySettings::ViewUsesCustomTabsWhenLaunchedIntoNewGroup(struct IApplicationView *a1)
{
  __int64 *v2[4]; // [rsp+28h] [rbp-20h] BYREF
  struct IApplicationView *v3; // [rsp+50h] [rbp+8h] BYREF
  char v4; // [rsp+58h] [rbp+10h] BYREF

  v3 = a1;
  v4 = 0;
  v2[0] = (__int64 *)&v3;
  v2[1] = (__int64 *)&v4;
  lambda_d7abd66dc512e2fb4770cc647848e269_::operator()(v2);
  return v4;
}
