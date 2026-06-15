/*
 * XREFs of ?DoesProfileExistInStore@AssignedAccessConfigStoreV0@AssignedAccess@Internal@Windows@@EEAA_NPEBG@Z @ 0x180033A00
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800067A0 (--0-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800067B0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ?close_reset@?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@SAXPEAUHKEY__@@@Z @ 0x1800078B0 (-close_reset@-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@YAJ0@ZU-$integral_constan.c)
 */

char __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0::DoesProfileExistInStore(
        Windows::Internal::AssignedAccess::AssignedAccessConfigStoreV0 *this,
        const unsigned __int16 *a2)
{
  char v4; // bl
  const WCHAR *v5; // rdx
  HKEY v6; // rsi
  const wchar_t **v7; // rdi
  HKEY hKey; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v10; // [rsp+38h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp-20h]
  const wchar_t *v12; // [rsp+48h] [rbp-18h]
  int v13; // [rsp+50h] [rbp-10h]
  char v14; // [rsp+58h] [rbp-8h] BYREF
  DWORD Type; // [rsp+80h] [rbp+20h] BYREF
  DWORD cbData; // [rsp+90h] [rbp+30h] BYREF
  HKEY phkResult; // [rsp+98h] [rbp+38h] BYREF

  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&hKey);
  v4 = 0;
  if ( hKey )
    wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>::close_reset(hKey);
  v5 = (const WCHAR *)*((_QWORD *)this + 1);
  hKey = 0LL;
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, v5, 0, 0x20019u, &hKey) )
  {
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(&phkResult);
    if ( phkResult )
      wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>::close_reset(phkResult);
    phkResult = 0LL;
    if ( !RegOpenKeyExW(hKey, a2, 0, 0x20019u, &phkResult) )
    {
      v6 = phkResult;
      v10 = L"AppUserModelId";
      v7 = &v10;
      v11 = 1;
      v12 = L"ConfigLevel";
      v13 = 4;
      while ( !RegQueryValueExW(v6, *v7, 0LL, &Type, 0LL, &cbData) && Type == *((_DWORD *)v7 + 2) && cbData )
      {
        v7 += 2;
        if ( v7 == (const wchar_t **)&v14 )
        {
          v4 = 1;
          break;
        }
      }
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&phkResult);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v4;
}
