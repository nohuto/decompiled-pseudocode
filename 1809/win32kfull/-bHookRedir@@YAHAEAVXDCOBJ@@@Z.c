/*
 * XREFs of ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00E4324
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00A051C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E4270 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0080A24 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00863BC (-prfntActive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C02818A8 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall bHookRedir(struct XDCOBJ *a1)
{
  __int64 v2; // rdi
  _DWORD *v3; // rdi
  char *v5; // rbx
  unsigned int v6; // esi
  size_t v7; // rcx
  struct RFONT *v8; // rdx
  signed __int32 v9; // ett
  char *v10; // rax
  char *v11; // [rsp+38h] [rbp+10h] BYREF

  if ( gbNoHookRedir )
    return 0LL;
  v2 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 )
    return 0LL;
  if ( (*(_DWORD *)(v2 + 36) & 0x4000) == 0 )
    return 0LL;
  v3 = *(_DWORD **)(v2 + 48);
  if ( !v3 || (v3[10] & 0x20000000) == 0 )
    return 0LL;
  v5 = (char *)gpRedirDev;
  v6 = 1;
  if ( (gpRedirDev
     || (v7 = gdwDirectDrawContext + 3580, (unsigned int)v7 > gdwDirectDrawContext)
     && (gpRedirDev = PALLOCMEM2(v7, 1986348103LL, 1), (v5 = (char *)gpRedirDev) != 0LL))
    && *(char **)(*(_QWORD *)a1 + 48LL) != v5 )
  {
    v11 = v5;
    memmove(v5, v3, 0xDC0uLL);
    memmove(v5 + 3576, v3 + 894, gdwDirectDrawContext);
    PDEVOBJ::prfntActive((PDEVOBJ *)&v11, 0LL);
    PDEVOBJ::prfntInactive((PDEVOBJ *)&v11, v8);
    if ( (*((_DWORD *)v5 + 10) & 0x800000) != 0 )
      *(_DWORD *)(*((_QWORD *)v5 + 440) + 1536LL) = 0;
    else
      *((_DWORD *)v5 + 384) = 0;
    _m_prefetchw(v5 + 40);
    do
      v9 = *((_DWORD *)v5 + 10);
    while ( v9 != _InterlockedCompareExchange((volatile signed __int32 *)v5 + 10, v9 | 0x800000, v9) );
    v10 = v11;
    *((_QWORD *)v11 + 440) = v3;
    *((_QWORD *)v10 + 11) = v10;
    *((_QWORD *)gpRedirDev + 359) = RedirTextOut;
    *((_QWORD *)gpRedirDev + 350) = RedirStrokePath;
    *((_QWORD *)gpRedirDev + 355) = RedirCopyBits;
    *((_QWORD *)gpRedirDev + 354) = RedirBitBlt;
    *((_QWORD *)gpRedirDev + 367) = RedirLineTo;
    *((_QWORD *)gpRedirDev + 351) = RedirFillPath;
    *((_QWORD *)gpRedirDev + 352) = RedirStrokeAndFillPath;
    *((_QWORD *)gpRedirDev + 356) = RedirStretchBlt;
    *((_QWORD *)gpRedirDev + 407) = RedirAlphaBlend;
    *((_QWORD *)gpRedirDev + 410) = RedirTransparentBlt;
    *((_QWORD *)gpRedirDev + 404) = RedirGradientFill;
    *((_QWORD *)gpRedirDev + 426) = RedirDrawStream;
    *((_QWORD *)gpRedirDev + 427) = RedirNineGrid;
    *((_QWORD *)gpRedirDev + 406) = RedirPlgBlt;
    *((_QWORD *)gpRedirDev + 405) = RedirStretchBltROP;
    *((_QWORD *)gpRedirDev + 361) = RedirDrawEscape;
    bMakeOpaque(*(struct SURFACE **)(*(_QWORD *)a1 + 496LL));
    *(_QWORD *)(*(_QWORD *)a1 + 48LL) = gpRedirDev;
  }
  else
  {
    return 0;
  }
  return v6;
}
