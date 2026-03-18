/*
 * XREFs of RIMIsDefaultUILanguageRTL @ 0x1C00F1650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RIMIsDefaultUILanguageRTL()
{
  unsigned int v0; // ecx
  unsigned int v1; // ecx
  unsigned int v2; // ecx
  unsigned int v3; // ecx
  LANGID LanguageId; // [rsp+30h] [rbp+8h] BYREF

  LanguageId = 0;
  if ( ZwQueryDefaultUILanguage(&LanguageId) >= 0 )
  {
    v0 = LanguageId & 0x3FF;
    if ( v0 > 0x63 )
    {
      v1 = v0 - 101;
      if ( !v1 )
        return 1LL;
      v2 = v1 - 27;
      if ( !v2 )
        return 1LL;
      v3 = v2 - 12;
      if ( !v3 || v3 == 6 )
        return 1LL;
    }
    else if ( v0 == 99 || v0 == 1 || v0 == 13 || v0 == 32 || v0 == 41 || v0 > 0x58 && v0 <= 0x5A )
    {
      return 1LL;
    }
    if ( LanguageId == 2118 || LanguageId == 2128 || LanguageId == 2144 || LanguageId == 31814 || LanguageId == 31824 )
      return 1LL;
  }
  return 0LL;
}
