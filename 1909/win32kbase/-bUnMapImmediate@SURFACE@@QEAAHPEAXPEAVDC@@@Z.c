/*
 * XREFs of ?bUnMapImmediate@SURFACE@@QEAAHPEAXPEAVDC@@@Z @ 0x1C00705B4
 * Callers:
 *     ?bUnMapImmediate@SURFREFVIEW@@QEAAHXZ @ 0x1C0070150 (-bUnMapImmediate@SURFREFVIEW@@QEAAHXZ.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?vUnlockSimple@W32PIDLOCK@@QEAAXXZ @ 0x1C0070730 (-vUnlockSimple@W32PIDLOCK@@QEAAXXZ.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00707D8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 */

__int64 __fastcall SURFACE::bUnMapImmediate(SURFACE *this, void *a2, struct _ERESOURCE *a3)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  struct _ERESOURCE *v12; // [rsp+40h] [rbp+18h] BYREF

  v12 = a3;
  if ( (unsigned int)SURFACE::bRedirectionBitmap(this) && (*((_WORD *)this + 51) & 0x800) != 0 )
  {
    v12 = (struct _ERESOURCE *)ghsemMapRot;
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
      v7 = *((_QWORD *)this + 9);
      if ( v7 )
        MmUnmapViewOfSection(**((_QWORD **)this + 33), v7);
    }
    if ( (*((_DWORD *)this + 29) & 1) == 0 )
    {
      *((_QWORD *)this + 9) = 0LL;
      *((_QWORD *)this + 10) = 0LL;
    }
    v8 = *((_QWORD *)this + 39);
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    KeReleaseMutex((PRKMUTEX)(v8 + 64), 0);
    W32PIDLOCK::vUnlockSimple((SURFACE *)((char *)this + 272));
    SEMOBJ::vUnlock(&v12, v9, v10);
  }
  return 1LL;
}
