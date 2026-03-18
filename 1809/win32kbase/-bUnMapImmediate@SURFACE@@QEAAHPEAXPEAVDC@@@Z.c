/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C005DED4
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C005DAB0 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C005E010 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C005E0B8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this, void *a2, struct _ERESOURCE *a3)
{
  __int64 v4; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rdx
  HSEMAPHORE v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = (HSEMAPHORE)a3;
  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    v10 = ghsemMapRot;
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
      v9 = *((_QWORD *)this + 9);
      if ( v9 )
        MmUnmapViewOfSection(**((_QWORD **)this + 33), v9);
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
    SEMOBJ::vUnlock((PERESOURCE *)&v10);
  }
  return 1LL;
}
