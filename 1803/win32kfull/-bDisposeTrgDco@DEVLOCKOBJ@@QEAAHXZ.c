/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F840
 * Callers:
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C02481F4 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F01C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F1EC (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKOBJ::bDisposeTrgDco(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  unsigned int v3; // ebp
  __int64 v4; // rbx
  DC *v5; // rcx

  v1 = *((_QWORD *)this + 4);
  v3 = 1;
  if ( v1 )
  {
    v4 = *(_QWORD *)(v1 + 48);
    if ( (*((_DWORD *)this + 6) & 0x1000) != 0 )
    {
      v3 = DEVLOCKOBJ::bUnMapTrgSurfaceView(this);
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        v5 = (DC *)*((_QWORD *)this + 4);
        *((_QWORD *)v5 + 63) = *(_QWORD *)(v4 + 2544);
        DC::vInheritSurfaceDpiScale(v5);
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    if ( *((_QWORD *)this + 4) )
      XDCOBJ::vUnlockFast((DEVLOCKOBJ *)((char *)this + 32));
    *((_QWORD *)this + 4) = 0LL;
  }
  return v3;
}
