/*
 * XREFs of sub_1800733A0 @ 0x1800733A0
 * Callers:
 *     sub_180073AB4 @ 0x180073AB4 (sub_180073AB4.c)
 * Callees:
 *     sub_18006F754 @ 0x18006F754 (sub_18006F754.c)
 *     sub_1800A26DC @ 0x1800A26DC (sub_1800A26DC.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800733A0(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0x4918uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ShaderManager>::`vftable';
    sub_1800A26DC(v4 + 4, *a2);
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
