/*
 * XREFs of sub_18002C0E4 @ 0x18002C0E4
 * Callers:
 *     sub_18002D0C8 @ 0x18002D0C8 (sub_18002D0C8.c)
 *     sub_180042EB4 @ 0x180042EB4 (sub_180042EB4.c)
 *     sub_180064DAC @ 0x180064DAC (sub_180064DAC.c)
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 *     sub_1800AF04C @ 0x1800AF04C (sub_1800AF04C.c)
 *     sub_1800AF560 @ 0x1800AF560 (sub_1800AF560.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 *     sub_1800F8CD4 @ 0x1800F8CD4 (sub_1800F8CD4.c)
 *     sub_180100440 @ 0x180100440 (sub_180100440.c)
 *     sub_180100F40 @ 0x180100F40 (sub_180100F40.c)
 *     sub_180101098 @ 0x180101098 (sub_180101098.c)
 *     sub_180101170 @ 0x180101170 (sub_180101170.c)
 *     sub_18010B070 @ 0x18010B070 (sub_18010B070.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180011620 @ 0x180011620 (sub_180011620.c)
 *     sub_180011EFC @ 0x180011EFC (sub_180011EFC.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall sub_18002C0E4(const void **Src, _QWORD *a2, _BYTE *a3)
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
        sub_180011EFC(Src);
    }
    else
    {
      sub_180011620(Src, v9 - v10);
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
