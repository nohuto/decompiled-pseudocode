/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0072C10
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C006EFF0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00730A8 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00F25F8 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029530C (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVLOCKBLTOBJ::bMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // rsi
  __int64 v3; // r8
  __int64 v4; // rdi
  unsigned int v5; // ebp

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 80);
  v3 = *((_QWORD *)this + 10);
  if ( !v3 )
    return 1LL;
  if ( !*((_BYTE *)this + 97) )
    return 1LL;
  if ( (*((_DWORD *)this + 18) & 0x1000) == 0 )
    return 1LL;
  v4 = *(_QWORD *)(v3 + 496);
  if ( !v4 )
    return 1LL;
  v5 = SURFACE::Map(*(_QWORD *)(v3 + 496));
  if ( v5 <= 1 )
  {
    if ( (*(_DWORD *)(v4 + 112) & 0x800) != 0 && *(_QWORD *)(v4 + 248) && (unsigned int)bHookRedir(v1) )
      *((_DWORD *)this + 18) |= 0x400u;
    if ( (*(_DWORD *)(v4 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv(v1) )
      *((_DWORD *)this + 18) |= 0x2000u;
    if ( v5 == 1 )
      *((_DWORD *)this + 18) |= 0x40u;
    return 1LL;
  }
  return v5 != 2;
}
