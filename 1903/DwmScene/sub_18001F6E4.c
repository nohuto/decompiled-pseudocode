/*
 * XREFs of sub_18001F6E4 @ 0x18001F6E4
 * Callers:
 *     sub_180020C8C @ 0x180020C8C (sub_180020C8C.c)
 * Callees:
 *     sub_1800CD904 @ 0x1800CD904 (sub_1800CD904.c)
 *     ??2@YAPEAX_K@Z @ 0x180126108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001F6E4(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xC0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::DeviceShaderPipeline>::`vftable';
    sub_1800CD904(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
