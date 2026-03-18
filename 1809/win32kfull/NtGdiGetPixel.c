/*
 * XREFs of NtGdiGetPixel @ 0x1C005E7C0
 * Callers:
 *     <none>
 * Callees:
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C0055B3C (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0058EF0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00E3444 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0137D98 (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E24 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E68 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C01496EC (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, int a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  DC *v9; // rbx
  __int64 v10; // rdi
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // rcx
  int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // rdx
  struct REGION *v17; // rdx
  int v18; // ecx
  int v19; // ebx
  bool v20; // zf
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v22; // rcx
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  HSURF v29; // rbx
  char v30; // bl
  __int64 v31; // rax
  DCVISRGNSHARELOCK *v32; // rcx
  __int64 v33; // rax
  unsigned int v34; // ebx
  int v36; // [rsp+20h] [rbp-E0h]
  unsigned int v37; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v38[4]; // [rsp+64h] [rbp-9Ch] BYREF
  int v39; // [rsp+68h] [rbp-98h] BYREF
  int v40; // [rsp+6Ch] [rbp-94h]
  __int128 v41; // [rsp+70h] [rbp-90h] BYREF
  __int64 v42; // [rsp+80h] [rbp-80h]
  unsigned int v43; // [rsp+88h] [rbp-78h]
  int v44; // [rsp+8Ch] [rbp-74h]
  DC *v45[6]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  HDC v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+E0h] [rbp-20h] BYREF
  char v50; // [rsp+E8h] [rbp-18h]
  int v51; // [rsp+ECh] [rbp-14h]
  char *v52; // [rsp+F0h] [rbp-10h] BYREF
  int v53; // [rsp+F8h] [rbp-8h]
  int v54; // [rsp+FCh] [rbp-4h]
  __int64 v55; // [rsp+100h] [rbp+0h] BYREF
  __int64 v56; // [rsp+108h] [rbp+8h]
  __int64 v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  DC *v59[6]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v60[32]; // [rsp+150h] [rbp+50h] BYREF
  HSURF *v61; // [rsp+170h] [rbp+70h]
  DC *v62[6]; // [rsp+178h] [rbp+78h] BYREF
  _BYTE v63[32]; // [rsp+1A8h] [rbp+A8h] BYREF
  struct SURFACE *v64; // [rsp+1C8h] [rbp+C8h]
  int v65; // [rsp+1D0h] [rbp+D0h] BYREF
  int v66; // [rsp+1D4h] [rbp+D4h]
  int v67; // [rsp+1D8h] [rbp+D8h]
  int v68; // [rsp+1DCh] [rbp+DCh]
  _DWORD v69[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  int v70; // [rsp+1E8h] [rbp+E8h]
  int v71; // [rsp+1ECh] [rbp+ECh]
  _BYTE v72[4]; // [rsp+1F0h] [rbp+F0h] BYREF
  int v73; // [rsp+1F4h] [rbp+F4h]
  int v74; // [rsp+1F8h] [rbp+F8h]
  int v75; // [rsp+1FCh] [rbp+FCh]
  int v76; // [rsp+200h] [rbp+100h]
  __int64 v77; // [rsp+228h] [rbp+128h]
  __int64 v78; // [rsp+240h] [rbp+140h]
  int v79; // [rsp+248h] [rbp+148h]
  int v80; // [rsp+270h] [rbp+170h]
  __int64 v81; // [rsp+280h] [rbp+180h]

  v37 = -1;
  DCOBJ::DCOBJ((DCOBJ *)v59, a1);
  if ( !v59[0] )
    goto LABEL_87;
  bSpDwmValidateSurface((struct XDCOBJ *)v59, a2, a3, 1, 1);
  DCOBJ::DCOBJ((DCOBJ *)v45);
  v42 = 0LL;
  v41 = 0LL;
  v43 = 0;
  v45[0] = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  v46 = 0LL;
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v41, (struct XDCOBJ *)v59, 0) )
  {
    v9 = v59[0];
    v10 = *((_QWORD *)v59[0] + 62);
    if ( v10 )
    {
      if ( *(_DWORD *)(v10 + 656) )
      {
        if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v10 + 656) )
          goto LABEL_51;
        v9 = v59[0];
      }
      v11 = *(_DWORD *)(v10 + 112);
      if ( (v11 & 0x800) != 0 )
      {
        v12 = UserSurfaceAccessCheck(*(_QWORD *)(v10 + 648), v5, v7, v8);
      }
      else
      {
        if ( (v11 & 0x10000000) == 0 )
        {
LABEL_13:
          v53 = *(_DWORD *)(*((_QWORD *)v9 + 122) + 208LL);
          v54 = *(_DWORD *)(*((_QWORD *)v9 + 122) + 108LL) & 1;
          if ( (*(_DWORD *)(*((_QWORD *)v9 + 122) + 340LL) & 0x1E000) != 0 )
          {
            EXFORMOBJ::vInit((EXFORMOBJ *)&v52, (struct XDCOBJ *)v59, 0x204u, 0);
            v13 = (unsigned __int64)v52;
            v9 = v59[0];
          }
          else
          {
            v13 = (unsigned __int64)v9 + 320;
            v52 = (char *)v9 + 320;
          }
          v14 = *(_DWORD *)(v13 + 32) & 0x43;
          v39 = a2;
          v40 = a3;
          if ( (_BYTE)v14 != 67 )
          {
            bCvtPts1(v13, &v39, 1LL);
            a3 = v40;
            a2 = v39;
          }
          v65 = a2;
          v67 = a2 + 1;
          v68 = a3 + 1;
          v15 = (_DWORD *)((char *)v9 + 1024);
          v66 = a3;
          if ( (*((_DWORD *)v9 + 10) & 1) == 0 )
            v15 = (_DWORD *)((char *)v9 + 1016);
          v65 = a2 + *v15;
          v67 = a2 + 1 + *v15;
          v66 = a3 + v15[1];
          v68 = a3 + 1 + v15[1];
          if ( !*((_QWORD *)v9 + 147) || (*((_DWORD *)v9 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v9) )
            v16 = *((_QWORD *)v9 + 145);
          if ( v16 )
          {
            v17 = DC::prgnRao(v9);
          }
          else if ( !*((_QWORD *)v9 + 146)
                 || (*((_DWORD *)v9 + 10) & 2) == 0
                 || !(unsigned int)DC::bDpiScaledSurface(v9) )
          {
            v17 = (struct REGION *)*((_QWORD *)v9 + 144);
          }
          v77 = 0LL;
          v78 = 0LL;
          v79 = 0;
          v80 = 1;
          v81 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v72, v17, (struct ERECTL *)&v65, 0);
          if ( v73 != v75 && v74 != v76 )
          {
            v18 = *((_DWORD *)v59[0] + 30);
            if ( (v18 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)v59[0] + 122) + 248LL) || (v19 = 1, (v18 & 0x10000000) == 0) )
              v19 = 0;
            v37 = 0;
            v55 = 0LL;
            v56 = 0LL;
            v58 = 0LL;
            LODWORD(v55) = *(_DWORD *)(v10 + 96);
            HIDWORD(v55) = 1;
            LODWORD(v56) = 1;
            v57 = 0LL;
            LODWORD(v58) = 1;
            if ( (_DWORD)v55 == 1 )
            {
              v69[0] = 7;
              v70 = 8;
            }
            else if ( (_DWORD)v55 == 2 )
            {
              v69[0] = 1;
              v70 = 2;
            }
            else
            {
              v69[0] = 0;
              v70 = 1;
            }
            v49 = 0LL;
            v50 = 0;
            v51 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v49, (struct _DEVBITMAPINFO *)&v55, &v37, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v20 = (*(_DWORD *)(v10 + 112) & 0x400) == 0;
              v69[1] = 0;
              v71 = 1;
              if ( v20 )
                v21 = EngCopyBits;
              else
                v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v10 + 48) + 2840LL);
              v22 = 0LL;
              if ( v49 )
                v22 = v49 + 24;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, int *))v21)(
                     v22,
                     v10 + 24,
                     0LL,
                     xloIdent,
                     v69,
                     &v65)
                && !v19 )
              {
                v37 = ulIndexToRGB(*(_QWORD *)(v10 + 128), *((_QWORD *)v59[0] + 11), v37);
              }
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v49);
          }
          goto LABEL_51;
        }
        v12 = UserScreenAccessCheck(v6, v5, v7, v8);
      }
      if ( v12 )
      {
        v9 = v59[0];
        goto LABEL_13;
      }
    }
  }
LABEL_51:
  if ( v45[0] )
  {
    v23 = *((_QWORD *)v45[0] + 6);
    if ( (v43 & 0x1000) != 0 )
    {
      DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v41);
      if ( (v43 & 0x10) != 0 )
      {
        *((_DWORD *)v45[0] + 9) &= ~0x4000u;
        DC::pSurface(v45[0], *(struct SURFACE **)(v23 + 2552));
      }
      DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v41);
    }
    XDCOBJ::vUnlock((XDCOBJ *)v45);
    v45[0] = 0LL;
  }
  v24 = v43;
  if ( (v43 & 0x1000) != 0 )
  {
    GreDecLockCount();
    v43 &= ~0x1000u;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
      *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
    }
    v24 = v43;
  }
  else if ( (v43 & 0x800000) != 0 )
  {
    GreDecLockCount();
    v24 = v43 & 0xFF7FFFFF;
    v43 &= ~0x800000u;
  }
  if ( (_QWORD)v41 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v41);
    GreReleaseSemaphoreInternal(v41);
    v24 = v43;
  }
  if ( (v24 & 8) != 0 )
    v43 = v24 & 0xFFFFFFF7;
  if ( *((_QWORD *)&v41 + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_QWORD *)&v41 + 1));
    GreReleaseSemaphoreInternal(*((_QWORD *)&v41 + 1));
  }
  if ( v47 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v62, v48);
    SURFREF::SURFREF((SURFREF *)v60);
    SURFREF::SURFREF((SURFREF *)v63);
    LOBYTE(v26) = 5;
    v27 = HmgShareLock(v46, v26);
    LOBYTE(v28) = 5;
    v61 = (HSURF *)v27;
    v64 = (struct SURFACE *)HmgShareLock(v47, v28);
    v29 = *v61;
    DC::pSurface(v62[0], v64);
    DEC_SHARE_REF_CNT(v61);
    v61 = 0LL;
    DEC_SHARE_REF_CNT(v64);
    v64 = 0LL;
    GreDereferenceObject(v29, 1u);
    v48 = 0LL;
    v46 = 0LL;
    *((_DWORD *)v62[0] + 9) |= v44;
    if ( (*((_DWORD *)v62[0] + 9) & 0x200) != 0 )
    {
      v30 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v30 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v38);
      LOBYTE(v36) = 5;
      v31 = HmgShareUnlockRemoveObject(v47, 0LL, 0LL, 0LL, v36);
      if ( v31 )
        SURFACE::bDeleteSurface(v31, 0LL, 1LL);
      *((_QWORD *)v62[0] + 63) = 0LL;
      DC::vClearRendering(v62[0]);
      v47 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v32);
      if ( v30 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      LOBYTE(v36) = 5;
      v33 = HmgShareUnlockRemoveObject(v47, 0LL, 0LL, 0LL, v36);
      if ( v33 )
        SURFACE::bDeleteSurface(v33, 0LL, 1LL);
      *((_QWORD *)v62[0] + 63) = 0LL;
      v47 = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v64 )
      DEC_SHARE_REF_CNT(v64);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v63);
    if ( v61 )
      DEC_SHARE_REF_CNT(v61);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v60);
    DCOBJ::~DCOBJ((DCOBJ *)v62);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v45);
LABEL_87:
  v34 = v37;
  DCOBJ::~DCOBJ((DCOBJ *)v59);
  return v34;
}
