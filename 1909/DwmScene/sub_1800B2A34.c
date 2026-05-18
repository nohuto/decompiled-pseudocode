/*
 * XREFs of sub_1800B2A34 @ 0x1800B2A34
 * Callers:
 *     sub_1800AAC3C @ 0x1800AAC3C (sub_1800AAC3C.c)
 *     sub_180121734 @ 0x180121734 (sub_180121734.c)
 *     sub_180124854 @ 0x180124854 (sub_180124854.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800B2A34(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 *v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *(__int64 **)a1;
  if ( *(_QWORD *)a1 )
  {
    v9 = *(__int64 **)(a1 + 8);
    if ( v4 != v9 )
    {
      do
      {
        unknown_libname_116(v4);
        v4 += 4;
      }
      while ( v4 != v9 );
      v4 = *(__int64 **)a1;
    }
    v10 = (*(_QWORD *)(a1 + 16) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v10 >= 0x1000 )
    {
      v11 = *(v4 - 1);
      v12 = v10 + 39;
      if ( (unsigned __int64)v4 - v11 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x1800B2AE9LL);
      }
      v4 = (__int64 *)*(v4 - 1);
    }
    result = j_j__o_free(v4);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
  return result;
}
