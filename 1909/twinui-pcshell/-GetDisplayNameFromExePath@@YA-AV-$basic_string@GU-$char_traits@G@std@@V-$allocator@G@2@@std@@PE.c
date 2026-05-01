/*
 * XREFs of ?GetDisplayNameFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BDD60
 * Callers:
 *     ?GetDisplayName@Win32AppStateManager@@UEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BB040 (-GetDisplayName@Win32AppStateManager@@UEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@.c)
 * Callees:
 *     ??1?$com_ptr_t@U?$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800184B0 (--1-$com_ptr_t@U-$IVectorView@PEAUISetting@WindowingEnvironment@ApplicationModel@Internal@Window.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18005CFC4 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18005CFFC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??1AppInventoryData@@QEAA@XZ @ 0x1800BD8AC (--1AppInventoryData@@QEAA@XZ.c)
 *     ?GetAppInventoryData@@YA?AUAppInventoryData@@PEBG@Z @ 0x1800BDC20 (-GetAppInventoryData@@YA-AUAppInventoryData@@PEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x18012DC8C (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 */

// Hidden C++ exception states: #wind=5
_WORD *__fastcall GetDisplayNameFromExePath(_WORD *a1, LPCWSTR pszPath)
{
  unsigned __int64 v4; // r14
  int (__fastcall *v5)(LPVOID, LPCWSTR, __int64 *, _QWORD); // rdi
  __int64 v6; // rbx
  int (__fastcall *v7)(__int64, _QWORD, __int64); // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  LPWSTR FileNameW; // rax
  __int64 v12; // [rsp+38h] [rbp-69h] BYREF
  int v13; // [rsp+40h] [rbp-61h]
  LPVOID pv; // [rsp+48h] [rbp-59h] BYREF
  LPVOID ppv[3]; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v16[64]; // [rsp+68h] [rbp-39h] BYREF
  _BYTE v17[32]; // [rsp+A8h] [rbp+7h] BYREF

  ppv[1] = (LPVOID)-2LL;
  ppv[2] = a1;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 7LL;
  *a1 = 0;
  v13 = 1;
  v12 = 0LL;
  ppv[0] = 0LL;
  v4 = -1LL;
  if ( CoCreateInstance(&CLSID_StartMenuCacheAndAppResolver, 0LL, 3u, &GUID_21cbc515_2dde_4d66_8292_ba34bd25094a, ppv) >= 0 )
  {
    v5 = *(int (__fastcall **)(LPVOID, LPCWSTR, __int64 *, _QWORD))(*(_QWORD *)ppv[0] + 72LL);
    v12 = 0LL;
    if ( v5(ppv[0], pszPath, &v12, 0LL) >= 0 )
    {
      pv = 0LL;
      v6 = v12;
      v7 = *(int (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v12 + 40LL);
      v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(&pv);
      if ( v7(v6, 0LL, v8) >= 0 )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( *((_WORD *)pv + v9) );
        std::wstring::assign((char *)a1, pv, v9);
      }
      if ( pv )
        CoTaskMemFree(pv);
    }
  }
  if ( !*((_QWORD *)a1 + 2) )
  {
    GetAppInventoryData((__int64)v16, (__int64)pszPath);
    std::wstring::operator=(a1, v17);
    if ( !*((_QWORD *)a1 + 2) )
      std::wstring::operator=(a1, v16);
    AppInventoryData::~AppInventoryData((AppInventoryData *)v16);
    if ( !*((_QWORD *)a1 + 2) )
    {
      FileNameW = PathFindFileNameW(pszPath);
      do
        ++v4;
      while ( FileNameW[v4] );
      std::wstring::assign((char *)a1, FileNameW, v4);
    }
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>::~com_ptr_t<Windows::Foundation::Collections::IVectorView<Windows::Internal::ApplicationModel::WindowingEnvironment::ISetting *>,wil::err_exception_policy>(&v12);
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID, _QWORD))(*(_QWORD *)ppv[0] + 16LL))(ppv[0], *(_QWORD *)ppv[0]);
  return a1;
}
