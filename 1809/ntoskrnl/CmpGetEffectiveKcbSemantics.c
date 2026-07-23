/*
 * XREFs of CmpGetEffectiveKcbSemantics @ 0x1405D99D0
 * Callers:
 *     CmpPopulateKeyNodeStackFromKcbStack @ 0x1407FB2F0 (CmpPopulateKeyNodeStackFromKcbStack.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpGetEffectiveKcbSemantics(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a2 && *(__int16 *)(a1 + 58) == *(unsigned __int16 *)(a2 + 4) )
  {
    LOBYTE(result) = *(_BYTE *)(a1 + 57);
    if ( (_BYTE)result )
      return (unsigned __int8)result;
    else
      return 2LL;
  }
  else if ( *(_WORD *)(a1 + 58) )
  {
    return *(unsigned __int8 *)(a1 + 57);
  }
  else
  {
    return 0LL;
  }
}
