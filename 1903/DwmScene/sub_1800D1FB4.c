/*
 * XREFs of sub_1800D1FB4 @ 0x1800D1FB4
 * Callers:
 *     sub_1800D1624 @ 0x1800D1624 (sub_1800D1624.c)
 *     sub_1800D1670 @ 0x1800D1670 (sub_1800D1670.c)
 *     sub_1800D1720 @ 0x1800D1720 (sub_1800D1720.c)
 *     sub_1800D1C40 @ 0x1800D1C40 (sub_1800D1C40.c)
 *     sub_1800D1CB0 @ 0x1800D1CB0 (sub_1800D1CB0.c)
 *     sub_1800D8A70 @ 0x1800D8A70 (sub_1800D8A70.c)
 *     sub_1800D8B48 @ 0x1800D8B48 (sub_1800D8B48.c)
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 *     sub_1800F7044 @ 0x1800F7044 (sub_1800F7044.c)
 *     sub_1800F9420 @ 0x1800F9420 (sub_1800F9420.c)
 *     sub_18013094B @ 0x18013094B (sub_18013094B.c)
 *     sub_18013097B @ 0x18013097B (sub_18013097B.c)
 *     sub_180130D6D @ 0x180130D6D (sub_180130D6D.c)
 * Callees:
 *     sub_1800675A8 @ 0x1800675A8 (sub_1800675A8.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D1FB4(__int64 a1)
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
        sub_1800675A8(v1, 0);
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
        JUMPOUT(0x1800D2068LL);
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
