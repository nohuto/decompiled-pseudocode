/*
 * XREFs of sub_180011540 @ 0x180011540
 * Callers:
 *     sub_180011B80 @ 0x180011B80 (sub_180011B80.c)
 *     sub_1800682B4 @ 0x1800682B4 (sub_1800682B4.c)
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_180110B70 @ 0x180110B70 (sub_180110B70.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180011620 @ 0x180011620 (sub_180011620.c)
 *     sub_180011EFC @ 0x180011EFC (sub_180011EFC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180011540(_QWORD *Src, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  unsigned __int64 *v6; // r15
  unsigned __int64 *v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp

  v3 = a3;
  v4 = a2;
  Src[2] = 0LL;
  Src[3] = 15LL;
  *(_BYTE *)Src = 0;
  v6 = a2 + 2;
  v7 = a3 + 2;
  v8 = a2[2] + a3[2];
  v9 = Src[2];
  if ( v9 <= v8 && Src[3] != v8 )
  {
    if ( Src[3] >= v8 )
    {
      if ( v8 < 0x10 && Src[3] >= 0x10uLL )
        sub_180011EFC(Src);
    }
    else
    {
      sub_180011620(Src);
      Src[2] = v9;
    }
  }
  if ( v4[3] >= 0x10uLL )
    v4 = (_QWORD *)*v4;
  std::string::append(Src, v4, *v6);
  if ( v3[3] >= 0x10uLL )
    v3 = (_QWORD *)*v3;
  std::string::append(Src, v3, *v7);
  return Src;
}
