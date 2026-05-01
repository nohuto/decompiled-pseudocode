/*
 * XREFs of ?SetRegKey@CortanaStoreAppHelper@@YAJPEBG00K@Z @ 0x1801E7360
 * Callers:
 *     ?SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBG0K@Z @ 0x1801E72D0 (-SetCortanaRegKey@CortanaStoreAppHelper@@YAJPEBG0K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CortanaStoreAppHelper::SetRegKey(
        CortanaStoreAppHelper *this,
        const unsigned __int16 *a2,
        const BYTE *a3,
        const unsigned __int16 *a4)
{
  LSTATUS v6; // eax
  unsigned int v7; // ebx
  bool v8; // cc
  __int64 v9; // rax
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF

  hKey = 0LL;
  v6 = RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\Search",
         0,
         0LL,
         0,
         2u,
         0LL,
         &hKey,
         0LL);
  v7 = v6;
  v8 = v6 <= 0;
  if ( v6 )
    goto LABEL_5;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)&a3[2 * v9] );
  v6 = RegSetValueExW(hKey, a2, 0, 1u, a3, 2 * v9 + 2);
  v7 = v6;
  v8 = v6 <= 0;
  if ( v6 )
  {
LABEL_5:
    if ( !v8 )
      v7 = (unsigned __int16)v6 | 0x80070000;
  }
  else
  {
    v7 = 0;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v7;
}
