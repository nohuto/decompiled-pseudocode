/*
 * XREFs of ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02607A8
 * Callers:
 *     EngTextOut @ 0x1C00AA120 (EngTextOut.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E1AE4 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C0139568 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C01395C4 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

void __fastcall EngTextOutBitBlt(
        struct SURFACE *a1,
        struct _FONTOBJ *a2,
        char a3,
        struct _SURFOBJ *a4,
        struct _SURFOBJ *a5,
        CLIPOBJ *pco,
        struct _XLATEOBJ *a7,
        RECTL *a8,
        struct _POINTL *a9,
        struct _POINTL *a10,
        struct _BRUSHOBJ *a11,
        struct _POINTL *pptlBrush)
{
  BOOL v14; // eax
  struct _SURFOBJ *v15; // r8
  struct _SURFOBJ *v16; // r9
  RECTL *prclTrg; // [rsp+28h] [rbp-E0h]
  struct _POINTL *v18; // [rsp+38h] [rbp-D0h]
  struct _POINTL *pbo; // [rsp+40h] [rbp-C8h]
  struct _FONTOBJ *v20; // [rsp+60h] [rbp-A8h] BYREF
  int v21; // [rsp+68h] [rbp-A0h]
  _BYTE v22[96]; // [rsp+70h] [rbp-98h] BYREF

  if ( (a3 & 0x10) != 0 )
  {
    v21 = 0;
    v20 = a2;
    v14 = bUMPDSecurityGateEx((__int64)a1, (__int64)a2);
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v22, a1, a2, v14);
    TextOutBitBlt(a1, (struct RFONTOBJ *)&v20, v15, v16, pco, (struct _XLATEOBJ *)prclTrg, a8, v18, pbo, a11, pptlBrush);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v22);
    v20 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v20);
  }
  else
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v22, a1, a2, 1);
    EngBitBlt(
      (SURFOBJ *)(((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL)),
      0LL,
      0LL,
      pco,
      0LL,
      a8,
      0LL,
      0LL,
      a11,
      pptlBrush,
      0xF0F0u);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v22);
  }
}
