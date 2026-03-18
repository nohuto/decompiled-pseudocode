/*
 * XREFs of NtGdiGetPixel @ 0x1C008EAD0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C008B990 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C008BCB4 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?prgnRao@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BCDC (-prgnRao@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vClearRenderState@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F01C (-vClearRenderState@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ @ 0x1C008F1EC (-bUnMapTrgSurfaceView@DEVLOCKOBJ@@QEAAHXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C615C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetPixel(__int64 a1, __int64 a2, int a3)
{
  int v4; // esi
  DC *v5; // rdi
  __int64 v6; // rbx
  int v7; // eax
  char *v8; // rcx
  int v9; // eax
  char *v10; // rdx
  __int64 v11; // rdx
  struct REGION *v12; // rdx
  int v13; // ecx
  int v14; // edi
  bool v15; // zf
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v17; // rcx
  __int64 v18; // rbx
  DC *v19; // rax
  __int64 v21; // rbx
  __int64 v22; // rdx
  __int64 ThreadWin32Thread; // rax
  int v24; // eax
  DC *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  HSURF *v29; // rdi
  __int64 v30; // rax
  DC *v31; // r14
  __int64 v32; // rbx
  HSURF v33; // rsi
  DC *v34; // rcx
  char v35; // bl
  __int64 v36; // rax
  DCVISRGNSHARELOCK *v37; // rcx
  __int64 v38; // rax
  int v39; // [rsp+20h] [rbp-E0h]
  unsigned int v40; // [rsp+60h] [rbp-A0h] BYREF
  DC *v41; // [rsp+68h] [rbp-98h] BYREF
  __int64 v42; // [rsp+70h] [rbp-90h]
  _BYTE v43[4]; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+7Ch] [rbp-84h] BYREF
  int v45; // [rsp+80h] [rbp-80h] BYREF
  int v46; // [rsp+84h] [rbp-7Ch]
  __int128 v47; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+A0h] [rbp-60h]
  int v49; // [rsp+A8h] [rbp-58h]
  int v50; // [rsp+ACh] [rbp-54h]
  DC *v51[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  HDC v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+E0h] [rbp-20h] BYREF
  char v56; // [rsp+E8h] [rbp-18h]
  int v57; // [rsp+ECh] [rbp-14h]
  char *v58; // [rsp+F0h] [rbp-10h] BYREF
  int v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+FCh] [rbp-4h]
  DC *v61[2]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v62; // [rsp+110h] [rbp+10h] BYREF
  __int64 v63; // [rsp+118h] [rbp+18h]
  __int64 v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  int v66; // [rsp+130h] [rbp+30h] BYREF
  int v67; // [rsp+134h] [rbp+34h]
  int v68; // [rsp+138h] [rbp+38h]
  int v69; // [rsp+13Ch] [rbp+3Ch]
  _DWORD v70[2]; // [rsp+140h] [rbp+40h] BYREF
  int v71; // [rsp+148h] [rbp+48h]
  int v72; // [rsp+14Ch] [rbp+4Ch]
  _BYTE v73[4]; // [rsp+150h] [rbp+50h] BYREF
  int v74; // [rsp+154h] [rbp+54h]
  int v75; // [rsp+158h] [rbp+58h]
  int v76; // [rsp+15Ch] [rbp+5Ch]
  int v77; // [rsp+160h] [rbp+60h]
  __int64 v78; // [rsp+1A0h] [rbp+A0h]
  int v79; // [rsp+1A8h] [rbp+A8h]
  int v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1E0h] [rbp+E0h]

  v40 = -1;
  v4 = a2;
  v42 = 0LL;
  LOBYTE(a2) = 1;
  v41 = (DC *)HmgLockEx(a1, a2);
  if ( v41 )
  {
    if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v41) )
    {
      _InterlockedDecrement((volatile signed __int32 *)v41 + 3);
      return v40;
    }
    if ( (*((_DWORD *)v41 + 132) & 4) != 0 )
      DC::vMarkTransformDirty(v41);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( v41 )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)&v41, v4, a3, 1, 1);
    v51[1] = 0LL;
    v47 = 0LL;
    v48 = 0LL;
    v49 = 0;
    v51[0] = 0LL;
    v54 = 0LL;
    v53 = 0LL;
    v52 = 0LL;
    if ( !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v47, (struct XDCOBJ *)&v41, 0) )
      goto LABEL_36;
    v5 = v41;
    v6 = *((_QWORD *)v41 + 63);
    if ( !v6 )
      goto LABEL_36;
    if ( *(_DWORD *)(v6 + 656) )
    {
      if ( ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) != *(_DWORD *)(v6 + 656) )
        goto LABEL_36;
      v5 = v41;
    }
    v7 = *(_DWORD *)(v6 + 112);
    if ( (v7 & 0x800) != 0 )
    {
      v24 = UserSurfaceAccessCheck(*(_QWORD *)(v6 + 648));
    }
    else
    {
      if ( (v7 & 0x10000000) == 0 )
      {
LABEL_11:
        v59 = *(_DWORD *)(*((_QWORD *)v5 + 10) + 68LL);
        v60 = *(_DWORD *)(*((_QWORD *)v5 + 10) + 312LL) & 1;
        if ( (*(_DWORD *)(*((_QWORD *)v5 + 10) + 352LL) & 0x1E000) != 0 )
        {
          EXFORMOBJ::vInit((EXFORMOBJ *)&v58, (struct XDCOBJ *)&v41, 0x204u, 0);
          v8 = v58;
          v5 = v41;
        }
        else
        {
          v8 = (char *)v5 + 328;
          v58 = (char *)v5 + 328;
        }
        v9 = *((_DWORD *)v8 + 8) & 0x43;
        v45 = v4;
        v46 = a3;
        if ( (_BYTE)v9 != 67 )
        {
          bCvtPts1(v8, &v45, 1LL);
          a3 = v46;
          v4 = v45;
        }
        v66 = v4;
        v68 = v4 + 1;
        v69 = a3 + 1;
        v67 = a3;
        v10 = (char *)v5 + 8 * (*((_DWORD *)v5 + 10) & 1);
        v66 = v4 + *((_DWORD *)v10 + 356);
        v68 = v4 + 1 + *((_DWORD *)v10 + 356);
        v67 = a3 + *((_DWORD *)v10 + 357);
        v69 = a3 + 1 + *((_DWORD *)v10 + 357);
        if ( !*((_QWORD *)v5 + 195) || (*((_DWORD *)v5 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v5) )
          v11 = *((_QWORD *)v5 + 193);
        if ( v11 )
        {
          v12 = DC::prgnRao(v5);
        }
        else if ( !*((_QWORD *)v5 + 194) || (*((_DWORD *)v5 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(v5) )
        {
          v12 = (struct REGION *)*((_QWORD *)v5 + 192);
        }
        v78 = 0LL;
        v79 = 0;
        v80 = 1;
        v81 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v73, v12, (struct ERECTL *)&v66, 0);
        if ( v74 != v76 && v75 != v77 )
        {
          v13 = *((_DWORD *)v41 + 32);
          if ( (v13 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)v41 + 10) + 112LL) || (v14 = 1, (v13 & 0x10000000) == 0) )
            v14 = 0;
          v40 = 0;
          v62 = 0LL;
          v63 = 0LL;
          v65 = 0LL;
          LODWORD(v62) = *(_DWORD *)(v6 + 96);
          HIDWORD(v62) = 1;
          LODWORD(v63) = 1;
          v64 = 0LL;
          LODWORD(v65) = 1;
          if ( (_DWORD)v62 == 1 )
          {
            v70[0] = 7;
            v71 = 8;
          }
          else if ( (_DWORD)v62 == 2 )
          {
            v70[0] = 1;
            v71 = 2;
          }
          else
          {
            v70[0] = 0;
            v71 = 1;
          }
          v55 = 0LL;
          v56 = 0;
          v57 = 0;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v55, (struct _DEVBITMAPINFO *)&v62, &v40, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            v15 = (*(_DWORD *)(v6 + 112) & 0x400) == 0;
            v70[1] = 0;
            v72 = 1;
            v16 = v15
                ? EngCopyBits
                : *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(v6 + 48) + 2832LL);
            v17 = v55 ? v55 + 24 : 0LL;
            if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, _DWORD *, int *))v16)(
                   v17,
                   v6 + 24,
                   0LL,
                   xloIdent,
                   v70,
                   &v66)
              && !v14 )
            {
              v40 = ulIndexToRGB(*(_QWORD *)(v6 + 128), *((_QWORD *)v41 + 12), v40);
            }
          }
          SURFMEM::~SURFMEM((SURFMEM *)&v55);
        }
        goto LABEL_36;
      }
      v24 = UserScreenAccessCheck();
    }
    if ( v24 )
    {
      v5 = v41;
      goto LABEL_11;
    }
LABEL_36:
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v41);
    v44 = 0;
    v18 = *(_QWORD *)v41;
    HmgDecrementExclusiveReferenceCountEx(v41, HIDWORD(v42), &v44);
    if ( v44 )
      bDeleteDCInternalEx(v18, 0LL);
    v19 = v51[0];
    if ( v51[0] )
    {
      v21 = *((_QWORD *)v51[0] + 6);
      if ( (v49 & 0x1000) != 0 )
      {
        DEVLOCKOBJ::bUnMapTrgSurfaceView((DEVLOCKOBJ *)&v47);
        if ( (v49 & 0x10) != 0 )
        {
          *((_DWORD *)v51[0] + 9) &= ~0x4000u;
          v25 = v51[0];
          *((_QWORD *)v51[0] + 63) = *(_QWORD *)(v21 + 2544);
          DC::vInheritSurfaceDpiScale(v25);
        }
        DEVLOCKOBJ::vClearRenderState((DEVLOCKOBJ *)&v47);
        v19 = v51[0];
      }
      if ( v19 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v51);
      v51[0] = 0LL;
    }
    if ( (v49 & 0x1000) != 0 )
    {
      GreDecLockCount();
      v49 &= ~0x1000u;
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
        *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
      }
    }
    else if ( (v49 & 0x800000) != 0 )
    {
      GreDecLockCount();
      v49 &= ~0x800000u;
    }
    if ( (_QWORD)v47 )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemTrg", v47);
      GreReleaseSemaphoreInternal(v47);
    }
    if ( (v49 & 8) != 0 )
      v49 &= ~8u;
    if ( *((_QWORD *)&v47 + 1) )
    {
      EtwTraceGreLockReleaseSemaphore(L"hsemDMC", *((_QWORD *)&v47 + 1));
      GreReleaseSemaphoreInternal(*((_QWORD *)&v47 + 1));
    }
    if ( v53 )
    {
      v61[1] = 0LL;
      XDCOBJ::vLock((XDCOBJ *)v61, v54);
      LOBYTE(v26) = 5;
      v27 = HmgShareLock(v52, v26);
      LOBYTE(v28) = 5;
      v29 = (HSURF *)v27;
      v30 = HmgShareLock(v53, v28);
      v31 = v61[0];
      v32 = v30;
      v33 = *v29;
      v34 = v61[0];
      *((_QWORD *)v61[0] + 63) = v30;
      DC::vInheritSurfaceDpiScale(v34);
      DEC_SHARE_REF_CNT(v29);
      DEC_SHARE_REF_CNT(v32);
      GreDereferenceObject(v33);
      v54 = 0LL;
      v52 = 0LL;
      *((_DWORD *)v31 + 9) |= v50;
      if ( (*((_DWORD *)v31 + 9) & 0x200) != 0 )
      {
        v35 = 0;
        if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
        {
          GreAcquireSemaphoreSharedInternal(ghsemGreLock);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
          v35 = 1;
        }
        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v43);
        LOBYTE(v39) = 5;
        v36 = HmgShareUnlockRemoveObject(v53, 0LL, 0LL, 0LL, v39);
        if ( v36 )
          SURFACE::bDeleteSurface(v36, 0LL, 1LL);
        *((_QWORD *)v31 + 64) = 0LL;
        DC::vClearRendering(v31);
        v53 = 0LL;
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v37);
        if ( v35 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
      }
      else
      {
        LOBYTE(v39) = 5;
        v38 = HmgShareUnlockRemoveObject(v53, 0LL, 0LL, 0LL, v39);
        if ( v38 )
          SURFACE::bDeleteSurface(v38, 0LL, 1LL);
        *((_QWORD *)v31 + 64) = 0LL;
        v53 = 0LL;
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)v61);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
  }
  return v40;
}
