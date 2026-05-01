/*
 * XREFs of ?IsAuditMode@@YA_NXZ @ 0x1800C5B54
 * Callers:
 *     ?CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800C5190 (-CheckFeedsAvailability@ShellFeedsAvailability@@YAJPEAEPEAV-$basic_string@GU-$char_traits@G@std@.c)
 * Callees:
 *     RegExists @ 0x1800D361C (RegExists.c)
 *     RegGetDword @ 0x1800D36DC (RegGetDword.c)
 */

char IsAuditMode(void)
{
  char v0; // bl
  HKEY hKey; // [rsp+40h] [rbp+8h] BYREF

  v0 = 1;
  if ( (unsigned int)RegExists(-2147483646LL, L"System\\Setup\\Status", L"AuditBoot") != 1
    || !(unsigned int)RegGetDword(-2147483646LL, L"System\\Setup\\Status") )
  {
    hKey = 0LL;
    if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\Setup\\Status\\AuditBootVolatile", 0, 0x20019u, &hKey) || !hKey )
    {
      SetLastError(0);
      return 0;
    }
    else
    {
      RegCloseKey(hKey);
      SetLastError(0);
    }
  }
  return v0;
}
