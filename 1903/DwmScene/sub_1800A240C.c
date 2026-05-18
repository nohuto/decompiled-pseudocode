/*
 * XREFs of sub_1800A240C @ 0x1800A240C
 * Callers:
 *     sub_1800A3BAC @ 0x1800A3BAC (sub_1800A3BAC.c)
 * Callees:
 *     sub_18006F754 @ 0x18006F754 (sub_18006F754.c)
 *     sub_18009FA80 @ 0x18009FA80 (sub_18009FA80.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A240C(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v8; // rax

  v8 = operator new(0x240uLL);
  if ( v8 )
    v8 = (_QWORD *)sub_18009FA80((__int64)v8, a2, a3, a4);
  *a1 = v8 + 2;
  a1[1] = v8;
  sub_18006F754((__int64)a1, v8 + 2);
  return a1;
}
