/*
 * XREFs of ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C008CED0
 * Callers:
 *     GreCreatePatternBrushInternal @ 0x1C008CCA0 (GreCreatePatternBrushInternal.c)
 * Callees:
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00163D0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0018750 (--1SURFMEM@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002E230 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C007CBF0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall hbmCreateClone(struct SURFACE *a1, LONG a2, LONG a3)
{
  int v3; // eax
  __int64 *v5; // rax
  __int64 v6; // rsi
  bool v7; // zf
  struct _ERESOURCE *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  SURFOBJ *v12; // rcx
  bool v13; // cf
  __int64 v14; // rbx
  LONG v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // [rsp+60h] [rbp-29h] BYREF
  char v21; // [rsp+68h] [rbp-21h]
  int v22; // [rsp+6Ch] [rbp-1Dh]
  __int64 v23; // [rsp+70h] [rbp-19h] BYREF
  int v24; // [rsp+78h] [rbp-11h] BYREF
  LONG v25; // [rsp+7Ch] [rbp-Dh]
  LONG v26; // [rsp+80h] [rbp-9h]
  int v27; // [rsp+84h] [rbp-5h]
  __int64 v28; // [rsp+88h] [rbp-1h]
  int v29; // [rsp+90h] [rbp+7h]
  int v30; // [rsp+94h] [rbp+Bh]
  POINTL pptlSrc; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v32; // [rsp+A0h] [rbp+17h] BYREF
  RECTL prclDest; // [rsp+A8h] [rbp+1Fh] BYREF

  v3 = *((_DWORD *)a1 + 24);
  v27 = 0;
  v30 = 0;
  v24 = v3;
  if ( a2 && a3 )
  {
    if ( *((_DWORD *)a1 + 14) < a2 )
      a2 = *((_DWORD *)a1 + 14);
    v16 = *((_DWORD *)a1 + 15);
    v25 = a2;
    if ( v16 < a3 )
      a3 = v16;
    v26 = a3;
  }
  else
  {
    v25 = *((_DWORD *)a1 + 14);
    v26 = *((_DWORD *)a1 + 15);
  }
  v5 = (__int64 *)*((_QWORD *)a1 + 16);
  v28 = 0LL;
  if ( v5 )
    v28 = *v5;
  v6 = 0LL;
  v29 = 1;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  if ( (unsigned int)SURFMEM::bCreateDIB(
                       (SURFMEM *)&v20,
                       (struct _DEVBITMAPINFO *)&v24,
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
    prclDest.right = v25;
    prclDest.bottom = v26;
    pptlSrc = 0LL;
    *(_QWORD *)&prclDest.left = 0LL;
    v23 = 0LL;
    if ( !v7 )
    {
      v32 = *((_QWORD *)a1 + 6);
      v8 = *(struct _ERESOURCE **)(v32 + 48);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v23, (struct PDEVOBJ *)&v32);
      EngAcquireSemaphore((HSEMAPHORE)v8);
      EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"hsemDevLock", (int)v8, 11);
    }
    if ( (int)IsEngCopyBitsSupported() < 0 )
    {
      v6 = *(_QWORD *)(v20 + 32);
    }
    else
    {
      v11 = (unsigned __int64)a1 + 24;
      v12 = 0LL;
      v13 = a1 != 0LL;
      v14 = v20;
      if ( v20 )
        v12 = (SURFOBJ *)(v20 + 24);
      if ( !EngCopyBits(v12, (SURFOBJ *)(v11 & -(__int64)v13), 0LL, &xloIdent, &prclDest, &pptlSrc) )
        goto LABEL_14;
      v6 = *(_QWORD *)(v14 + 32);
    }
    v21 |= 1u;
LABEL_14:
    if ( v8 )
    {
      EtwTraceGreLockReleaseSemaphore((__int64)L"hsemDevLock", (__int64)v8, v10);
      ExReleaseResourceAndLeaveCriticalRegion(v8);
      PsLeavePriorityRegion(v17);
      NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v23, v18, v19);
    }
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v23, v9, v10);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v20);
  return v6;
}
