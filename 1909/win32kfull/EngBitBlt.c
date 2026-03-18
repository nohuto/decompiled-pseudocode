/*
 * XREFs of EngBitBlt @ 0x1C009E5C0
 * Callers:
 *     EngHTBlt @ 0x1C00C0A94 (EngHTBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00E3444 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     NtGdiEngBitBlt @ 0x1C014AB20 (NtGdiEngBitBlt.c)
 *     SimBitBlt @ 0x1C0275140 (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0289E0C (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028EA20 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0295790 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029A580 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00A0350 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     EngCopyBits @ 0x1C00BF3E0 (EngCopyBits.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00D29FC (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     EngTransparentBlt @ 0x1C00D2CA0 (EngTransparentBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00D32E8 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00D477C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00D5048 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     SimBitBlt @ 0x1C0275140 (SimBitBlt.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BDED4 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BE1D4 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 */

BOOL __stdcall EngBitBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMask,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclTrg,
        POINTL *pptlSrc,
        POINTL *pptlMask,
        BRUSHOBJ *pbo,
        POINTL *pptlBrush,
        ROP4 rop4)
{
  POINTL *v11; // rbx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  __int64 v22; // rcx
  char v23; // r8
  char v24; // r8
  __int64 v26; // rdx
  signed __int32 v27; // ett
  int v28; // edx
  int v29; // ecx
  __int64 v30; // rbx
  int v31; // eax
  void (__fastcall *v32)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // r10
  char *v33; // rcx
  __int64 (__fastcall *v34)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  ULONG iTransColor; // eax
  LONG x; // edx
  int v37; // ecx
  LONG y; // edx
  ULONG iSolidColor; // r9d
  void (*v40)(struct _PATBLTFRAME *, int); // rax
  unsigned int v41; // eax
  _DWORD *pvRbrush; // rax
  int v43; // ecx
  void (*v44)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  struct _POINTL *v45; // [rsp+60h] [rbp-A0h]
  XLATEOBJ *v46; // [rsp+68h] [rbp-98h]
  struct SURFACE *v48; // [rsp+78h] [rbp-88h]
  struct SURFACE *v51; // [rsp+90h] [rbp-70h] BYREF
  char v52; // [rsp+98h] [rbp-68h]
  int v53; // [rsp+9Ch] [rbp-64h]
  struct _POINTL *v54; // [rsp+A0h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  __int64 v56; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+B8h] [rbp-48h] BYREF
  POINTL *v58; // [rsp+C0h] [rbp-40h]
  struct SURFACE *v59; // [rsp+C8h] [rbp-38h]
  _DWORD v60[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v61; // [rsp+E0h] [rbp-20h]
  int v62; // [rsp+E8h] [rbp-18h]
  int v63; // [rsp+ECh] [rbp-14h]
  RECTL prclSrc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v65; // [rsp+100h] [rbp+0h] BYREF
  int v66; // [rsp+108h] [rbp+8h]
  int v67; // [rsp+10Ch] [rbp+Ch]

  v11 = pptlBrush;
  v46 = pxlo;
  v45 = pptlSrc;
  v54 = pptlMask;
  v58 = pptlBrush;
  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(psoTrg);
  v48 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoSrc);
  v59 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoMask);
  *(_QWORD *)&prclSrc.left = 0LL;
  *(_QWORD *)&prclSrc.right = 0LL;
  CurrentThread = KeGetCurrentThread();
  v18 = 0;
  if ( (unsigned int)IsThreadCrossSessionAttached(v16, v15, v17)
    || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
    || (v20 = *ThreadWin32Thread) == 0
    || (v21 = (_QWORD *)(v20 + 40), (_QWORD *)*v21 == v21) )
  {
    v22 = 0LL;
  }
  else
  {
    v22 = *v21 - 40LL;
  }
  if ( v22 && (*(_DWORD *)(v22 + 412) & 0x100) != 0 && *(_DWORD *)(v22 + 420) )
  {
    v23 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
    if ( (v23 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSolidColor == -1 && !pptlBrush))\n",
          67LL);
      return 0;
    }
    v24 = v23 & 0xD4;
    if ( v24 && (!psoSrc || !pptlSrc) )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDSRC && (!psoSrc || !pptlSrc)\n",
          74LL);
      return 0;
    }
    if ( (unsigned int)(*(_DWORD *)(v14 + 96) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfDst is BMF_JPEG/BMF_PNG\n", 84LL);
      return 1;
    }
    if ( v24 && (unsigned int)(*((_DWORD *)v48 + 24) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfSrc is BMF_JPEG/BMF_PNG\n", 90LL);
      return 1;
    }
  }
  if ( !psoTrg->iType )
  {
    v26 = *(_QWORD *)(v14 + 48);
    if ( v26 )
    {
      _m_prefetchw((const void *)(v26 + 40));
      do
        v27 = *(_DWORD *)(v26 + 40);
      while ( v27 != _InterlockedCompareExchange((volatile signed __int32 *)(v26 + 40), v27 | 0x40000, v27) );
      v26 = *(_QWORD *)(v14 + 48);
    }
    v56 = v26;
    PDEVOBJ::vSync((PDEVOBJ *)&v56, psoTrg, 0LL, 0);
    ++*(_DWORD *)(v14 + 92);
    if ( !rop4 )
    {
LABEL_101:
      iSolidColor = -(rop4 != 0);
LABEL_102:
      vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, iSolidColor, 0);
      return 1;
    }
    if ( rop4 != 3855 )
    {
      switch ( rop4 )
      {
        case 0x5555u:
          vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, 0xFFFFFFFF, 1);
          return 1;
        case 0x5A5Au:
          if ( pbo->iSolidColor != -1 )
          {
            vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, pbo->iSolidColor, 1);
            return 1;
          }
          if ( *(_DWORD *)(v14 + 96) >= 3u && pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
          {
            vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, 2u);
            return 1;
          }
          goto LABEL_42;
        case 0xCCAAu:
          if ( !psoMask )
          {
            if ( !pbo->pvRbrush )
            {
              iTransColor = pbo->iSolidColor;
              x = pptlSrc->x;
              prclSrc.right = pptlSrc->x + prclTrg->right - prclTrg->left;
              v37 = prclTrg->bottom - prclTrg->top;
              prclSrc.left = x;
              y = pptlSrc->y;
              prclSrc.bottom = y + v37;
              prclSrc.top = y;
              return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &prclSrc, iTransColor, 1u);
            }
            return 1;
          }
          goto LABEL_42;
        case 0xCCCCu:
          if ( !*((_WORD *)v48 + 50) )
            return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
          v34 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v48 + 6) + 2840LL);
          if ( v34 )
            return v34(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
          return v18;
      }
      if ( rop4 != 61680 )
      {
        if ( rop4 != 0xFFFF )
          goto LABEL_42;
        goto LABEL_101;
      }
    }
    if ( pbo->iSolidColor != -1 )
    {
      iSolidColor = ~pbo->iSolidColor;
      if ( (rop4 & 1) == 0 )
        iSolidColor = pbo->iSolidColor;
      goto LABEL_102;
    }
    if ( *(_DWORD *)(v14 + 96) == 3
      && rop4 == 61680
      && pvGetEngRbrush(pbo)
      && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
    {
      v40 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8;
      goto LABEL_81;
    }
    v41 = *(_DWORD *)(v14 + 96);
    if ( v41 >= 3 )
    {
      if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
      {
        LOBYTE(v18) = rop4 != 61680;
        vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v18);
        return 1;
      }
      goto LABEL_42;
    }
    if ( v41 == 2 )
    {
      if ( rop4 != 61680 || !pvGetEngRbrush(pbo) || *(_QWORD *)((char *)pbo[1].pvRbrush + 20) != 0x800000008LL )
        goto LABEL_42;
      v40 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8;
LABEL_81:
      vDIBPatBltSrccopy8x8((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v40);
      return 1;
    }
    if ( v41 == 1 && rop4 == 61680 && pvGetEngRbrush(pbo) )
    {
      pvRbrush = pbo[1].pvRbrush;
      v43 = pvRbrush[5];
      if ( v43 != 8 )
      {
        if ( v43 == 6 && pvRbrush[6] == 6 )
        {
          vDIBnPatBltSrccopy6x6((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v44);
          return 1;
        }
        goto LABEL_42;
      }
      if ( pvRbrush[6] == 8 )
      {
        v40 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8;
        goto LABEL_81;
      }
    }
LABEL_42:
    if ( psoSrc )
    {
      v57 = *((_QWORD *)v48 + 6);
      PDEVOBJ::vSync((PDEVOBJ *)&v57, psoSrc, 0LL, 0);
    }
    v51 = 0LL;
    v52 = 0;
    v53 = 0;
    if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && *((_WORD *)v48 + 50) )
    {
      v28 = prclTrg->right - prclTrg->left;
      v29 = prclTrg->bottom - prclTrg->top;
      v30 = *((_QWORD *)v48 + 6);
      v60[0] = *(_DWORD *)(v14 + 96);
      v31 = *((_DWORD *)v48 + 28) & 0x40000;
      v66 = v28;
      v67 = v29;
      v60[1] = v28;
      v60[2] = v29;
      v62 = v31;
      v65 = 0LL;
      v60[3] = 0;
      v63 = 0;
      v61 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v51, (struct _DEVBITMAPINFO *)v60, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
        || (v32 = *(void (__fastcall **)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))(v30 + 2840)) == 0LL )
      {
LABEL_56:
        SURFMEM::~SURFMEM((SURFMEM *)&v51);
        return v18;
      }
      v33 = 0LL;
      if ( v51 )
        v33 = (char *)v51 + 24;
      v32(v33, psoSrc, 0LL, pxlo, &v65, pptlSrc);
      v11 = v58;
      v45 = &gptl00;
      v48 = v51;
      v46 = xloIdent;
    }
    if ( *(_DWORD *)(v14 + 96) > 6u && (unsigned int)bUMPDSecurityGateEx() )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n", 492);
      v18 = 1;
      goto LABEL_56;
    }
    BltLnk(
      (struct SURFACE *)v14,
      v48,
      v59,
      (struct ECLIPOBJ *)pco,
      (struct XLATE *)v46,
      prclTrg,
      v45,
      v54,
      pbo,
      v11,
      rop4);
    SURFMEM::~SURFMEM((SURFMEM *)&v51);
    return 1;
  }
  return SimBitBlt(psoTrg, psoSrc, psoMask, pco, pxlo, prclTrg, pptlSrc, v54, pbo, pptlBrush, rop4, 0LL);
}
