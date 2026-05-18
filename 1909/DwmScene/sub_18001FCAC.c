/*
 * XREFs of sub_18001FCAC @ 0x18001FCAC
 * Callers:
 *     sub_18001D1AC @ 0x18001D1AC (sub_18001D1AC.c)
 * Callees:
 *     sub_180016D5C @ 0x180016D5C (sub_180016D5C.c)
 *     sub_18001C7D8 @ 0x18001C7D8 (sub_18001C7D8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001FCAC(_QWORD *a1, __int128 *a2, __int64 *a3, _QWORD *a4)
{
  char *v8; // rax

  v8 = (char *)operator new(0x6B0uLL);
  if ( v8 )
    v8 = (char *)sub_18001C7D8((__int64)v8, a2, a3, a4);
  *a1 = v8 + 16;
  a1[1] = v8;
  sub_180016D5C((__int64)a1, (__int64)(v8 + 16));
  return a1;
}
