/*
 * XREFs of sub_18009EB2C @ 0x18009EB2C
 * Callers:
 *     sub_1800302F4 @ 0x1800302F4 (sub_1800302F4.c)
 *     sub_1800311C4 @ 0x1800311C4 (sub_1800311C4.c)
 *     sub_1800CFDC8 @ 0x1800CFDC8 (sub_1800CFDC8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009EB2C(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *(unsigned int *)(v3 + 20);
  return result;
}
