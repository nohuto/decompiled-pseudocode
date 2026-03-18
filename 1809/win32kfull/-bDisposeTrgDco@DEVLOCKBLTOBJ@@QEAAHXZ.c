/*
 * XREFs of ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004BD2C
 * Callers:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z @ 0x1C025BFE8 (-vUnLock@DEVLOCKBLTOBJ@@QEAAXH@Z.c)
 * Callees:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0065A50 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bDisposeTrgDco(DEVLOCKBLTOBJ *this)
{
  DC **v1; // rbx
  __int64 v3; // r8
  __int64 v4; // rdx

  v1 = (DC **)((char *)this + 120);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    v4 = *(_QWORD *)(v3 + 48);
    if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
    {
      *(_DWORD *)(v3 + 36) &= ~0x4000u;
      DC::pSurface(*v1, *(struct SURFACE **)(v4 + 2552));
    }
    DEVLOCKBLTOBJ::vClearRenderState(this, (struct XDCOBJ *)v1);
    XDCOBJ::vUnlock((XDCOBJ *)v1);
    *v1 = 0LL;
  }
  return 1LL;
}
