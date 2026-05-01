/*
 * XREFs of ?SetRegKey@CortanaStoreAppHelper@@YAJPEBG0KK@Z @ 0x1801C8418
 * Callers:
 *     ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z @ 0x1801C82F4 (-SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBGKK@Z.c)
 *     ?SetSpeechRegKey@CortanaStoreAppHelper@@YAJPEBGK@Z @ 0x1801C84CC (-SetSpeechRegKey@CortanaStoreAppHelper@@YAJPEBGK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaStoreAppHelper::SetRegKey(
        LPCWSTR lpSubKey,
        LPCWSTR lpValueName,
        const unsigned __int16 *a3,
        DWORD a4)
{
  LSTATUS v5; // eax
  unsigned int v6; // ebx
  bool v7; // cc
  HKEY hKey; // [rsp+50h] [rbp-18h] BYREF
  int Data; // [rsp+80h] [rbp+18h] BYREF

  Data = (int)a3;
  hKey = 0LL;
  v5 = RegCreateKeyExW(HKEY_CURRENT_USER, lpSubKey, 0, 0LL, a4, 2u, 0LL, &hKey, 0LL);
  v6 = v5;
  v7 = v5 <= 0;
  if ( v5 || (v5 = RegSetValueExW(hKey, lpValueName, 0, 4u, (const BYTE *)&Data, 4u), v6 = v5, v7 = v5 <= 0, v5) )
  {
    if ( !v7 )
      v6 = (unsigned __int16)v5 | 0x80070000;
  }
  else
  {
    v6 = 0;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v6;
}
