/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00992C4
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C00C9504 (GreGradientFill.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00F7358 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C025E594 (GrePlgBlt.c)
 * Callees:
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C008A810 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009ACEC (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009AE04 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C009B368 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C615C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(HDC *this)
{
  HDC v2; // r8
  int v3; // edx
  HDC *v4; // r12
  HDC v5; // rcx
  _QWORD *v6; // r10
  int v7; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rax
  HDC v13; // rdx
  int v14; // eax
  HDC v15; // rdx
  HDC v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  HSURF *v20; // rdi
  __int64 v21; // rax
  DC *v22; // r15
  __int64 v23; // rbx
  HSURF v24; // rsi
  DC *v25; // rcx
  char v26; // bl
  HDC v27; // rcx
  __int64 v28; // rax
  DCVISRGNSHARELOCK *v29; // rcx
  HDC v30; // rcx
  __int64 v31; // rax
  HDC v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  HSURF *v36; // rdi
  __int64 v37; // rax
  DC *v38; // r15
  __int64 v39; // rbx
  HSURF v40; // rsi
  DC *v41; // rcx
  char v42; // bl
  HDC v43; // rcx
  __int64 v44; // rax
  DCVISRGNSHARELOCK *v45; // rcx
  HDC v46; // rcx
  __int64 v47; // rax
  signed __int32 v48[8]; // [rsp+0h] [rbp-50h] BYREF
  int v49; // [rsp+20h] [rbp-30h]
  DC *v50[2]; // [rsp+30h] [rbp-20h] BYREF
  DC *v51[2]; // [rsp+40h] [rbp-10h] BYREF
  char v52; // [rsp+90h] [rbp+40h] BYREF
  char v53; // [rsp+98h] [rbp+48h] BYREF

  if ( ((_DWORD)this[9] & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap((DEVLOCKBLTOBJ *)this);
    v2 = this[10];
    if ( v2 )
    {
      v3 = *((_DWORD *)this + 18);
      if ( (v3 & 0x1000) != 0 && ((_DWORD)v2[9] & 0x4000) != 0 && *((_QWORD *)v2 + 60) && *((_DWORD *)v2 + 124) )
        GreUpdateSpriteDevLockEnd((struct XDCOBJ *)(this + 10), v3 & 0x400000);
    }
  }
  v4 = this + 5;
  v5 = this[5];
  if ( v5 )
  {
    v6 = *(_QWORD **)this[8];
    if ( v6 )
    {
      hbmSelectBitmap(*v6, this[7], 1LL, 0LL);
      v5 = *v4;
    }
    if ( v5 )
    {
      DEC_SHARE_REF_CNT(v5);
      v5 = *v4;
    }
    bDeleteSurface(*((_QWORD *)v5 + 4));
    *v4 = 0LL;
    this[8] = 0LL;
  }
  v7 = *((_DWORD *)this + 18);
  if ( (v7 & 0x1000) != 0 )
  {
    if ( (v7 & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)this);
      _InterlockedOr(v48, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)this);
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)this);
      _InterlockedOr(v48, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v12 = *ThreadWin32Thread;
        if ( v12 )
        {
          *(_QWORD *)(v12 + 320) = 0LL;
          *(_QWORD *)(v12 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v7 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x800000u;
  }
  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *this);
    GreReleaseSemaphoreInternal(*this);
  }
  v13 = this[1];
  if ( v13 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v13);
    GreReleaseSemaphoreInternal(this[1]);
  }
  v14 = *((_DWORD *)this + 18);
  if ( (v14 & 8) != 0 )
    *((_DWORD *)this + 18) = v14 & 0xFFFFFFF7;
  v15 = this[2];
  if ( v15 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v15);
    GreReleaseSemaphoreInternal(this[2]);
  }
  if ( this[16] )
  {
    v16 = this[17];
    v50[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v50, v16);
    LOBYTE(v17) = 5;
    v18 = HmgShareLock(this[15], v17);
    LOBYTE(v19) = 5;
    v20 = (HSURF *)v18;
    v21 = HmgShareLock(this[16], v19);
    v22 = v50[0];
    v23 = v21;
    v24 = *v20;
    v25 = v50[0];
    *((_QWORD *)v50[0] + 63) = v21;
    DC::vInheritSurfaceDpiScale(v25);
    DEC_SHARE_REF_CNT(v20);
    DEC_SHARE_REF_CNT(v23);
    GreDereferenceObject(v24);
    this[17] = 0LL;
    this[15] = 0LL;
    if ( this != (HDC *)-76LL )
      *((_DWORD *)v22 + 9) |= *((_DWORD *)this + 19);
    if ( (*((_DWORD *)v22 + 9) & 0x200) != 0 )
    {
      v26 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v26 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v52);
      v27 = this[16];
      LOBYTE(v49) = 5;
      v28 = HmgShareUnlockRemoveObject(v27, 0LL, 0LL, 0LL, v49);
      if ( v28 )
        SURFACE::bDeleteSurface(v28, 0LL, 1LL);
      *((_QWORD *)v22 + 64) = 0LL;
      DC::vClearRendering(v22);
      this[16] = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v29);
      if ( v26 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v30 = this[16];
      LOBYTE(v49) = 5;
      v31 = HmgShareUnlockRemoveObject(v30, 0LL, 0LL, 0LL, v49);
      if ( v31 )
        SURFACE::bDeleteSurface(v31, 0LL, 1LL);
      *((_QWORD *)v22 + 64) = 0LL;
      this[16] = 0LL;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v50);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  if ( this[19] )
  {
    v32 = this[20];
    v51[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v51, v32);
    LOBYTE(v33) = 5;
    v34 = HmgShareLock(this[18], v33);
    LOBYTE(v35) = 5;
    v36 = (HSURF *)v34;
    v37 = HmgShareLock(this[19], v35);
    v38 = v51[0];
    v39 = v37;
    v40 = *v36;
    v41 = v51[0];
    *((_QWORD *)v51[0] + 63) = v37;
    DC::vInheritSurfaceDpiScale(v41);
    DEC_SHARE_REF_CNT(v36);
    DEC_SHARE_REF_CNT(v39);
    GreDereferenceObject(v40);
    this[20] = 0LL;
    this[18] = 0LL;
    if ( (*((_DWORD *)v38 + 9) & 0x200) != 0 )
    {
      v42 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v42 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v53);
      v43 = this[19];
      LOBYTE(v49) = 5;
      v44 = HmgShareUnlockRemoveObject(v43, 0LL, 0LL, 0LL, v49);
      if ( v44 )
        SURFACE::bDeleteSurface(v44, 0LL, 1LL);
      *((_QWORD *)v38 + 64) = 0LL;
      DC::vClearRendering(v38);
      this[19] = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v45);
      if ( v42 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v46 = this[19];
      LOBYTE(v49) = 5;
      v47 = HmgShareUnlockRemoveObject(v46, 0LL, 0LL, 0LL, v49);
      if ( v47 )
        SURFACE::bDeleteSurface(v47, 0LL, 1LL);
      *((_QWORD *)v38 + 64) = 0LL;
      this[19] = 0LL;
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v51);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  SURFMEM::~SURFMEM((SURFMEM *)(this + 5));
}
