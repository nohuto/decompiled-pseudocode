/*
 * XREFs of AslStringPatternMatchA @ 0x14072253C
 * Callers:
 *     SdbpFindFirstIndexedWildCardTag @ 0x14067D988 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407223F8 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchA @ 0x14072253C (AslStringPatternMatchA.c)
 * Callees:
 *     toupper @ 0x140197650 (toupper.c)
 *     AslStringPatternMatchA @ 0x14072253C (AslStringPatternMatchA.c)
 */

__int64 __fastcall AslStringPatternMatchA(char *a1, _BYTE *a2)
{
  char v2; // si
  char *v4; // r14
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx

  v2 = *a1;
  v4 = a1;
  v5 = 1;
  while ( 1 )
  {
    if ( !v2 )
    {
      v2 = 0;
      if ( !*a2 )
        return v5;
    }
    if ( v2 == 42 )
    {
      v2 = v4[1];
      if ( v2 != 42 )
      {
        if ( !v2 )
          return v5;
        v6 = toupper(v2);
        if ( v6 == toupper((char)*a2) )
        {
          if ( (unsigned int)AslStringPatternMatchA(v4 + 1, a2) )
            return v5;
        }
        goto LABEL_7;
      }
      ++v4;
    }
    else
    {
      if ( v2 != 63 )
      {
        v7 = toupper((char)*a2);
        if ( toupper(v2) != v7 )
          return 0;
      }
      ++v4;
LABEL_7:
      if ( !*a2 )
        return 0;
      v2 = *v4;
      ++a2;
    }
  }
}
