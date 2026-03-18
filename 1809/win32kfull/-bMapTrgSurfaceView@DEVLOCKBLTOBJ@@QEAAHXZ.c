/*
 * XREFs of ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00A051C
 * Callers:
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00A0468 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00E4324 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C027EFFC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

_BOOL8 __fastcall DEVLOCKBLTOBJ::bMapTrgSurfaceView(DEVLOCKBLTOBJ *this)
{
  struct XDCOBJ *v1; // r14
  __int64 v3; // r8
  __int64 v4; // rdi
  unsigned int v5; // esi

  v1 = (DEVLOCKBLTOBJ *)((char *)this + 120);
  v3 = *((_QWORD *)this + 15);
  if ( !v3 )
    return 1LL;
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
    return 1LL;
  v4 = *(_QWORD *)(v3 + 496);
  if ( !v4 )
    return 1LL;
  v5 = SURFACE::Map(*(_QWORD *)(v3 + 496), this, v3);
  if ( v5 <= 1 )
  {
    if ( (*(_DWORD *)(v4 + 112) & 0x800) != 0 && *(_QWORD *)(v4 + 248) && (unsigned int)bHookRedir(v1) )
      *((_DWORD *)this + 28) |= 0x400u;
    if ( (*(_DWORD *)(v4 + 112) & 0x10) != 0 && (unsigned int)bHookBmpDrv(v1) )
      *((_DWORD *)this + 28) |= 0x2000u;
    if ( v5 == 1 )
      *((_DWORD *)this + 28) |= 0x40u;
    return 1LL;
  }
  return v5 != 2;
}
