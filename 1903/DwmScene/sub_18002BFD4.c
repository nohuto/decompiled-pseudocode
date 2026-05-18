/*
 * XREFs of sub_18002BFD4 @ 0x18002BFD4
 * Callers:
 *     sub_18002CFB8 @ 0x18002CFB8 (sub_18002CFB8.c)
 *     sub_180042DA4 @ 0x180042DA4 (sub_180042DA4.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_18009A9F0 @ 0x18009A9F0 (sub_18009A9F0.c)
 *     sub_1800AEF3C @ 0x1800AEF3C (sub_1800AEF3C.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800D9448 @ 0x1800D9448 (sub_1800D9448.c)
 *     sub_1800F8BC4 @ 0x1800F8BC4 (sub_1800F8BC4.c)
 *     sub_180100330 @ 0x180100330 (sub_180100330.c)
 *     sub_180100E30 @ 0x180100E30 (sub_180100E30.c)
 *     sub_180100F88 @ 0x180100F88 (sub_180100F88.c)
 *     sub_180101060 @ 0x180101060 (sub_180101060.c)
 *     sub_18010AF60 @ 0x18010AF60 (sub_18010AF60.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011EAC @ 0x180011EAC (sub_180011EAC.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall sub_18002BFD4(const void **Src, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v4; // rsi
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14

  v4 = a2;
  Src[2] = 0LL;
  Src[3] = (const void *)15;
  *(_BYTE *)Src = 0;
  v6 = a2 + 2;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( a3[v8] );
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
  if ( v4[3] >= 0x10uLL )
    v4 = (_QWORD *)*v4;
  std::string::append(Src, v4, *v6);
  do
    ++v7;
  while ( a3[v7] );
  std::string::append(Src, a3, v7);
  return Src;
}
