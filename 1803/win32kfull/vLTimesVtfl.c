/*
 * XREFs of vLTimesVtfl @ 0x1C022AD5C
 * Callers:
 *     vFillGLYPHDATA @ 0x1C0221048 (vFillGLYPHDATA.c)
 *     vFillGLYPHDATA_ErrRecover @ 0x1C0221838 (vFillGLYPHDATA_ErrRecover.c)
 *     vFillSingularGLYPHDATA @ 0x1C0221A20 (vFillSingularGLYPHDATA.c)
 *     vFill_GlyphData @ 0x1C022A0C0 (vFill_GlyphData.c)
 * Callees:
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x1C022AAD8 (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

__int64 __fastcall vLTimesVtfl(int a1, float *a2, __int64 a3)
{
  float v3; // xmm1_4
  float v5; // [rsp+38h] [rbp+10h] BYREF
  float v6; // [rsp+3Ch] [rbp+14h]

  v3 = (float)a1 * *a2;
  v6 = (float)a1 * a2[1];
  v5 = v3;
  return EPOINTQF::operator=(a3, (__int64)&v5);
}
