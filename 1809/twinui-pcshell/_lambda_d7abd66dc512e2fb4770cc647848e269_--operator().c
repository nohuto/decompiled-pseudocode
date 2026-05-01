/*
 * XREFs of _lambda_d7abd66dc512e2fb4770cc647848e269_::operator() @ 0x1801F3AA0
 * Callers:
 *     ?ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z @ 0x1801F46EC (-ViewUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@SA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z @ 0x1801F3B64 (-AppUsesCustomTabsWhenLaunchedIntoNewGroup@TabAppPolicySettings@@CAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_d7abd66dc512e2fb4770cc647848e269_::operator()(bool **a1)
{
  int v2; // ebx
  LPCWCH lpString1; // [rsp+50h] [rbp+8h] BYREF

  lpString1 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpString1,
    0LL);
  v2 = (*(__int64 (__fastcall **)(_QWORD, LPCWCH *))(**(_QWORD **)*a1 + 136LL))(*(_QWORD *)*a1, &lpString1);
  if ( v2 >= 0 )
  {
    v2 = TabAppPolicySettings::AppUsesCustomTabsWhenLaunchedIntoNewGroup(lpString1, a1[1]);
    if ( v2 >= 0 )
    {
      if ( !*a1[1]
        && CompareStringOrdinal(lpString1, -1, L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge", -1, 1) == 2 )
      {
        *a1[1] = 1;
      }
      v2 = 0;
    }
  }
  if ( lpString1 )
    CoTaskMemFree((LPVOID)lpString1);
  return (unsigned int)v2;
}
