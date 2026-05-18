/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC
 * Callers:
 *     unknown_libname_112 @ 0x18000F67C (unknown_libname_112.c)
 *     unknown_libname_174 @ 0x18000F698 (unknown_libname_174.c)
 *     sub_180011540 @ 0x180011540 (sub_180011540.c)
 *     sub_18002B964 @ 0x18002B964 (sub_18002B964.c)
 *     sub_18002C088 @ 0x18002C088 (sub_18002C088.c)
 *     sub_18002C0E4 @ 0x18002C0E4 (sub_18002C0E4.c)
 *     sub_18002C2E0 @ 0x18002C2E0 (sub_18002C2E0.c)
 *     sub_180039D40 @ 0x180039D40 (sub_180039D40.c)
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 *     sub_18003C0C0 @ 0x18003C0C0 (sub_18003C0C0.c)
 *     sub_1800428F4 @ 0x1800428F4 (sub_1800428F4.c)
 *     sub_180042EB4 @ 0x180042EB4 (sub_180042EB4.c)
 *     sub_180056E7C @ 0x180056E7C (sub_180056E7C.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18005E510 @ 0x18005E510 (sub_18005E510.c)
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 *     sub_180065A2C @ 0x180065A2C (sub_180065A2C.c)
 *     sub_1800682B4 @ 0x1800682B4 (sub_1800682B4.c)
 *     sub_180097B78 @ 0x180097B78 (sub_180097B78.c)
 *     sub_18009AB00 @ 0x18009AB00 (sub_18009AB00.c)
 *     sub_18009FC40 @ 0x18009FC40 (sub_18009FC40.c)
 *     sub_1800A54C8 @ 0x1800A54C8 (sub_1800A54C8.c)
 *     sub_1800A9BE4 @ 0x1800A9BE4 (sub_1800A9BE4.c)
 *     sub_1800DD84C @ 0x1800DD84C (sub_1800DD84C.c)
 *     sub_1800F8CD4 @ 0x1800F8CD4 (sub_1800F8CD4.c)
 *     sub_18010B070 @ 0x18010B070 (sub_18010B070.c)
 *     sub_180114670 @ 0x180114670 (sub_180114670.c)
 * Callees:
 *     sub_18000E28C @ 0x18000E28C (sub_18000E28C.c)
 *     memmove @ 0x180125BAC (memmove.c)
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
    return sub_18000E28C(Src, Size, 0LL, a2, Size);
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
