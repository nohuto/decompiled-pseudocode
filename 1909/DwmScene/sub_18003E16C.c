/*
 * XREFs of sub_18003E16C @ 0x18003E16C
 * Callers:
 *     sub_18003E400 @ 0x18003E400 (sub_18003E400.c)
 *     sub_1800CC1A0 @ 0x1800CC1A0 (sub_1800CC1A0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

_QWORD *__fastcall sub_18003E16C(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  _QWORD *result; // rax

  v2 = operator new(0x58uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::RenderStateDesc>::`vftable';
    memset(v2 + 4, 0, 0x48uLL);
    v3[4] = 0;
    *(_QWORD *)(v3 + 5) = 2LL;
    *(_QWORD *)(v3 + 7) = 0LL;
    v3[9] = 0;
    *((_BYTE *)v3 + 40) = 0;
    *(_QWORD *)(v3 + 11) = 0LL;
    *(_QWORD *)(v3 + 13) = 0LL;
    *(_QWORD *)(v3 + 15) = 0LL;
    *(_QWORD *)(v3 + 17) = 0LL;
    v3[19] = 65793;
    *((_BYTE *)v3 + 80) = 1;
    v3[21] = 3;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3 + 4;
  result = a1;
  a1[1] = v3;
  return result;
}
