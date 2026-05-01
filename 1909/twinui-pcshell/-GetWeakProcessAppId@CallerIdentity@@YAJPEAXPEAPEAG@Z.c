/*
 * XREFs of ?GetWeakProcessAppId@CallerIdentity@@YAJPEAXPEAPEAG@Z @ 0x180054284
 * Callers:
 *     ?GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z @ 0x180054050 (-GetApplicationId@CClassicWindow@@UEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x1800543C4 (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800546D4 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1801281C4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CallerIdentity::GetWeakProcessAppId(CallerIdentity *this, _QWORD *a2, unsigned __int16 **a3)
{
  NTSTATUS v4; // eax
  __int64 *cotaskmem_string_nothrow; // rax
  __int64 v6; // rcx
  int ReturnLength; // [rsp+20h] [rbp-238h]
  ULONG v9; // [rsp+30h] [rbp-228h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-220h] BYREF
  int ProcessInformation; // [rsp+40h] [rbp-218h] BYREF
  unsigned __int16 v12; // [rsp+44h] [rbp-214h]
  _BYTE v13[506]; // [rsp+46h] [rbp-212h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+258h] [rbp+0h]

  *a2 = 0LL;
  v9 = 0;
  v4 = NtQueryInformationProcess(this, ProcessExecuteFlags|ProcessUserModeIOPL, &ProcessInformation, 0x200u, &v9);
  if ( v4 < 0 )
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x191,
             (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
             (const char *)(unsigned int)v4,
             ReturnLength);
  if ( (ProcessInformation & 0x1000) == 0 )
    return 0LL;
  cotaskmem_string_nothrow = (__int64 *)wil::make_cotaskmem_string_nothrow(v10, v13, (unsigned __int64)v12 >> 1);
  v6 = *cotaskmem_string_nothrow;
  *cotaskmem_string_nothrow = 0LL;
  *a2 = v6;
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(v10);
  if ( *a2 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x196,
    (unsigned int)"onecore\\shell\\lib\\calleridentity\\calleridentity.cpp",
    (const char *)0x8007000ELL,
    ReturnLength);
  return 2147942414LL;
}
