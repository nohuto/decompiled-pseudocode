/*
 * XREFs of ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0274348
 * Callers:
 *     EngTextOut @ 0x1C0087B90 (EngTextOut.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     EngBitBlt @ 0x1C00890E0 (EngBitBlt.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C008FDD0 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015FD24 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015FDA8 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02906CC (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 */

void __fastcall EngTextOutBitBlt(
        struct SURFACE *this,
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
  unsigned int v20; // [rsp+58h] [rbp-B0h]
  struct _FONTOBJ *v21; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+68h] [rbp-A0h]
  _BYTE v23[96]; // [rsp+70h] [rbp-98h] BYREF

  if ( (a3 & 0x10) != 0 )
  {
    v22 = 0;
    v21 = a2;
    v14 = bUMPDSecurityGateEx((__int64)this, (__int64)a2);
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v23, this, a2, v14);
    TextOutBitBlt(
      this,
      (struct RFONTOBJ *)&v21,
      v15,
      v16,
      pco,
      (struct _XLATEOBJ *)prclTrg,
      a8,
      v18,
      pbo,
      a11,
      pptlBrush,
      v20);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v23);
    v21 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v21);
  }
  else
  {
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v23, this, a2, 1);
    EngBitBlt(
      (SURFOBJ *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL)),
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
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v23);
  }
}
