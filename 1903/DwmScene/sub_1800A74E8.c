/*
 * XREFs of sub_1800A74E8 @ 0x1800A74E8
 * Callers:
 *     sub_1800A8550 @ 0x1800A8550 (sub_1800A8550.c)
 * Callees:
 *     sub_18006F754 @ 0x18006F754 (sub_18006F754.c)
 *     sub_1800F6EA8 @ 0x1800F6EA8 (sub_1800F6EA8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A74E8(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x2A0uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ShaderPipeline>::`vftable';
    sub_1800F6EA8(v4 + 4, a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  sub_18006F754((__int64)a1, (_QWORD *)v5 + 2);
  return a1;
}
