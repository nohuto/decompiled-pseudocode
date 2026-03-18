/*
 * XREFs of ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C022AAD8
 * Callers:
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x1C0002C48 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     bXformUnitVector @ 0x1C022AC30 (bXformUnitVector.c)
 *     vLTimesVtfl @ 0x1C022AD5C (vLTimesVtfl.c)
 * Callees:
 *     vEfToLfx @ 0x1C022ADE4 (vEfToLfx.c)
 */

__int64 __fastcall EPOINTQF::operator=(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rdx

  vEfToLfx(a2, a1);
  return vEfToLfx(v2 + 4, v3 + 8);
}
