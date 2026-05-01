/*
 * XREFs of ?GetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGPEAK@Z @ 0x1801E5B34
 * Callers:
 *     ?IsDeveloperOverrideEnabled@CortanaStoreAppHelper@@YAJPEAE@Z @ 0x1801E5D6C (-IsDeveloperOverrideEnabled@CortanaStoreAppHelper@@YAJPEAE@Z.c)
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801EAF5C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1801281F0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

__int64 __fastcall CortanaStoreAppHelper::GetCortanaRegKey(LPCWSTR lpValueName, BYTE *a2, unsigned int *a3)
{
  unsigned int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DWORD cbData; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)a2 = 0;
  hKey = 0LL;
  v5 = RegOpenKeyExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Search", 0, 0x20019u, &hKey);
  if ( v5 )
  {
    v6 = 531LL;
LABEL_5:
    v7 = wil::details::in1diag3::Return_Win32(
           retaddr,
           v6,
           (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreapphelper.cpp",
           (const char *)v5);
    goto LABEL_7;
  }
  cbData = 4;
  v5 = RegQueryValueExW(hKey, lpValueName, 0LL, 0LL, a2, &cbData);
  if ( v5 )
  {
    v6 = 541LL;
    goto LABEL_5;
  }
  v7 = 0;
LABEL_7:
  if ( hKey )
    RegCloseKey(hKey);
  return v7;
}
