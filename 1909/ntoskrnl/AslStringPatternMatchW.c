/*
 * XREFs of AslStringPatternMatchW @ 0x14074C350
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14070D7CC (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x14074C114 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x14074C350 (AslStringPatternMatchW.c)
 *     KseLookupHardwareId @ 0x1408835F4 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x1409222A8 (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckPackageAttributes @ 0x140923070 (SdbpCheckPackageAttributes.c)
 *     SdbpCheckAttribute @ 0x140925534 (SdbpCheckAttribute.c)
 *     AslpProcessMatchRegNode @ 0x1409284C8 (AslpProcessMatchRegNode.c)
 * Callees:
 *     NLS_UPCASE @ 0x1400CFCA0 (NLS_UPCASE.c)
 *     AslStringPatternMatchW @ 0x14074C350 (AslStringPatternMatchW.c)
 */

__int64 __fastcall AslStringPatternMatchW(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int16 *v4; // rdi
  unsigned int v5; // ebx
  unsigned __int16 v6; // ax
  __int16 v7; // r9
  unsigned __int16 v9; // ax
  __int64 v10; // r10
  __int16 v11; // r9

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
        NLS_UPCASE(v2);
        v6 = NLS_UPCASE(*a2);
        if ( v7 != v6 )
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
      NLS_UPCASE(v2);
      v9 = NLS_UPCASE(*a2);
      if ( v11 == v9 )
      {
        if ( (unsigned int)AslStringPatternMatchW(v10, a2) )
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
