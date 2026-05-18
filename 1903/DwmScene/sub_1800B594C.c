/*
 * XREFs of sub_1800B594C @ 0x1800B594C
 * Callers:
 *     sub_1800B5EFC @ 0x1800B5EFC (sub_1800B5EFC.c)
 * Callees:
 *     sub_1800F9B98 @ 0x1800F9B98 (sub_1800F9B98.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B594C(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xA0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::ConstantBufferGeneric>::`vftable';
    sub_1800F9B98(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
