/*
 * XREFs of sub_1800A5BBC @ 0x1800A5BBC
 * Callers:
 *     sub_1800A5BBC @ 0x1800A5BBC (sub_1800A5BBC.c)
 *     sub_1800A5D60 @ 0x1800A5D60 (sub_1800A5D60.c)
 *     sub_18012F976 @ 0x18012F976 (sub_18012F976.c)
 * Callees:
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 *     sub_1800A5BBC @ 0x1800A5BBC (sub_1800A5BBC.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A5BBC(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  __int64 result; // rax

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    sub_1800A5BBC(a1, i[2]);
    i = (__int64 *)*i;
    sub_1800675A8(v2 + 4, 0);
    result = j_j__o_free(v2);
  }
  return result;
}
