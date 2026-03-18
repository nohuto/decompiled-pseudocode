/*
 * XREFs of ??0UNDOENGUPDATEDEVICESURFACE@@QEAA@XZ @ 0x1C015AE2C
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z @ 0x1C015ABFC (-GdiUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 */

UNDOENGUPDATEDEVICESURFACE *__fastcall UNDOENGUPDATEDEVICESURFACE::UNDOENGUPDATEDEVICESURFACE(
        UNDOENGUPDATEDEVICESURFACE *this,
        __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  __int64 *ThreadWin32Thread; // rax

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(this, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  *((_QWORD *)this + 1) = v4;
  if ( v4 )
  {
    *(_BYTE *)this = *(_BYTE *)(v4 + 328);
    *(_BYTE *)(v4 + 328) = 0;
  }
  return this;
}
