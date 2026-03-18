/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C010EB44
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B8F80 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00ACE88 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C00BC91C (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E03CC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00F8610 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // edi
  __int64 v8; // rdx
  DC **v10; // rsi
  int v11; // ecx
  __int64 v12; // r8

  v7 = 1;
  if ( !a2 )
    goto LABEL_3;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v8 + 36) & 0x200) == 0 )
    goto LABEL_3;
  v10 = (DC **)((char *)this + 104);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 104), *(HDC *)v8);
  if ( !*v10 || !*((_BYTE *)v10 + 17) )
  {
LABEL_10:
    v7 = 0;
LABEL_3:
    *((_QWORD *)this + 13) = 0LL;
    return v7;
  }
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && *((_QWORD *)this + 16) && !*((_QWORD *)this + 20) )
  {
    *((_DWORD *)*v10 + 9) |= 0x4000u;
    DC::pSurface(*v10, *((struct SURFACE **)this + 16));
    *((_DWORD *)this + 18) |= 0x20u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this) )
  {
    if ( a4 )
    {
      *((_DWORD *)*v10 + 11) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, v10, v12);
    DLODCOBJ::vUnlock((DLODCOBJ *)v10);
    goto LABEL_10;
  }
  return v7;
}
