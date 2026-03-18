/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004BDEC
 * Callers:
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004BD84 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C01272C4 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 * Callees:
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027F300 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02818F4 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  __int64 v3; // rax
  SURFACE *v4; // rsi
  int v5; // eax
  struct DC *v6; // r8

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  v3 = *((_QWORD *)this + 15);
  if ( v3 )
  {
    v4 = *(SURFACE **)(v3 + 496);
    v5 = *((_DWORD *)this + 28);
    if ( (v5 & 0x400) != 0 )
    {
      bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120));
      *((_DWORD *)this + 28) &= ~0x400u;
      v5 = *((_DWORD *)this + 28);
    }
    if ( (v5 & 0x2000) != 0 )
    {
      bUnHookBmpDrv(v1);
      *((_DWORD *)this + 28) &= ~0x2000u;
      v5 = *((_DWORD *)this + 28);
    }
    if ( (v5 & 0x1000) != 0 )
    {
      v6 = *(struct DC **)v1;
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 44LL) & 1) == 0 )
      {
        SURFACE::bUnMap(v4, this, v6);
        v6 = *(struct DC **)v1;
      }
      *((_DWORD *)v6 + 11) &= ~1u;
    }
  }
  return 1LL;
}
