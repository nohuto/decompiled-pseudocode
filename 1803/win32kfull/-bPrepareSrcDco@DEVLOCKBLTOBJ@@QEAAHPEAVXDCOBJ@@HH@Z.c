/*
 * XREFs of ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C009AD68
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C0099850 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C00991F8 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009ABC8 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009AF40 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bPrepareSrcDco(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, __int64 a3, int a4)
{
  unsigned int v7; // esi
  __int64 v8; // rdx
  struct XDCOBJ *v10; // rdi
  int v11; // ecx
  DC *v12; // rcx

  v7 = 1;
  if ( !a2 )
    goto LABEL_3;
  v8 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(v8 + 36) & 0x200) == 0 )
    goto LABEL_3;
  v10 = (DEVLOCKBLTOBJ *)((char *)this + 96);
  XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 96), *(HDC *)v8);
  if ( !*(_QWORD *)v10 )
  {
LABEL_9:
    v7 = 0;
LABEL_3:
    *((_QWORD *)this + 12) = 0LL;
    return v7;
  }
  v11 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
  if ( (v11 & 1) != 0 && (v11 & 0x4000) == 0 && *((_QWORD *)this + 14) && !*((_QWORD *)this + 18) )
  {
    *(_DWORD *)(*(_QWORD *)v10 + 36LL) |= 0x4000u;
    v12 = *(DC **)v10;
    *((_QWORD *)v12 + 63) = *((_QWORD *)this + 14);
    DC::vInheritSurfaceDpiScale(v12);
    *((_DWORD *)this + 18) |= 0x20u;
  }
  if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this) )
  {
    if ( a4 )
    {
      *(_DWORD *)(*(_QWORD *)v10 + 44LL) |= 1u;
      return 0;
    }
    if ( (*((_DWORD *)this + 18) & 0x1000) != 0 && *((_QWORD *)this + 10) )
      DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    DEVLOCKBLTOBJ::vClearRenderState(this, v10);
    if ( *(_QWORD *)v10 )
      XDCOBJ::vUnlockFast(v10);
    *(_QWORD *)v10 = 0LL;
    goto LABEL_9;
  }
  return v7;
}
