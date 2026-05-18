/*
 * XREFs of sub_18002EC20 @ 0x18002EC20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017D44 @ 0x180017D44 (sub_180017D44.c)
 *     sub_18002ED3C @ 0x18002ED3C (sub_18002ED3C.c)
 *     sub_18002F5BC @ 0x18002F5BC (sub_18002F5BC.c)
 *     sub_18003118C @ 0x18003118C (sub_18003118C.c)
 *     sub_18009ECAC @ 0x18009ECAC (sub_18009ECAC.c)
 *     sub_18009ED20 @ 0x18009ED20 (sub_18009ED20.c)
 *     sub_1800D0C20 @ 0x1800D0C20 (sub_1800D0C20.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18002EC20(__int64 a1, unsigned int *a2, __int64 a3)
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
    sub_18002ED3C();
  }
  else
  {
    v6 = a2[4];
    v7 = sub_18003118C(v6, *a2);
    sub_18002F5BC(a1, v7, *a2, a2[1], a2[2], v6, a2[6], a2[5], *(_QWORD *)(a3 + 8));
  }
  v8 = sub_1800D0C20(v13, a2[4]);
  sub_180017D44((_QWORD *)(a1 + 120), v8);
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
  v10.m128_f32[0] = (float)(int)sub_18009ED20(a1);
  v11 = 0LL;
  v11.m128_f32[0] = (float)(int)sub_18009ECAC(a1);
  return sub_18009ED3C(a1, _mm_unpacklo_ps(v10, v11).m128_u64[0]);
}
