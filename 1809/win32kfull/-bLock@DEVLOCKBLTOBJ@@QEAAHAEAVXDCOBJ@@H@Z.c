/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00A0014
 * Callers:
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C009C47C (GreGradientFill.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A4848 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0065580 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00A0468 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, DC **a2)
{
  _QWORD *v2; // rsi
  int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DC *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 ThreadWin32Thread; // rax
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rsi
  int v22; // eax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 28) = 1;
  v2 = (_QWORD *)((char *)this + 224);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  v5 = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = *(_QWORD *)*a2;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 29, (HSURF *)this + 28, (unsigned int *)this + 29) )
    return 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  if ( (*((_DWORD *)*a2 + 9) & 0x200) == 0 )
  {
    if ( !(unsigned int)GreGetLockCount(v7, v6, v8) )
    {
      *((_DWORD *)this + 28) |= 0x800000u;
      GreIncLockCount();
    }
    goto LABEL_14;
  }
  *((_QWORD *)this + 2) = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)GreGetLockCount(v10, v9, v11)
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    v5 = 1;
  }
  v12 = *a2;
  v28 = *((_QWORD *)*a2 + 6);
  if ( (**((_DWORD **)v12 + 122) & 1) != 0 || (*((_DWORD *)v12 + 9) & 0x8000) != 0 )
  {
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v28) )
      goto LABEL_9;
    v12 = *a2;
  }
  v24 = *((_QWORD *)v12 + 8);
  *(_QWORD *)this = v24;
  *((_QWORD *)this + 3) = *((_QWORD *)*a2 + 6);
  v25 = v24;
  if ( v5 && v24 == ghsemGreLock )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
    v25 = *(_QWORD *)this;
    v5 = 0;
  }
  GreAcquireSemaphore(v25);
  v26 = 2LL;
  if ( *(_QWORD *)this != ghsemGreLock )
    v26 = 11LL;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v26);
  v13 = *((unsigned int *)this + 28);
  v15 = 512LL;
  if ( (v13 & 0x200) == 0 && (*((_DWORD *)*a2 + 9) & 0x4000) != 0 )
  {
    v13 = (unsigned int)v13 | 0x200;
    *((_DWORD *)this + 28) = v13;
  }
LABEL_9:
  if ( !(unsigned int)GreGetLockCount(v14, v13, v15) )
  {
    *((_DWORD *)this + 28) |= 0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v16);
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
    GreIncLockCount();
    GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
  }
  v18 = *((_DWORD *)*a2 + 9);
  if ( (v18 & 0x1000) != 0 && (v18 & 0x4000) == 0 )
  {
    v27 = *((_DWORD *)this + 28);
    if ( (v27 & 0x1000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v27 = *((_DWORD *)this + 28);
    }
    *((_DWORD *)this + 28) = v27 & 0xFFFFFFFE;
LABEL_58:
    if ( v5 )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
      GreReleaseSemaphoreInternal(ghsemGreLock);
    }
    return 0LL;
  }
LABEL_14:
  v19 = *((unsigned int *)this + 28);
  if ( (v19 & 0x1000) != 0 )
  {
    if ( (*((_DWORD *)*a2 + 9) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        LODWORD(v19) = *((_DWORD *)this + 28);
      }
      *((_DWORD *)this + 28) = v19 & 0xFFFFFFFE;
      goto LABEL_58;
    }
LABEL_16:
    if ( (*((_DWORD *)*a2 + 9) & 0x10) != 0 && !DC::bCompute(*a2) )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      }
      *((_DWORD *)this + 28) &= ~1u;
      goto LABEL_58;
    }
    goto LABEL_17;
  }
  if ( !*((_QWORD *)this + 2) )
    goto LABEL_16;
LABEL_17:
  if ( (*((_DWORD *)*a2 + 9) & 0x200) != 0 && (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( !*v2 )
      DC::vSetRendering(*a2);
    v20 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19);
    v21 = v20;
    if ( v20 )
    {
      *(_QWORD *)(v20 + 312) = (char *)this + 120;
      if ( (*((_DWORD *)*a2 + 9) & 0x4000) == 0 )
      {
        *(_BYTE *)(v20 + 328) = 1;
        *((_QWORD *)*a2 + 248) = 0LL;
        GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        *(_DWORD *)(v21 + 336) = giVisRgnUniqueness;
        EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
        GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
      }
    }
  }
  v22 = *((_DWORD *)this + 28);
  if ( (v22 & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    v22 = *((_DWORD *)this + 28);
  }
  if ( (v22 & 0x801000) != 0 )
    *((_DWORD *)*a2 + 10) |= 2u;
  if ( v5 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0
    || (unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, (struct XDCOBJ *)a2, 0) )
  {
    return 1LL;
  }
  *((_DWORD *)this + 28) &= ~1u;
  return 0LL;
}
