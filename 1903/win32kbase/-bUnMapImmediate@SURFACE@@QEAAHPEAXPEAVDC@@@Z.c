/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C00614E4
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C0061080 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0061660 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0061708 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this, void *a2, struct _ERESOURCE *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _ERESOURCE *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = a3;
  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    v11 = (struct _ERESOURCE *)ghsemMapRot;
    EngAcquireSemaphore(ghsemMapRot);
    if ( *((_QWORD *)this + 33) )
    {
      v4 = (_QWORD *)((char *)this + 528);
      v5 = *((_QWORD *)this + 66);
      if ( *(SURFACE **)(v5 + 8) != (SURFACE *)((char *)this + 528)
        || (v6 = (_QWORD *)*((_QWORD *)this + 67), (_QWORD *)*v6 != v4) )
      {
        __fastfail(3u);
      }
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *((_QWORD *)this + 67) = (char *)this + 528;
      *v4 = v4;
      if ( *((_QWORD *)this + 9) )
        MmUnmapViewOfSection(**((_QWORD **)this + 33));
    }
    if ( (*((_DWORD *)this + 29) & 1) == 0 )
    {
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    v7 = *((_QWORD *)this + 39);
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v7 + 64), 0);
    W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 272));
    SEMOBJ::vUnlock(&v11, v8, v9);
  }
  return 1LL;
}
