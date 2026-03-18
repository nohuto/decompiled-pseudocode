/*
 * XREFs of DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C0057D40
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0137D98 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C01496EC (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ_bDisposeTrgDcoWrap(DEVLOCKOBJ *this)
{
  DC **v1; // rdi
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v6; // rbx

  v1 = (DC **)((char *)this + 32);
  v3 = *((_QWORD *)this + 4);
  v4 = 1;
  if ( v3 )
  {
    v6 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v4 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *((_DWORD *)*v1 + 9) &= ~0x4000u;
        DC::pSurface(*v1, *(struct SURFACE **)(v6 + 2552));
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    XDCOBJ::vUnlock((XDCOBJ *)v1);
    *v1 = 0LL;
  }
  return v4;
}
