/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C00489E0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C004BE70 (GreStretchBltInternal.c)
 *     NtGdiPatBlt @ 0x1C0056440 (NtGdiPatBlt.c)
 *     NtGdiGetPixel @ 0x1C005E7C0 (NtGdiGetPixel.c)
 *     NtGdiBitBltInternal @ 0x1C00624D0 (NtGdiBitBltInternal.c)
 *     GreMaskBlt @ 0x1C009B9B0 (GreMaskBlt.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C013F150 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C014E240 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C0272010 (GrePlgBlt.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005426C (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0075DF8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C009E31C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009F614 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C00A3A98 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B9734 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C01084C8 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

int __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  int v5; // edi
  __int64 v6; // r14
  __int64 v8; // rcx
  int v9; // r15d
  REGION *v10; // r13
  __int64 v11; // rcx
  __int64 v13; // rbx
  struct REGION *v14; // rax
  __int64 v15; // r14
  __int64 v16; // rax
  LONG v17; // ecx
  __int64 v18; // rcx
  int v19; // r12d
  __int64 v20; // r14
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  LONG x; // r12d
  LONG v25; // r14d
  __int64 v26; // rax
  LONG v27; // ecx
  LONG v28; // edx
  int v29; // eax
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // ecx
  HSURF v33; // r14
  int v34; // ebx
  __int64 v35; // rax
  struct _POINTL v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+50h] [rbp-B0h]
  LONG left; // [rsp+50h] [rbp-B0h]
  int v39; // [rsp+54h] [rbp-ACh]
  struct _POINTL v40; // [rsp+58h] [rbp-A8h] BYREF
  int v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+68h] [rbp-98h]
  int v43; // [rsp+6Ch] [rbp-94h]
  __int128 v44; // [rsp+70h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h] BYREF
  REGION *v46; // [rsp+88h] [rbp-78h] BYREF
  int v47; // [rsp+90h] [rbp-70h]
  unsigned __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h] BYREF
  int v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  _QWORD v52[2]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v53[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v54; // [rsp+E0h] [rbp-20h]
  _BYTE v55[32]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v56[80]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v57[32]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v58[80]; // [rsp+180h] [rbp+80h] BYREF
  struct _RECTL v59; // [rsp+1D0h] [rbp+D0h] BYREF
  _DWORD v60[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v61; // [rsp+1F0h] [rbp+F0h] BYREF
  int v62[4]; // [rsp+200h] [rbp+100h] BYREF

  v5 = 0;
  v6 = a4;
  v41[0] = a4;
  v8 = *(_QWORD *)a1;
  v9 = 0;
  v10 = 0LL;
  v36 = (struct _POINTL)__PAIR64__(a3, a2);
  v48 = 0LL;
  if ( !v8
    || (*(_DWORD *)(v8 + 36) & 0x200) == 0
    || !g_pDwmState
    || (*(_DWORD *)(v8 + 36) & 0x4001) != 0x4001
    || !*(_QWORD *)(v8 + 472)
    || !*(_QWORD *)(v8 + 496)
    || !*(_DWORD *)(v8 + 488) && !*(_DWORD *)(v8 + 492)
    || KeAreApcsDisabled() )
  {
    return 0;
  }
  DCOBJ::DCOBJ((DCOBJ *)v56);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v55, a1, 0);
  if ( (v55[24] & 1) == 0 )
    goto LABEL_13;
  v11 = *(_QWORD *)a1;
  if ( !*(_QWORD *)(*(_QWORD *)a1 + 504LL) )
  {
    v13 = *(_QWORD *)(*(_QWORD *)(v11 + 48) + 24LL);
    if ( !*(_DWORD *)(v11 + 492) )
    {
      v14 = DC::prgnVisSnap((DC *)v11);
      if ( !v14 )
        goto LABEL_13;
      v60[0] = *((_DWORD *)v14 + 22);
      v60[1] = *((_DWORD *)v14 + 23);
      v60[2] = *((_DWORD *)v14 + 24);
      v60[3] = *((_DWORD *)v14 + 25);
      if ( (unsigned int)ERECTL::bWrapped((ERECTL *)v60) )
        goto LABEL_13;
    }
    if ( !(_DWORD)v6 )
      goto LABEL_13;
    if ( !a5 )
      goto LABEL_13;
    if ( (unsigned __int64)(v6 + v36.x + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_13;
    if ( (unsigned __int64)(a5 + (__int64)v36.y + 0x80000000LL) > 0xFFFFFFFF )
      goto LABEL_13;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)v52, a1, 0x204u);
    if ( (*(_DWORD *)(v52[0] + 32LL) & 2) == 0 )
      goto LABEL_13;
    v40 = v36;
    EXFORMOBJ::bXform((EXFORMOBJ *)v52, &v40, 1uLL);
    v15 = *(_QWORD *)a1;
    v16 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1;
    v17 = *(_DWORD *)(*(_QWORD *)a1 + 8 * v16 + 1020) + v40.y;
    LODWORD(v44) = *(_DWORD *)(*(_QWORD *)a1 + 8 * v16 + 1016) + v40.x;
    DWORD2(v44) = v44 + v41[0];
    HIDWORD(v44) = v17 + a5;
    DWORD1(v44) = v17;
    v40.y = v17;
    v59 = (struct _RECTL)v44;
    v40.x = v44;
    ERECTL::vOrder((ERECTL *)&v59);
    v18 = *(_QWORD *)(v15 + 496);
    v49 = 0LL;
    v50 = *(_DWORD *)(v18 + 56);
    v51 = *(_DWORD *)(v18 + 60);
    ERECTL::operator*=(&v59.left, (int *)&v49);
    if ( (unsigned int)ERECTL::bWrapped((ERECTL *)&v59) )
      goto LABEL_13;
    if ( *(_DWORD *)(v15 + 492) )
    {
      x = v36.x;
      v25 = v36.x;
      goto LABEL_70;
    }
    if ( (*(_DWORD *)(v15 + 36) & 0x4000) != 0 )
      SURFACE::bUnMap(*(SURFACE **)(v15 + 496), 0LL, (struct DC *)v15);
    v19 = 0;
    v37 = 0;
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( g_pDwmState )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v53, *(HWND *)(*(_QWORD *)a1 + 472LL));
      v20 = v54;
      if ( v54 )
      {
        v21 = *(_QWORD *)(v54 + 168);
        *(_QWORD *)v41 = v21;
        if ( (*(_DWORD *)(v21 + 252) & 0x80u) != 0 )
          goto LABEL_47;
        v22 = 0LL;
        v23 = *(_QWORD *)(*(_QWORD *)a1 + 496LL);
        if ( v23 )
          v22 = v23 + 24;
        if ( *(_QWORD *)(v21 + 184) != v22 )
          goto LABEL_47;
        if ( *(_QWORD *)(v21 + 80) )
        {
          v45 = *(_QWORD *)(v21 + 80);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v44);
          if ( v45 && (_QWORD)v44 && !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v45, &v59) )
          {
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v46);
            if ( v46 )
            {
              v61.right = *(_DWORD *)(v20 + 64) - *(_DWORD *)(v20 + 56);
              v61.bottom = *(_DWORD *)(v20 + 68) - *(_DWORD *)(v20 + 60);
              *(_QWORD *)&v61.left = 0LL;
              RGNOBJ::vSet((RGNOBJ *)&v44, &v61);
              if ( RGNOBJ::iCombine((RGNOBJ *)&v46, (struct RGNOBJ *)&v44, (struct RGNOBJ *)&v45, BYTE4(gafjRgnOp)) )
              {
                v10 = v46;
                v19 = 1;
                v37 = 1;
              }
              else if ( v46 )
              {
                REGION::vDeleteREGION(v46);
              }
            }
            if ( v47 == 1 )
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v46);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v44);
          if ( !v19 )
          {
            v20 = v54;
LABEL_47:
            x = v37;
            v39 = v37;
LABEL_48:
            if ( v20 )
              _InterlockedDecrement((volatile signed __int32 *)(v20 + 12));
            v25 = v39;
            v54 = 0LL;
            UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v53);
            goto LABEL_62;
          }
          v21 = *(_QWORD *)v41;
        }
        else
        {
          v37 = 1;
        }
        v26 = *(_QWORD *)(v21 + 184);
        if ( v26 )
        {
          v27 = *(_DWORD *)(v26 + 32);
          v28 = *(_DWORD *)(v26 + 36);
        }
        else
        {
          v27 = v41[0];
          v28 = v41[0];
        }
        v29 = *(_DWORD *)(v20 + 60);
        x = *(_DWORD *)(v20 + 56);
        *(_QWORD *)&v59.left = 0LL;
        v59.right = v27;
        v59.bottom = v28;
        *(_DWORD *)(v21 + 252) |= 0x80u;
        v39 = v29;
        if ( v10 )
        {
          v62[0] = *((_DWORD *)v10 + 22);
          v62[1] = *((_DWORD *)v10 + 23);
          v62[2] = *((_DWORD *)v10 + 24);
          v62[3] = *((_DWORD *)v10 + 25);
          ERECTL::operator*=(&v59.left, v62);
          if ( ERECTL::bEmpty((ERECTL *)&v59) )
          {
            REGION::vDeleteREGION(v10);
            v37 = 0;
            *(_DWORD *)(*(_QWORD *)v41 + 252LL) |= 0x80u;
          }
        }
        v20 = v54;
        goto LABEL_48;
      }
      x = 0;
      v25 = 0;
      v54 = 0LL;
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v53);
    }
    else
    {
      x = 0;
      v25 = 0;
    }
