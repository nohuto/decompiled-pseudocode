/*
 * XREFs of ?DetectRegistryLink@@YA?AW4LinkResult@@PEAUHKEY__@@PEBGKPEAPEAU2@@Z @ 0x180031D20
 * Callers:
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180031E58 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800343C0 (__security_check_cookie.c)
 */

__int64 __fastcall DetectRegistryLink(HKEY a1, const WCHAR *a2, REGSAM a3, HKEY *a4)
{
  int v4; // ebx
  unsigned int v8; // edi
  LSTATUS v9; // eax
  __int64 result; // rax
  LSTATUS v11; // eax
  LSTATUS v12; // ebx
  DWORD Type; // [rsp+30h] [rbp-D0h] BYREF
  DWORD cbData; // [rsp+34h] [rbp-CCh] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  HKEY phkResult; // [rsp+40h] [rbp-C0h] BYREF
  BYTE Data[528]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0;
  *a4 = 0LL;
  hKey = 0LL;
  v8 = 0;
  v9 = RegOpenKeyExW(a1, a2, 8u, a3, &hKey);
  if ( v9 )
  {
    if ( v9 == 2 )
    {
      return 3LL;
    }
    else
    {
      LOBYTE(v4) = v9 != 5;
      return (unsigned int)(v4 + 4);
    }
  }
  else
  {
    cbData = 520;
    Type = 0;
    v11 = RegQueryValueExW(hKey, L"SymbolicLinkValue", 0LL, &Type, Data, &cbData);
    if ( (!v11 || v11 == 234) && Type == 6 )
      v8 = 1;
    if ( v11 == 2 || v8 != 1 )
    {
      phkResult = 0LL;
      v12 = RegOpenKeyExW(a1, a2, 0, 0x20019u, &phkResult);
      RegCloseKey(phkResult);
      v8 = 2 - (v12 != 0);
    }
    result = v8;
    *a4 = hKey;
  }
  return result;
}
