/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C006DB70
 * Callers:
 *     GrePlgBlt @ 0x1C0008764 (GrePlgBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0069D70 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C006C930 (NtGdiBitBltInternal.c)
 *     NtGdiPatBlt @ 0x1C00711E0 (NtGdiPatBlt.c)
 *     GreStretchBltInternal @ 0x1C0071658 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C007EAC4 (GreMaskBlt.c)
 *     NtGdiGetPixel @ 0x1C0080060 (NtGdiGetPixel.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C014790C (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0147950 (NtGdiTransparentBlt.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C002A528 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0047FEC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C005D7B4 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0075C14 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0085390 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C01158D8 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, unsigned int a2, unsigned int a3, int a4, int a5)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v8; // rcx
  REGION *v9; // r15
  unsigned int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rdi
  struct REGION *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  LONG v17; // ecx
  __int64 v18; // rcx
  int v19; // r13d
  HSURF v20; // rbx
  __int64 v21; // r8
  int v22; // r13d
  int v23; // ebx
  __int64 v24; // rdx
  int v25; // r8d
  int v26; // ecx
  int v27; // ebx
  int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rax
  LONG v31; // ecx
  LONG v32; // edx
  int v33; // eax
  struct _POINTL v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+50h] [rbp-B0h]
  int v36; // [rsp+54h] [rbp-ACh]
  LONG left; // [rsp+54h] [rbp-ACh]
  struct _POINTL v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v40; // [rsp+68h] [rbp-98h]
  int v41; // [rsp+6Ch] [rbp-94h]
  HSURF v42[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v43; // [rsp+80h] [rbp-80h] BYREF
  __int64 v44; // [rsp+98h] [rbp-68h] BYREF
  REGION *v45; // [rsp+A0h] [rbp-60h] BYREF
  int v46; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v47; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-48h] BYREF
  int v49; // [rsp+C0h] [rbp-40h]
  int v50; // [rsp+C4h] [rbp-3Ch]
  _QWORD v51[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v52[32]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v53[2]; // [rsp+100h] [rbp+0h] BYREF
  __int16 v54; // [rsp+110h] [rbp+10h]
  _BYTE v55[32]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v56[2]; // [rsp+150h] [rbp+50h] BYREF
  __int16 v57; // [rsp+160h] [rbp+60h]
  struct tagRECT v58; // [rsp+180h] [rbp+80h] BYREF
  __int64 v59; // [rsp+190h] [rbp+90h] BYREF
  int v60; // [rsp+198h] [rbp+98h]
  int v61; // [rsp+19Ch] [rbp+9Ch]
  struct tagRECT v62; // [rsp+1A0h] [rbp+A0h] BYREF
  struct _RECTL v63; // [rsp+1B0h] [rbp+B0h] BYREF

  v5 = 0;
  v6 = a4;
  v39[0] = a4;
  v8 = *(_QWORD *)a1;
  v9 = 0LL;
  v34 = (struct _POINTL)__PAIR64__(a3, a2);
  v59 = 0LL;
  v47 = 0LL;
  if ( !v8
    || (*(_DWORD *)(v8 + 36) & 0x200) == 0
    || !g_pDwmState
    || (*(_DWORD *)(v8 + 36) & 0x4001) != 0x4001
    || !*(_QWORD *)(v8 + 472)
    || !*(_QWORD *)(v8 + 496)
    || !*(_DWORD *)(v8 + 488) && !*(_DWORD *)(v8 + 492)
    || KeAreApcsDisabled() )
  {
    return v5;
  }
  v53[0] = 0LL;
  v53[1] = 0LL;
  v54 = 256;
  v11 = 1;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v52, a1, 0);
  if ( (v52[24] & 1) == 0 )
    goto LABEL_15;
  v12 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 504LL) )
  {
LABEL_16:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v52);
    if ( v53[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v53);
    return v11;
  }
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 48) + 24LL);
  if ( !*(_DWORD *)(v12 + 492) )
  {
    v14 = DC::prgnVisSnap((DC *)v12);
    if ( !v14 )
      goto LABEL_15;
    v62 = *(struct tagRECT *)((char *)v14 + 88);
    if ( (unsigned int)IsRectEmptyInl(&v62) )
      goto LABEL_15;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_15;
  if ( !a5 )
    goto LABEL_15;
  if ( (unsigned __int64)(v6 + v34.x + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_15;
  if ( (unsigned __int64)(v34.y + (__int64)a5 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_15;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v51, a1, 0x204u);
  if ( (*(_DWORD *)(v51[0] + 32LL) & 2) == 0 )
    goto LABEL_15;
  v38 = v34;
  EXFORMOBJ::bXform((EXFORMOBJ *)v51, &v38, 1uLL);
  v15 = *(_QWORD *)a1;
  v16 = *(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1LL;
  v17 = *(_DWORD *)(*(_QWORD *)a1 + 8 * v16 + 1020) + v38.y;
  LODWORD(v43) = *(_DWORD *)(*(_QWORD *)a1 + 8 * v16 + 1016) + v38.x;
  DWORD2(v43) = v43 + v39[0];
  HIDWORD(v43) = v17 + a5;
  DWORD1(v43) = v17;
  v38.y = v17;
  v58 = (struct tagRECT)v43;
  v38.x = v43;
  ERECTL::vOrder((ERECTL *)&v58);
  v18 = *(_QWORD *)(v15 + 496);
  v48 = 0LL;
  v49 = *(_DWORD *)(v18 + 56);
  v50 = *(_DWORD *)(v18 + 60);
  ERECTL::operator*=(&v58.left, (int *)&v48);
  if ( (unsigned int)IsRectEmptyInl(&v58) )
    goto LABEL_15;
  if ( *(_DWORD *)(v15 + 492) )
  {
    v23 = HIDWORD(v59);
    v22 = v59;
    goto LABEL_45;
  }
  if ( (*(_DWORD *)(v15 + 36) & 0x4000) != 0 )
    SURFACE::bUnMap(*(SURFACE **)(v15 + 496), 0LL, (struct DC *)v15);
  v19 = 0;
  v35 = 0;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( g_pDwmState
    && (DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v42, *(HWND *)(*(_QWORD *)a1 + 472LL)), (v20 = v42[0]) != 0LL) )
  {
    v21 = *((_QWORD *)v42[0] + 21);
    *(_QWORD *)v39 = v21;
    if ( (*(_DWORD *)(v21 + 252) & 0x80u) != 0
      || *(_QWORD *)(v21 + 184) != ((*(_QWORD *)(*(_QWORD *)a1 + 496LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)a1 + 496LL) != 0LL)) )
    {
      goto LABEL_38;
    }
    if ( *(_QWORD *)(v21 + 80) )
    {
      v44 = *(_QWORD *)(v21 + 80);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v43);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v43);
      if ( v44 && (_QWORD)v43 && !(unsigned int)RGNOBJ::bContain((RGNOBJ *)&v44, (struct _RECTL *)&v58) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v45);
        if ( v45 )
        {
          v63.right = *((_DWORD *)v20 + 16) - *((_DWORD *)v20 + 14);
          v63.bottom = *((_DWORD *)v20 + 17) - *((_DWORD *)v20 + 15);
          *(_QWORD *)&v63.left = 0LL;
          RGNOBJ::vSet((RGNOBJ *)&v43, &v63);
          if ( RGNOBJ::iCombine((RGNOBJ *)&v45, (struct RGNOBJ *)&v43, (struct RGNOBJ *)&v44, BYTE4(gafjRgnOp)) )
          {
            v9 = v45;
            v19 = 1;
            v35 = 1;
          }
          else if ( v45 )
          {
            REGION::vDeleteREGION(v45);
          }
        }
        if ( v46 == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v43);
      v21 = *(_QWORD *)v39;
    }
    else
    {
      v19 = 1;
      v35 = 1;
    }
    if ( v19 )
    {
      v30 = *(_QWORD *)(v21 + 184);
      v59 = 0LL;
      if ( v30 )
      {
        v31 = *(_DWORD *)(v30 + 32);
        v32 = *(_DWORD *)(v30 + 36);
      }
      else
      {
        v32 = HIDWORD(v59);
        v31 = v59;
      }
      v33 = *((_DWORD *)v20 + 15);
      v22 = *((_DWORD *)v20 + 14);
      *(_QWORD *)&v58.left = 0LL;
      v58.right = v31;
      v58.bottom = v32;
      *(_DWORD *)(v21 + 252) |= 0x80u;
      v36 = v33;
      if ( v9 )
      {
        v59 = *((_QWORD *)v9 + 11);
        v60 = *((_DWORD *)v9 + 24);
        v61 = *((_DWORD *)v9 + 25);
        ERECTL::operator*=(&v58.left, (int *)&v59);
        if ( ERECTL::bEmpty((ERECTL *)&v58) )
        {
          REGION::vDeleteREGION(v9);
          v35 = 0;
          *(_DWORD *)(*(_QWORD *)v39 + 252LL) |= 0x80u;
        }
      }
    }
    else
    {
LABEL_38:
      v22 = v59;
      v36 = HIDWORD(v59);
    }
    _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
    v23 = v36;
  }
  else
  {
    v23 = HIDWORD(v59);
    v22 = v59;
  }
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
    && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 496LL)) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
    goto LABEL_83;
  }
  if ( !v35 )
  {
LABEL_15:
    v11 = 0;
    goto LABEL_16;
  }
