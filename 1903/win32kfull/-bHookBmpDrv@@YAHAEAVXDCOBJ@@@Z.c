/*
 * XREFs of ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029530C
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0072C10 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00F2540 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0074874 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C01056EC (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C0295258 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookBmpDrv(struct XDCOBJ *a1)
{
  unsigned int v1; // esi
  __int64 v3; // rdi
  _DWORD *v4; // rdi
  char *v5; // rbx
  struct RFONT *v6; // rdx
  signed __int32 v7; // ett
  char *v8; // rax
  char *v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  if ( gbNoHookBmpDev )
    return 0LL;
  v3 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || (*(_DWORD *)(v3 + 36) & 0x4000) != 0 )
    return 0LL;
  v4 = *(_DWORD **)(v3 + 48);
  v11 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( ((v4[10] & 0x20000000) != 0 || (v4[532] & 0x8000) != 0) && (v4[532] & 0x1000) != 0 )
  {
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    v5 = (char *)gpBmpDev;
    if ( gpBmpDev || (gpBmpDev = PDEV::Allocate(0), (v5 = (char *)gpBmpDev) != 0LL) )
    {
      if ( *(char **)(*(_QWORD *)a1 + 48LL) != v5 )
      {
        v10 = v5;
        memmove(v5, v4, 0xDC0uLL);
        PDEVOBJ::prfntActive((PDEVOBJ *)&v10, 0LL);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v10, v6);
        if ( (*((_DWORD *)v5 + 10) & 0x800000) != 0 )
          *(_DWORD *)(*((_QWORD *)v5 + 440) + 1536LL) = 0;
        else
          *((_DWORD *)v5 + 384) = 0;
        _m_prefetchw(v5 + 40);
        do
          v7 = *((_DWORD *)v5 + 10);
        while ( v7 != _InterlockedCompareExchange((volatile signed __int32 *)v5 + 10, v7 | 0x800000, v7) );
        v8 = v10;
        *((_QWORD *)v10 + 440) = v4;
        *((_QWORD *)v8 + 11) = v8;
        *((_QWORD *)gpBmpDev + 359) = BmpDevTextOut;
        *((_QWORD *)gpBmpDev + 350) = BmpDevStrokePath;
        *((_QWORD *)gpBmpDev + 355) = BmpDevCopyBits;
        *((_QWORD *)gpBmpDev + 354) = BmpDevBitBlt;
        *((_QWORD *)gpBmpDev + 367) = BmpDevLineTo;
        *((_QWORD *)gpBmpDev + 351) = BmpDevFillPath;
        *((_QWORD *)gpBmpDev + 352) = BmpDevStrokeAndFillPath;
        *((_QWORD *)gpBmpDev + 356) = BmpDevStretchBlt;
        *((_QWORD *)gpBmpDev + 407) = BmpDevAlphaBlend;
        *((_QWORD *)gpBmpDev + 410) = BmpDevTransparentBlt;
        *((_QWORD *)gpBmpDev + 404) = BmpDevGradientFill;
        *((_QWORD *)gpBmpDev + 426) = BmpDevDrawStream;
        *((_QWORD *)gpBmpDev + 427) = BmpDevNineGrid;
        *((_QWORD *)gpBmpDev + 406) = BmpDevPlgBlt;
        bBmpMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 496LL));
        v1 = 1;
        *(_QWORD *)(*(_QWORD *)a1 + 48LL) = gpBmpDev;
      }
    }
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 112LL) &= ~0x10u;
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
  }
  return v1;
}
