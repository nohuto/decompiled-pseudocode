/*
 * XREFs of sub_18002B85C @ 0x18002B85C
 * Callers:
 *     sub_1800269E0 @ 0x1800269E0 (sub_1800269E0.c)
 *     sub_180065C24 @ 0x180065C24 (sub_180065C24.c)
 *     sub_18006F11C @ 0x18006F11C (sub_18006F11C.c)
 *     sub_18006F1E8 @ 0x18006F1E8 (sub_18006F1E8.c)
 *     sub_18006F2A8 @ 0x18006F2A8 (sub_18006F2A8.c)
 *     sub_1800A032C @ 0x1800A032C (sub_1800A032C.c)
 *     sub_1800A0390 @ 0x1800A0390 (sub_1800A0390.c)
 *     sub_1800A66B4 @ 0x1800A66B4 (sub_1800A66B4.c)
 *     sub_1800B2FD4 @ 0x1800B2FD4 (sub_1800B2FD4.c)
 *     sub_18011CBE0 @ 0x18011CBE0 (sub_18011CBE0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_18002B85C(_QWORD *a1)
{
  _QWORD *result; // rax

  result = operator new(0x48uLL);
  *result = *a1;
  result[1] = *a1;
  result[2] = *a1;
  return result;
}
