/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C01496EC
 * Callers:
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C0057D00 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C0057D40 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     NtGdiGetPixel @ 0x1C005E7C0 (NtGdiGetPixel.c)
 * Callees:
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C00FF7C4 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027F300 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02818F4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ::bUnMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  int v3; // eax

  v1 = (DEVLOCKOBJ *)((char *)this + 32);
  if ( *((_QWORD *)this + 4) )
  {
    v3 = *((_DWORD *)this + 6);
    if ( (v3 & 0x400) != 0 )
    {
      bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
      *((_DWORD *)this + 6) &= ~0x400u;
      v3 = *((_DWORD *)this + 6);
    }
    if ( (v3 & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v1);
      *((_DWORD *)this + 6) &= ~0x2000u;
    }
    DEVLOCKOBJ::vFlushSpriteUpdates(this, 1);
  }
  return 1LL;
}
