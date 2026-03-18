/*
 * XREFs of ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027EFFC
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00A051C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E4270 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0080A24 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00863BC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C027EF48 (-bBmpMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookBmpDrv(struct XDCOBJ *a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // rdi
  unsigned int v4; // ebp
  char *v6; // rbx
  size_t v7; // rcx
  struct RFONT *v8; // rdx
  signed __int32 v9; // ett
  char *v10; // rax
  char *v11; // [rsp+48h] [rbp+10h] BYREF
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  if ( !gbNoHookBmpDev )
  {
    v2 = *(_QWORD *)a1;
    if ( *(_QWORD *)a1 )
    {
      if ( (*(_DWORD *)(v2 + 36) & 0x4000) == 0 )
      {
        v3 = *(_DWORD **)(v2 + 48);
        v12 = ghsemGreLock;
        GreAcquireSemaphore(ghsemGreLock);
        if ( (v3[10] & 0x20000000) == 0 && (v3[532] & 0x8000) == 0 || (v3[532] & 0x1000) == 0 )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 112LL) &= ~0x10u;
          SEMOBJ::vUnlock((SEMOBJ *)&v12);
          return 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v12);
        if ( v3 )
        {
          v6 = (char *)gpBmpDev;
          v4 = 1;
          if ( gpBmpDev
            || (v7 = gdwDirectDrawContext + 3580, (unsigned int)v7 > gdwDirectDrawContext)
            && (gpBmpDev = PALLOCMEM2(v7, 1986348103LL, 1), (v6 = (char *)gpBmpDev) != 0LL) )
          {
            if ( *(char **)(*(_QWORD *)a1 + 48LL) != v6 )
            {
              v11 = v6;
              memmove(v6, v3, 0xDC0uLL);
              memmove(v6 + 3576, v3 + 894, gdwDirectDrawContext);
              PDEVOBJ::prfntActive((PDEVOBJ *)&v11, 0LL);
              PDEVOBJ::prfntInactive((PDEVOBJ *)&v11, v8);
              if ( (*((_DWORD *)v6 + 10) & 0x800000) != 0 )
                *(_DWORD *)(*((_QWORD *)v6 + 440) + 1536LL) = 0;
              else
                *((_DWORD *)v6 + 384) = 0;
              _m_prefetchw(v6 + 40);
              do
                v9 = *((_DWORD *)v6 + 10);
              while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)v6 + 10, v9 | 0x800000, v9) );
              v10 = v11;
              *((_QWORD *)v11 + 440) = v3;
              *((_QWORD *)v10 + 11) = v10;
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
              *(_QWORD *)(*(_QWORD *)a1 + 48LL) = gpBmpDev;
              return v4;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0LL;
}
