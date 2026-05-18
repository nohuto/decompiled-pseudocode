/*
 * XREFs of sub_1800397B8 @ 0x1800397B8
 * Callers:
 *     sub_18003A0C0 @ 0x18003A0C0 (sub_18003A0C0.c)
 *     sub_18009EFD0 @ 0x18009EFD0 (sub_18009EFD0.c)
 *     sub_18009F01C @ 0x18009F01C (sub_18009F01C.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

_QWORD *__fastcall sub_1800397B8(_QWORD *a1)
{
  _DWORD *v2; // rax
  _DWORD *v3; // rdi
  __int128 v4; // xmm0
  _QWORD *result; // rax

  v2 = operator new(0x48uLL);
  v3 = v2;
  if ( v2 )
  {
    v2[2] = 1;
    v2[3] = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj<Spectre::Engine::SamplerStateDesc>::`vftable';
    memset(v2 + 4, 0, 0x34uLL);
    v3[5] = 0;
    v3[6] = 0;
    v3[7] = 0;
    v3[8] = 0;
    v3[4] = 1;
    v3[9] = 1;
    v3[10] = 7;
    v4 = xmmword_18025F030;
    v3[15] = 0;
    v3[16] = 2139095039;
    *(_OWORD *)(v3 + 11) = v4;
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
