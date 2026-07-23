/*
 * XREFs of CmpValidateComponents @ 0x140642C40
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405D8CC0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpValidateComponents(unsigned int a1, __int64 a2)
{
  unsigned int v2; // r8d
  _WORD *v3; // rax

  v2 = 0;
  if ( !a1 )
    return 0LL;
  while ( 1 )
  {
    v3 = (_WORD *)(v2 >= 8 ? *(_QWORD *)(a2 + 160) + 16 * (v2 - 8 + 6LL) : a2 + 16 * (v2 + 2LL));
    if ( *v3 > 0x200u )
      break;
    if ( ++v2 >= a1 )
      return 0LL;
  }
  return 3221225485LL;
}
