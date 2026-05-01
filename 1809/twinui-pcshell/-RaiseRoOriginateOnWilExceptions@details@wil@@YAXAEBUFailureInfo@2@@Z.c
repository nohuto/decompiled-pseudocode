/*
 * XREFs of ?RaiseRoOriginateOnWilExceptions@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18006AB70
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAG@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18006ACD4 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAG@Z$1-SysFreeString@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::details::RaiseRoOriginateOnWilExceptions(wil::details *this, const struct wil::FailureInfo *a2)
{
  bool v2; // di
  FARPROC ProcAddress; // rax
  int v5; // eax
  __int64 v6; // rbx
  BSTR v7[3]; // [rsp+30h] [rbp-18h] BYREF
  HMODULE phModule; // [rsp+70h] [rbp+28h] BYREF
  __int64 v9; // [rsp+78h] [rbp+30h] BYREF
  BSTR v10; // [rsp+80h] [rbp+38h] BYREF
  BSTR bstrString; // [rsp+88h] [rbp+40h] BYREF

  v2 = 1;
  if ( *(_DWORD *)this <= 1u )
  {
    v9 = 0LL;
    if ( (unsigned int)GetRestrictedErrorInfo(&v9, a2) )
      goto LABEL_3;
    v5 = *((_DWORD *)this + 1);
    v7[0] = 0LL;
    bstrString = 0LL;
    v10 = 0LL;
    v6 = v9;
    LODWORD(phModule) = v5;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &v10,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      &bstrString,
      0LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(unsigned short *),&void SysFreeString(unsigned short *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      v7,
      0LL);
    if ( (*(int (__fastcall **)(__int64, BSTR *, HMODULE *, BSTR *, BSTR *))(*(_QWORD *)v6 + 24LL))(
           v6,
           v7,
           &phModule,
           &bstrString,
           &v10) >= 0 )
      v2 = *((_DWORD *)this + 1) != (_DWORD)phModule;
    if ( v10 )
      SysFreeString(v10);
    if ( bstrString )
      SysFreeString(bstrString);
    if ( v7[0] )
      SysFreeString(v7[0]);
    if ( v2 )
    {
LABEL_3:
      phModule = 0LL;
      if ( GetModuleHandleExW(0, L"api-ms-win-core-winrt-error-l1-1-1.dll", &phModule) )
      {
        ProcAddress = GetProcAddress(phModule, "RoOriginateError");
        if ( ProcAddress )
          ((void (__fastcall *)(_QWORD, _QWORD))ProcAddress)(*((unsigned int *)this + 1), 0LL);
      }
      if ( phModule )
        FreeLibrary(phModule);
    }
    else
    {
      if ( !v9 )
        return;
      SetRestrictedErrorInfo();
    }
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
}
