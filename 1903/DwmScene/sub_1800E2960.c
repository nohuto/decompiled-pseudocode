/*
 * XREFs of sub_1800E2960 @ 0x1800E2960
 * Callers:
 *     sub_1800E1F8C @ 0x1800E1F8C (sub_1800E1F8C.c)
 * Callees:
 *     sub_18010BA84 @ 0x18010BA84 (sub_18010BA84.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800E2960(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 result; // rax

  v4 = *a1;
  if ( *a1 )
  {
    v9 = a1[1];
    if ( v4 != v9 )
    {
      do
      {
        sub_18010BA84(v4);
        v4 += 128LL;
      }
      while ( v4 != v9 );
      v4 = *a1;
    }
    v10 = (a1[2] - v4) & 0xFFFFFFFFFFFFFF80uLL;
    if ( v10 >= 0x1000 )
    {
      v11 = *(_QWORD *)(v4 - 8);
      v12 = v10 + 39;
      if ( (unsigned __int64)(v4 - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v12);
        JUMPOUT(0x1800E2A15LL);
      }
      v4 = *(_QWORD *)(v4 - 8);
    }
    result = j_j__o_free(v4);
  }
  *a1 = a2;
  a1[1] = a2 + (a3 << 7);
  a1[2] = a2 + (a4 << 7);
  return result;
}
