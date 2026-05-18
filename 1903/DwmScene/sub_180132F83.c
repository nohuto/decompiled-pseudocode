/*
 * XREFs of sub_180132F83 @ 0x180132F83
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008943C @ 0x18008943C (sub_18008943C.c)
 */

__int64 __fastcall sub_180132F83(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_18008943C(*(__int64 **)(a2 + 88));
  }
  return result;
}
