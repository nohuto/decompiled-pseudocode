/*
 * XREFs of sub_1800111B0 @ 0x1800111B0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800111B0(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a2 )
    return j_j__o_free(a1);
  return result;
}
