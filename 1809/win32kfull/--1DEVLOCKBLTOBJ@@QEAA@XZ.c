/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C004B574
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C009C47C (GreGradientFill.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A4848 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C014E240 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004BCB8 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004BD2C (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C004BD84 (-vUnMap@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00591F0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C01208D4 (--1CAutoTGO@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E24 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E68 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015F4B8 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(HDC *this)
{
  HDC v2; // r8
  int v3; // edx
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rax
  HDC v10; // rdx
  int v11; // eax
  HDC v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  HDC v15; // rcx
  __int64 v16; // rdx
  HSURF v17; // rbx
  char v18; // bl
  HDC v19; // rcx
  __int64 v20; // rax
  DCVISRGNSHARELOCK *v21; // rcx
  HDC v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  HDC v26; // rcx
  __int64 v27; // rdx
  HSURF v28; // rbx
  DC *v29; // rax
  char v30; // bl
  HDC v31; // rcx
  __int64 v32; // rax
  DCVISRGNSHARELOCK *v33; // rcx
  HDC v34; // rcx
  __int64 v35; // rax
  signed __int32 v36[8]; // [rsp+0h] [rbp-100h] BYREF
  int v37; // [rsp+20h] [rbp-E0h]
  _BYTE v38[32]; // [rsp+30h] [rbp-D0h] BYREF
  HSURF *v39; // [rsp+50h] [rbp-B0h]
  _BYTE v40[32]; // [rsp+58h] [rbp-A8h] BYREF
  HSURF *v41; // [rsp+78h] [rbp-88h]
  DC *v42[6]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v43[32]; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v44; // [rsp+D0h] [rbp-30h]
  _BYTE v45[32]; // [rsp+D8h] [rbp-28h] BYREF
  struct SURFACE *v46; // [rsp+F8h] [rbp-8h]
  DC *v47[6]; // [rsp+100h] [rbp+0h] BYREF
  char v48; // [rsp+160h] [rbp+60h] BYREF
  char v49; // [rsp+168h] [rbp+68h] BYREF

  if ( ((_DWORD)this[14] & 0x1000) != 0 )
  {
    DEVLOCKBLTOBJ::vUnMap((DEVLOCKBLTOBJ *)this);
    v2 = this[15];
    if ( v2 )
    {
      v3 = *((_DWORD *)this + 28);
      if ( (v3 & 0x1000) != 0 && ((_DWORD)v2[9] & 0x4000) != 0 && *((_QWORD *)v2 + 59) && *((_DWORD *)v2 + 122) )
        GreUpdateSpriteDevLockEnd((struct XDCOBJ *)(this + 15), v3 & 0x400000);
    }
  }
  if ( this[5] )
  {
    CAutoTGO::~CAutoTGO((CAutoTGO *)(this + 7));
    DEVLOCKBLTOBJ::TmpSrcCleanup((DEVLOCKBLTOBJ *)this);
  }
  v4 = *((_DWORD *)this + 28);
  if ( (v4 & 0x1000) != 0 )
  {
    if ( (v4 & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)this);
      _InterlockedOr(v36, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)this);
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      DEVLOCKBLTOBJ::bDisposeSrcDco((DEVLOCKBLTOBJ *)this);
      _InterlockedOr(v36, 0);
      DEVLOCKBLTOBJ::bDisposeTrgDco((DEVLOCKBLTOBJ *)this);
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v7, v6) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v9 = *ThreadWin32Thread;
        if ( v9 )
        {
          *(_QWORD *)(v9 + 320) = 0LL;
          *(_QWORD *)(v9 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v4 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x800000u;
  }
  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *this);
    GreReleaseSemaphoreInternal(*this);
  }
  v10 = this[1];
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v10);
    GreReleaseSemaphoreInternal(this[1]);
  }
  v11 = *((_DWORD *)this + 28);
  if ( (v11 & 8) != 0 )
    *((_DWORD *)this + 28) = v11 & 0xFFFFFFF7;
  v12 = this[2];
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v12);
    GreReleaseSemaphoreInternal(this[2]);
  }
  if ( this[29] )
  {
    DCOBJ::DCOBJ((DCOBJ *)v42, this[30]);
    SURFREF::SURFREF((SURFREF *)v38);
    SURFREF::SURFREF((SURFREF *)v43);
    LOBYTE(v13) = 5;
    v14 = HmgShareLock(this[28], v13);
    v15 = this[29];
    LOBYTE(v16) = 5;
    v39 = (HSURF *)v14;
    v44 = (struct SURFACE *)HmgShareLock(v15, v16);
    v17 = *v39;
    DC::pSurface(v42[0], v44);
    DEC_SHARE_REF_CNT(v39);
    v39 = 0LL;
    DEC_SHARE_REF_CNT(v44);
    v44 = 0LL;
    GreDereferenceObject(v17, 1u);
    this[30] = 0LL;
    this[28] = 0LL;
    if ( this != (HDC *)-116LL )
      *((_DWORD *)v42[0] + 9) |= *((_DWORD *)this + 29);
    if ( (*((_DWORD *)v42[0] + 9) & 0x200) != 0 )
    {
      v18 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v18 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v48);
      v19 = this[29];
      LOBYTE(v37) = 5;
      v20 = HmgShareUnlockRemoveObject(v19, 0LL, 0LL, 0LL, v37);
      if ( v20 )
        SURFACE::bDeleteSurface(v20, 0LL, 1LL);
      *((_QWORD *)v42[0] + 63) = 0LL;
      DC::vClearRendering(v42[0]);
      this[29] = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v21);
      if ( v18 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v22 = this[29];
      LOBYTE(v37) = 5;
      v23 = HmgShareUnlockRemoveObject(v22, 0LL, 0LL, 0LL, v37);
      if ( v23 )
        SURFACE::bDeleteSurface(v23, 0LL, 1LL);
      *((_QWORD *)v42[0] + 63) = 0LL;
      this[29] = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v44 )
      DEC_SHARE_REF_CNT(v44);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v43);
    if ( v39 )
      DEC_SHARE_REF_CNT(v39);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v38);
    DCOBJ::~DCOBJ((DCOBJ *)v42);
  }
  if ( this[32] )
  {
    DCOBJ::DCOBJ((DCOBJ *)v47, this[33]);
    SURFREF::SURFREF((SURFREF *)v40);
    SURFREF::SURFREF((SURFREF *)v45);
    LOBYTE(v24) = 5;
    v25 = HmgShareLock(this[31], v24);
    v26 = this[32];
    LOBYTE(v27) = 5;
    v41 = (HSURF *)v25;
    v46 = (struct SURFACE *)HmgShareLock(v26, v27);
    v28 = *v41;
    DC::pSurface(v47[0], v46);
    DEC_SHARE_REF_CNT(v41);
    v41 = 0LL;
    DEC_SHARE_REF_CNT(v46);
    v46 = 0LL;
    GreDereferenceObject(v28, 1u);
    v29 = v47[0];
    this[33] = 0LL;
    this[31] = 0LL;
    if ( (*((_DWORD *)v29 + 9) & 0x200) != 0 )
    {
      v30 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v30 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v49);
      v31 = this[32];
      LOBYTE(v37) = 5;
      v32 = HmgShareUnlockRemoveObject(v31, 0LL, 0LL, 0LL, v37);
      if ( v32 )
        SURFACE::bDeleteSurface(v32, 0LL, 1LL);
      *((_QWORD *)v47[0] + 63) = 0LL;
      DC::vClearRendering(v47[0]);
      this[32] = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v33);
      if ( v30 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v34 = this[32];
      LOBYTE(v37) = 5;
      v35 = HmgShareUnlockRemoveObject(v34, 0LL, 0LL, 0LL, v37);
      if ( v35 )
        SURFACE::bDeleteSurface(v35, 0LL, 1LL);
      *((_QWORD *)v47[0] + 63) = 0LL;
      this[32] = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v46 )
      DEC_SHARE_REF_CNT(v46);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v45);
    if ( v41 )
      DEC_SHARE_REF_CNT(v41);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v40);
    DCOBJ::~DCOBJ((DCOBJ *)v47);
  }
  DCOBJ::~DCOBJ((DCOBJ *)(this + 21));
  DCOBJ::~DCOBJ((DCOBJ *)(this + 15));
  CAutoTGO::~CAutoTGO((CAutoTGO *)(this + 7));
  SURFMEM::~SURFMEM((SURFMEM *)(this + 5));
}
