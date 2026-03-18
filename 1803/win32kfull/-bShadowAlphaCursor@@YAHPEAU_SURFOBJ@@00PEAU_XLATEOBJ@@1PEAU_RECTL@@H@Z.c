/*
 * XREFs of ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01365DC
 * Callers:
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00DCEE8 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 * Callees:
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     EngBitBlt @ 0x1C0091510 (EngBitBlt.c)
 *     EngAlphaBlend @ 0x1C00A15D0 (EngAlphaBlend.c)
 *     ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C01367A0 (-bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall bShadowAlphaCursor(
        struct _SURFOBJ *a1,
        SURFOBJ *psoSrc,
        SURFOBJ *a3,
        XLATEOBJ *pxlo,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        int a7)
{
  LONG cx; // eax
  XLATEOBJ *v10; // rcx
  unsigned int v11; // ebx
  LONG v12; // r14d
  SURFOBJ *v13; // rdi
  unsigned int *pvBits; // rcx
  ULONG i; // edx
  unsigned int v16; // eax
  LONG right; // ecx
  LONG v18; // edx
  POINTL *pptlSrc; // rax
  SURFOBJ *v21; // rdx
  _DWORD *v22; // rax
  ULONG v23; // ecx
  LONG bottom; // eax
  XLATEOBJ *v25; // rcx
  POINTL *v26; // rax
  unsigned __int64 v27; // [rsp+60h] [rbp-81h] BYREF
  int v28; // [rsp+68h] [rbp-79h] BYREF
  LONG v29; // [rsp+6Ch] [rbp-75h]
  struct _XLATEOBJ *v30; // [rsp+70h] [rbp-71h]
  XLATEOBJ *v31; // [rsp+78h] [rbp-69h]
  BLENDOBJ pBlendObj; // [rsp+80h] [rbp-61h] BYREF
  XLATEOBJ *v33; // [rsp+88h] [rbp-59h]
  XLATEOBJ *v34; // [rsp+90h] [rbp-51h]
  XLATEOBJ *v35; // [rsp+98h] [rbp-49h]
  XLATEOBJ v36; // [rsp+A0h] [rbp-41h] BYREF
  RECTL prclDest; // [rsp+B8h] [rbp-29h] BYREF
  RECTL prclSrc; // [rsp+C8h] [rbp-19h] BYREF

  cx = psoSrc->sizlBitmap.cx;
  v10 = a5;
  v11 = 0;
  v12 = psoSrc->sizlBitmap.cy >> 1;
  v13 = a3;
  v31 = pxlo;
  v30 = a5;
  v36.pulXlate = (ULONG *)&v27;
  if ( a7 )
  {
    if ( a3 )
    {
      prclDest.right = cx + 6;
      prclDest.bottom = v12 + 4;
      prclDest.left = 6;
      prclDest.top = 4;
      EngBitBlt(a1, a3, 0LL, 0LL, 0LL, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
      pvBits = (unsigned int *)a1->pvBits;
      for ( i = a1->cjBits >> 2; i; --i )
      {
        if ( (*pvBits & 0xFF000000) != 0 )
          v16 = (HIBYTE(*pvBits) << 22) & 0xFF000000;
        else
          v16 = 0;
        *pvBits++ = v16;
      }
      goto LABEL_7;
    }
    return 0LL;
  }
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.right = cx;
  prclDest.bottom = v12;
  if ( !a3 )
  {
    v28 = 0;
    v29 = v12;
  }
  pptlSrc = (POINTL *)&v28;
  v21 = a3;
  if ( a3 )
    pptlSrc = &gptlZero;
  else
    v10 = pxlo;
  if ( !a3 )
    v21 = psoSrc;
  EngBitBlt(a1, v21, 0LL, 0LL, v10, &prclDest, pptlSrc, 0LL, 0LL, 0LL, 0xEEEEu);
  v27 = 0xFFFFFFFF00000000uLL;
  EngBitBlt(a1, psoSrc, 0LL, 0LL, &v36, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0x8888u);
  v22 = a1->pvBits;
  v23 = a1->cjBits >> 2;
  if ( v23 )
  {
    while ( !*v22 )
    {
      ++v22;
      if ( !--v23 )
        goto LABEL_25;
    }
    return 0LL;
  }
LABEL_25:
  prclDest.right = a6->right + 6;
  bottom = a6->bottom;
  prclDest.left = 6;
  prclDest.bottom = bottom + 4;
  prclDest.top = 4;
  v27 = 0x40000000LL;
  EngCopyBits(a1, psoSrc, 0LL, &v36, &prclDest, &gptlZero);
LABEL_7:
  if ( (unsigned int)bBlurCursorShadow(a1) && (unsigned int)bBlurCursorShadow(a1) )
  {
    right = a6->right;
    v18 = a6->bottom;
    prclDest.left = 3;
    prclDest.top = 3;
    prclDest.right = right + 3;
    prclDest.bottom = v18 + 3;
    if ( a7 )
    {
      prclSrc.right = right;
      prclSrc.bottom = v18;
      pBlendObj = (BLENDOBJ)33488896;
      v33 = xloIdent;
      v34 = xloIdent;
      v35 = xloIdent;
      *(_QWORD *)&prclSrc.left = 0LL;
      EngAlphaBlend(a1, v13, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
    }
    else
    {
      v27 = 0xFFFFFFFF00000000uLL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v36, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0x8888u);
      v27 = 4278190080LL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v36, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
      if ( !v13 )
      {
        v28 = 0;
        v29 = v12;
      }
      v25 = v30;
      v26 = (POINTL *)&v28;
      if ( v13 )
        v26 = &gptlZero;
      else
        v25 = v31;
      if ( !v13 )
        v13 = psoSrc;
      EngBitBlt(a1, v13, 0LL, 0LL, v25, &prclDest, v26, 0LL, 0LL, 0LL, 0xEEEEu);
    }
    return 1;
  }
  return v11;
}
