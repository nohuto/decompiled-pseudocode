/*
 * XREFs of sub_18002E204 @ 0x18002E204
 * Callers:
 *     sub_180128EA9 @ 0x180128EA9 (sub_180128EA9.c)
 *     sub_180129029 @ 0x180129029 (sub_180129029.c)
 *     sub_180129035 @ 0x180129035 (sub_180129035.c)
 *     unknown_libname_44 @ 0x1801297D5 (unknown_libname_44.c)
 *     sub_18012F5AC @ 0x18012F5AC (sub_18012F5AC.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002E204(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
