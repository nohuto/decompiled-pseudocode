/*
 * XREFs of sub_180011EAC @ 0x180011EAC
 * Callers:
 *     sub_1800114F0 @ 0x1800114F0 (sub_1800114F0.c)
 *     sub_18002BFD4 @ 0x18002BFD4 (sub_18002BFD4.c)
 *     sub_18006F504 @ 0x18006F504 (sub_18006F504.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     sub_1800A6214 @ 0x1800A6214 (sub_1800A6214.c)
 * Callees:
 *     memcpy @ 0x180125A84 (memcpy.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_180011EAC(const void **a1)
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
      JUMPOUT(0x180011F14LL);
    }
    v1 = (_QWORD *)*(v1 - 1);
  }
  result = j_j__o_free(v1);
  a1[3] = (const void *)15;
  return result;
}
