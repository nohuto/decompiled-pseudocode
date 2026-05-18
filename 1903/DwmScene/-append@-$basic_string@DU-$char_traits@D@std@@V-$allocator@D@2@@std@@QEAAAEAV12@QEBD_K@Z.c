/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C
 * Callers:
 *     unknown_libname_112 @ 0x18000F62C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F648 (unknown_libname_174.c)
 *     sub_1800114F0 @ 0x1800114F0 (sub_1800114F0.c)
 *     sub_18002B854 @ 0x18002B854 (sub_18002B854.c)
 *     sub_18002BF78 @ 0x18002BF78 (sub_18002BF78.c)
 *     sub_18002BFD4 @ 0x18002BFD4 (sub_18002BFD4.c)
 *     sub_18002C1D0 @ 0x18002C1D0 (sub_18002C1D0.c)
 *     sub_180039C30 @ 0x180039C30 (sub_180039C30.c)
 *     sub_180039FB0 @ 0x180039FB0 (sub_180039FB0.c)
 *     sub_18003BFB0 @ 0x18003BFB0 (sub_18003BFB0.c)
 *     sub_1800427E4 @ 0x1800427E4 (sub_1800427E4.c)
 *     sub_180042DA4 @ 0x180042DA4 (sub_180042DA4.c)
 *     sub_180056D6C @ 0x180056D6C (sub_180056D6C.c)
 *     sub_18005DAC8 @ 0x18005DAC8 (sub_18005DAC8.c)
 *     sub_18005DED4 @ 0x18005DED4 (sub_18005DED4.c)
 *     sub_18005E400 @ 0x18005E400 (sub_18005E400.c)
 *     sub_18006068C @ 0x18006068C (sub_18006068C.c)
 *     sub_18006591C @ 0x18006591C (sub_18006591C.c)
 *     sub_1800681A4 @ 0x1800681A4 (sub_1800681A4.c)
 *     sub_180097A68 @ 0x180097A68 (sub_180097A68.c)
 *     sub_18009A9F0 @ 0x18009A9F0 (sub_18009A9F0.c)
 *     sub_18009FB30 @ 0x18009FB30 (sub_18009FB30.c)
 *     sub_1800A53B8 @ 0x1800A53B8 (sub_1800A53B8.c)
 *     sub_1800A9AD4 @ 0x1800A9AD4 (sub_1800A9AD4.c)
 *     sub_1800DD73C @ 0x1800DD73C (sub_1800DD73C.c)
 *     sub_1800F8BC4 @ 0x1800F8BC4 (sub_1800F8BC4.c)
 *     sub_18010AF60 @ 0x18010AF60 (sub_18010AF60.c)
 *     sub_180114560 @ 0x180114560 (sub_180114560.c)
 * Callees:
 *     sub_18000E23C @ 0x18000E23C (sub_18000E23C.c)
 *     memmove @ 0x180125A9C (memmove.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *Src, const void *a2, unsigned __int64 Size)
{
  __int64 v5; // rcx
  bool v6; // cf
  _QWORD *v7; // rax
  char *v8; // rbx
  _QWORD *result; // rax

  v5 = Src[2];
  if ( Size > Src[3] - v5 )
    return sub_18000E23C(Src, Size, 0LL, a2, Size);
  v6 = Src[3] < 0x10uLL;
  Src[2] = v5 + Size;
  v7 = Src;
  if ( !v6 )
    v7 = (_QWORD *)*Src;
  v8 = (char *)v7 + v5;
  memmove((char *)v7 + v5, a2, Size);
  result = Src;
  v8[Size] = 0;
  return result;
}
