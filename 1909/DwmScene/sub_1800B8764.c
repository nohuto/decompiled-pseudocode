/*
 * XREFs of sub_1800B8764 @ 0x1800B8764
 * Callers:
 *     sub_1800B8A60 @ 0x1800B8A60 (sub_1800B8A60.c)
 *     sub_1800B8B1C @ 0x1800B8B1C (sub_1800B8B1C.c)
 * Callees:
 *     sub_18008E26C @ 0x18008E26C (sub_18008E26C.c)
 *     sub_18009DE10 @ 0x18009DE10 (sub_18009DE10.c)
 *     sub_18009E070 @ 0x18009E070 (sub_18009E070.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     j_??2@YAPEAX_K@Z @ 0x1801266C0 (j_--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_1800B8764(__m128 *a1, __m128 *a2)
{
  __int32 v4; // eax
  _DWORD *v5; // rbx
  unsigned int v6; // edx
  int *v7; // r9
  unsigned int v8; // r8d
  int v9; // r11d
  size_t Size; // [rsp+40h] [rbp-48h]
  _DWORD v12[6]; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-20h] BYREF

  v13[1] = -2LL;
  if ( !*(_QWORD *)(a1[28].m128_u64[0] + 128) || (LOBYTE(v4) = sub_18008E26C(a2, a1 + 31), (_BYTE)v4) )
  {
    v12[0] = *sub_18009DE10(a2, v13);
    v12[1] = v12[0];
    v12[2] = v12[0];
    v12[3] = v12[0];
    v12[4] = v12[0];
    v12[5] = v12[0];
    v5 = operator new(0x6000uLL);
    v13[0] = v5;
    v6 = 0;
    v7 = v12;
    do
    {
      v8 = 0;
      v9 = *v7;
      do
        v5[1024 * v6 + v8++] = v9;
      while ( v8 < 0x400 );
      ++v6;
      ++v7;
    }
    while ( v6 < 6 );
    LODWORD(Size) = 24576;
    sub_18009E070(a1[28].m128_i64[0], 32, 32, 0, 16, 0, 17, v5, Size, 0LL);
    a1[31].m128_i32[0] = a2->m128_i32[0];
    a1[31].m128_i32[1] = a2->m128_i32[1];
    a1[31].m128_i32[2] = a2->m128_i32[2];
    v4 = a2->m128_i32[3];
    a1[31].m128_i32[3] = v4;
    if ( v5 )
      LOBYTE(v4) = j_j__o_free(v5);
  }
  a1[33].m128_i32[0] = 1065353216;
  return v4;
}
