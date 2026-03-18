/*
 * XREFs of DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00E41B0
 * Callers:
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00E4270 (-bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0137D98 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ_bPrepareTrgDcoWrap(DEVLOCKOBJ *this, __int64 *a2)
{
  unsigned int v4; // esi
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v10; // edx
  struct SURFACE *v11; // rax

  v4 = 1;
  if ( !a2 )
    goto LABEL_2;
  v6 = *a2;
  if ( (*(_DWORD *)(v6 + 36) & 0x200) == 0 )
    goto LABEL_2;
  v7 = *(_QWORD *)(v6 + 48);
  XDCOBJ::vLock((DEVLOCKOBJ *)((char *)this + 32), *(HDC *)v6);
  v8 = *((_QWORD *)this + 4);
  v9 = *(_QWORD *)(v7 + 1408);
  if ( !v8 )
  {
LABEL_13:
    v4 = 0;
LABEL_2:
    *((_QWORD *)this + 4) = 0LL;
    return v4;
  }
  v10 = *(_DWORD *)(*a2 + 36);
  if ( (v10 & 1) != 0 && (v10 & 0x4000) == 0 && v9 && !*((_QWORD *)this + 10) )
  {
    *(_DWORD *)(v8 + 36) |= 0x4000u;
    v11 = (struct SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v9);
    DC::pSurface(*((DC **)this + 4), v11);
    *((_DWORD *)this + 6) |= 0x10u;
  }
  if ( (*((_DWORD *)this + 6) & 0x1000) != 0 && !(unsigned int)DEVLOCKOBJ::bMapTrgSurfaceView(this) )
  {
    DEVLOCKOBJ::vClearRenderState(this);
    XDCOBJ::vUnlock((DEVLOCKOBJ *)((char *)this + 32));
    goto LABEL_13;
  }
  return v4;
}
