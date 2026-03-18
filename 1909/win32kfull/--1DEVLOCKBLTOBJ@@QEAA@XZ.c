/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00AC2F0
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     NtGdiAlphaBlend @ 0x1C00B4130 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C00B6CF0 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C00BB5E8 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0124474 (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C0124B4C (GreGradientFill.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C0127CF4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0148700 (NtGdiTransparentBlt.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00AB3B0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00ACE88 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00AD53C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00AD580 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C00AD64C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00AEA20 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00AED20 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00DFFAC (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E03CC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00F8610 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029502C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C0297AAC (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this, __int64 a2, SURFACE **a3, __int64 a4)
{
  int v4; // eax
  struct XDCOBJ *v6; // rbx
  int v7; // eax
  SURFACE **v8; // rcx
  SURFACE **v9; // rcx
  int v10; // edx
  __int64 v11; // rcx
  _QWORD *v12; // r10
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rbx
  __int64 CurrentProcess; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdx
  HDC v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  HSURF *v53; // rdi
  struct SURFACE *v54; // rax
  HSURF v55; // rsi
  struct SURFACE *v56; // rbx
  char v57; // bl
  __int64 v58; // rcx
  __int64 v59; // rax
  DCVISRGNSHARELOCK *v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rax
  HDC v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  HSURF *v67; // rdi
  struct SURFACE *v68; // rax
  HSURF v69; // rsi
  struct SURFACE *v70; // rbx
  DC *v71; // rax
  char v72; // bl
  __int64 v73; // rcx
  __int64 v74; // rax
  DCVISRGNSHARELOCK *v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 *v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdi
  __int64 v82; // rax
  __int64 *v83; // rcx
  __int64 v84; // rdx
  __int64 v85; // rbx
  signed __int32 v86[8]; // [rsp+0h] [rbp-80h] BYREF
  int v87; // [rsp+20h] [rbp-60h]
  int v88; // [rsp+30h] [rbp-50h] BYREF
  int v89; // [rsp+34h] [rbp-4Ch] BYREF
  int v90; // [rsp+38h] [rbp-48h] BYREF
  DC *v91[2]; // [rsp+40h] [rbp-40h] BYREF
  DC *v92[3]; // [rsp+50h] [rbp-30h] BYREF
  char v93; // [rsp+B0h] [rbp+30h] BYREF
  char v94; // [rsp+B8h] [rbp+38h] BYREF
  int v95; // [rsp+C0h] [rbp+40h] BYREF
  int v96; // [rsp+C8h] [rbp+48h] BYREF

  v4 = *((_DWORD *)this + 18);
  if ( (v4 & 0x1000) != 0 )
  {
    if ( (v4 & 0x8000) != 0 )
    {
      v6 = (DEVLOCKBLTOBJ *)((char *)this + 80);
      if ( *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
      _InterlockedOr(v86, 0);
      if ( *((_QWORD *)this + 13) && *((_BYTE *)this + 121) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      if ( *((_QWORD *)this + 13) && *((_BYTE *)this + 121) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      _InterlockedOr(v86, 0);
      v6 = (DEVLOCKBLTOBJ *)((char *)this + 80);
      if ( *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
      {
        v7 = *((_DWORD *)this + 18);
        if ( (v7 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 80));
          *((_DWORD *)this + 18) &= ~0x400u;
          v7 = *((_DWORD *)this + 18);
        }
        if ( (v7 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 80));
          *((_DWORD *)this + 18) &= ~0x2000u;
          v7 = *((_DWORD *)this + 18);
        }
        if ( (v7 & 0x1000) != 0 )
        {
          a3 = *(SURFACE ***)v6;
          v8 = *(SURFACE ***)v6;
          if ( (*(_DWORD *)(*(_QWORD *)v6 + 44LL) & 1) == 0 && a3[62] )
          {
            SURFACE::bUnMap(a3[62], this, (struct DC *)a3);
            v8 = *(SURFACE ***)v6;
          }
          *((_DWORD *)v8 + 11) &= ~1u;
        }
      }
    }
    v9 = *(SURFACE ***)v6;
    if ( *(_QWORD *)v6 )
    {
      if ( *((_BYTE *)v6 + 17) )
      {
        v10 = *((_DWORD *)this + 18);
        if ( (v10 & 0x1000) != 0 && (*((_DWORD *)v9 + 9) & 0x4000) != 0 && v9[59] && *((_DWORD *)v9 + 122) )
          GreUpdateSpriteDevLockEnd(v6, v10 & 0x400000);
      }
    }
  }
  v11 = *((_QWORD *)this + 5);
  if ( v11 )
  {
    v12 = (_QWORD *)**((_QWORD **)this + 8);
    if ( v12 )
    {
      hbmSelectBitmap(*v12, *((_QWORD *)this + 7), 1LL, 0LL);
      v11 = *((_QWORD *)this + 5);
    }
    if ( v11 )
    {
      DEC_SHARE_REF_CNT(v11);
      v11 = *((_QWORD *)this + 5);
    }
    bDeleteSurface(*(_QWORD *)(v11 + 32));
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
  }
  v13 = *((_DWORD *)this + 18);
  if ( (v13 & 0x1000) != 0 )
  {
    if ( (v13 & 0x8000) != 0 )
    {
      v14 = *((_QWORD *)this + 10);
      if ( v14 && *((_BYTE *)this + 97) )
      {
        v15 = *(_QWORD *)(v14 + 48);
        if ( (v13 & 0x10) != 0 )
        {
          *(_DWORD *)(v14 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 10), *(struct SURFACE **)(v15 + 2552));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 80));
        v16 = *((_QWORD *)this + 10);
        if ( v16 )
        {
          if ( *((_BYTE *)this + 96) )
          {
            *(_DWORD *)(v16 + 40) &= ~2u;
            v16 = *((_QWORD *)this + 10);
            *((_BYTE *)this + 96) = 0;
          }
          if ( v16 )
          {
            v17 = (__int64 *)v16;
            if ( *((_DWORD *)this + 22) && (*(_DWORD *)(v16 + 44) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80));
              *(_DWORD *)(*((_QWORD *)this + 10) + 44LL) &= ~2u;
              v17 = (__int64 *)*((_QWORD *)this + 10);
              *((_DWORD *)this + 22) = 0;
            }
            v18 = *((unsigned int *)this + 23);
            v95 = 0;
            v19 = *v17;
            HmgDecrementExclusiveReferenceCountEx(v17, v18, &v95);
            if ( v95 )
              bDeleteDCInternalEx(v19, 0LL);
          }
        }
        *((_QWORD *)this + 10) = 0LL;
      }
      _InterlockedOr(v86, 0);
      v20 = *((_QWORD *)this + 13);
      if ( v20 && *((_BYTE *)this + 121) )
      {
        v21 = *(_QWORD *)(v20 + 48);
        if ( (*((_DWORD *)this + 18) & 0x20) != 0 )
        {
          *(_DWORD *)(v20 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 13), *(struct SURFACE **)(v21 + 2552));
        }
        v22 = *((_QWORD *)this + 16);
        if ( v22 )
        {
          v23 = *(_QWORD *)(v22 + 72);
          CurrentProcess = PsGetCurrentProcess(v20, v21, a3, a4);
          MmUnmapViewOfSection(CurrentProcess, v23);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 104));
        DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 104));
        *((_QWORD *)this + 13) = 0LL;
      }
      *((_DWORD *)this + 18) &= ~0x8000u;
    }
    else
    {
      v25 = *((_QWORD *)this + 13);
      if ( v25 && *((_BYTE *)this + 121) )
      {
        v26 = *(_QWORD *)(v25 + 48);
        if ( (v13 & 0x20) != 0 )
        {
          *(_DWORD *)(v25 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 13), *(struct SURFACE **)(v26 + 2552));
        }
        v27 = *((_QWORD *)this + 16);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 72);
          v29 = PsGetCurrentProcess(v25, v26, a3, a4);
          MmUnmapViewOfSection(v29, v28);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 104));
        v30 = *((_QWORD *)this + 13);
        if ( v30 )
        {
          if ( *((_BYTE *)this + 120) )
          {
            *(_DWORD *)(v30 + 40) &= ~2u;
            v30 = *((_QWORD *)this + 13);
            *((_BYTE *)this + 120) = 0;
          }
          if ( v30 )
          {
            v31 = (__int64 *)v30;
            if ( *((_DWORD *)this + 28) && (*(_DWORD *)(v30 + 44) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 104));
              *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) &= ~2u;
              v31 = (__int64 *)*((_QWORD *)this + 13);
              *((_DWORD *)this + 28) = 0;
            }
            v32 = *((unsigned int *)this + 29);
            v96 = 0;
            v33 = *v31;
            HmgDecrementExclusiveReferenceCountEx(v31, v32, &v96);
            if ( v96 )
              bDeleteDCInternalEx(v33, 0LL);
          }
        }
        *((_QWORD *)this + 13) = 0LL;
      }
      _InterlockedOr(v86, 0);
      v34 = *((_QWORD *)this + 10);
      if ( v34 && *((_BYTE *)this + 97) )
      {
        v35 = *(_QWORD *)(v34 + 48);
        if ( (*((_DWORD *)this + 18) & 0x10) != 0 )
        {
          *(_DWORD *)(v34 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 10), *(struct SURFACE **)(v35 + 2552));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 80));
        v36 = *((_QWORD *)this + 10);
        if ( v36 )
        {
          if ( *((_BYTE *)this + 96) )
          {
            *(_DWORD *)(v36 + 40) &= ~2u;
            v36 = *((_QWORD *)this + 10);
            *((_BYTE *)this + 96) = 0;
          }
          if ( v36 )
          {
            v37 = (__int64 *)v36;
            if ( *((_DWORD *)this + 22) && (*(_DWORD *)(v36 + 44) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80));
              *(_DWORD *)(*((_QWORD *)this + 10) + 44LL) &= ~2u;
              v37 = (__int64 *)*((_QWORD *)this + 10);
              *((_DWORD *)this + 22) = 0;
            }
            v38 = *((unsigned int *)this + 23);
            v88 = 0;
            v39 = *v37;
            HmgDecrementExclusiveReferenceCountEx(v37, v38, &v88);
            if ( v88 )
              bDeleteDCInternalEx(v39, 0LL);
          }
        }
        *((_QWORD *)this + 10) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v42, v41, v43) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v45 = *ThreadWin32Thread;
        if ( v45 )
        {
          *(_QWORD *)(v45 + 320) = 0LL;
          *(_QWORD *)(v45 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v13 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v46 = *((_QWORD *)this + 1);
  if ( v46 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v46);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v47 = *((_DWORD *)this + 18);
  if ( (v47 & 8) != 0 )
    *((_DWORD *)this + 18) = v47 & 0xFFFFFFF7;
  v48 = *((_QWORD *)this + 2);
  if ( v48 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v48);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 18) )
  {
    v49 = (HDC)*((_QWORD *)this + 19);
    v91[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v91, v49);
    LOBYTE(v50) = 5;
    v51 = HmgShareLock(*((_QWORD *)this + 17), v50);
    LOBYTE(v52) = 5;
    v53 = (HSURF *)v51;
    v54 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 18), v52);
    v55 = *v53;
    v56 = v54;
    DC::pSurface(v91[0], v54);
    DEC_SHARE_REF_CNT(v53);
    DEC_SHARE_REF_CNT(v56);
    GreDereferenceObject(v55, 1u);
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-76LL )
      *((_DWORD *)v91[0] + 9) |= *((_DWORD *)this + 19);
    if ( (*((_DWORD *)v91[0] + 9) & 0x200) != 0 )
    {
      v57 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v57 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v93);
      v58 = *((_QWORD *)this + 18);
      LOBYTE(v87) = 5;
      v59 = HmgShareUnlockRemoveObject(v58, 0LL, 0LL, 0LL, v87);
      if ( v59 )
        SURFACE::bDeleteSurface(v59, 0LL, 1LL);
      *((_QWORD *)v91[0] + 63) = 0LL;
      DC::vClearRendering(v91[0]);
      *((_QWORD *)this + 18) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v60);
      if ( v57 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v61 = *((_QWORD *)this + 18);
      LOBYTE(v87) = 5;
      v62 = HmgShareUnlockRemoveObject(v61, 0LL, 0LL, 0LL, v87);
      if ( v62 )
        SURFACE::bDeleteSurface(v62, 0LL, 1LL);
      *((_QWORD *)v91[0] + 63) = 0LL;
      *((_QWORD *)this + 18) = 0LL;
    }
    if ( v91[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v91);
    v91[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  if ( *((_QWORD *)this + 21) )
  {
    v63 = (HDC)*((_QWORD *)this + 22);
    v92[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v92, v63);
    LOBYTE(v64) = 5;
    v65 = HmgShareLock(*((_QWORD *)this + 20), v64);
    LOBYTE(v66) = 5;
    v67 = (HSURF *)v65;
    v68 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 21), v66);
    v69 = *v67;
    v70 = v68;
    DC::pSurface(v92[0], v68);
    DEC_SHARE_REF_CNT(v67);
    DEC_SHARE_REF_CNT(v70);
    GreDereferenceObject(v69, 1u);
    v71 = v92[0];
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    if ( (*((_DWORD *)v71 + 9) & 0x200) != 0 )
    {
      v72 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v72 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v94);
      v73 = *((_QWORD *)this + 21);
      LOBYTE(v87) = 5;
      v74 = HmgShareUnlockRemoveObject(v73, 0LL, 0LL, 0LL, v87);
      if ( v74 )
        SURFACE::bDeleteSurface(v74, 0LL, 1LL);
      *((_QWORD *)v92[0] + 63) = 0LL;
      DC::vClearRendering(v92[0]);
      *((_QWORD *)this + 21) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v75);
      if ( v72 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v76 = *((_QWORD *)this + 21);
      LOBYTE(v87) = 5;
      v77 = HmgShareUnlockRemoveObject(v76, 0LL, 0LL, 0LL, v87);
      if ( v77 )
        SURFACE::bDeleteSurface(v77, 0LL, 1LL);
      *((_QWORD *)v92[0] + 63) = 0LL;
      *((_QWORD *)this + 21) = 0LL;
    }
    if ( v92[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v92);
    v92[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  v78 = *((_QWORD *)this + 13);
  if ( v78 )
  {
    if ( *((_BYTE *)this + 120) )
    {
      *(_DWORD *)(v78 + 40) &= ~2u;
      v78 = *((_QWORD *)this + 13);
      *((_BYTE *)this + 120) = 0;
    }
    if ( v78 )
    {
      v79 = (__int64 *)v78;
      if ( *((_DWORD *)this + 28) && (*(_DWORD *)(v78 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 104));
        *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) &= ~2u;
        v79 = (__int64 *)*((_QWORD *)this + 13);
        *((_DWORD *)this + 28) = 0;
      }
      v80 = *((unsigned int *)this + 29);
      v89 = 0;
      v81 = *v79;
      HmgDecrementExclusiveReferenceCountEx(v79, v80, &v89);
      if ( v89 )
        bDeleteDCInternalEx(v81, 0LL);
    }
    *((_QWORD *)this + 13) = 0LL;
  }
  v82 = *((_QWORD *)this + 10);
  if ( v82 )
  {
    if ( *((_BYTE *)this + 96) )
    {
      *(_DWORD *)(v82 + 40) &= ~2u;
      v82 = *((_QWORD *)this + 10);
      *((_BYTE *)this + 96) = 0;
    }
    if ( v82 )
    {
      v83 = (__int64 *)v82;
      if ( *((_DWORD *)this + 22) && (*(_DWORD *)(v82 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80));
        *(_DWORD *)(*((_QWORD *)this + 10) + 44LL) &= ~2u;
        v83 = (__int64 *)*((_QWORD *)this + 10);
        *((_DWORD *)this + 22) = 0;
      }
      v84 = *((unsigned int *)this + 23);
      v90 = 0;
      v85 = *v83;
      HmgDecrementExclusiveReferenceCountEx(v83, v84, &v90);
      if ( v90 )
        bDeleteDCInternalEx(v85, 0LL);
    }
    *((_QWORD *)this + 10) = 0LL;
  }
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
