/*
 * XREFs of ?TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ @ 0x180272E40
 * Callers:
 *     _lambda_5685b7785c3a9eb18aecd9c477002c42_::_lambda_invoker_cdecl_ @ 0x18026D570 (_lambda_5685b7785c3a9eb18aecd9c477002c42_--_lambda_invoker_cdecl_.c)
 *     ?TrySetApplicationWindow@WindowPropertyChangedListener@@QEAA_NPEAUHWND__@@@Z @ 0x180272DC4 (-TrySetApplicationWindow@WindowPropertyChangedListener@@QEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003AAB4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x18011FB88 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180123D90 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?swap@?$unique_any_t@V?$event_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@wil@@QEAAXAEAV12@@Z @ 0x180274350 (-swap@-$unique_any_t@V-$event_t@V-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandl.c)
 */

char __fastcall WindowPropertyChangedListener::TrySubscribePropertiesChangedEvent(HWND *this)
{
  unsigned int v2; // edi
  unsigned int PropW; // eax
  wil::details *v4; // rax
  void *v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-B8h]
  wil::details *v8[2]; // [rsp+30h] [rbp-A8h] BYREF
  WCHAR Name[64]; // [rsp+40h] [rbp-98h] BYREF

  if ( this[8] )
  {
    v2 = 0;
    v8[0] = 0LL;
    while ( 1 )
    {
      PropW = (unsigned int)GetPropW(this[8], L"WindowProperty.PropertyChangedCount");
      if ( v2 == PropW )
        break;
      LODWORD(v7) = PropW;
      v2 = PropW;
      StringCchPrintfW(Name, 64LL, L"PropertiesChangeEvent-0x%08x-%ld", *((unsigned int *)this + 16), v7);
      v4 = (wil::details *)OpenEventW(0x100000u, 0, Name);
      if ( v4 )
      {
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
          v8,
          v4);
        wil::unique_any_t<wil::event_t<wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>,wil::err_returncode_policy>>::swap(
          this + 9,
          v8);
        if ( v8[0] )
          wil::details::CloseHandle(v8[0], v5);
        return 1;
      }
    }
  }
  return 0;
}
