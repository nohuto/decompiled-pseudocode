/*
 * XREFs of sub_18002E0F4 @ 0x18002E0F4
 * Callers:
 *     sub_180128D99 @ 0x180128D99 (sub_180128D99.c)
 *     sub_180128F19 @ 0x180128F19 (sub_180128F19.c)
 *     sub_180128F25 @ 0x180128F25 (sub_180128F25.c)
 *     unknown_libname_44 @ 0x1801296C5 (unknown_libname_44.c)
 *     sub_18012F49C @ 0x18012F49C (sub_18012F49C.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E0F4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
