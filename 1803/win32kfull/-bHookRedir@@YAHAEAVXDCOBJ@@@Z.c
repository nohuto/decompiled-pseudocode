/*
 * XREFs of ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00E4D40
 * Callers:
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F290 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009AC48 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00CB03C (PALLOCMEM2.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE388 (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00CE3B0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C026D894 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookRedir(struct XDCOBJ *a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  struct PDEV *v5; // rbx
  unsigned int v6; // esi
  size_t v7; // rcx
  __int64 v8; // rdx
  struct PDEV *v9; // rcx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  struct RFONT *v12; // rdx
  signed __int32 v13; // ett
  struct PDEV *v14; // rax
  struct PDEV *v15; // [rsp+38h] [rbp+10h] BYREF

  if ( gbNoHookRedir )
    return 0LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 36) & 0x4000) == 0 )
    return 0LL;
  v3 = *(_QWORD *)(v2 + 48);
  if ( !v3 || (*(_DWORD *)(v3 + 40) & 0x20000000) == 0 )
    return 0LL;
  v5 = gpRedirDev;
  v6 = 1;
  if ( (gpRedirDev
     || (v7 = gdwDirectDrawContext + 3556, (unsigned int)v7 > gdwDirectDrawContext)
     && (gpRedirDev = (struct PDEV *)PALLOCMEM2(v7, 1986348103LL, 1), (v5 = gpRedirDev) != 0LL))
    && *(struct PDEV **)(*(_QWORD *)a1 + 48LL) != v5 )
  {
    v8 = 27LL;
    v15 = v5;
    v9 = v5;
    v10 = (_OWORD *)v3;
    do
    {
      *(_OWORD *)v9 = *v10;
      *((_OWORD *)v9 + 1) = v10[1];
      *((_OWORD *)v9 + 2) = v10[2];
      *((_OWORD *)v9 + 3) = v10[3];
      *((_OWORD *)v9 + 4) = v10[4];
      *((_OWORD *)v9 + 5) = v10[5];
      *((_OWORD *)v9 + 6) = v10[6];
      v9 = (struct PDEV *)((char *)v9 + 128);
      v11 = v10[7];
      v10 += 8;
      *((_OWORD *)v9 - 1) = v11;
      --v8;
    }
    while ( v8 );
    *(_OWORD *)v9 = *v10;
    *((_OWORD *)v9 + 1) = v10[1];
    *((_OWORD *)v9 + 2) = v10[2];
    *((_QWORD *)v9 + 6) = *((_QWORD *)v10 + 6);
    memmove((char *)v5 + 3552, (const void *)(v3 + 3552), gdwDirectDrawContext);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v15, 0LL);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v15, v12);
    if ( (*((_DWORD *)v5 + 10) & 0x800000) != 0 )
      *(_DWORD *)(*((_QWORD *)v5 + 439) + 1528LL) = 0;
    else
      *((_DWORD *)v5 + 382) = 0;
    _m_prefetchw((char *)v5 + 40);
    do
      v13 = *((_DWORD *)v5 + 10);
    while ( v13 != _InterlockedCompareExchange((volatile signed __int32 *)v5 + 10, v13 | 0x800000, v13) );
    v14 = v15;
    *((_QWORD *)v15 + 439) = v3;
    *((_QWORD *)v14 + 10) = v14;
    *((_QWORD *)gpRedirDev + 358) = RedirTextOut;
    *((_QWORD *)gpRedirDev + 349) = RedirStrokePath;
    *((_QWORD *)gpRedirDev + 354) = RedirCopyBits;
    *((_QWORD *)gpRedirDev + 353) = RedirBitBlt;
    *((_QWORD *)gpRedirDev + 366) = RedirLineTo;
    *((_QWORD *)gpRedirDev + 350) = RedirFillPath;
    *((_QWORD *)gpRedirDev + 351) = RedirStrokeAndFillPath;
    *((_QWORD *)gpRedirDev + 355) = RedirStretchBlt;
    *((_QWORD *)gpRedirDev + 406) = RedirAlphaBlend;
    *((_QWORD *)gpRedirDev + 409) = RedirTransparentBlt;
    *((_QWORD *)gpRedirDev + 403) = RedirGradientFill;
    *((_QWORD *)gpRedirDev + 425) = RedirDrawStream;
    *((_QWORD *)gpRedirDev + 426) = RedirNineGrid;
    *((_QWORD *)gpRedirDev + 405) = RedirPlgBlt;
    *((_QWORD *)gpRedirDev + 404) = RedirStretchBltROP;
    *((_QWORD *)gpRedirDev + 360) = RedirDrawEscape;
    bMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 504LL));
    *(_QWORD *)(*(_QWORD *)a1 + 48LL) = gpRedirDev;
  }
  else
  {
    return 0;
  }
  return v6;
}
