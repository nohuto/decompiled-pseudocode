/*
 * XREFs of AslStringPatternMatchW @ 0x140722634
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067D988 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpCheckAttribute @ 0x140721820 (SdbpCheckAttribute.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407223F8 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x140722634 (AslStringPatternMatchW.c)
 *     KseLookupHardwareId @ 0x140849C94 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1408E7428 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckPackageAttributes @ 0x1408E8200 (SdbpCheckPackageAttributes.c)
 *     AslpProcessMatchRegNode @ 0x1408ECFC4 (AslpProcessMatchRegNode.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 *     AslStringPatternMatchW @ 0x140722634 (AslStringPatternMatchW.c)
 */

__int64 __fastcall AslStringPatternMatchW(WCHAR *a1, WCHAR *a2)
{
  WCHAR v2; // si
  WCHAR *v4; // r14
  unsigned int v5; // edi
  WCHAR v6; // bx
  WCHAR v8; // bx

  v2 = *a1;
  v4 = a1;
  v5 = 0;
  while ( 1 )
  {
    if ( !v2 )
    {
      v2 = 0;
      if ( !*a2 )
        return 1;
    }
    if ( v2 != 42 )
    {
      if ( v2 != 63 )
      {
        v6 = RtlUpcaseUnicodeChar(*a2);
        if ( RtlUpcaseUnicodeChar(v2) != v6 )
          return v5;
      }
      ++v4;
      goto LABEL_7;
    }
    v2 = v4[1];
    if ( v2 == 42 )
    {
      ++v4;
    }
    else
    {
      if ( !v2 )
        return 1;
      v8 = RtlUpcaseUnicodeChar(v2);
      if ( v8 == RtlUpcaseUnicodeChar(*a2) )
      {
        if ( (unsigned int)AslStringPatternMatchW(v4 + 1, a2) )
          return 1;
      }
LABEL_7:
      if ( !*a2 )
        return v5;
      v2 = *v4;
      ++a2;
    }
  }
}
