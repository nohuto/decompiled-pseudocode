/*
 * XREFs of ?GetWeakWindowAppId@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180056628
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18002A3E0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180054050 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 *     ?GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180426350 (-GetImmersiveAppIdFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 * Callees:
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x1800543C4 (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 */

__int64 __fastcall CallerIdentity::GetWeakWindowAppId(CallerIdentity *this, _QWORD *a2, unsigned __int16 **a3)
{
  ATOM PropW; // ax
  __int64 *cotaskmem_string_nothrow; // rax
  __int64 v7; // rcx
  void *v8[2]; // [rsp+20h] [rbp-228h] BYREF
  WCHAR Buffer[256]; // [rsp+30h] [rbp-218h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+0h]

  *a2 = 0LL;
  PropW = (unsigned __int16)GetPropW((HWND)this, L"{9F4C2855-9F79-4B39-A8D0-E1D42DE1D5F3} 5");
  if ( !PropW )
    return 0LL;
  if ( !GlobalGetAtomNameW(PropW, Buffer, 256) )
    return 0LL;
  cotaskmem_string_nothrow = (__int64 *)wil::make_cotaskmem_string_nothrow((__int64)v8, (__int64)Buffer);
  v7 = *cotaskmem_string_nothrow;
  *cotaskmem_string_nothrow = 0LL;
  *a2 = v7;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v8);
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5F,
    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity_window.cpp",
    (const char *)0x8007000ELL,
    (int)v8[0]);
  return 2147942414LL;
}
