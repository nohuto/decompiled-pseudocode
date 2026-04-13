/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAE@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@@Z @ 0x18009A360
 * Callers:
 *     ?GetEdgeFaviconCache@@YA?AV?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180098C58 (-GetEdgeFaviconCache@@YA-AV-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003584 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000372C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@QEBAJPEA_W_KPEA_K@Z @ 0x18009A64C (--R-$function@$$A6AJPEA_W_KPEA_K@Z@wistd@@QEBAJPEA_W_KPEA_K@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@0@PEB_W_K@Z @ 0x18009A748 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEAX.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>,260>(
        void **a1,
        __int64 a2)
{
  void *v4; // rbx
  unsigned int v5; // edi
  _QWORD *v6; // rcx
  void **v8; // rax
  void *v9; // r14
  __int64 v10; // rcx
  void **v11; // rax
  void *v12; // r14
  _QWORD *v13; // rcx
  int v14; // eax
  const char *v15; // r9
  __int64 v16; // rcx
  void *v17; // r14
  DWORD LastError; // edi
  __int64 v19; // rcx
  int v20[2]; // [rsp+28h] [rbp-E0h] BYREF
  LPVOID pv; // [rsp+30h] [rbp-D8h] BYREF
  void *v22; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID v23; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v24[2]; // [rsp+48h] [rbp-C0h] BYREF
  _WORD v25[264]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A0h] [rbp+198h]

  v24[1] = -2LL;
  v24[0] = a2;
  v4 = 0LL;
  v22 = 0LL;
  v25[0] = 0;
  *(_QWORD *)v20 = 0LL;
  v5 = wistd::function<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v25, 260LL, v20);
  if ( (v5 & 0x80000000) != 0 )
  {
    v6 = *(_QWORD **)(a2 + 112);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(*v6 + 24LL))(v6, *v6);
    return v5;
  }
  if ( *(_QWORD *)v20 > 0x104uLL )
  {
    v11 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
                     &v23,
                     0LL,
                     *(_QWORD *)v20 - 1LL);
    v12 = 0LL;
    if ( &v22 != v11 )
    {
      v22 = *v11;
      v4 = v22;
      *v11 = 0LL;
      v12 = v4;
    }
    if ( v23 )
      CoTaskMemFree(v23);
    v5 = v12 == 0LL ? 0x8007000E : 0;
    if ( !v12 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6A,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)v5);
      v13 = *(_QWORD **)(a2 + 112);
      if ( v13 )
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v13 + 24LL))(v13, *v13);
      return v5;
    }
    pv = 0LL;
    v14 = wistd::function<long (wchar_t *,unsigned __int64,unsigned __int64 *)>::operator()(a2, v4, *(_QWORD *)v20, &pv);
    v5 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6D,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)(unsigned int)v14);
      CoTaskMemFree(v4);
      v16 = *(_QWORD *)(a2 + 112);
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16);
      return v5;
    }
    if ( *(LPVOID *)v20 != pv )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x70,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        v15);
      JUMPOUT(0x18009A61ELL);
    }
  }
  else
  {
    v8 = (void **)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>>>(
                    &pv,
                    v25,
                    *(_QWORD *)v20 - 1LL);
    v9 = 0LL;
    if ( &v22 != v8 )
    {
      v4 = *v8;
      *v8 = 0LL;
      v9 = v4;
    }
    if ( pv )
      CoTaskMemFree(pv);
    v5 = v9 == 0LL ? 0x8007000E : 0;
    if ( !v9 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)v5);
      v10 = *(_QWORD *)(a2 + 112);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
      return v5;
    }
  }
  if ( a1 != v24 )
  {
    v17 = *a1;
    if ( *a1 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v17);
      SetLastError(LastError);
    }
    *a1 = v4;
    v4 = 0LL;
  }
  if ( v4 )
    CoTaskMemFree(v4);
  v19 = *(_QWORD *)(a2 + 112);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
  return 0LL;
}
