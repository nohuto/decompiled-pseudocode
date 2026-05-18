/*
 * XREFs of sub_1800114F0 @ 0x1800114F0
 * Callers:
 *     sub_180011B30 @ 0x180011B30 (sub_180011B30.c)
 *     sub_1800681A4 @ 0x1800681A4 (sub_1800681A4.c)
 *     sub_180092E40 @ 0x180092E40 (sub_180092E40.c)
 *     sub_180110A60 @ 0x180110A60 (sub_180110A60.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_1800115D0 @ 0x1800115D0 (sub_1800115D0.c)
 *     sub_180011EAC @ 0x180011EAC (sub_180011EAC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800114F0(_QWORD *Src, _QWORD *a2, _QWORD *a3)
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
        sub_180011EAC(Src);
    }
    else
    {
      sub_1800115D0(Src);
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
