/*
 * XREFs of sub_18009FC40 @ 0x18009FC40
 * Callers:
 *     sub_1800A3178 @ 0x1800A3178 (sub_1800A3178.c)
 *     sub_1800A3820 @ 0x1800A3820 (sub_1800A3820.c)
 *     sub_1800A3CBC @ 0x1800A3CBC (sub_1800A3CBC.c)
 *     sub_1800A4298 @ 0x1800A4298 (sub_1800A4298.c)
 *     sub_1800A4D60 @ 0x1800A4D60 (sub_1800A4D60.c)
 *     sub_1800A9A84 @ 0x1800A9A84 (sub_1800A9A84.c)
 *     sub_1800F0C60 @ 0x1800F0C60 (sub_1800F0C60.c)
 *     sub_1800F1F44 @ 0x1800F1F44 (sub_1800F1F44.c)
 *     sub_1800F2454 @ 0x1800F2454 (sub_1800F2454.c)
 *     sub_1800F2DBC @ 0x1800F2DBC (sub_1800F2DBC.c)
 *     sub_1800F31E8 @ 0x1800F31E8 (sub_1800F31E8.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180011620 @ 0x180011620 (sub_180011620.c)
 *     sub_180011EFC @ 0x180011EFC (sub_180011EFC.c)
 */

// Hidden C++ exception states: #wind=1
const void **__fastcall sub_18009FC40(const void **Src, _BYTE *a2, _QWORD *a3)
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
        sub_180011EFC(Src);
    }
    else
    {
      sub_180011620(Src, v9 - v10);
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
