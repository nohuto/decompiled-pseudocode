/*
 * XREFs of sub_18002EB10 @ 0x18002EB10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017CD4 @ 0x180017CD4 (sub_180017CD4.c)
 *     sub_18002EC2C @ 0x18002EC2C (sub_18002EC2C.c)
 *     sub_18002F4AC @ 0x18002F4AC (sub_18002F4AC.c)
 *     sub_18003107C @ 0x18003107C (sub_18003107C.c)
 *     sub_18009EB9C @ 0x18009EB9C (sub_18009EB9C.c)
 *     sub_18009EC10 @ 0x18009EC10 (sub_18009EC10.c)
 *     sub_1800D0B10 @ 0x1800D0B10 (sub_1800D0B10.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002EB10(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128 v10; // xmm6
  __m128 v11; // xmm0
  _QWORD v13[3]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v14; // [rsp+68h] [rbp-30h]

  if ( a2[3] == 1 )
  {
    sub_18002EC2C();
  }
  else
  {
    v6 = a2[4];
    v7 = sub_18003107C(v6, *a2);
    sub_18002F4AC(a1, v7, *a2, a2[1], a2[2], v6, a2[6], a2[5], *(_QWORD *)(a3 + 8));
  }
  v8 = sub_1800D0B10(v13, a2[4]);
  sub_180017CD4((_QWORD *)(a1 + 120), v8);
  if ( v14 >= 0x10 )
  {
    v9 = v13[0];
    if ( v14 + 1 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v13[0] - 8LL);
      if ( (unsigned __int64)(v13[0] - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, v14 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v9);
  }
  v10 = 0LL;
  v10.m128_f32[0] = (float)(int)sub_18009EC10(a1);
  v11 = 0LL;
  v11.m128_f32[0] = (float)(int)sub_18009EB9C(a1);
  return sub_18009EC2C(a1, _mm_unpacklo_ps(v10, v11).m128_u64[0]);
}
