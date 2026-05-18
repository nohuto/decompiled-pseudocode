/*
 * XREFs of sub_1800A2640 @ 0x1800A2640
 * Callers:
 *     sub_1800A3BB0 @ 0x1800A3BB0 (sub_1800A3BB0.c)
 * Callees:
 *     sub_18006F864 @ 0x18006F864 (sub_18006F864.c)
 *     sub_1800F1B14 @ 0x1800F1B14 (sub_1800F1B14.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A2640(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v6 = operator new(0x4F0uLL);
  v7 = v6;
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<Spectre::Engine::ShaderPropertyLayout>::`vftable';
    sub_1800F1B14(v6 + 4, a2, *a3);
  }
  else
  {
    v7 = 0LL;
  }
  *a1 = v7 + 4;
  a1[1] = v7;
  sub_18006F864((__int64)a1, (_QWORD *)v7 + 2);
  return a1;
}
