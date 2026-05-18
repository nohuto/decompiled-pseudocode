/*
 * XREFs of sub_180011EFC @ 0x180011EFC
 * Callers:
 *     sub_180011540 @ 0x180011540 (sub_180011540.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_18006F614 @ 0x18006F614 (sub_18006F614.c)
 *     sub_18009FC40 @ 0x18009FC40 (sub_18009FC40.c)
 *     sub_1800A6324 @ 0x1800A6324 (sub_1800A6324.c)
 * Callees:
 *     memcpy @ 0x180125B94 (memcpy.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_180011EFC(const void **a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = *a1;
  memcpy(a1, *a1, (size_t)a1[2] + 1);
  if ( (unsigned __int64)a1[3] + 1 >= 0x1000 )
  {
    v3 = *(v1 - 1);
    if ( (unsigned __int64)v1 - v3 - 8 > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v3, (char *)a1[3] + 40);
      JUMPOUT(0x180011F64LL);
    }
    v1 = (_QWORD *)*(v1 - 1);
  }
  result = j_j__o_free(v1);
  a1[3] = (const void *)15;
  return result;
}
