/*
 * XREFs of _anonymous_namespace_::GetApplicationViewImageName @ 0x1801DBE48
 * Callers:
 *     _anonymous_namespace_::GetAppViewFileName @ 0x1801DBD50 (_anonymous_namespace_--GetAppViewFileName.c)
 *     ?GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z @ 0x1801DCED0 (-GetShellItemForView@TabViewManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellItem@@@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$QueryFullProcessImageNameW@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJPEAXKAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x1801D032C (--$QueryFullProcessImageNameW@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall anonymous_namespace_::GetApplicationViewImageName(void **a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  char *v5; // rbx
  int v6; // eax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD dwProcessId; // [rsp+58h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+60h] [rbp+18h] BYREF
  char *v12; // [rsp+68h] [rbp+20h]

  *a1 = 0LL;
  hWnd = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &hWnd);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      106LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v3);
    __debugbreak();
  }
  dwProcessId = 0;
  if ( GetWindowThreadProcessId(hWnd, &dwProcessId) )
  {
    v5 = (char *)OpenProcess(0x1000u, 0, dwProcessId);
    v12 = v5;
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v6 = wil::QueryFullProcessImageNameW<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>,256>(
             (__int64)v5,
             v4,
             a1);
      if ( v6 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          115LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          (const char *)(unsigned int)v6);
        __debugbreak();
      }
      if ( !*a1 )
        wil::details::in1diag3::_Throw_NullAlloc(
          retaddr,
          116LL,
          (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
          v7);
    }
    if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      CloseHandle(v5);
  }
  return a1;
}
