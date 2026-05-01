/*
 * XREFs of ?TrySubscribePropertiesChangedEvent@WindowPropertyChangedListener@@AEAA_NXZ @ 0x180200730
 * Callers:
 *     _lambda_5685b7785c3a9eb18aecd9c477002c42_::_lambda_invoker_cdecl_ @ 0x1801FB310 (_lambda_5685b7785c3a9eb18aecd9c477002c42_--_lambda_invoker_cdecl_.c)
 *     ?TrySetApplicationWindow@WindowPropertyChangedListener@@QEAA_NPEAUHWND__@@@Z @ 0x1802006B4 (-TrySetApplicationWindow@WindowPropertyChangedListener@@QEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18002C954 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ?CloseHandle@details@wil@@YAXPEAX@Z @ 0x1800DEBE0 (-CloseHandle@details@wil@@YAXPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800E26D8 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 */

char __fastcall WindowPropertyChangedListener::TrySubscribePropertiesChangedEvent(HWND *this)
{
  unsigned int v2; // edi
  unsigned int PropW; // eax
  wil::details *v4; // rax
  wil::details **v5; // rcx
  wil::details *v6; // rbx
  void *v7; // rdx
  __int64 v9; // [rsp+20h] [rbp-B8h]
  wil::details *v10[2]; // [rsp+30h] [rbp-A8h] BYREF
  WCHAR Name[64]; // [rsp+40h] [rbp-98h] BYREF

  if ( this[8] )
  {
    v2 = 0;
    v10[0] = 0LL;
    while ( 1 )
    {
      PropW = (unsigned int)GetPropW(this[8], L"WindowProperty.PropertyChangedCount");
      if ( v2 == PropW )
        break;
      LODWORD(v9) = PropW;
      v2 = PropW;
      StringCchPrintfW(Name, 64LL, L"PropertiesChangeEvent-0x%08x-%ld", *((unsigned int *)this + 16), v9);
      v4 = (wil::details *)OpenEventW(0x100000u, 0, Name);
      if ( v4 )
      {
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          v10,
          v4);
        v5 = (wil::details **)(this + 9);
        v6 = (wil::details *)this[9];
        *v5 = 0LL;
        if ( v5 != v10 )
        {
          wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
            v5,
            v10[0]);
          v10[0] = 0LL;
        }
        wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,0,std::nullptr_t>>::reset(
          v10,
          v6);
        if ( v10[0] )
          wil::details::CloseHandle(v10[0], v7);
        return 1;
      }
    }
  }
  return 0;
}
