/*
 * XREFs of sub_18001FA1C @ 0x18001FA1C
 * Callers:
 *     sub_18001C9A0 @ 0x18001C9A0 (sub_18001C9A0.c)
 * Callees:
 *     sub_180016CEC @ 0x180016CEC (sub_180016CEC.c)
 *     sub_18001C500 @ 0x18001C500 (sub_18001C500.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FA1C(_QWORD *a1, __int128 *a2, __int64 *a3, _QWORD *a4)
{
  char *v8; // rax

  v8 = (char *)operator new(0x6B0uLL);
  if ( v8 )
    v8 = (char *)sub_18001C500((__int64)v8, a2, a3, a4);
  *a1 = v8 + 16;
  a1[1] = v8;
  sub_180016CEC((__int64)a1, (__int64)(v8 + 16));
  return a1;
}
