/*
 * XREFs of sub_18006DFDC @ 0x18006DFDC
 * Callers:
 *     sub_18006C0A0 @ 0x18006C0A0 (sub_18006C0A0.c)
 *     sub_1800ABDC8 @ 0x1800ABDC8 (sub_1800ABDC8.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1801224F0 @ 0x1801224F0 (sub_1801224F0.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18006DFDC(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 *v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 result; // rax

  v1 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(__int64 **)(a1 + 8);
    if ( v1 != v3 )
    {
      do
      {
        unknown_libname_116(v1);
        v1 += 4;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    v4 = (*(_QWORD *)(a1 + 16) - (_QWORD)v1) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v4 >= 0x1000 )
    {
      v5 = *(v1 - 1);
      v6 = v4 + 39;
      if ( (unsigned __int64)v1 - v5 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v6);
        JUMPOUT(0x18006E06BLL);
      }
      v1 = (__int64 *)*(v1 - 1);
    }
    result = j_j__o_free(v1);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  return result;
}