LABEL_62:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
      && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 496LL), 0LL, *(_QWORD *)a1) == 2 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
LABEL_65:
      if ( v10 )
        REGION::vDeleteREGION(v10);
      goto LABEL_13;
    }
    if ( !v37 )
      goto LABEL_13;
LABEL_70:
    v40 = *(struct _POINTL *)a1;
    if ( *(_DWORD *)(*(_QWORD *)&v40 + 492LL) )
    {
      v59.left += *(_DWORD *)(v13 + 2584);
      v59.right += *(_DWORD *)(v13 + 2584);
      v59.top += *(_DWORD *)(v13 + 2588);
      v59.bottom += *(_DWORD *)(v13 + 2588);
    }
    else
    {
      v59.left += x;
      v59.right += x;
      v59.top += v25;
      v59.bottom += v25;
    }
    v30 = *(_QWORD *)(v13 + 2552);
    v31 = *(_DWORD *)(v13 + 2588);
    v41[0] = *(_DWORD *)(v13 + 2584);
    v42 = *(_DWORD *)(v30 + 56) + v41[0];
    v32 = *(_DWORD *)(v30 + 60);
    v41[1] = v31;
    v43 = v31 + v32;
    ERECTL::operator*=(&v59.left, v41);
    if ( !(unsigned int)ERECTL::bWrapped((ERECTL *)&v59) )
    {
      left = v59.left;
      v41[0] = v59.top;
      if ( *(_DWORD *)(*(_QWORD *)&v40 + 492LL) )
      {
        v59.left -= *(_DWORD *)(v13 + 2584);
        v59.right -= *(_DWORD *)(v13 + 2584);
        v59.top -= *(_DWORD *)(v13 + 2588);
        v59.bottom -= *(_DWORD *)(v13 + 2588);
      }
      else
      {
        v59.right -= x;
        v59.left -= x;
        v59.bottom -= v25;
        v59.top -= v25;
      }
      v33 = *(HSURF *)(*(_QWORD *)(*(_QWORD *)&v40 + 496LL) + 32LL);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v55);
      DCOBJ::~DCOBJ((DCOBJ *)v56);
      v34 = 8;
      while ( 1 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v58);
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v57, a1, 0);
        v35 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        if ( v35 )
        {
          if ( *(_QWORD *)(v35 + 3464) )
          {
            v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v35 + 3464))(*(_QWORD *)(v35 + 1800), &v48);
            if ( v9 == 258 )
            {
              KeDelayExecutionThread(0, 0, gpLockShortDelay);
              --v34;
            }
          }
        }
        else
        {
          v9 = -1073741823;
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v57);
        DCOBJ::~DCOBJ((DCOBJ *)v58);
        if ( v9 != 258 )
          break;
        if ( !v34 )
          goto LABEL_85;
      }
      if ( v9 >= 0 )
        return bSpDwmUpdateSurface(0LL, 0, v48, a1, v33, 1.0, left, v41[0], (struct ERECTL *)&v59, v10);
LABEL_85:
      if ( v10 )
        REGION::vDeleteREGION(v10);
      return v5;
    }
    goto LABEL_65;
  }
  v5 = 1;
LABEL_13:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v55);
  DCOBJ::~DCOBJ((DCOBJ *)v56);
  return v5;
}
