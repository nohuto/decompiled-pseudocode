/*
 * XREFs of _anonymous_namespace_::GetAppViewFileName @ 0x1801DBD50
 * Callers:
 *     ?GetActivationValueSet@TabViewManager@@AEAA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1801DB9E0 (-GetActivationValueSet@TabViewManager@@AEAA-AV-$com_ptr_t@UIPropertySet@Collections@Foundation@W.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004D38C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800FA588 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x1801AD104 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?FindLastPathSegment@wil@@YAPEBGPEBG@Z @ 0x1801DB964 (-FindLastPathSegment@wil@@YAPEBGPEBG@Z.c)
 *     _anonymous_namespace_::GetApplicationViewImageName @ 0x1801DBE48 (_anonymous_namespace_--GetApplicationViewImageName.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall anonymous_namespace_::GetAppViewFileName(void **a1)
{
  const unsigned __int16 *v2; // rdx
  WCHAR *v3; // rcx
  char *LastPathSegment; // rdx
  const char *v5; // r9
  void *v6; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  LPVOID pv; // [rsp+50h] [rbp+20h] BYREF
  LPCWSTR lpStringSource; // [rsp+58h] [rbp+28h] BYREF

  *a1 = 0LL;
  anonymous_namespace_::GetApplicationViewImageName(&lpStringSource);
  v3 = (WCHAR *)lpStringSource;
  if ( lpStringSource )
  {
    LastPathSegment = (char *)wil::FindLastPathSegment(lpStringSource, v2);
    wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      LastPathSegment);
    if ( a1 == &pv )
    {
      v6 = pv;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        a1,
        pv);
      v6 = 0LL;
      pv = 0LL;
    }
    if ( v6 )
      CoTaskMemFree(v6);
    if ( !*a1 )
    {
      wil::details::in1diag3::_Throw_NullAlloc(
        retaddr,
        128LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
        v5);
      __debugbreak();
    }
    v3 = (WCHAR *)lpStringSource;
  }
  if ( v3 )
    CoTaskMemFree(v3);
  return a1;
}
