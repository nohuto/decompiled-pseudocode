/*
 * XREFs of ?swap@?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x180274350
 * Callers:
 *     ?TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ @ 0x180272E40 (-TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ.c)
 * Callees:
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011FB88 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180123D90 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

void __fastcall wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::swap(
        wil::details **a1,
        wil::details **a2)
{
  wil::details *v2; // rbx
  wil::details *v4; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  *a1 = 0LL;
  if ( a1 != a2 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      a1,
      *a2);
    *a2 = 0LL;
  }
  v4 = v2;
  if ( a2 != (wil::details **)&v5 )
  {
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      a2,
      v2);
    v2 = 0LL;
    v4 = 0LL;
  }
  if ( v4 )
    wil::details::CloseHandle(v2, a2);
}
