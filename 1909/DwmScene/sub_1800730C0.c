/*
 * XREFs of sub_1800730C0 @ 0x1800730C0
 * Callers:
 *     sub_18006EC40 @ 0x18006EC40 (sub_18006EC40.c)
 *     sub_180075A40 @ 0x180075A40 (sub_180075A40.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

_QWORD *__fastcall sub_1800730C0(_QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rdi
  _QWORD *result; // rax

  v2 = operator new(0x38uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *v2 = &std::_Ref_count_obj<Spectre::Engine::Engine::EngineSceneData>::`vftable';
    memset(v2 + 2, 0, 0x28uLL);
    v3[2] = &Spectre::Engine::Engine::EngineSceneData::`vftable';
    v3[3] = 0LL;
    v3[4] = 0LL;
    v3[5] = 0LL;
    v3[6] = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 2;
  result = a1;
  a1[1] = v3;
  return result;
}
