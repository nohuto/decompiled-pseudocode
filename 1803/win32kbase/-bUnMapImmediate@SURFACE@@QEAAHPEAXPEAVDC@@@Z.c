/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C001CF0C
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C001CE10 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C001DB54 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C005BF78 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this, void *a2, struct DC *a3)
{
  __int64 v4; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  HSEMAPHORE v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = (HSEMAPHORE)a3;
  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    v9 = ghsemMapRot;
    EngAcquireSemaphore(ghsemMapRot);
    if ( *((_QWORD *)this + 33) )
    {
      v6 = (_QWORD *)((char *)this + 528);
      v7 = *((_QWORD *)this + 66);
      if ( *(SURFACE **)(v7 + 8) != (SURFACE *)((char *)this + 528)
        || (v8 = (_QWORD *)*((_QWORD *)this + 67), (_QWORD *)*v8 != v6) )
      {
        __fastfail(3u);
      }
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *((_QWORD *)this + 67) = (char *)this + 528;
      *v6 = v6;
      if ( *((_QWORD *)this + 9) )
        MmUnmapViewOfSection(**((_QWORD **)this + 33));
    }
    if ( (*((_DWORD *)this + 29) & 1) == 0 )
    {
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    v4 = *((_QWORD *)this + 39);
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v4 + 64), 0);
    W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 272));
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
  }
  return 1LL;
}
