/*
 * XREFs of CmpGetComponentNameAtIndex @ 0x140644780
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405D7CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405E5320 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetComponentNameAtIndex(__int64 a1, unsigned int a2)
{
  if ( a2 >= 8 )
    return *(_QWORD *)(a1 + 160) + 16 * (a2 - 8 + 6LL);
  else
    return a1 + 16 * (a2 + 2LL);
}
