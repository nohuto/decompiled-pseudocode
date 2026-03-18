/*
 * XREFs of ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C024988C
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C024B22C (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

UNDOENGUPDATEDEVICESURFACE *__fastcall UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE(
        UNDOENGUPDATEDEVICESURFACE *this,
        __int64 a2)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  *((_QWORD *)this + 1) = ThreadWin32Thread;
  if ( ThreadWin32Thread )
  {
    *(_BYTE *)this = *(_BYTE *)(ThreadWin32Thread + 328);
    *(_BYTE *)(ThreadWin32Thread + 328) = 0;
  }
  return this;
}
