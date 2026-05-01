/*
 * XREFs of ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180004740
 * Callers:
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x180004630 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x180004810 (-HampUtilCreateUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 */

__int64 __fastcall HampUtilCreateVolatileUserRegKey(void *a1, unsigned int a2, HKEY *a3)
{
  int v4; // eax
  HKEY v5; // rdi
  signed int v6; // ebx
  LSTATUS v7; // eax
  HKEY hKey; // [rsp+50h] [rbp-18h] BYREF
  HKEY phkResult; // [rsp+88h] [rbp+20h] BYREF

  hKey = 0LL;
  phkResult = 0LL;
  v4 = HampUtilCreateUserRegKey(a1, a2, &hKey);
  v5 = hKey;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_9;
  v7 = RegCreateKeyExW(hKey, L"Volatile", 0, 0LL, 1u, 1u, 0LL, &phkResult, 0LL);
  v6 = v7;
  if ( v7 > 0 )
    v6 = (unsigned __int16)v7 | 0xC0070000;
  if ( v6 < 0 )
  {
LABEL_9:
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  else
  {
    v6 = 0;
    *a3 = phkResult;
    phkResult = 0LL;
  }
  if ( v5 )
    RegCloseKey(v5);
  return (unsigned int)v6;
}
