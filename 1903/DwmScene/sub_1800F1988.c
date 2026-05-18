/*
 * XREFs of sub_1800F1988 @ 0x1800F1988
 * Callers:
 *     sub_1800F2944 @ 0x1800F2944 (sub_1800F2944.c)
 * Callees:
 *     sub_1800F4790 @ 0x1800F4790 (sub_1800F4790.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800F1988(_QWORD *a1, __int64 a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // rbx

  v4 = operator new(0xA8uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ShaderPropertyBlock>::`vftable';
    sub_1800F4790(v4 + 4, a2);
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = v5 + 4;
  a1[1] = v5;
  return a1;
}
