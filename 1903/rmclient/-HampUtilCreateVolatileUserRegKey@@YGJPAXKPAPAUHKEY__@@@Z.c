/*
 * XREFs of ?HampUtilCreateVolatileUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z @ 0x10006080
 * Callers:
 *     ?HampUtilQueryRegistryTerminateReason@@YGJPBGPAXPAW4_HAM_TERMINATE_REASON@@@Z @ 0x10005F90 (-HampUtilQueryRegistryTerminateReason@@YGJPBGPAXPAW4_HAM_TERMINATE_REASON@@@Z.c)
 * Callees:
 *     ?HampUtilCreateUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z @ 0x10006100 (-HampUtilCreateUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z.c)
 */

unsigned int __stdcall HampUtilCreateVolatileUserRegKey(HKEY *a1, unsigned int a2, HKEY *a3)
{
  int v3; // eax
  HKEY v4; // edi
  unsigned int v5; // esi
  LSTATUS v6; // eax
  bool v7; // sf
  HKEY v8; // ecx
  unsigned int v10; // [esp+0h] [ebp-10h]
  HKEY *v11; // [esp+4h] [ebp-Ch]
  HKEY hKey; // [esp+8h] [ebp-8h] BYREF
  HKEY phkResult; // [esp+Ch] [ebp-4h] BYREF

  hKey = 0;
  phkResult = 0;
  v3 = HampUtilCreateUserRegKey(&hKey, v10, v11);
  v4 = hKey;
  v5 = v3;
  if ( v3 < 0 )
    goto LABEL_9;
  v6 = RegCreateKeyExW(hKey, L"Volatile", 0, 0, 1u, 1u, 0, &phkResult, 0);
  v5 = v6;
  v7 = v6 < 0;
  if ( v6 > 0 )
  {
    v5 = (unsigned __int16)v6 | 0xC0070000;
    v7 = 1;
  }
  if ( v7 )
  {
LABEL_9:
    if ( phkResult )
      RegCloseKey(phkResult);
  }
  else
  {
    v5 = 0;
    v8 = phkResult;
    phkResult = 0;
    *a1 = v8;
  }
  if ( v4 )
    RegCloseKey(v4);
  return v5;
}
