/*
 * XREFs of ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00A0468
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0064590 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00A0014 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0065A50 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00A051C (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FC050 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareTrgDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, int a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbx
  DC **v9; // r14
  __int64 v10; // rcx
  int v11; // edx
  struct SURFACE *v13; // rax

  v6 = 1;
  if ( !a2 )
    goto LABEL_11;
  v7 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v7 + 36) & 0x200) == 0 )
    goto LABEL_11;
  v8 = *(_QWORD *)(v7 + 48);
  v9 = (DC **)((char *)this + 120);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v7);
  v10 = *(_QWORD *)(v8 + 1408);
  if ( !*v9 )
  {
LABEL_10:
    v6 = 0;
LABEL_11:
    *((_QWORD *)this + 15) = 0LL;
    return v6;
  }
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && v10 && !*((_QWORD *)this + 28) )
  {
    *((_DWORD *)*v9 + 9) |= 0x4000u;
    v13 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v10);
    DC::pSurface(*v9, v13);
    *((_DWORD *)this + 28) |= 0x10u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
  {
    if ( a3 )
    {
      *((_DWORD *)*v9 + 11) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 21) )
      DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, (struct XDCOBJ *)v9);
    XDCOBJ::vUnlock((XDCOBJ *)v9);
    goto LABEL_10;
  }
  return v6;
}
