/*
 * XREFs of sub_180017030 @ 0x180017030
 * Callers:
 *     sub_1800157CC @ 0x1800157CC (sub_1800157CC.c)
 * Callees:
 *     sub_180014888 @ 0x180014888 (sub_180014888.c)
 *     sub_180016D5C @ 0x180016D5C (sub_180016D5C.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180017030(
        _QWORD *a1,
        __int128 *a2,
        _QWORD *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        unsigned int *a7,
        float *a8)
{
  char *v12; // rax

  v12 = (char *)operator new(0x6C8uLL);
  if ( v12 )
    v12 = (char *)sub_180014888((__int64)v12, a2, a3, a4, a5, a6, a7, a8);
  *a1 = v12 + 16;
  a1[1] = v12;
  sub_180016D5C((__int64)a1, (__int64)(v12 + 16));
  return a1;
}
