/*
 * XREFs of sub_1800D20C4 @ 0x1800D20C4
 * Callers:
 *     sub_1800D1734 @ 0x1800D1734 (sub_1800D1734.c)
 *     sub_1800D1780 @ 0x1800D1780 (sub_1800D1780.c)
 *     sub_1800D1830 @ 0x1800D1830 (sub_1800D1830.c)
 *     sub_1800D1D50 @ 0x1800D1D50 (sub_1800D1D50.c)
 *     sub_1800D1DC0 @ 0x1800D1DC0 (sub_1800D1DC0.c)
 *     sub_1800D8B80 @ 0x1800D8B80 (sub_1800D8B80.c)
 *     sub_1800D8C58 @ 0x1800D8C58 (sub_1800D8C58.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 *     sub_1800F7154 @ 0x1800F7154 (sub_1800F7154.c)
 *     sub_1800F9530 @ 0x1800F9530 (sub_1800F9530.c)
 *     sub_180130A5B @ 0x180130A5B (sub_180130A5B.c)
 *     sub_180130A8B @ 0x180130A8B (sub_180130A8B.c)
 *     sub_180130E7D @ 0x180130E7D (sub_180130E7D.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D20C4(__int64 a1)
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
        sub_1800676B8(v1, 0);
        v1 += 6;
      }
      while ( v1 != v3 );
      v1 = *(__int64 **)a1;
    }
    v4 = 48 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 48LL);
    if ( v4 >= 0x1000 )
    {
      v5 = *(v1 - 1);
      v6 = v4 + 39;
      if ( (unsigned __int64)v1 - v5 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v6);
        JUMPOUT(0x1800D2178LL);
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
