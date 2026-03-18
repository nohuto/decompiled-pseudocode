/*
 * XREFs of ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F1EC
 * Callers:
 *     NtGdiGetPixel @ 0x1C008EAD0 (NtGdiGetPixel.c)
 *     DEVLOCKOBJ_bDisposeTrgDcoWrap @ 0x1C008EFD0 (DEVLOCKOBJ_bDisposeTrgDcoWrap.c)
 *     ?bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F840 (-bDisposeTrgDco@DEVLOCKOBJ@@QEAAHXZ.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C026B380 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C026D8E0 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKOBJ::bUnMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  struct XDCOBJ *v1; // rdi
  int v3; // eax
  struct DC *v4; // rcx
  struct DC *v5; // rcx

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
      v3 = *((_DWORD *)this + 6);
    }
    v4 = *(struct DC **)v1;
    if ( *(_QWORD *)v1 && (v3 & 0x1000) != 0 )
    {
      if ( (*((_DWORD *)v4 + 11) & 1) == 0 )
      {
        SURFACE::bUnMap(*((SURFACE **)v4 + 63), this, *(struct DC **)v1);
        v4 = (struct DC *)*((_QWORD *)this + 4);
      }
      *((_DWORD *)v4 + 11) &= ~1u;
      v5 = *(struct DC **)v1;
      if ( (*(_DWORD *)(*(_QWORD *)v1 + 36LL) & 0x4000) != 0 && *((_QWORD *)v5 + 60) && *((_DWORD *)v5 + 124) )
        GreUpdateSpriteDevLockEnd(v1, *((_DWORD *)this + 6) & 0x400000);
    }
  }
  return 1LL;
}
