/*
 * XREFs of sub_1800E21E8 @ 0x1800E21E8
 * Callers:
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 * Callees:
 *     sub_18002B69C @ 0x18002B69C (sub_18002B69C.c)
 *     sub_1800E2140 @ 0x1800E2140 (sub_1800E2140.c)
 *     sub_18010BA84 @ 0x18010BA84 (sub_18010BA84.c)
 *     _Mtx_init_in_situ @ 0x180127422 (_Mtx_init_in_situ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800E21E8(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx

  sub_1800E2140((__int64 *)a1, 8uLL);
  Mtx_init_in_situ((_Mtx_t)(a1 + 24), 2);
  Mtx_init_in_situ((_Mtx_t)(a1 + 104), 2);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 184) = sub_18002B69C();
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 200) = sub_18002B69C();
  *(_DWORD *)(a1 + 216) = 0;
  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != v2 )
  {
    do
    {
      sub_18010BA84(v3);
      v3 += 128LL;
    }
    while ( v3 != v2 );
    v3 = *(_QWORD *)a1;
  }
  *(_QWORD *)(a1 + 8) = v3;
  return a1;
}
