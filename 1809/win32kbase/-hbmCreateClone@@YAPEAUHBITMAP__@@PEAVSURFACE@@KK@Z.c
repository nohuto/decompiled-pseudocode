/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0043A30
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C00434E0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C001FCE0 (--1SURFMEM@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002B910 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00440A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005FBC0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0070990 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, int a2, int a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rsi
  bool v8; // zf
  struct _ERESOURCE *v9; // rdi
  unsigned __int64 v10; // rax
  SURFOBJ *v11; // rcx
  bool v12; // cf
  __int64 v13; // rbx
  int v15; // eax
  __int64 v16; // [rsp+60h] [rbp-29h] BYREF
  char v17; // [rsp+68h] [rbp-21h]
  int v18; // [rsp+6Ch] [rbp-1Dh]
  __int64 v19; // [rsp+70h] [rbp-19h] BYREF
  POINTL pptlSrc; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v21[4]; // [rsp+80h] [rbp-9h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+17h] BYREF
  RECTL prclDest; // [rsp+A8h] [rbp+1Fh] BYREF

  memset(v21, 0, sizeof(v21));
  LODWORD(v21[0]) = *((_DWORD *)a1 + 24);
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v15 = *((_DWORD *)a1 + 15);
    HIDWORD(v21[0]) = a2;
    if ( v15 < a3 )
      a3 = v15;
    LODWORD(v21[1]) = a3;
  }
  else
  {
    HIDWORD(v21[0]) = *((_DWORD *)a1 + 14);
    LODWORD(v21[1]) = *((_DWORD *)a1 + 15);
  }
  v6 = (_QWORD *)*((_QWORD *)a1 + 16);
  v21[2] = 0LL;
  if ( v6 )
    v21[2] = *v6;
  v7 = 0LL;
  LODWORD(v21[3]) = 1;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v16,
                       (struct _DEVBITMAPINFO *)v21,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
  {
    v8 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v9 = 0LL;
    prclDest.right = HIDWORD(v21[0]);
    prclDest.bottom = v21[1];
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v19 = 0LL;
    if ( !v8 )
    {
      v22 = *((_QWORD *)a1 + 6);
      v9 = *(struct _ERESOURCE **)(v22 + 48);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v19, (struct PDEVOBJ *)&v22);
      EngAcquireSemaphore((HSEMAPHORE)v9);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemDevLock", v9, 11LL);
    }
    if ( (int)IsEngCopyBitsSupported() < 0 )
    {
      v7 = *(_QWORD *)(v16 + 32);
    }
    else
    {
      v10 = (unsigned __int64)a1 + 24;
      v11 = 0LL;
      v12 = a1 != 0LL;
      v13 = v16;
      if ( v16 )
        v11 = (SURFOBJ *)(v16 + 24);
      if ( !EngCopyBits(v11, (SURFOBJ *)(v10 & -(__int64)v12), 0LL, &xloIdent, &prclDest, &pptlSrc) )
        goto LABEL_14;
      v7 = *(_QWORD *)(v13 + 32);
    }
    v17 |= 1u;
LABEL_14:
    if ( v9 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDevLock", v9);
      ExReleaseResourceAndLeaveCriticalRegion(v9);
      PsLeavePriorityRegion();
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v19);
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v19);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v16);
  return v7;
}
