/*
 * XREFs of sub_18008FD30 @ 0x18008FD30
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008F8B8 @ 0x18008F8B8 (sub_18008F8B8.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 */

__int64 __fastcall sub_18008FD30(__int64 a1, char a2)
{
  sub_18008F8B8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
