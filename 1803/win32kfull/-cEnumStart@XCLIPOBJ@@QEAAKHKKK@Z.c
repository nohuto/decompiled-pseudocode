/*
 * XREFs of ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0090CA0
 * Callers:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C00345A8 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C007A1D4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     EngCopyBits @ 0x1C008FEE0 (EngCopyBits.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C0091D20 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C009FF50 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     EngAlphaBlend @ 0x1C00A15D0 (EngAlphaBlend.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C00A3068 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00A52A0 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     EngTextOut @ 0x1C00AA120 (EngTextOut.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00AE604 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     EngTransparentBlt @ 0x1C00B1C40 (EngTransparentBlt.c)
 *     EngHTBlt @ 0x1C00CD750 (EngHTBlt.c)
 *     ?vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1C00DC218 (-vDIBPatBlt@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z.c)
 *     CLIPOBJ_cEnumStart @ 0x1C0103ED0 (CLIPOBJ_cEnumStart.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0115FE0 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C024B22C (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     WNDOBJ_cEnumStart @ 0x1C0258CE0 (WNDOBJ_cEnumStart.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C025ED3C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z @ 0x1C0261E8C (-GreTransparentBltPS@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3K@Z.c)
 *     NtGdiCLIPOBJ_cEnumStart @ 0x1C0282820 (NtGdiCLIPOBJ_cEnumStart.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0291C90 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C0292180 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02924A0 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C0293B74 (-vDIBPatBltSrccopy8x8@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6A.c)
 *     ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C0293E38 (-vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6.c)
 *     ?vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9780 (-vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02A99A0 (-vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9D50 (-vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02A9F80 (-vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA190 (-vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA530 (-vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AA7C0 (-vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02AAB60 (-vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XCLIPOBJ::cEnumStart(XCLIPOBJ *this, int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned int v5; // r11d
  __int64 v8; // rcx
  __int128 v9; // xmm0
  int v10; // eax
  unsigned int v11; // edx
  unsigned __int64 v12; // rcx
  int v13; // r9d
  unsigned __int64 i; // r8
  bool v16; // zf
  int *v17; // r8
  int v18; // eax
  __int64 v19; // r8
  int v20; // r9d

  v5 = 0;
  *((_DWORD *)this + 28) = a3;
  *((_DWORD *)this + 32) = a2;
  if ( a4 != 4 )
    v5 = a4;
  *((_DWORD *)this + 27) = v5;
  v8 = *((_QWORD *)this + 7);
  if ( a2 )
    v9 = *(_OWORD *)(v8 + 88);
  else
    v9 = *(_OWORD *)((char *)this + 4);
  *((_OWORD *)this + 4) = v9;
  v10 = *(_DWORD *)(v8 + 84);
  v11 = -1;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 22) = v10 - 1;
  if ( v5 >= 2 )
  {
    v17 = (int *)(*(_QWORD *)(v8 + 40) - 4LL);
    v18 = *v17;
    *((_DWORD *)this + 30) = -1;
    v19 = (__int64)v17 - (unsigned int)(4 * v18 + 16) + 4;
    *((_QWORD *)this + 10) = v19;
    if ( !a2 )
    {
      v20 = *((_DWORD *)this + 19);
      while ( 1 )
      {
        v19 -= (unsigned int)(4 * *(_DWORD *)(v19 - 4) + 16);
        if ( *(_DWORD *)(v19 + 4) < v20 )
          break;
        v16 = (*((_DWORD *)this + 22))-- == 1;
        if ( v16 )
          return v11;
        *((_QWORD *)this + 10) = v19;
      }
    }
  }
  else
  {
    v12 = v8 + 104;
    *((_DWORD *)this + 30) = 1;
    *((_QWORD *)this + 10) = v12;
    if ( !a2 )
    {
      v13 = *((_DWORD *)this + 17);
      for ( i = (unsigned int)(4 * *(_DWORD *)v12 + 16); ; v12 = (unsigned int)(4 * *(_DWORD *)i + 16) )
      {
        i += v12;
        if ( *(_DWORD *)(i + 8) > v13 )
          break;
        v16 = (*((_DWORD *)this + 22))-- == 1;
        if ( v16 )
          return v11;
        *((_QWORD *)this + 10) = i;
      }
    }
  }
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 25) = 4 * ((v5 & 1) == 0) - 2;
  if ( a2 && *((_DWORD *)this + 34) <= a5 )
    return *((unsigned int *)this + 34);
  return v11;
}
