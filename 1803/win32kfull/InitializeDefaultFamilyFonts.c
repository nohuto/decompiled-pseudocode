/*
 * XREFs of InitializeDefaultFamilyFonts @ 0x1C037E5FC
 * Callers:
 *     vInitMapper @ 0x1C037E0A0 (vInitMapper.c)
 * Callees:
 *     ?bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z @ 0x1C0055D94 (-bQueryValueKey@@YAHPEAGPEAXPEAU_KEY_VALUE_PARTIAL_INFORMATION@@K@Z.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C0056380 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00D0654 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

int InitializeDefaultFamilyFonts()
{
  int result; // eax
  unsigned __int64 i; // rbx
  __int64 v2; // rax
  unsigned __int16 *v3; // rcx
  __int64 v4; // rdi
  char *v5; // rax
  HANDLE Handle; // [rsp+20h] [rbp-88h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+30h] [rbp-78h] BYREF
  int v8; // [rsp+34h] [rbp-74h]
  char v9[84]; // [rsp+3Ch] [rbp-6Ch] BYREF

  result = GetGreRegKey(
             &Handle,
             0x20019u,
             L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontMapper\\FamilyDefaults");
  if ( result >= 0 )
  {
    for ( i = 0LL; i < 6; ++i )
    {
      if ( bQueryValueKey(*(PCWSTR *)&algn_1C02D48D8[i * 8], Handle, KeyValueInformation, 0x54u) && v8 == 1 )
      {
        v2 = 33LL;
        v3 = (unsigned __int16 *)v9;
        do
        {
          if ( !*v3 )
            break;
          ++v3;
          --v2;
        }
        while ( v2 );
        if ( v2 )
          v4 = 33 - v2;
        else
          v4 = 0LL;
        if ( v2 )
        {
          v5 = (char *)PALLOCMEM2((unsigned int)(2 * v4 + 2), 1717855815LL, 1);
          gpwszFamilyDefaultFonts[i] = v5;
          if ( v5 )
          {
            if ( (int)StringCchCopyW(v5, v4 + 1, v9) < 0 )
            {
              Win32FreePool(gpwszFamilyDefaultFonts[i]);
              gpwszFamilyDefaultFonts[i] = 0LL;
            }
          }
        }
      }
    }
    return ZwClose(Handle);
  }
  return result;
}
