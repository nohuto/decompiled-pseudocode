/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0054100
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C0052520 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00170E0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C002D110 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C004D430 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C004D8D0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0078C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, LONG a2, LONG a3)
{
  int v3; // eax
  __int64 *v5; // rax
  __int64 v6; // rsi
  bool v7; // zf
  struct _ERESOURCE *v8; // rdi
  unsigned __int64 v9; // rax
  SURFOBJ *v10; // rcx
  bool v11; // cf
  __int64 v12; // rbx
  LONG v14; // eax
  __int64 v15; // [rsp+60h] [rbp-29h] BYREF
  char v16; // [rsp+68h] [rbp-21h]
  int v17; // [rsp+6Ch] [rbp-1Dh]
  PERESOURCE v18; // [rsp+70h] [rbp-19h] BYREF
  int v19; // [rsp+78h] [rbp-11h] BYREF
  LONG v20; // [rsp+7Ch] [rbp-Dh]
  LONG v21; // [rsp+80h] [rbp-9h]
  int v22; // [rsp+84h] [rbp-5h]
  __int64 v23; // [rsp+88h] [rbp-1h]
  int v24; // [rsp+90h] [rbp+7h]
  int v25; // [rsp+94h] [rbp+Bh]
  POINTL pptlSrc; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v27; // [rsp+A0h] [rbp+17h] BYREF
  RECTL prclDest; // [rsp+A8h] [rbp+1Fh] BYREF

  v3 = *((_DWORD *)a1 + 24);
  v22 = 0;
  v25 = 0;
  v19 = v3;
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v14 = *((_DWORD *)a1 + 15);
    v20 = a2;
    if ( v14 < a3 )
      a3 = v14;
    v21 = a3;
  }
  else
  {
    v20 = *((_DWORD *)a1 + 14);
    v21 = *((_DWORD *)a1 + 15);
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 16);
  v23 = 0LL;
  if ( v5 )
    v23 = *v5;
  v6 = 0LL;
  v24 = 1;
  v15 = 0LL;
  v16 = 0;
  v17 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v15,
                       (struct _DEVBITMAPINFO *)&v19,
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
    v7 = (*((_DWORD *)a1 + 28) & 0x4000) == 0;
    v8 = 0LL;
    prclDest.right = v20;
    prclDest.bottom = v21;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v18 = 0LL;
    if ( !v7 )
    {
      v27 = *((_QWORD *)a1 + 6);
      v8 = *(struct _ERESOURCE **)(v27 + 48);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v18, (struct PDEVOBJ *)&v27);
      EngAcquireSemaphore((HSEMAPHORE)v8);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemDevLock", v8, 11LL);
    }
    if ( (int)IsEngCopyBitsSupported() < 0 )
    {
      v6 = *(_QWORD *)(v15 + 32);
    }
    else
    {
      v9 = (unsigned __int64)a1 + 24;
      v10 = 0LL;
      v11 = a1 != 0LL;
      v12 = v15;
      if ( v15 )
        v10 = (SURFOBJ *)(v15 + 24);
      if ( !EngCopyBits(v10, (SURFOBJ *)(v9 & -(__int64)v11), 0LL, &xloIdent, &prclDest, &pptlSrc) )
        goto LABEL_14;
      v6 = *(_QWORD *)(v12 + 32);
    }
    v16 |= 1u;
LABEL_14:
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDevLock", v8);
      ExReleaseResourceAndLeaveCriticalRegion(v8);
      PsLeavePriorityRegion();
      NEEDGRELOCK::vUnlock(&v18);
    }
    NEEDGRELOCK::vUnlock(&v18);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v15);
  return v6;
}
