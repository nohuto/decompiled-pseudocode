/*
 * XREFs of ?ResolvePredicateHandler@Internal@TargetedContent@Services@Windows@@YA?AV?$function@$$A6AXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18006EFB8
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x18006F320 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180071FC8 (-GetTriggerSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_ptr@VISett.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003774 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800CA900 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CBD10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall Windows::Services::TargetedContent::Internal::ResolvePredicateHandler(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  _DWORD *v5; // rax
  __int64 v6; // rax
  char *v7; // rax
  char *v8; // rcx
  _QWORD *v9; // rdx
  int v10; // eax
  void *v11; // rdx
  _DWORD *v12; // rax
  _QWORD *v13; // rcx
  char *v14; // rax
  char *v15; // rcx
  _QWORD *v16; // rdx
  _QWORD *v17; // r8
  _QWORD *v18; // rdx
  _QWORD *v19; // rdx
  int v21; // [rsp+24h] [rbp-4Ch] BYREF
  int v22; // [rsp+28h] [rbp-48h] BYREF
  __int64 v23; // [rsp+30h] [rbp-40h]
  _QWORD *v24; // [rsp+38h] [rbp-38h]
  _QWORD v25[3]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD *v26; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v23 = -2LL;
  v24 = a1;
  v4 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 112LL))(a2, &v21);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x176,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v4);
    JUMPOUT(0x18006F203LL);
  }
  v5 = &unk_18018D3E0;
  while ( *v5 != v21 )
  {
    v5 += 10;
    if ( v5 == (_DWORD *)&unk_18018D480 )
    {
      a1[3] = 0LL;
      v6 = 0LL;
      goto LABEL_12;
    }
  }
  v7 = (char *)(v5 + 2);
  a1[3] = 0LL;
  v8 = (char *)*((_QWORD *)v7 + 3);
  if ( v8 )
  {
    if ( v8 == v7 )
      v9 = a1;
    else
      v9 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(char *, _QWORD *))v8)(v8, v9);
    a1[3] = v6;
  }
  else
  {
    a1[3] = 0LL;
    v6 = 0LL;
  }
LABEL_12:
  if ( !v6 )
  {
    v10 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 80LL))(a2, &v22);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x189,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)(unsigned int)v10);
      __debugbreak();
    }
    v12 = &unk_18018D480;
    while ( *v12 != v22 )
    {
      v12 += 10;
      v11 = &unk_18018D520;
      if ( v12 == (_DWORD *)&unk_18018D520 )
      {
        v25[0] = &std::_Func_impl<std::_Callable_fun<void (*const)(HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *),0>,std::allocator<std::_Func_class<void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>>,void,HSTRING__ *,wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>> &,unsigned int *,std::_Nil,std::_Nil,std::_Nil,std::_Nil>::`vftable';
        v25[1] = Windows::Services::TargetedContent::Internal::DefaultBiPredicateCreator;
        v13 = v25;
        v26 = v25;
        goto LABEL_24;
      }
    }
    v14 = (char *)(v12 + 2);
    v26 = 0LL;
    v15 = (char *)*((_QWORD *)v14 + 3);
    if ( v15 )
    {
      if ( v15 == v14 )
        v16 = v25;
      else
        v16 = 0LL;
      v26 = (_QWORD *)(**(__int64 (__fastcall ***)(char *, _QWORD *))v15)(v15, v16);
      v13 = v26;
    }
    else
    {
      v13 = 0LL;
      v26 = 0LL;
    }
LABEL_24:
    if ( a1 == v25 )
      goto LABEL_34;
    v17 = (_QWORD *)a1[3];
    if ( v17 )
    {
      LOBYTE(v11) = v17 != a1;
      (*(void (__fastcall **)(_QWORD, void *))(*v17 + 32LL))(a1[3], v11);
      a1[3] = 0LL;
      v13 = v26;
    }
    if ( !v13 )
    {
      a1[3] = 0LL;
      goto LABEL_34;
    }
    if ( v13 == v25 )
    {
      a1[3] = (*(__int64 (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 8LL))(v13, a1);
      v13 = v26;
      if ( !v26 )
        goto LABEL_34;
      v18 = v25;
      LOBYTE(v18) = v26 != v25;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v26 + 32LL))(v26, v18);
    }
    else
    {
      a1[3] = v13;
    }
    v13 = 0LL;
    v26 = 0LL;
LABEL_34:
    if ( v13 )
    {
      v19 = v25;
      LOBYTE(v19) = v13 != v25;
      (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v13 + 32LL))(v13, v19);
    }
  }
  return a1;
}
