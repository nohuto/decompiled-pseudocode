/*
 * XREFs of sub_18007315C @ 0x18007315C
 * Callers:
 *     sub_1800761D4 @ 0x1800761D4 (sub_1800761D4.c)
 * Callees:
 *     sub_18006F754 @ 0x18006F754 (sub_18006F754.c)
 *     sub_1800B3698 @ 0x1800B3698 (sub_1800B3698.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007315C(_QWORD *a1, __int64 a2, unsigned int *a3, unsigned int *a4)
{
  _DWORD *v8; // rax
  _DWORD *v9; // rbx

  v8 = operator new(0x1F0uLL);
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 1;
    v8[3] = 1;
    *(_QWORD *)v8 = &std::_Ref_count_obj<Spectre::Engine::Display>::`vftable';
    sub_1800B3698(v8 + 4, a2, *a3, *a4, -2LL);
  }
  else
  {
    v9 = 0LL;
  }
  *a1 = v9 + 4;
  a1[1] = v9;
  sub_18006F754((__int64)a1, (_QWORD *)v9 + 2);
  return a1;
}
