/*
 * XREFs of EngBitBlt @ 0x1C0091510
 * Callers:
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 *     NtGdiEngBitBlt @ 0x1C011E0B0 (NtGdiEngBitBlt.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C01365DC (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     SimBitBlt @ 0x1C0243FDC (SimBitBlt.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C02607A8 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02651C0 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C026BAD0 (-RedirBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRU.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02718A0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0091D20 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00AE604 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z @ 0x1C00B0458 (-pvGetEngRbrush@@YAPEAXPEAU_BRUSHOBJ@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C00B1040 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     EngTransparentBlt @ 0x1C00B1C40 (EngTransparentBlt.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00DC218 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     SimBitBlt @ 0x1C0243FDC (SimBitBlt.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C0293B74 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C0293E38 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
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
  POINTL *v12; // rbx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  char v21; // r8
  char v23; // r8
  __int64 v24; // rdx
  signed __int32 v25; // ett
  ULONG iSolidColor; // r9d
  __int64 (__fastcall *v27)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  ULONG iTransColor; // eax
  LONG x; // edx
  int v30; // ecx
  LONG y; // edx
  void (*v32)(struct _PATBLTFRAME *, int); // rax
  unsigned int v33; // eax
  _DWORD *pvRbrush; // rax
  int v35; // ecx
  char *v36; // rdi
  int v37; // edx
  int v38; // ecx
  __int64 v39; // rbx
  int v40; // eax
  void (__fastcall *v41)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *); // r10
  struct SURFACE *v42; // rdi
  void (*v43)(struct _PATBLTFRAME *, int); // [rsp+28h] [rbp-D8h]
  struct _POINTL *v44; // [rsp+60h] [rbp-A0h]
  XLATEOBJ *v46; // [rsp+70h] [rbp-90h]
  __int64 v47; // [rsp+78h] [rbp-88h]
  struct SURFACE *v49; // [rsp+88h] [rbp-78h] BYREF
  char v50; // [rsp+90h] [rbp-70h]
  int v51; // [rsp+94h] [rbp-6Ch]
  struct _POINTL *v52; // [rsp+98h] [rbp-68h]
  __int64 v53; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-58h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  __int64 v56; // [rsp+B8h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-40h]
  __int64 v58; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v59; // [rsp+D0h] [rbp-30h] BYREF
  struct _POINTL *v60; // [rsp+D8h] [rbp-28h]
  struct SURFACE *v61; // [rsp+E0h] [rbp-20h]
  SURFOBJ *v62; // [rsp+E8h] [rbp-18h]
  RECTL prclSrc; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v64; // [rsp+100h] [rbp+0h] BYREF
  int v65; // [rsp+108h] [rbp+8h]
  int v66; // [rsp+10Ch] [rbp+Ch]

  v12 = pptlBrush;
  v46 = pxlo;
  v44 = pptlSrc;
  v52 = pptlMask;
  v62 = psoTrg;
  v60 = pptlBrush;
  v14 = SURFOBJ_TO_SURFACE_NOT_NULL(psoTrg);
  v47 = SURFOBJ_TO_SURFACE(psoSrc);
  v61 = (struct SURFACE *)SURFOBJ_TO_SURFACE(psoMask);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned int)IsThreadCrossSessionAttached(v16, v15) )
    goto LABEL_28;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    goto LABEL_28;
  v18 = *ThreadWin32Thread;
  if ( !v18 )
    goto LABEL_28;
  v19 = *(_QWORD *)(v18 + 40);
  if ( v19 == v18 + 40 )
    goto LABEL_28;
  v20 = v19 - 40;
  if ( !v20 || (*(_DWORD *)(v20 + 412) & 0x100) == 0 || !*(_DWORD *)(v20 + 420) )
    goto LABEL_28;
  v21 = gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)];
  if ( (v21 & 0xE8) != 0 && (!pbo || pbo->iSolidColor == -1 && !pptlBrush) )
  {
    if ( gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDPAT && (!pbo || (pbo->iSolidColor == -1 && !pptlBrush))\n",
        67);
    return 0;
  }
  v23 = v21 & 0xD4;
  if ( !v23 || psoSrc && pptlSrc )
  {
    if ( (unsigned int)(*(_DWORD *)(v14 + 96) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfDst is BMF_JPEG/BMF_PNG\n", 84);
      return 1;
    }
    if ( v23 && (unsigned int)(*(_DWORD *)(v47 + 96) - 9) <= 1 )
    {
      if ( gfUMPDDebug )
      {
        DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:pSurfSrc is BMF_JPEG/BMF_PNG\n", 90);
        return 1;
      }
      return 1;
    }
LABEL_28:
    if ( psoTrg->iType )
      return SimBitBlt(v62, psoSrc, psoMask, pco, pxlo, prclTrg, pptlSrc, v52, pbo, pptlBrush, rop4, 0LL);
    v24 = *(_QWORD *)(v14 + 48);
    if ( v24 )
    {
      _m_prefetchw((const void *)(v24 + 40));
      do
        v25 = *(_DWORD *)(v24 + 40);
      while ( v25 != _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 40), v25 | 0x40000, v25) );
      v24 = *(_QWORD *)(v14 + 48);
    }
    v58 = v24;
    PDEVOBJ::vSync((PDEVOBJ *)&v58, psoTrg, 0LL, 0);
    ++*(_DWORD *)(v14 + 92);
    if ( rop4 == 61680 )
    {
LABEL_60:
      if ( pbo->iSolidColor != -1 )
      {
        iSolidColor = ~pbo->iSolidColor;
        if ( (rop4 & 1) == 0 )
          iSolidColor = pbo->iSolidColor;
        goto LABEL_50;
      }
      if ( *(_DWORD *)(v14 + 96) == 3
        && rop4 == 61680
        && pvGetEngRbrush(pbo)
        && *(_QWORD *)((char *)pbo[1].pvRbrush + 20) == 0x800000008LL )
      {
        v32 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect8_8x8;
        goto LABEL_69;
      }
      v33 = *(_DWORD *)(v14 + 96);
      if ( v33 < 3 )
      {
        if ( v33 == 2 )
        {
          if ( rop4 != 61680 || !pvGetEngRbrush(pbo) || *(_QWORD *)((char *)pbo[1].pvRbrush + 20) != 0x800000008LL )
            goto LABEL_89;
          v32 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect4_8x8;
        }
        else
        {
          if ( v33 != 1 || rop4 != 61680 || !pvGetEngRbrush(pbo) )
            goto LABEL_89;
          pvRbrush = pbo[1].pvRbrush;
          v35 = pvRbrush[5];
          if ( v35 != 8 )
          {
            if ( v35 == 6 && pvRbrush[6] == 6 )
            {
              vDIBnPatBltSrccopy6x6((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v43);
              return 1;
            }
            goto LABEL_89;
          }
          if ( pvRbrush[6] != 8 )
            goto LABEL_89;
          v32 = (void (*)(struct _PATBLTFRAME *, int))vPatCpyRect1_8x8;
        }
LABEL_69:
        vDIBPatBltSrccopy8x8((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, v32);
        return 1;
      }
      if ( !pvGetEngRbrush(pbo) || *((_DWORD *)pbo[1].pvRbrush + 5) < 4u )
        goto LABEL_89;
      vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, rop4 != 61680);
      return 1;
    }
    if ( rop4 <= 0x5A5A )
    {
      if ( rop4 == 23130 )
      {
        if ( pbo->iSolidColor != -1 )
        {
          vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, pbo->iSolidColor, 1);
          return 1;
        }
        if ( *(_DWORD *)(v14 + 96) < 3u || !pvGetEngRbrush(pbo) || *((_DWORD *)pbo[1].pvRbrush + 5) < 4u )
        {
LABEL_89:
          if ( psoSrc )
          {
            v59 = *(_QWORD *)(v47 + 48);
            PDEVOBJ::vSync((PDEVOBJ *)&v59, psoSrc, 0LL, 0);
          }
          v36 = 0LL;
          v49 = 0LL;
          v50 = 0;
          v51 = 0;
          if ( ((gajRop3[(unsigned __int8)rop4] | gajRop3[BYTE1(rop4)]) & 0xD4) != 0 )
          {
            if ( *(_WORD *)(v47 + 100) )
            {
              v37 = prclTrg->right - prclTrg->left;
              v38 = prclTrg->bottom - prclTrg->top;
              v39 = *(_QWORD *)(v47 + 48);
              v53 = 0LL;
              v54 = 0LL;
              v56 = 0LL;
              LODWORD(v53) = *(_DWORD *)(v14 + 96);
              v40 = *(_DWORD *)(v47 + 112) & 0x40000;
              v65 = v37;
              v66 = v38;
              HIDWORD(v53) = v37;
              LODWORD(v54) = v38;
              LODWORD(v56) = v40;
              v64 = 0LL;
              v55 = 0LL;
              if ( !SURFMEM::bCreateDIB(
                      (SURFMEM *)&v49,
                      (struct _DEVBITMAPINFO *)&v53,
                      0LL,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      0,
                      1,
                      0,
                      0) )
                goto LABEL_105;
              v41 = *(void (__fastcall **)(char *, SURFOBJ *, _QWORD, XLATEOBJ *, __int64 *, POINTL *))(v39 + 2832);
              if ( !v41 )
                goto LABEL_105;
              if ( v49 )
                v36 = (char *)v49 + 24;
              v41(v36, psoSrc, 0LL, pxlo, &v64, pptlSrc);
              v42 = v49;
              v12 = v60;
              v44 = &gptl00;
              v46 = xloIdent;
            }
            else
            {
              v42 = (struct SURFACE *)v47;
            }
          }
          else
          {
            v42 = (struct SURFACE *)v47;
          }
          if ( *(_DWORD *)(v14 + 96) <= 6u || !(unsigned int)bUMPDSecurityGateEx() )
          {
            BltLnk(
              (struct SURFACE *)v14,
              v42,
              v61,
              (struct ECLIPOBJ *)pco,
              (struct XLATE *)v46,
              prclTrg,
              v44,
              v52,
              pbo,
              v12,
              rop4);
            SURFMEM::~SURFMEM((SURFMEM *)&v49);
            return 1;
          }
          if ( gfUMPDDebug )
            DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:Invalid pSurfDst->iFormat()\n", 492);
          LODWORD(v36) = 1;
LABEL_105:
          SURFMEM::~SURFMEM((SURFMEM *)&v49);
          return (int)v36;
        }
        vDIBPatBlt((struct SURFACE *)v14, pco, prclTrg, pbo, pptlBrush, 2u);
        return 1;
      }
      if ( rop4 )
      {
        if ( rop4 != 3855 )
        {
          if ( rop4 == 21845 )
          {
            vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, 0xFFFFFFFF, 1);
            return 1;
          }
          goto LABEL_89;
        }
        goto LABEL_60;
      }
LABEL_49:
      iSolidColor = -(rop4 != 0);
LABEL_50:
      vDIBSolidBlt((struct SURFACE *)v14, prclTrg, pco, iSolidColor, 0);
      return 1;
    }
    if ( rop4 != 52394 )
    {
      if ( rop4 == 52428 )
      {
        if ( !*(_WORD *)(v47 + 100) )
          return EngCopyBits(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        v27 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v47 + 48) + 2832LL);
        if ( v27 )
          return v27(psoTrg, psoSrc, pco, pxlo, prclTrg, pptlSrc);
        else
          return 0;
      }
      if ( rop4 != 0xFFFF )
        goto LABEL_89;
      goto LABEL_49;
    }
    if ( psoMask )
      goto LABEL_89;
    if ( !pbo->pvRbrush )
    {
      iTransColor = pbo->iSolidColor;
      x = pptlSrc->x;
      prclSrc.right = pptlSrc->x + prclTrg->right - prclTrg->left;
      v30 = prclTrg->bottom - prclTrg->top;
      prclSrc.left = x;
      y = pptlSrc->y;
      prclSrc.bottom = y + v30;
      prclSrc.top = y;
      return EngTransparentBlt(psoTrg, psoSrc, pco, pxlo, prclTrg, &prclSrc, iTransColor, 1u);
    }
    return 1;
  }
  if ( !gfUMPDDebug )
    return 0;
  DbgPrint("windows\\core\\ntgdi\\gre\\windows\\bbddi.cxx:%d:EngBitBlt:ROP4NEEDSRC && (!psoSrc || !pptlSrc)\n", 74);
  return 0;
}