LABEL_45:
  v42[0] = *(HSURF *)a1;
  if ( *((_DWORD *)v42[0] + 123) )
  {
    v58.left += *(_DWORD *)(v13 + 2584);
    v58.right += *(_DWORD *)(v13 + 2584);
    v58.top += *(_DWORD *)(v13 + 2588);
    v58.bottom += *(_DWORD *)(v13 + 2588);
  }
  else
  {
    v58.left += v22;
    v58.right += v22;
    v58.top += v23;
    v58.bottom += v23;
  }
  v24 = *(_QWORD *)(v13 + 2552);
  v25 = *(_DWORD *)(v13 + 2588);
  v39[0] = *(_DWORD *)(v13 + 2584);
  v40 = *(_DWORD *)(v24 + 56) + v39[0];
  v26 = *(_DWORD *)(v24 + 60);
  v39[1] = v25;
  v41 = v25 + v26;
  ERECTL::operator*=(&v58.left, v39);
  if ( (unsigned int)IsRectEmptyInl(&v58) )
  {
LABEL_83:
    if ( v9 )
      REGION::vDeleteREGION(v9);
    goto LABEL_15;
  }
  left = v58.left;
  v39[0] = v58.top;
  if ( *((_DWORD *)v42[0] + 123) )
  {
    v58.left -= *(_DWORD *)(v13 + 2584);
    v58.right -= *(_DWORD *)(v13 + 2584);
    v58.top -= *(_DWORD *)(v13 + 2588);
    v58.bottom -= *(_DWORD *)(v13 + 2588);
  }
  else
  {
    v58.right -= v22;
    v58.left -= v22;
    v58.bottom -= v23;
    v58.top -= v23;
  }
  v42[0] = *(HSURF *)(*((_QWORD *)v42[0] + 62) + 32LL);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v52);
  if ( v53[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v53);
  v27 = 0;
  v28 = 8;
  do
  {
    v56[0] = 0LL;
    v56[1] = 0LL;
    v57 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v55, a1, 0);
    v29 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
    if ( v29 )
    {
      if ( *(_QWORD *)(v29 + 3464) )
      {
        v27 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v29 + 3464))(*(_QWORD *)(v29 + 1800), &v47);
        if ( v27 == 258 )
        {
          KeDelayExecutionThread(0, 0, gpLockShortDelay);
          --v28;
        }
      }
    }
    else
    {
      v27 = -1073741823;
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v55);
    if ( v56[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v56);
  }
  while ( v27 == 258 && v28 );
  if ( v27 >= 0 && (v27 != 258 || v28) )
  {
    return (unsigned int)bSpDwmUpdateSurface(0LL, v47, a1, v42[0], 1.0, left, v39[0], (struct ERECTL *)&v58, v9);
  }
  else if ( v9 )
  {
    REGION::vDeleteREGION(v9);
  }
  return v5;
}
