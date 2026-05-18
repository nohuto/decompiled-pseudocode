/*
 * XREFs of sub_18009FB30 @ 0x18009FB30
 * Callers:
 *     sub_1800A3068 @ 0x1800A3068 (sub_1800A3068.c)
 *     sub_1800A3710 @ 0x1800A3710 (sub_1800A3710.c)
 *     sub_1800A3BAC @ 0x1800A3BAC (sub_1800A3BAC.c)
 *     sub_1800A4188 @ 0x1800A4188 (sub_1800A4188.c)
 *     sub_1800A4C50 @ 0x1800A4C50 (sub_1800A4C50.c)
 *     sub_1800A9974 @ 0x1800A9974 (sub_1800A9974.c)
 *     sub_1800F0B50 @ 0x1800F0B50 (sub_1800F0B50.c)
 *     sub_1800F1E34 @ 0x1800F1E34 (sub_1800F1E34.c)
 *     sub_1800F2344 @ 0x1800F2344 (sub_1800F2344.c)
 *     sub_1800F2CAC @ 0x1800F2CAC (sub_1800F2CAC.c)
 *     sub_1800F30D8 @ 0x1800F30D8 (sub_1800F30D8.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011EAC @ 0x180011EAC (sub_180011EAC.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall sub_18009FB30(const void **Src, _BYTE *a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14

  v3 = a3;
  Src[2] = 0LL;
  Src[3] = (const void *)15;
  *(_BYTE *)Src = 0;
  v6 = a3 + 2;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  v9 = *v6 + v8;
  v10 = (unsigned __int64)Src[2];
  if ( v10 <= v9 && Src[3] != (const void *)v9 )
  {
    if ( (unsigned __int64)Src[3] >= v9 )
    {
      if ( v9 < 0x10 && (unsigned __int64)Src[3] >= 0x10 )
        sub_180011EAC(Src);
    }
    else
    {
      sub_1800115D0(Src, v9 - v10);
      Src[2] = (const void *)v10;
    }
  }
  do
    ++v7;
  while ( a2[v7] );
  std::string::append(Src, a2, v7);
  if ( v3[3] >= 0x10uLL )
    v3 = (_QWORD *)*v3;
  std::string::append(Src, v3, *v6);
  return Src;
}
