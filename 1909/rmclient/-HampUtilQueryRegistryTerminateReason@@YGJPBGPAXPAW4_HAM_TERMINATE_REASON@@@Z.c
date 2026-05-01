/*
 * XREFs of ?HampUtilQueryRegistryTerminateReason@@YGJPBGPAXPAW4_HAM_TERMINATE_REASON@@@Z @ 0x10005F90
 * Callers:
 *     _HamQueryCallerTerminateReason@4 @ 0x10005CB0 (_HamQueryCallerTerminateReason@4.c)
 * Callees:
 *     ?HampUtilCreateVolatileUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z @ 0x10006080 (-HampUtilCreateVolatileUserRegKey@@YGJPAXKPAPAUHKEY__@@@Z.c)
 *     ?HampUtilGetAumidFromPsmKey@@YGJPBGPAKPAG@Z @ 0x10006280 (-HampUtilGetAumidFromPsmKey@@YGJPBGPAKPAG@Z.c)
 *     @__security_check_cookie@4 @ 0x1000C990 (@__security_check_cookie@4.c)
 */

unsigned int __stdcall HampUtilQueryRegistryTerminateReason(
        unsigned __int16 *a1,
        void *a2,
        enum _HAM_TERMINATE_REASON *a3)
{
  int v3; // eax
  HKEY v4; // edi
  unsigned int v5; // esi
  LSTATUS v6; // eax
  bool v7; // sf
  unsigned int *v9; // [esp+0h] [ebp-124h]
  unsigned int v10; // [esp+0h] [ebp-124h]
  unsigned __int16 *v11; // [esp+4h] [ebp-120h]
  HKEY *v12; // [esp+4h] [ebp-120h]
  BYTE Data[4]; // [esp+Ch] [ebp-118h] BYREF
  int v14; // [esp+10h] [ebp-114h]
  DWORD cbData; // [esp+14h] [ebp-110h] BYREF
  HKEY hKey; // [esp+18h] [ebp-10Ch] BYREF
  WCHAR ValueName[130]; // [esp+1Ch] [ebp-108h] BYREF

  hKey = 0;
  v14 = 130;
  HampUtilGetAumidFromPsmKey(ValueName, v9, v11);
  v3 = HampUtilCreateVolatileUserRegKey(&hKey, v10, v12);
  v4 = hKey;
  v5 = v3;
  if ( v3 >= 0 )
  {
    cbData = 4;
    v6 = RegQueryValueExW(hKey, ValueName, 0, 0, Data, &cbData);
    v5 = v6;
    v7 = v6 < 0;
    if ( v6 > 0 )
    {
      v5 = (unsigned __int16)v6 | 0xC0070000;
      v7 = 1;
    }
    if ( v7 )
    {
      if ( v5 == -1073283070 )
      {
        *(_DWORD *)a1 = 0;
        v5 = 0;
      }
    }
    else if ( *(_DWORD *)Data <= 0x1AFFu && cbData == 4 )
    {
      *(_DWORD *)a1 = *(_DWORD *)Data;
      v5 = 0;
    }
    else
    {
      v5 = -1073739509;
    }
  }
  if ( v4 )
    RegCloseKey(v4);
  return v5;
}
