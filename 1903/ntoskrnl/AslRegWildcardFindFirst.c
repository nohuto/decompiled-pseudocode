/*
 * XREFs of AslRegWildcardFindFirst @ 0x1409282CC
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x1409234CC (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     AslStringDuplicate @ 0x14070B328 (AslStringDuplicate.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
 *     AslRegWildcardFindClose @ 0x14092824C (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x140928390 (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x140928488 (AslpParsePattern.c)
 */

__int64 __fastcall AslRegWildcardFindFirst(__int64 a1, PVOID **a2, const wchar_t *a3)
{
  wchar_t **v6; // rax
  PVOID *v7; // rbx
  int Next; // edi

  *a2 = 0LL;
  v6 = (wchar_t **)AslAlloc(a1, 0x20uLL);
  v7 = (PVOID *)v6;
  if ( !v6 )
    return 3221225495LL;
  v6[2] = 0LL;
  v6[3] = 0LL;
  v6[1] = (wchar_t *)v6;
  *v6 = (wchar_t *)v6;
  Next = AslStringDuplicate(v6 + 3, a3);
  if ( Next >= 0 )
  {
    Next = AslpParsePattern(v7[3], v7);
    if ( Next >= 0 )
    {
      v7[2] = *v7;
      Next = AslRegWildcardFindNext(a1, v7);
      if ( Next >= 0 )
      {
        *a2 = v7;
        v7 = 0LL;
      }
    }
  }
  if ( v7 )
    AslRegWildcardFindClose(v7);
  return (unsigned int)Next;
}
