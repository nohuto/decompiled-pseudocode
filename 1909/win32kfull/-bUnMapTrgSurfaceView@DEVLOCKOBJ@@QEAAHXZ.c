/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C011869C
 * Callers:
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00AAF2C (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C00AAF70 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 * Callees:
 *     ?vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z @ 0x1C01186F4 (-vFlushSpriteUpdates@DEVLOCKOBJ@@QEAAXH@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029502C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C0297AAC (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ::bUnMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  int v3; // eax

  v1 = (DEVLOCKOBJ *)((char *)this + 32);
  if ( *((_QWORD *)this + 4) && *((_BYTE *)this + 49) )
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
