/*
 * XREFs of HamOptInIsPackageFamilyNameEnabledEx @ 0x1800393C0
 * Callers:
 *     HamOptInIsPsmKeyEnabledEx @ 0x18003931C (HamOptInIsPsmKeyEnabledEx.c)
 * Callees:
 *     ?HampOptInOpenPolicyKey@@YAKEPEAPEAUHKEY__@@@Z @ 0x180039464 (-HampOptInOpenPolicyKey@@YAKEPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall HamOptInIsPackageFamilyNameEnabledEx(LPCWSTR lpValueName, DWORD a2, bool *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  LSTATUS v7; // eax
  LSTATUS v9; // eax
  HKEY hKey; // [rsp+30h] [rbp-18h] BYREF
  DWORD cbData; // [rsp+58h] [rbp+10h] BYREF
  unsigned int Data; // [rsp+68h] [rbp+20h] BYREF

  cbData = a2;
  hKey = 0LL;
  v5 = HampOptInOpenPolicyKey((unsigned __int8)lpValueName, &hKey);
  v6 = v5;
  if ( v5 == 2 )
    goto LABEL_4;
  if ( v5 )
    goto LABEL_6;
  cbData = 4;
  v7 = RegQueryValueExW(hKey, L"LocalTest", 0LL, 0LL, (LPBYTE)&Data, &cbData);
  v6 = v7;
  if ( v7 == 2 )
  {
LABEL_4:
    *a3 = 1;
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  if ( !v7 )
  {
    cbData = 4;
    v9 = RegQueryValueExW(hKey, lpValueName, 0LL, 0LL, (LPBYTE)&Data, &cbData);
    v6 = v9;
    if ( v9 == 2 )
    {
      *a3 = 0;
      goto LABEL_5;
    }
    if ( !v9 )
    {
      if ( Data < 3 )
      {
        *a3 = Data != 0;
        goto LABEL_5;
      }
      v6 = 1004;
    }
  }
LABEL_6:
  if ( hKey )
    RegCloseKey(hKey);
  return v6;
}
