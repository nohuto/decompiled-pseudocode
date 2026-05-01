/*
 * XREFs of ?AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z @ 0x180244F6C
 * Callers:
 *     _lambda_d7abd66dc512e2fb4770cc647848e269_::operator() @ 0x180244E98 (_lambda_d7abd66dc512e2fb4770cc647848e269_--operator().c)
 *     ?get_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJPEAE@Z @ 0x180245BA0 (-get_UseCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@UEAAJPEAE@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_82b9fb128b50da832dfc7c3793c19385_::operator() @ 0x180244DE0 (_lambda_82b9fb128b50da832dfc7c3793c19385_--operator().c)
 */

__int64 __fastcall TabAppPolicySettings::AppUsesCustomTabsWhenLaunchedIntoNewGroup(
        const unsigned __int16 *a1,
        bool *a2)
{
  int v2; // eax
  int v3; // ebx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  const unsigned __int16 *v7; // [rsp+40h] [rbp+8h] BYREF
  bool *v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = a2;
  v7 = a1;
  *a2 = 0;
  v5[0] = &v7;
  v5[1] = &v8;
  v2 = lambda_82b9fb128b50da832dfc7c3793c19385_::operator()((__int64)v5);
  v3 = v2;
  if ( (unsigned int)(v2 + 2147024894) <= 1 || v2 == -2147024809 )
    v3 = 0;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xC6,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabapppolicysettings.cpp",
      (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
