/*
 * XREFs of MiRemoveVad @ 0x1402DF048
 * Callers:
 *     MiRemovePlaceholderVad @ 0x1402DEDEC (MiRemovePlaceholderVad.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140029870 (RtlAvlRemoveNode.c)
 *     MiIsVadLargePrivate @ 0x140072F8C (MiIsVadLargePrivate.c)
 */

__int64 __fastcall MiRemoveVad(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 1624);
  RtlAvlRemoveNode((unsigned __int64 *)(a2 + 1624), (unsigned __int64 *)a1);
  if ( *(_QWORD *)(a2 + 1632) == a1 )
    *(_QWORD *)(a2 + 1632) = *v2;
  --*(_QWORD *)(a2 + 1640);
  *(_QWORD *)(a1 + 16) = -2LL;
  result = MiIsVadLargePrivate(a1);
  if ( (_DWORD)result )
  {
    result = (*(_DWORD *)(a1 + 48) >> 18) & 3;
    if ( (unsigned __int64)MiVadPageSizes[result] >= 0x200 )
      --*(_DWORD *)(a2 + 1756);
  }
  return result;
}
