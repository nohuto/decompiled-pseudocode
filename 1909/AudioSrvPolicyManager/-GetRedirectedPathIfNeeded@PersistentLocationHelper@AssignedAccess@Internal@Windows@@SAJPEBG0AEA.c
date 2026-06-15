/*
 * XREFs of ?GetRedirectedPathIfNeeded@PersistentLocationHelper@AssignedAccess@Internal@Windows@@SAJPEBG0AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180033330
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x1800328CC (GetAssignedAccessTypeForUser.c)
 *     ?Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ @ 0x180033A40 (-Initialize@AssignedAccessConfigStoreV1@AssignedAccess@Internal@Windows@@MEAA_NXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180006730 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?close_reset@?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@SAXPEAG@Z @ 0x180017F40 (-close_reset@-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constant@_K$0A@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180017F80 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180027DC4 (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     ??$AdaptFixedSizeToAllocatedResult@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@$0BAA@@wil@@YAJAEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@V?$function@$$A6AJPEAG_KPEA_K@Z@wistd@@@Z @ 0x18002ABB8 (--$AdaptFixedSizeToAllocatedResult@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AX.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::PersistentLocationHelper::GetRedirectedPathIfNeeded(
        char *a1,
        __int64 a2,
        LPVOID *a3,
        const char *a4)
{
  LPVOID *v5; // rax
  LPVOID *v6; // rdi
  void *v7; // rsi
  int v9; // eax
  __int64 v10; // r8
  const char *v11; // r9
  unsigned int v12; // edi
  char *v13; // rdx
  LPVOID *cotaskmem_string_nothrow; // rax
  LPVOID *v15; // rdi
  void *v16; // rsi
  __int128 v17; // [rsp+28h] [rbp-49h] BYREF
  char v18[8]; // [rsp+38h] [rbp-39h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+40h] [rbp-31h] BYREF
  __int128 v20; // [rsp+48h] [rbp-29h]
  __int64 (__fastcall ***v21)(); // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  char *v23; // [rsp+D8h] [rbp+67h] BYREF
  __int64 v24; // [rsp+E0h] [rbp+6Fh] BYREF
  char *v25; // [rsp+F0h] [rbp+7Fh] BYREF

  v24 = a2;
  v23 = a1;
  if ( a2 )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&v25);
    *(_QWORD *)&v17 = &v23;
    *((_QWORD *)&v17 + 1) = &v24;
    v19 = off_18003A4C8;
    v21 = &v19;
    v20 = v17;
    v9 = wil::AdaptFixedSizeToAllocatedResult<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>,256>(
           (LPVOID *)&v25,
           (__int64)v18);
    v12 = v9;
    if ( v9 >= 0 )
    {
      v13 = v25;
      v25 = 0LL;
      cotaskmem_string_nothrow = (LPVOID *)wil::make_cotaskmem_string_nothrow(&v17, v13, v10, v11);
      v15 = cotaskmem_string_nothrow;
      if ( a3 != cotaskmem_string_nothrow )
      {
        v16 = *cotaskmem_string_nothrow;
        if ( *a3 )
          wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>::close_reset(*a3);
        *a3 = v16;
        *v15 = 0LL;
      }
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v17);
      v12 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1F,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\persistentlocationhelper.h",
        (const char *)(unsigned int)v9);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v25);
    return v12;
  }
  else
  {
    v5 = (LPVOID *)wil::make_cotaskmem_string_nothrow(&v25, a1, (__int64)a3, a4);
    v6 = v5;
    if ( a3 != v5 )
    {
      v7 = *v5;
      if ( *a3 )
        wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>::close_reset(*a3);
      *a3 = v7;
      *v6 = 0LL;
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>((void **)&v25);
    return 0LL;
  }
}
