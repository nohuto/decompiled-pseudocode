/*
 * XREFs of ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C0090DC0
 * Callers:
 *     NtGdiGetPixel @ 0x1C008EAD0 (NtGdiGetPixel.c)
 *     NtGdiAlphaBlend @ 0x1C0095810 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0097220 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C009B858 (GreStretchBltInternal.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     GreMaskBlt @ 0x1C00AD8D4 (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0118C30 (NtGdiTransparentBlt.c)
 *     ?bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z @ 0x1C011D5F4 (-bReadBackRect@DWMSCREENREADMODIFYWRITEASSIST@@QEAAHPEBU_RECTL@@@Z.c)
 *     GrePlgBlt @ 0x1C025E594 (GrePlgBlt.c)
 * Callees:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0057248 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C00794B8 (-bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0079CB8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?prgnVisSnap@DC@@QEBAPEAVREGION@@XZ @ 0x1C008BC88 (-prgnVisSnap@DC@@QEBAPEAVREGION@@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009C1AC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00C7FE4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bSpDwmValidateSurface(struct XDCOBJ *a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v8; // r15
  __int64 v9; // rcx
  REGION *v10; // r13
  __int64 v11; // r12
  __int64 v13; // rcx
  __int64 v14; // rdi
  struct REGION *v15; // rax
  __int64 v16; // r15
  __int64 v17; // rdx
  LONG v18; // ecx
  __int64 v19; // rcx
  int v20; // r12d
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // r12d
  int v26; // r15d
  __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // ecx
  HSURF v31; // r15
  int v32; // ebx
  int v33; // edi
  __int64 v34; // rax
  __int64 v35; // rax
  LONG v36; // ecx
  LONG v37; // edx
  int v38; // eax
  int v39; // [rsp+50h] [rbp-B0h]
  LONG top; // [rsp+50h] [rbp-B0h]
  int v41; // [rsp+54h] [rbp-ACh]
  LONG left; // [rsp+54h] [rbp-ACh]
  LONG v43; // [rsp+58h] [rbp-A8h]
  struct _POINTL v44; // [rsp+60h] [rbp-A0h] BYREF
  struct tagRECT v45; // [rsp+70h] [rbp-90h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h] BYREF
  REGION *v47; // [rsp+88h] [rbp-78h] BYREF
  int v48; // [rsp+90h] [rbp-70h]
  unsigned __int64 v49[2]; // [rsp+98h] [rbp-68h] BYREF
  int v50; // [rsp+A8h] [rbp-58h]
  int v51; // [rsp+ACh] [rbp-54h]
  int v52; // [rsp+B0h] [rbp-50h]
  int v53; // [rsp+B4h] [rbp-4Ch]
  int v54; // [rsp+B8h] [rbp-48h]
  int v55; // [rsp+BCh] [rbp-44h]
  __int64 v56; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v57[3]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v58[32]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v59; // [rsp+100h] [rbp+0h]
  __int64 v60; // [rsp+108h] [rbp+8h]
  _BYTE v61[32]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v62; // [rsp+150h] [rbp+50h]
  __int64 v63; // [rsp+158h] [rbp+58h]
  struct tagRECT v64; // [rsp+180h] [rbp+80h] BYREF
  struct tagRECT v65; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v66; // [rsp+1A0h] [rbp+A0h] BYREF
  int v67; // [rsp+1B0h] [rbp+B0h]
  int v68; // [rsp+1B4h] [rbp+B4h]
  int v69; // [rsp+1B8h] [rbp+B8h]
  int v70; // [rsp+1BCh] [rbp+BCh]

  v5 = 0;
  v6 = a4;
  v8 = a3;
  v9 = *(_QWORD *)a1;
  v10 = 0LL;
  v11 = a2;
  v49[0] = 0LL;
  if ( !v9
    || (*(_DWORD *)(v9 + 36) & 0x200) == 0
    || !g_pDwmState
    || (*(_DWORD *)(v9 + 36) & 0x4001) != 0x4001
    || !*(_QWORD *)(v9 + 480)
    || !*(_QWORD *)(v9 + 504)
    || !*(_DWORD *)(v9 + 496) && !*(_DWORD *)(v9 + 500)
    || KeAreApcsDisabled() )
  {
    return 0LL;
  }
  v59 = 0LL;
  v60 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v58, a1, 0);
  if ( (v58[24] & 1) == 0 )
    goto LABEL_43;
  v13 = *(_QWORD *)a1;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) )
  {
    v5 = 1;
    goto LABEL_43;
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 48) + 24LL);
  if ( !*(_DWORD *)(v13 + 500) )
  {
    v15 = DC::prgnVisSnap((DC *)v13);
    if ( !v15 )
      goto LABEL_43;
    v65 = *(struct tagRECT *)((char *)v15 + 88);
    if ( IsRectEmptyInl(&v65) )
      goto LABEL_43;
  }
  if ( !(_DWORD)v6 )
    goto LABEL_43;
  if ( !a5 )
    goto LABEL_43;
  if ( (unsigned __int64)(v6 + v11 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_43;
  if ( (unsigned __int64)(a5 + v8 + 0x80000000LL) > 0xFFFFFFFF )
    goto LABEL_43;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v57, a1, 0x204u);
  if ( (*(_DWORD *)(v57[0] + 32LL) & 2) == 0 )
    goto LABEL_43;
  v44.x = v11;
  v44.y = v8;
  EXFORMOBJ::bXform((EXFORMOBJ *)v57, &v44, 1uLL);
  v16 = *(_QWORD *)a1;
  v17 = (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 1) != 0 ? 1432LL : 1424LL;
  v18 = *(_DWORD *)(v17 + v16 + 4) + v44.y;
  v45.left = *(_DWORD *)(v17 + v16) + v44.x;
  v44.x = v45.left;
  v45.right = v6 + v45.left;
  v45.top = v18;
  v45.bottom = v18 + a5;
  v44.y = v18;
  v64 = v45;
  ERECTL::vOrder((ERECTL *)&v64);
  v19 = *(_QWORD *)(v16 + 504);
  v49[1] = 0LL;
  v50 = *(_DWORD *)(v19 + 56);
  v51 = *(_DWORD *)(v19 + 60);
  ERECTL::operator*=(&v64);
  if ( IsRectEmptyInl(&v64) )
    goto LABEL_43;
  if ( *(_DWORD *)(v16 + 500) )
  {
    v25 = v39;
    v26 = v39;
    goto LABEL_46;
  }
  if ( (*(_DWORD *)(v16 + 36) & 0x4000) != 0 )
    SURFACE::bUnMap(*(SURFACE **)(v16 + 504), 0LL, (struct DC *)v16);
  v20 = 0;
  v41 = 0;
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  if ( !g_pDwmState
    || (DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v56, *(HWND *)(*(_QWORD *)a1 + 480LL)), (v21 = v56) == 0) )
  {
    v25 = v39;
    v26 = v39;
    goto LABEL_40;
  }
  v22 = *(_QWORD *)(v56 + 168);
  if ( (*(_DWORD *)(v22 + 252) & 0x80u) != 0 )
    goto LABEL_37;
  v23 = *(_QWORD *)(*(_QWORD *)a1 + 504LL);
  v24 = v23 ? v23 + 24 : 0LL;
  if ( *(_QWORD *)(v22 + 184) != v24 )
    goto LABEL_37;
  if ( *(_QWORD *)(v22 + 80) )
  {
    v46 = *(_QWORD *)(v22 + 80);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v45);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v45);
    if ( v46 && *(_QWORD *)&v45.left && !RGNOBJ::bContain((RGNOBJ *)&v46, (struct _RECTL *)&v64) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v47);
      if ( v47 )
      {
        v66.right = *(_DWORD *)(v21 + 64) - *(_DWORD *)(v21 + 56);
        v66.bottom = *(_DWORD *)(v21 + 68) - *(_DWORD *)(v21 + 60);
        *(_QWORD *)&v66.left = 0LL;
        RGNOBJ::vSet((RGNOBJ *)&v45, &v66);
        if ( RGNOBJ::iCombine((RGNOBJ *)&v47, (struct RGNOBJ *)&v45, (struct RGNOBJ *)&v46, BYTE4(gafjRgnOp)) )
        {
          v10 = v47;
          v20 = 1;
          v41 = 1;
        }
        else if ( v47 )
        {
          REGION::vDeleteREGION(v47);
        }
      }
      if ( v48 == 1 )
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v47);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v45);
    if ( !v20 )
    {
LABEL_37:
      v25 = v39;
      goto LABEL_38;
    }
  }
  else
  {
    v41 = 1;
  }
  v35 = *(_QWORD *)(v22 + 184);
  if ( v35 )
  {
    v36 = *(_DWORD *)(v35 + 32);
    v37 = *(_DWORD *)(v35 + 36);
  }
  else
  {
    v36 = v43;
    v37 = v43;
  }
  v38 = *(_DWORD *)(v21 + 60);
  v25 = *(_DWORD *)(v21 + 56);
  *(_QWORD *)&v64.left = 0LL;
  v64.right = v36;
  v64.bottom = v37;
  *(_DWORD *)(v22 + 252) |= 0x80u;
  v39 = v38;
  if ( !v10 )
  {
    v26 = v38;
    goto LABEL_39;
  }
  v67 = *((_DWORD *)v10 + 22);
  v68 = *((_DWORD *)v10 + 23);
  v69 = *((_DWORD *)v10 + 24);
  v70 = *((_DWORD *)v10 + 25);
  ERECTL::operator*=(&v64);
  if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v64) )
  {
    REGION::vDeleteREGION(v10);
    *(_DWORD *)(v22 + 252) |= 0x80u;
    v41 = 0;
  }
LABEL_38:
  v26 = v39;
LABEL_39:
  _InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
LABEL_40:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0
    && (unsigned int)SURFACE::Map(*(_QWORD *)(*(_QWORD *)a1 + 504LL), 0LL) == 2 )
  {
    *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
LABEL_83:
    if ( v10 )
      REGION::vDeleteREGION(v10);
    goto LABEL_43;
  }
  if ( v41 )
  {
LABEL_46:
    v27 = *(_QWORD *)a1;
    if ( *(_DWORD *)(*(_QWORD *)a1 + 500LL) )
    {
      v64.left += *(_DWORD *)(v14 + 2576);
      v64.right += *(_DWORD *)(v14 + 2576);
      v64.top += *(_DWORD *)(v14 + 2580);
      v64.bottom += *(_DWORD *)(v14 + 2580);
    }
    else
    {
      v64.left += v25;
      v64.right += v25;
      v64.top += v26;
      v64.bottom += v26;
    }
    v28 = *(_QWORD *)(v14 + 2544);
    v29 = *(_DWORD *)(v14 + 2580);
    v52 = *(_DWORD *)(v14 + 2576);
    v54 = *(_DWORD *)(v28 + 56) + v52;
    v30 = *(_DWORD *)(v28 + 60);
    v53 = v29;
    v55 = v29 + v30;
    ERECTL::operator*=(&v64);
    if ( !IsRectEmptyInl(&v64) )
    {
      left = v64.left;
      top = v64.top;
      if ( *(_DWORD *)(v27 + 500) )
      {
        v64.left -= *(_DWORD *)(v14 + 2576);
        v64.right -= *(_DWORD *)(v14 + 2576);
        v64.top -= *(_DWORD *)(v14 + 2580);
        v64.bottom -= *(_DWORD *)(v14 + 2580);
      }
      else
      {
        v64.right -= v25;
        v64.left -= v25;
        v64.bottom -= v26;
        v64.top -= v26;
      }
      v31 = *(HSURF *)(*(_QWORD *)(v27 + 504) + 32LL);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v58);
      v32 = 0;
      v33 = 8;
      while ( 1 )
      {
        v62 = 0LL;
        v63 = 0LL;
        DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v61, a1, 0);
        v34 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
        if ( v34 )
        {
          if ( *(_QWORD *)(v34 + 3456) )
          {
            v32 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(v34 + 3456))(*(_QWORD *)(v34 + 1792), v49);
            if ( v32 == 258 )
            {
              KeDelayExecutionThread(0, 0, gpLockShortDelay);
              --v33;
            }
          }
        }
        else
        {
          v32 = -1073741823;
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v61);
        if ( v32 != 258 )
          break;
        if ( !v33 )
          goto LABEL_87;
      }
      if ( v32 >= 0 )
        return bSpDwmUpdateSurface(0LL, 0, v49[0], a1, v31, 1.0, left, top, (struct ERECTL *)&v64, v10);
LABEL_87:
      if ( v10 )
        REGION::vDeleteREGION(v10);
      return v5;
    }
    goto LABEL_83;
  }
LABEL_43:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v58);
  return v5;
}
