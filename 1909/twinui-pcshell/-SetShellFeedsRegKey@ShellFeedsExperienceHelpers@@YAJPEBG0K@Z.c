/*
 * XREFs of ?SetShellFeedsRegKey@ShellFeedsExperienceHelpers@@YAJPEBG0K@Z @ 0x1800C5E2C
 * Callers:
 *     ?CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5418 (-CheckFeedsServerAvailability@ShellFeedsAvailability@@YAJEPEAE0PEAV-$basic_string@GU-$char_trait.c)
 *     ?WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z @ 0x1800C5FB4 (-WriteFeedsAvailabilityToRegistry@ShellFeedsAvailability@@YAJEPEAE0@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180126A28 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1?RegCloseKey@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAUHKEY__@@XZ @ 0x180126D20 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUHKEY__@@P6AJPEAU1@@Z$1-RegCloseKey@@Y.c)
 */

__int64 __fastcall ShellFeedsExperienceHelpers::SetShellFeedsRegKey(
        LPCWSTR lpValueName,
        BYTE *lpData,
        const unsigned __int16 *a3)
{
  HKEY *phkResult; // rax
  LSTATUS Key; // eax
  unsigned int v7; // ebx
  bool v8; // cc
  __int64 v9; // rax
  HKEY hKey; // [rsp+78h] [rbp+20h] BYREF

  hKey = 0LL;
  phkResult = (HKEY *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::operator&(
                        &hKey,
                        lpData,
                        a3);
  Key = RegCreateKeyExW(
          HKEY_CURRENT_USER,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Feeds",
          0,
          0LL,
          0,
          2u,
          0LL,
          phkResult,
          0LL);
  v7 = Key;
  v8 = Key <= 0;
  if ( Key )
    goto LABEL_5;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&lpData[2 * v9] );
  Key = RegSetValueExW(hKey, lpValueName, 0, 1u, lpData, 2 * v9 + 2);
  v7 = Key;
  v8 = Key <= 0;
  if ( Key )
  {
LABEL_5:
    if ( !v8 )
      v7 = (unsigned __int16)Key | 0x80070000;
  }
  else
  {
    v7 = 0;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<HKEY__ *,long (*)(HKEY__ *),&long RegCloseKey(HKEY__ *),wistd::integral_constant<unsigned __int64,0>,HKEY__ *,HKEY__ *,0,std::nullptr_t>>>(&hKey);
  return v7;
}
