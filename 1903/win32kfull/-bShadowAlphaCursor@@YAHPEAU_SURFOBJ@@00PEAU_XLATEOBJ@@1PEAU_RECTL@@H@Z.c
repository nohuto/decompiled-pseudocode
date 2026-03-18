/*
 * XREFs of ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00FC3A8
 * Callers:
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C00F9EA4 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 * Callees:
 *     EngCopyBits @ 0x1C00356D0 (EngCopyBits.c)
 *     EngBitBlt @ 0x1C0054D60 (EngBitBlt.c)
 *     EngAlphaBlend @ 0x1C005B220 (EngAlphaBlend.c)
 *     ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00FC580 (-bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
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
  LONG cy; // r13d
  unsigned int v8; // ebx
  LONG cx; // eax
  SURFOBJ *v12; // rdi
  XLATEOBJ *v13; // rcx
  LONG v14; // r13d
  unsigned int *pvBits; // rcx
  ULONG i; // edx
  unsigned int v17; // eax
  LONG right; // ecx
  LONG v19; // edx
  LONG v21; // eax
  SURFOBJ *v22; // rdx
  POINTL *pptlSrc; // rax
  _DWORD *v24; // rax
  ULONG v25; // ecx
  LONG bottom; // eax
  XLATEOBJ *v27; // rcx
  POINTL *v28; // rax
  unsigned __int64 v29; // [rsp+60h] [rbp-81h] BYREF
  __int64 v30; // [rsp+68h] [rbp-79h] BYREF
  XLATEOBJ v31; // [rsp+70h] [rbp-71h] BYREF
  struct _XLATEOBJ *v32; // [rsp+88h] [rbp-59h]
  XLATEOBJ *v33; // [rsp+90h] [rbp-51h]
  BLENDOBJ pBlendObj; // [rsp+98h] [rbp-49h] BYREF
  XLATEOBJ *v35; // [rsp+A0h] [rbp-41h]
  XLATEOBJ *v36; // [rsp+A8h] [rbp-39h]
  XLATEOBJ *v37; // [rsp+B0h] [rbp-31h]
  RECTL prclDest; // [rsp+B8h] [rbp-29h] BYREF
  RECTL prclSrc; // [rsp+C8h] [rbp-19h] BYREF

  cy = psoSrc->sizlBitmap.cy;
  v8 = 0;
  *(_QWORD *)&prclSrc.left = 0LL;
  *(_QWORD *)&prclSrc.right = 0LL;
  cx = psoSrc->sizlBitmap.cx;
  v12 = a3;
  v13 = a5;
  v14 = cy >> 1;
  v31.pulXlate = (ULONG *)&v29;
  v33 = pxlo;
  v32 = a5;
  *(_QWORD *)&v31.iUniq = 0LL;
  *(_QWORD *)&v31.iSrcType = 0LL;
  v30 = 0LL;
  if ( a7 )
  {
    if ( a3 )
    {
      prclDest.right = cx + 6;
      prclDest.bottom = v14 + 4;
      prclDest.left = 6;
      prclDest.top = 4;
      EngBitBlt(a1, a3, 0LL, 0LL, 0LL, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
      pvBits = (unsigned int *)a1->pvBits;
      for ( i = a1->cjBits >> 2; i; --i )
      {
        if ( (*pvBits & 0xFF000000) != 0 )
          v17 = (*((unsigned __int8 *)pvBits + 3) << 22) & 0xFF000000;
        else
          v17 = 0;
        *pvBits++ = v17;
      }
      goto LABEL_7;
    }
    return 0LL;
  }
  prclDest.right = cx;
  v21 = HIDWORD(v30);
  v22 = a3;
  if ( !a3 )
  {
    v21 = v14;
    v13 = pxlo;
  }
  HIDWORD(v30) = v21;
  pptlSrc = (POINTL *)&v30;
  if ( a3 )
    pptlSrc = &gptlZero;
  else
    v22 = psoSrc;
  *(_QWORD *)&prclDest.left = 0LL;
  prclDest.bottom = v14;
  EngBitBlt(a1, v22, 0LL, 0LL, v13, &prclDest, pptlSrc, 0LL, 0LL, 0LL, 0xEEEEu);
  v29 = 0xFFFFFFFF00000000uLL;
  EngBitBlt(a1, psoSrc, 0LL, 0LL, &v31, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0x8888u);
  v24 = a1->pvBits;
  v25 = a1->cjBits >> 2;
  if ( v25 )
  {
    while ( !*v24 )
    {
      ++v24;
      if ( !--v25 )
        goto LABEL_23;
    }
    return 0LL;
  }
LABEL_23:
  prclDest.right = a6->right + 6;
  bottom = a6->bottom;
  prclDest.left = 6;
  prclDest.bottom = bottom + 4;
  prclDest.top = 4;
  v29 = 0x40000000LL;
  EngCopyBits(a1, psoSrc, 0LL, &v31, &prclDest, &gptlZero);
LABEL_7:
  if ( (unsigned int)bBlurCursorShadow(a1) && (unsigned int)bBlurCursorShadow(a1) )
  {
    right = a6->right;
    v19 = a6->bottom;
    prclDest.left = 3;
    prclDest.top = 3;
    prclDest.right = right + 3;
    prclDest.bottom = v19 + 3;
    if ( a7 )
    {
      prclSrc.right = right;
      prclSrc.bottom = v19;
      pBlendObj = (BLENDOBJ)33488896;
      v35 = xloIdent;
      v36 = xloIdent;
      v37 = xloIdent;
      *(_QWORD *)&prclSrc.left = 0LL;
      EngAlphaBlend(a1, v12, 0LL, xloIdent, &prclDest, &prclSrc, &pBlendObj);
    }
    else
    {
      v29 = 0xFFFFFFFF00000000uLL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v31, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0x8888u);
      v29 = 4278190080LL;
      EngBitBlt(a1, psoSrc, 0LL, 0LL, &v31, &prclDest, &gptlZero, 0LL, 0LL, 0LL, 0xEEEEu);
      if ( !v12 )
      {
        LODWORD(v30) = 0;
        HIDWORD(v30) = v14;
      }
      v27 = v32;
      v28 = (POINTL *)&v30;
      if ( v12 )
        v28 = &gptlZero;
      else
        v27 = v33;
      if ( !v12 )
        v12 = psoSrc;
      EngBitBlt(a1, v12, 0LL, 0LL, v27, &prclDest, v28, 0LL, 0LL, 0LL, 0xEEEEu);
    }
    return 1;
  }
  return v8;
}
