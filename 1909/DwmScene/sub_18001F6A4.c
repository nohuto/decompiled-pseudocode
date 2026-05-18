/*
 * XREFs of sub_18001F6A4 @ 0x18001F6A4
 * Callers:
 *     sub_180020C34 @ 0x180020C34 (sub_180020C34.c)
 * Callees:
 *     sub_1800330AC @ 0x1800330AC (sub_1800330AC.c)
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18001F6A4(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rbx

  v2 = operator new(0xB0uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::D3D11::CommandListD3D11>::`vftable';
    sub_1800330AC(v2 + 4);
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  a1[1] = v3;
  return a1;
}
