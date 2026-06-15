/*
 * XREFs of ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x18002AC58
 * Callers:
 *     ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180033430 (-GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x180002DAC (-_FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800067A0 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?close_reset@?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x180017F30 (-close_reset@-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constant@_K$0A@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180017F70 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180027C94 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180027CCC (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
        LPVOID *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  const char *v6; // r9
  __int64 v7; // rcx
  LPVOID *v9; // rsi
  void *v10; // rbx
  __int64 v11; // rcx
  void (*v12)(void); // rax
  LPVOID *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  const char *v17; // r9
  unsigned int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // rcx
  LPVOID pv; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 **v22; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 *v24; // [rsp+48h] [rbp-B8h] BYREF
  void *v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  void *v27; // [rsp+60h] [rbp-A0h] BYREF
  char v28[512]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2A8h] [rbp+1A8h]

  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
  v4 = *(_QWORD *)(a2 + 112);
  v24 = &v23;
  *(_WORD *)v28 = 0;
  v22 = (unsigned __int64 **)v28;
  v23 = 0LL;
  v26 = 256LL;
  if ( !v4 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 ***, __int64 *, unsigned __int64 **))(*(_QWORD *)v4 + 32LL))(
         v4,
         &v22,
         &v26,
         &v24);
  if ( v5 < 0 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    v7 = *(_QWORD *)(a2 + 112);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
    return (unsigned int)v5;
  }
  if ( v23 <= 0x100 )
  {
    v9 = (LPVOID *)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                     &v22,
                     v28,
                     v23 - 1,
                     v6);
    if ( &pv == v9 )
    {
      v10 = pv;
    }
    else
    {
      v10 = *v9;
      if ( pv )
        wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>::close_reset(pv);
      pv = v10;
      *v9 = 0LL;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v22);
    if ( !v10 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        (const char *)0x8007000ELL);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
      v11 = *(_QWORD *)(a2 + 112);
      if ( v11 )
      {
        v12 = *(void (**)(void))(*(_QWORD *)v11 + 24LL);
LABEL_23:
        v12();
        return 2147942414LL;
      }
      return 2147942414LL;
    }
    goto LABEL_31;
  }
  v13 = (LPVOID *)wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
                    &v22,
                    0LL,
                    v23 - 1,
                    v6);
  if ( &pv == v13 )
  {
    v10 = pv;
  }
  else
  {
    v10 = *v13;
    if ( pv )
      wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>::close_reset(pv);
    pv = v10;
    *v13 = 0LL;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v22);
  if ( !v10 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6A,
      (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
      (const char *)0x8007000ELL);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    v14 = *(_QWORD *)(a2 + 112);
    if ( v14 )
    {
      v12 = *(void (**)(void))(*(_QWORD *)v14 + 24LL);
      goto LABEL_23;
    }
    return 2147942414LL;
  }
  v15 = *(_QWORD *)(a2 + 112);
  v22 = &v24;
  v26 = v23;
  v24 = 0LL;
  v27 = v10;
  if ( !v15 )
    wil::details::in1diag3::_FailFastImmediate_Unexpected(0LL);
  v16 = (*(__int64 (__fastcall **)(__int64, void **, __int64 *, unsigned __int64 ***))(*(_QWORD *)v15 + 32LL))(
          v15,
          &v27,
          &v26,
          &v22);
  v18 = v16;
  if ( v16 >= 0 )
  {
    if ( (unsigned __int64 *)v23 != v24 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x70,
        (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
        v17);
      __debugbreak();
    }
LABEL_31:
    v25 = v10;
    pv = 0LL;
    if ( a1 != &v25 )
    {
      if ( *a1 )
        wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>::close_reset(*a1);
      *a1 = v10;
      v25 = 0LL;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v25);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
    v20 = *(_QWORD *)(a2 + 112);
    if ( v20 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6D,
    (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\win32_helpers.h",
    (const char *)(unsigned int)v16);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&pv);
  v19 = *(_QWORD *)(a2 + 112);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
  return v18;
}
