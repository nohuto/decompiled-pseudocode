/*
 * XREFs of sub_1800A248C @ 0x1800A248C
 * Callers:
 *     sub_1800A3710 @ 0x1800A3710 (sub_1800A3710.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_1800A248C(_QWORD *a1, _QWORD *a2)
{
  _DWORD *v4; // rax
  _DWORD *v5; // r8

  v4 = operator new(0x38uLL);
  v5 = v4;
  if ( v4 )
  {
    v4[2] = 1;
    v4[3] = 1;
    *(_QWORD *)v4 = &std::_Ref_count_obj<Spectre::Engine::ShaderProgram>::`vftable';
    *((_QWORD *)v4 + 2) = 0LL;
    *((_QWORD *)v4 + 3) = 0LL;
    *((_QWORD *)v4 + 4) = 0LL;
    *((_QWORD *)v4 + 2) = *a2;
    *((_QWORD *)v4 + 3) = a2[1];
    *((_QWORD *)v4 + 4) = a2[2];
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *((_QWORD *)v4 + 5) = a2[3];
    *((_QWORD *)v4 + 6) = a2[4];
    a2[3] = 0LL;
    a2[4] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  a1[1] = v5;
  *a1 = v5 + 4;
  return a1;
}
