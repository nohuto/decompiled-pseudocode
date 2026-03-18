/*
 * XREFs of ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0276C54
 * Callers:
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C024D9A0 (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ??0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C0270E50 (--0MULTISURF@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0271260 (-MulAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02718A0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C0273560 (-MulGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL.c)
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02738A0 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C0273E60 (-MulStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0275060 (-MulTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 *     ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02756D8 (-bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PE.c)
 * Callees:
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0270FDC (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 */

void __fastcall MULTISURF::vInit(MULTISURF *this, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  DHPDEV dhpdev; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rax

  *((_QWORD *)this + 11) = a2;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 12) = (char *)this + 8;
  *((_QWORD *)this + 10) = 0LL;
  if ( a2 )
  {
    *(struct _RECTL *)((char *)this + 8) = *a3;
    dhpdev = a2->dhpdev;
    *((_QWORD *)this + 3) = dhpdev;
    if ( dhpdev )
    {
      v6 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
      *(_QWORD *)this = v6;
      *((_QWORD *)this + 4) = *(_QWORD *)(v6 + 24);
      *((_DWORD *)this + 19) = *(_DWORD *)(v6 + 112);
      v7 = *(_QWORD *)(v6 + 48);
      if ( (unsigned int)IsMetaDevBitmapForMirroring(a2) && (*(_DWORD *)(v7 + 40) & 0x20000) != 0 )
      {
        *((_QWORD *)this + 10) = *((_QWORD *)this + 4);
        v8 = *(_QWORD *)this;
        *((_DWORD *)this + 18) = 1;
        *(_WORD *)(v8 + 100) = 0;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 112LL) = 0;
      }
      else if ( *(_WORD *)(*(_QWORD *)this + 100LL) || (*(_BYTE *)(*((_QWORD *)this + 11) + 78LL) & 0x20) != 0 )
      {
        *((_DWORD *)this + 18) = 2;
      }
    }
  }
  else
  {
    *((_QWORD *)this + 3) = 0LL;
  }
}
