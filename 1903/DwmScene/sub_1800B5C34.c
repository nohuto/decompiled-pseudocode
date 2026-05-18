/*
 * XREFs of sub_1800B5C34 @ 0x1800B5C34
 * Callers:
 *     sub_1800B6064 @ 0x1800B6064 (sub_1800B6064.c)
 * Callees:
 *     sub_1800CF3E8 @ 0x1800CF3E8 (sub_1800CF3E8.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801271C8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B5C34(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x78uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::VertexBufferGeneric>::`vftable';
    memset(v2 + 4, 0, 0x68uLL);
    sub_1800CF3E8(v3 + 4);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::VertexBufferGeneric::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
