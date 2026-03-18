/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C01272C4
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004BDEC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0065A50 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C0127368 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  DC **v10; // rsi
  DC *v11; // rdx
  int v12; // ecx

  v7 = 1;
  if ( !a2 )
    goto LABEL_3;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v8 + 36) & 0x200) == 0 )
    goto LABEL_3;
  v10 = (DC **)((char *)this + 168);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 168), *(HDC *)v8);
  v11 = *v10;
  if ( !*v10 )
  {
LABEL_9:
    v7 = 0;
LABEL_3:
    *((_QWORD *)this + 21) = 0LL;
    return v7;
  }
  v12 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v12 & 1) != 0 && (v12 & 0x4000) == 0 && *((_QWORD *)this + 27) && !*((_QWORD *)this + 31) )
  {
    *((_DWORD *)v11 + 9) |= 0x4000u;
    DC::pSurface(*v10, *((struct SURFACE **)this + 27));
    *((_DWORD *)this + 28) |= 0x20u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, (int)v11) )
  {
    if ( a4 )
    {
      *((_DWORD *)*v10 + 11) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 15) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, (struct XDCOBJ *)v10);
    XDCOBJ::vUnlock((XDCOBJ *)v10);
    goto LABEL_9;
  }
  return v7;
}
