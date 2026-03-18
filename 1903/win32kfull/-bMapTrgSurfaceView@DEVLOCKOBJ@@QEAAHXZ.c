/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C00F2540
 * Callers:
 *     DEVLOCKOBJ_bPrepareTrgDcoWrap @ 0x1C00F2470 (DEVLOCKOBJ_bPrepareTrgDcoWrap.c)
 * Callees:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00F25F8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029530C (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVLOCKOBJ::bMapTrgSurfaceView(DEVLOCKOBJ *this)
{
  __int64 v1; // r8
  __int64 v3; // rbx
  unsigned int v4; // ebp

  v1 = *((_QWORD *)this + 4);
  if ( !v1 )
    return 1LL;
  if ( !*((_BYTE *)this + 49) )
    return 1LL;
  if ( (*((_DWORD *)this + 6) & 0x1000) == 0 )
    return 1LL;
  v3 = *(_QWORD *)(v1 + 496);
  if ( !v3 )
    return 1LL;
  v4 = SURFACE::Map(*(_QWORD *)(v1 + 496));
  if ( v4 <= 1 )
  {
    if ( (*(_DWORD *)(v3 + 112) & 0x800) != 0
      && *(_QWORD *)(v3 + 248)
      && (unsigned int)bHookRedir((DEVLOCKOBJ *)((char *)this + 32)) )
    {
      *((_DWORD *)this + 6) |= 0x400u;
    }
    if ( (*(_DWORD *)(v3 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32)) )
      *((_DWORD *)this + 6) |= 0x2000u;
    if ( v4 == 1 )
      *((_DWORD *)this + 6) |= 0x40u;
    return 1LL;
  }
  return v4 != 2;
}
