/*
 * XREFs of ?QueryFeatureOverride@@YAHIPEAW4reg_FeatureEnabledState@@@Z @ 0x1800EF268
 * Callers:
 *     ?EvaluateCurrentStateFromRegistry@@YAHIW4reg_FeatureStage@@PECJ@Z @ 0x1800EF1E8 (-EvaluateCurrentStateFromRegistry@@YAHIW4reg_FeatureStage@@PECJ@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180083F48 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall QueryFeatureOverride(unsigned int a1, enum reg_FeatureEnabledState *a2)
{
  LSTATUS v4; // edi
  __int64 result; // rax
  DWORD cbData; // [rsp+30h] [rbp-40h] BYREF
  DWORD Type; // [rsp+34h] [rbp-3Ch] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-38h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-30h] BYREF
  WCHAR ValueName[16]; // [rsp+48h] [rbp-28h] BYREF

  cbData = 4;
  memset_0(ValueName, 0, sizeof(ValueName));
  if ( RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"System\\CurrentControlSet\\Policies\\Microsoft\\FeatureManagement\\Overrides",
         0,
         0x20019u,
         &hKey) )
  {
    goto LABEL_8;
  }
  StringCchPrintfW(ValueName, 0x10uLL, (size_t *)L"%lu", a1);
  v4 = RegQueryValueExW(hKey, ValueName, 0LL, &Type, Data, &cbData);
  if ( (unsigned __int64)hKey - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
    RegCloseKey(hKey);
  if ( v4 || Type != 4 || cbData != 4 )
  {
LABEL_8:
    *(_DWORD *)a2 = 0;
    return 0LL;
  }
  else
  {
    result = 1LL;
    *(_DWORD *)a2 = (*(_DWORD *)Data != 0) + 1;
  }
  return result;
}
