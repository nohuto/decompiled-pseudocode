/*
 * XREFs of AslRegWildcardFindFirst @ 0x1408EB5A0
 * Callers:
 *     SdbpCheckMatchingWildcardRegistryEntry @ 0x1408E6E1C (SdbpCheckMatchingWildcardRegistryEntry.c)
 * Callees:
 *     memset @ 0x1401D1780 (memset.c)
 *     AslStringDuplicate @ 0x14067C4E4 (AslStringDuplicate.c)
 *     AslAlloc @ 0x14067C7A0 (AslAlloc.c)
 *     AslRegWildcardFindClose @ 0x1408EB520 (AslRegWildcardFindClose.c)
 *     AslRegWildcardFindNext @ 0x1408EB668 (AslRegWildcardFindNext.c)
 *     AslpParsePattern @ 0x1408EB760 (AslpParsePattern.c)
 */

__int64 __fastcall AslRegWildcardFindFirst(__int64 a1, _QWORD *a2, const wchar_t *a3)
{
  PVOID v6; // rax
  PVOID v7; // rbx
  int Next; // edi

  *a2 = 0LL;
  v6 = AslAlloc(a1, 0x20uLL);
  v7 = v6;
  if ( !v6 )
    return 3221225495LL;
  memset(v6, 0, 0x20uLL);
  *((_QWORD *)v7 + 1) = v7;
  *(_QWORD *)v7 = v7;
  Next = AslStringDuplicate((wchar_t **)v7 + 3, a3);
  if ( Next >= 0 )
  {
    Next = AslpParsePattern(*((_QWORD *)v7 + 3), v7);
    if ( Next >= 0 )
    {
      *((_QWORD *)v7 + 2) = *(_QWORD *)v7;
      Next = AslRegWildcardFindNext(a1, v7);
      if ( Next >= 0 )
      {
        *a2 = v7;
        v7 = 0LL;
      }
    }
  }
  if ( v7 )
    AslRegWildcardFindClose((PVOID *)v7);
  return (unsigned int)Next;
}
