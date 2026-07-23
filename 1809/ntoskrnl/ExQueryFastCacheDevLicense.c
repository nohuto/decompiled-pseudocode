/*
 * XREFs of ExQueryFastCacheDevLicense @ 0x1406C4320
 * Callers:
 *     SepIsLockedDown @ 0x14089C93C (SepIsLockedDown.c)
 * Callees:
 *     KIsUnlockSettingEnabled @ 0x1406C4370 (KIsUnlockSettingEnabled.c)
 */

char ExQueryFastCacheDevLicense()
{
  char result; // al
  int v1; // [rsp+20h] [rbp-18h] BYREF
  const wchar_t *v2; // [rsp+28h] [rbp-10h]
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = 4456514;
  v2 = L"AllowDevelopmentWithoutDevLicense";
  v3 = 0xFFFF;
  if ( (int)KIsUnlockSettingEnabled(&v1, &v3) < 0 )
    return 0;
  result = 1;
  if ( v3 != 1 )
    return 0;
  return result;
}
