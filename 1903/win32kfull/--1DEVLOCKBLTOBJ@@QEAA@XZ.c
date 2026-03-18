/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0062450
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C0079484 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00FBAD4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0035FE8 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     GreDereferenceObject @ 0x1C00455D4 (GreDereferenceObject.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0062380 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0062FE8 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006369C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00636E0 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0064660 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0064960 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0103E9C (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C01042BC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C010FD5C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02955DC (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029805C (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
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
  __int64 v44; // r9
  __int64 *ThreadWin32Thread; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  int v48; // eax
  __int64 v49; // rdx
  HDC v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  HSURF *v54; // rdi
  struct SURFACE *v55; // rax
  HSURF v56; // rsi
  struct SURFACE *v57; // rbx
  char v58; // bl
  __int64 v59; // rcx
  __int64 v60; // rax
  DCVISRGNSHARELOCK *v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  HDC v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // rdx
  HSURF *v68; // rdi
  struct SURFACE *v69; // rax
  HSURF v70; // rsi
  struct SURFACE *v71; // rbx
  DC *v72; // rax
  char v73; // bl
  __int64 v74; // rcx
  __int64 v75; // rax
  DCVISRGNSHARELOCK *v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdi
  __int64 v83; // rax
  __int64 *v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rbx
  signed __int32 v87[8]; // [rsp+0h] [rbp-80h] BYREF
  int v88; // [rsp+20h] [rbp-60h]
  int v89; // [rsp+30h] [rbp-50h] BYREF
  int v90; // [rsp+34h] [rbp-4Ch] BYREF
  int v91; // [rsp+38h] [rbp-48h] BYREF
  DC *v92[2]; // [rsp+40h] [rbp-40h] BYREF
  DC *v93[3]; // [rsp+50h] [rbp-30h] BYREF
  char v94; // [rsp+B0h] [rbp+30h] BYREF
  char v95; // [rsp+B8h] [rbp+38h] BYREF
  int v96; // [rsp+C0h] [rbp+40h] BYREF
  int v97; // [rsp+C8h] [rbp+48h] BYREF

  v4 = *((_DWORD *)this + 18);
  if ( (v4 & 0x1000) != 0 )
  {
    if ( (v4 & 0x8000) != 0 )
    {
      v6 = (DEVLOCKBLTOBJ *)((char *)this + 80);
      if ( *((_QWORD *)this + 10) && *((_BYTE *)this + 97) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
      _InterlockedOr(v87, 0);
      if ( *((_QWORD *)this + 13) && *((_BYTE *)this + 121) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      if ( *((_QWORD *)this + 13) && *((_BYTE *)this + 121) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      _InterlockedOr(v87, 0);
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
            v96 = 0;
            v19 = *v17;
            HmgDecrementExclusiveReferenceCountEx(v17, v18, &v96);
            if ( v96 )
              bDeleteDCInternalEx(v19, 0LL);
          }
        }
        *((_QWORD *)this + 10) = 0LL;
      }
      _InterlockedOr(v87, 0);
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
            v97 = 0;
            v33 = *v31;
            HmgDecrementExclusiveReferenceCountEx(v31, v32, &v97);
            if ( v97 )
              bDeleteDCInternalEx(v33, 0LL);
          }
        }
        *((_QWORD *)this + 13) = 0LL;
      }
      _InterlockedOr(v87, 0);
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
            v89 = 0;
            v39 = *v37;
            HmgDecrementExclusiveReferenceCountEx(v37, v38, &v89);
            if ( v89 )
              bDeleteDCInternalEx(v39, 0LL);
          }
        }
        *((_QWORD *)this + 10) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 18) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(v42, v41, v43, v44) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v46 = *ThreadWin32Thread;
        if ( v46 )
        {
          *(_QWORD *)(v46 + 320) = 0LL;
          *(_QWORD *)(v46 + 312) = 0LL;
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
  v47 = *((_QWORD *)this + 1);
  if ( v47 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v47);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v48 = *((_DWORD *)this + 18);
  if ( (v48 & 8) != 0 )
    *((_DWORD *)this + 18) = v48 & 0xFFFFFFF7;
  v49 = *((_QWORD *)this + 2);
  if ( v49 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v49);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 18) )
  {
    v50 = (HDC)*((_QWORD *)this + 19);
    v92[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v92, v50);
    LOBYTE(v51) = 5;
    v52 = HmgShareLock(*((_QWORD *)this + 17), v51);
    LOBYTE(v53) = 5;
    v54 = (HSURF *)v52;
    v55 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 18), v53);
    v56 = *v54;
    v57 = v55;
    DC::pSurface(v92[0], v55);
    DEC_SHARE_REF_CNT(v54);
    DEC_SHARE_REF_CNT(v57);
    GreDereferenceObject(v56, 1u);
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 17) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-76LL )
      *((_DWORD *)v92[0] + 9) |= *((_DWORD *)this + 19);
    if ( (*((_DWORD *)v92[0] + 9) & 0x200) != 0 )
    {
      v58 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v58 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v94);
      v59 = *((_QWORD *)this + 18);
      LOBYTE(v88) = 5;
      v60 = HmgShareUnlockRemoveObject(v59, 0LL, 0LL, 0LL, v88);
      if ( v60 )
        SURFACE::bDeleteSurface(v60, 0LL, 1LL);
      *((_QWORD *)v92[0] + 63) = 0LL;
      DC::vClearRendering(v92[0]);
      *((_QWORD *)this + 18) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v61);
      if ( v58 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v62 = *((_QWORD *)this + 18);
      LOBYTE(v88) = 5;
      v63 = HmgShareUnlockRemoveObject(v62, 0LL, 0LL, 0LL, v88);
      if ( v63 )
        SURFACE::bDeleteSurface(v63, 0LL, 1LL);
      *((_QWORD *)v92[0] + 63) = 0LL;
      *((_QWORD *)this + 18) = 0LL;
    }
    if ( v92[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v92);
    v92[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  if ( *((_QWORD *)this + 21) )
  {
    v64 = (HDC)*((_QWORD *)this + 22);
    v93[1] = 0LL;
    XDCOBJ::vLock((XDCOBJ *)v93, v64);
    LOBYTE(v65) = 5;
    v66 = HmgShareLock(*((_QWORD *)this + 20), v65);
    LOBYTE(v67) = 5;
    v68 = (HSURF *)v66;
    v69 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 21), v67);
    v70 = *v68;
    v71 = v69;
    DC::pSurface(v93[0], v69);
    DEC_SHARE_REF_CNT(v68);
    DEC_SHARE_REF_CNT(v71);
    GreDereferenceObject(v70, 1u);
    v72 = v93[0];
    *((_QWORD *)this + 22) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
    if ( (*((_DWORD *)v72 + 9) & 0x200) != 0 )
    {
      v73 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v73 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v95);
      v74 = *((_QWORD *)this + 21);
      LOBYTE(v88) = 5;
      v75 = HmgShareUnlockRemoveObject(v74, 0LL, 0LL, 0LL, v88);
      if ( v75 )
        SURFACE::bDeleteSurface(v75, 0LL, 1LL);
      *((_QWORD *)v93[0] + 63) = 0LL;
      DC::vClearRendering(v93[0]);
      *((_QWORD *)this + 21) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v76);
      if ( v73 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v77 = *((_QWORD *)this + 21);
      LOBYTE(v88) = 5;
      v78 = HmgShareUnlockRemoveObject(v77, 0LL, 0LL, 0LL, v88);
      if ( v78 )
        SURFACE::bDeleteSurface(v78, 0LL, 1LL);
      *((_QWORD *)v93[0] + 63) = 0LL;
      *((_QWORD *)this + 21) = 0LL;
    }
    if ( v93[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v93);
    v93[0] = 0LL;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
  v79 = *((_QWORD *)this + 13);
  if ( v79 )
  {
    if ( *((_BYTE *)this + 120) )
    {
      *(_DWORD *)(v79 + 40) &= ~2u;
      v79 = *((_QWORD *)this + 13);
      *((_BYTE *)this + 120) = 0;
    }
    if ( v79 )
    {
      v80 = (__int64 *)v79;
      if ( *((_DWORD *)this + 28) && (*(_DWORD *)(v79 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 104));
        *(_DWORD *)(*((_QWORD *)this + 13) + 44LL) &= ~2u;
        v80 = (__int64 *)*((_QWORD *)this + 13);
        *((_DWORD *)this + 28) = 0;
      }
      v81 = *((unsigned int *)this + 29);
      v90 = 0;
      v82 = *v80;
      HmgDecrementExclusiveReferenceCountEx(v80, v81, &v90);
      if ( v90 )
        bDeleteDCInternalEx(v82, 0LL);
    }
    *((_QWORD *)this + 13) = 0LL;
  }
  v83 = *((_QWORD *)this + 10);
  if ( v83 )
  {
    if ( *((_BYTE *)this + 96) )
    {
      *(_DWORD *)(v83 + 40) &= ~2u;
      v83 = *((_QWORD *)this + 10);
      *((_BYTE *)this + 96) = 0;
    }
    if ( v83 )
    {
      v84 = (__int64 *)v83;
      if ( *((_DWORD *)this + 22) && (*(_DWORD *)(v83 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 80));
        *(_DWORD *)(*((_QWORD *)this + 10) + 44LL) &= ~2u;
        v84 = (__int64 *)*((_QWORD *)this + 10);
        *((_DWORD *)this + 22) = 0;
      }
      v85 = *((unsigned int *)this + 23);
      v91 = 0;
      v86 = *v84;
      HmgDecrementExclusiveReferenceCountEx(v84, v85, &v91);
      if ( v91 )
        bDeleteDCInternalEx(v86, 0LL);
    }
    *((_QWORD *)this + 10) = 0LL;
  }
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
