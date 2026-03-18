/*
 * XREFs of ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x1C0100B68
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A8DA0 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     _lambda_1cf76e2996e024a73989971e750c3c23_::operator() @ 0x1C0100C70 (_lambda_1cf76e2996e024a73989971e750c3c23_--operator().c)
 *     _lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator() @ 0x1C0100C9C (_lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_--operator().c)
 *     ?vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0100CCC (-vGetSurfaceBoundsRect@@YAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C0100D1C (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z @ 0x1C0100D3C (-bClipSrcDstRects@@YA_NQEAU_RECTL@@0PEAU1@1@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1C026BEF4 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 */

char __fastcall bClipSrcDstRectsAndValidate(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        DC **a3,
        struct DCOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _RECTL *a6,
        struct _RECTL *a7)
{
  __int64 v10; // rcx
  char v11; // bl
  __int64 v12; // rcx
  __int64 v13; // rcx
  struct _RECTL v14; // xmm1
  float v16; // xmm1_4
  float v17[2]; // [rsp+20h] [rbp-58h] BYREF
  struct _RECTL v18; // [rsp+28h] [rbp-50h] BYREF
  struct _RECTL v19; // [rsp+38h] [rbp-40h] BYREF
  struct _RECTL v20; // [rsp+48h] [rbp-30h] BYREF
  struct _RECTL v21; // [rsp+58h] [rbp-20h] BYREF

  v21 = *a6;
  v20 = *a7;
  vGetSurfaceBoundsRect(a1, &v19);
  vGetSurfaceBoundsRect(a2, &v18);
  v11 = 0;
  if ( a3 && (unsigned int)DC::bDpiScaleTransform(*a3) )
  {
    v16 = 1.0 / *(float *)(v10 + 528);
    v17[0] = 1.0 / *(float *)(v10 + 524);
    v17[1] = v16;
    ERECTL::vScale((ERECTL *)&v19, (const struct POINTFL *)v17);
    ERECTL::vScale((ERECTL *)&v21, (const struct POINTFL *)v17);
  }
  lambda_d48ab19a047a2d0bcdc1b67e26dd5c9f_::operator()(v10, a4, &v18, &v20);
  if ( bClipSrcDstRects(&v19, &v18, &v21, &v20) )
  {
    lambda_1cf76e2996e024a73989971e750c3c23_::operator()(v12, a3, &v21);
    lambda_1cf76e2996e024a73989971e750c3c23_::operator()(v13, a4, &v20);
    v11 = 1;
    v14 = v21;
    *a7 = v20;
    *a6 = v14;
  }
  return v11;
}
