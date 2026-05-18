/*
 * XREFs of sub_1800B5B3C @ 0x1800B5B3C
 * Callers:
 *     sub_1800B60C0 @ 0x1800B60C0 (sub_1800B60C0.c)
 * Callees:
 *     sub_1800CF054 @ 0x1800CF054 (sub_1800CF054.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800B5B3C(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi

  v2 = operator new(0x78uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::IndexBufferGeneric>::`vftable';
    memset(v2 + 4, 0, 0x68uLL);
    sub_1800CF054(v3 + 4);
    *((_QWORD *)v3 + 2) = &Spectre::Engine::IndexBufferGeneric::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
