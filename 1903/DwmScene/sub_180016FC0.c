/*
 * XREFs of sub_180016FC0 @ 0x180016FC0
 * Callers:
 *     sub_18001575C @ 0x18001575C (sub_18001575C.c)
 * Callees:
 *     sub_180014818 @ 0x180014818 (sub_180014818.c)
 *     sub_180016CEC @ 0x180016CEC (sub_180016CEC.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180016FC0(
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
    v12 = (char *)sub_180014818((__int64)v12, a2, a3, a4, a5, a6, a7, a8);
  *a1 = v12 + 16;
  a1[1] = v12;
  sub_180016CEC((__int64)a1, (__int64)(v12 + 16));
  return a1;
}
