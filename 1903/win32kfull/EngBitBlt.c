/*
 * XREFs of EngBitBlt @ 0x1C0054D60
 * Callers:
 *     EngHTBlt @ 0x1C0036378 (EngHTBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C00FC3A8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     NtGdiEngBitBlt @ 0x1C0149D70 (NtGdiEngBitBlt.c)
 *     SimBitBlt @ 0x1C0275800 (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C028A49C (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028F050 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C0295D40 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C029AB30 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     EngCopyBits @ 0x1C00356D0 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0056AC0 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00F290C (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     EngTransparentBlt @ 0x1C00F2BB0 (EngTransparentBlt.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F31F8 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00F468C (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00F4F58 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     SimBitBlt @ 0x1C0275800 (SimBitBlt.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BE384 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02BE684 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
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
  __int64 v18; // r9
  int v19; // edi
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // rcx
  char v24; // r8
  char v25; // r8
  __int64 v27; // rdx
  signed __int32 v28; // ett
  int v29; // edx
  int v30; // ecx
  __int64 v31; // rbx
  int v32; // eax
  void (__fastcall *v33)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // r10
  char *v34; // rcx
  __int64 (__fastcall *v35)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  ULONG iTransColor; // eax
  LONG x; // edx
  int v38; // ecx
  LONG y; // edx
  ULONG iSolidColor; // r9d
  void (*v41)(struct _PATBLTFRAME *, int); // rax
  unsigned int v42; // eax
  _DWORD *pvRbrush; // rax
  int v44; // ecx
  void (*v45)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  struct _POINTL *v46; // [rsp+60h] [rbp-A0h]
  XLATEOBJ *v47; // [rsp+68h] [rbp-98h]
  struct SURFACE *v49; // [rsp+78h] [rbp-88h]
  struct SURFACE *v52; // [rsp+90h] [rbp-70h] BYREF
  char v53; // [rsp+98h] [rbp-68h]
  int v54; // [rsp+9Ch] [rbp-64h]
  struct _POINTL *v55; // [rsp+A0h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+A8h] [rbp-58h]
  __int64 v57; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-48h] BYREF
  POINTL *v59; // [rsp+C0h] [rbp-40h]
  struct SURFACE *v60; // [rsp+C8h] [rbp-38h]
  _DWORD v61[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v62; // [rsp+E0h] [rbp-20h]
  int v63; // [rsp+E8h] [rbp-18h]
  int v64; // [rsp+ECh] [rbp-14h]
  RECTL prclSrc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v66; // [rsp+100h] [rbp+0h] BYREF
  int v67; // [rsp+108h] [rbp+8h]
  int v68; // [rsp+10Ch] [rbp+Ch]

  v11 = pptlBrush;
  v47 = pxlo;
  v46 = pptlSrc;
  v55 = pptlMask;
  v59 = pptlBrush;
  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(psoTrg);
  v49 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoSrc);
  v60 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoMask);
  *(_QWORD *)&prclSrc.left = 0LL;
  *(_QWORD *)&prclSrc.right = 0LL;
  CurrentThread = KeGetCurrentThread();
  v19 = 0;
  if ( (unsigned int)IsThreadCrossSessionAttached(v16, v15, v17, v18)
    || (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) == 0LL
    || (v21 = *ThreadWin32Thread) == 0
    || (v22 = (_QWORD *)(v21 + 40), (_QWORD *)*v22 == v22) )
  {
    v23 = 0LL;
  }
  else
  {
    v23 = *v22 - 40LL;
  }
  if ( v23 && (*(_DWORD *)(v23 + 412) & 0x100) != 0 && *(_DWORD *)(v23 + 420) )
  {
    v24 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
    if ( (v24 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
    {
      if ( gfUMPDDebug )
        DbgPrint(
          "windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSolidColor == -1 && !pptlBrush))\n",
          67LL);
      return 0;
    }
    v25 = v24 & 0xD4;
    if ( v25 && (!psoSrc || !pptlSrc) )
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
    if ( v25 && (unsigned int)(*((_DWORD *)v49 + 24) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfSrc is BMF_JPEG/BMF_PNG\n", 90LL);
      return 1;
    }
  }
  if ( !psoTrg->iType )
  {
    v27 = *(_QWORD *)(v14 + 48);
    if ( v27 )
    {
      _m_prefetchw((const void *)(v27 + 40));
      do
        v28 = *(_DWORD *)(v27 + 40);
      while ( v28 != _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 40), v28 | 0x40000, v28) );
      v27 = *(_QWORD *)(v14 + 48);
    }
    v57 = v27;
    PDEVOBJ::vSync((PDEVOBJ *)&v57, psoTrg, 0LL, 0);
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
              v38 = prclTrg->bottom - prclTrg->top;
              prclSrc.left = x;
              y = pptlSrc->y;
              prclSrc.bottom = y + v38;
              prclSrc.top = y;
              return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &prclSrc, iTransColor, 1u);
            }
            return 1;
          }
          goto LABEL_42;
        case 0xCCCCu:
          if ( !*((_WORD *)v49 + 50) )
            return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
          v35 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v49 + 6) + 2840LL);
          if ( v35 )
            return v35(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
          return v19;
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
      v41 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8;
      goto LABEL_81;
    }
    v42 = *(_DWORD *)(v14 + 96);
    if ( v42 >= 3 )
    {
      if ( pvGetEngRbrush(pbo) && *((_DWORD *)pbo[1].pvRbrush + 5) >= 4u )
      {
        LOBYTE(v19) = rop4 != 61680;
        vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v19);
        return 1;
      }
      goto LABEL_42;
    }
    if ( v42 == 2 )
    {
      if ( rop4 != 61680 || !pvGetEngRbrush(pbo) || *(_QWORD *)((char *)pbo[1].pvRbrush + 20) != 0x800000008LL )
        goto LABEL_42;
      v41 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8;
LABEL_81:
      vDIBPatBltSrccopy8x8((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v41);
      return 1;
    }
    if ( v42 == 1 && rop4 == 61680 && pvGetEngRbrush(pbo) )
    {
      pvRbrush = pbo[1].pvRbrush;
      v44 = pvRbrush[5];
      if ( v44 != 8 )
      {
        if ( v44 == 6 && pvRbrush[6] == 6 )
        {
          vDIBnPatBltSrccopy6x6((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v45);
          return 1;
        }
        goto LABEL_42;
      }
      if ( pvRbrush[6] == 8 )
      {
        v41 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8;
        goto LABEL_81;
      }
    }
LABEL_42:
    if ( psoSrc )
    {
      v58 = *((_QWORD *)v49 + 6);
      PDEVOBJ::vSync((PDEVOBJ *)&v58, psoSrc, 0LL, 0);
    }
    v52 = 0LL;
    v53 = 0;
    v54 = 0;
    if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 && *((_WORD *)v49 + 50) )
    {
      v29 = prclTrg->right - prclTrg->left;
      v30 = prclTrg->bottom - prclTrg->top;
      v31 = *((_QWORD *)v49 + 6);
      v61[0] = *(_DWORD *)(v14 + 96);
      v32 = *((_DWORD *)v49 + 28) & 0x40000;
      v67 = v29;
      v68 = v30;
      v61[1] = v29;
      v61[2] = v30;
      v63 = v32;
      v66 = 0LL;
      v61[3] = 0;
      v64 = 0;
      v62 = 0LL;
      if ( !SURFMEM::bCreateDIB((SURFMEM *)&v52, (struct _DEVBITMAPINFO *)v61, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
        || (v33 = *(void (__fastcall **)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))(v31 + 2840)) == 0LL )
      {
LABEL_56:
        SURFMEM::~SURFMEM((SURFMEM *)&v52);
        return v19;
      }
      v34 = 0LL;
      if ( v52 )
        v34 = (char *)v52 + 24;
      v33(v34, psoSrc, 0LL, pxlo, &v66, pptlSrc);
      v11 = v59;
      v46 = &gptl00;
      v49 = v52;
      v47 = xloIdent;
    }
    if ( *(_DWORD *)(v14 + 96) > 6u && (unsigned int)bUMPDSecurityGateEx() )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n", 492);
      v19 = 1;
      goto LABEL_56;
    }
    BltLnk(
      (struct SURFACE *)v14,
      v49,
      v60,
      (struct ECLIPOBJ *)pco,
      (struct XLATE *)v47,
      prclTrg,
      v46,
      v55,
      pbo,
      v11,
      rop4);
    SURFMEM::~SURFMEM((SURFMEM *)&v52);
    return 1;
  }
  return SimBitBlt(psoTrg, psoSrc, psoMask, pco, pxlo, prclTrg, pptlSrc, v55, pbo, pptlBrush, rop4, 0LL);
}
