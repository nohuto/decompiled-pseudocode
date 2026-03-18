/*
 * XREFs of _lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator() @ 0x1C0100C9C
 * Callers:
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C0100B68 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0100D1C (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026BEF4 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

void __fastcall lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator()(__int64 a1, DC **a2, __int64 a3, ERECTL *a4)
{
  __int64 v5; // rcx
  ERECTL *v6; // r8
  float v7; // xmm1_4
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 )
  {
    v8 = a1;
    if ( (unsigned int)DC::bDpiScaleTransform(*a2) )
    {
      v7 = 1.0 / *(float *)(v5 + 528);
      *(float *)&v8 = 1.0 / *(float *)(v5 + 524);
      *((float *)&v8 + 1) = v7;
      ERECTL::vScale(v6, (const struct POINTFL *)&v8);
      ERECTL::vScale(a4, (const struct POINTFL *)&v8);
    }
  }
}
