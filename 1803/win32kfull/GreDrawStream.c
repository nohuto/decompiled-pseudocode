/*
 * XREFs of GreDrawStream @ 0x1C00A6FB0
 * Callers:
 *     NtGdiDrawStream @ 0x1C00A6ED0 (NtGdiDrawStream.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C0017DC8 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00893D0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C008FBB0 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A5154 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00A7A4C (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00A7E90 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C00A8418 (bCvtPts1.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C0196F98 (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C023BC78 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C02481F4 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDrawStream(__int64 a1, unsigned int a2, unsigned __int64 left)
{
  unsigned int v3; // esi
  struct SURFACE *v4; // rbx
  SURFACE *v5; // r10
  char *v6; // r11
  __int64 v7; // r9
  SURFACE *v8; // r15
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  struct PALETTE *v12; // rcx
  bool v13; // zf
  unsigned int *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // edx
  __int64 v25; // rax
  int v26; // ecx
  unsigned int v27; // esi
  __int64 v28; // rax
  unsigned int v29; // r10d
  int v30; // eax
  XLATEOBJ *XlateObject; // rax
  unsigned int v32; // ebx
  int v33; // r9d
  int v34; // eax
  signed int v35; // r8d
  signed int v36; // edx
  int v37; // edx
  int v38; // r11d
  int v39; // eax
  int v40; // r10d
  int v41; // r9d
  int v42; // eax
  LONG *v43; // rdx
  __int64 v44; // rcx
  DC *v45; // rax
  int v46; // ebx
  char *v47; // rcx
  int v48; // eax
  LONG top; // r10d
  int right; // edx
  LONG bottom; // r9d
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rbx
  __int64 cEntries; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int16 v61; // cx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  unsigned int NearestIndexFromColorref; // eax
  __int64 v67; // rax
  int v68; // eax
  __int64 v69; // r8
  __int64 v70; // r9
  int v71; // eax
  __int64 v72; // r8
  __int64 v73; // r9
  XLATEOBJ *v74; // rdx
  FLONG flXlate; // r11d
  int v76; // eax
  int v77; // ebx
  struct _RECTL *v78; // [rsp+20h] [rbp-E0h]
  struct _RECTL *v79; // [rsp+28h] [rbp-D8h]
  int v80[2]; // [rsp+30h] [rbp-D0h]
  char *v81; // [rsp+38h] [rbp-C8h]
  struct _DRAWSTREAMINFO *v82; // [rsp+40h] [rbp-C0h]
  __int64 v83; // [rsp+48h] [rbp-B8h]
  __int64 v84; // [rsp+50h] [rbp-B0h]
  unsigned int v85; // [rsp+64h] [rbp-9Ch]
  DC *v86; // [rsp+68h] [rbp-98h] BYREF
  __int64 v87; // [rsp+70h] [rbp-90h]
  SURFACE *v88; // [rsp+78h] [rbp-88h]
  int v89; // [rsp+80h] [rbp-80h]
  unsigned int *v90; // [rsp+88h] [rbp-78h]
  __int64 v91; // [rsp+90h] [rbp-70h] BYREF
  __int64 v92; // [rsp+98h] [rbp-68h] BYREF
  XLATEOBJ *v93; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v94; // [rsp+A8h] [rbp-58h]
  unsigned int v95; // [rsp+ACh] [rbp-54h]
  char *v96; // [rsp+B0h] [rbp-50h]
  __int64 v97; // [rsp+B8h] [rbp-48h] BYREF
  struct PALETTE *v98; // [rsp+C0h] [rbp-40h]
  struct SURFACE *v99; // [rsp+C8h] [rbp-38h]
  int v100; // [rsp+D0h] [rbp-30h]
  int v101; // [rsp+D4h] [rbp-2Ch]
  int v102; // [rsp+D8h] [rbp-28h] BYREF
  struct _XLATEOBJ *v103; // [rsp+E0h] [rbp-20h]
  struct PALETTE *v104; // [rsp+E8h] [rbp-18h]
  char *v105; // [rsp+F0h] [rbp-10h] BYREF
  int v106; // [rsp+F8h] [rbp-8h]
  int v107; // [rsp+FCh] [rbp-4h]
  __int128 v108; // [rsp+100h] [rbp+0h] BYREF
  __int64 v109; // [rsp+110h] [rbp+10h]
  int v110; // [rsp+118h] [rbp+18h]
  __int64 v111; // [rsp+120h] [rbp+20h]
  __int64 v112; // [rsp+128h] [rbp+28h]
  __int64 v113; // [rsp+130h] [rbp+30h]
  __int64 v114; // [rsp+138h] [rbp+38h]
  __int64 v115; // [rsp+140h] [rbp+40h]
  __int64 v116; // [rsp+150h] [rbp+50h] BYREF
  __int64 v117; // [rsp+158h] [rbp+58h] BYREF
  struct PALETTE *v118; // [rsp+160h] [rbp+60h] BYREF
  __int64 i; // [rsp+168h] [rbp+68h]
  __int64 v120; // [rsp+170h] [rbp+70h] BYREF
  __int64 v121; // [rsp+178h] [rbp+78h]
  _QWORD v122[4]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v123; // [rsp+1A0h] [rbp+A0h]
  __int64 v124; // [rsp+1A8h] [rbp+A8h]
  __int64 v125; // [rsp+1B0h] [rbp+B0h]
  struct _RECTL v126; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _RECTL v127; // [rsp+1E0h] [rbp+E0h] BYREF

  v3 = 0;
  v121 = a1;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v86 = 0LL;
  v10 = 0LL;
  v87 = 0LL;
  v11 = 0LL;
  v105 = 0LL;
  v107 = 0;
  v112 = 0LL;
  v12 = gppalRGB;
  v98 = gppalRGB;
  v88 = 0LL;
  v99 = 0LL;
  v104 = 0LL;
  v103 = 0LL;
  v93 = 0LL;
  v89 = 0;
  v96 = 0LL;
  v95 = 0;
  v108 = 0LL;
  v109 = 0LL;
  v110 = 0;
  v111 = 0LL;
  v115 = 0LL;
  v114 = 0LL;
  v113 = 0LL;
  if ( a2 < 4 )
    goto LABEL_118;
  v13 = *(_DWORD *)left == 1148352339;
  v14 = (unsigned int *)(left + 4);
  v90 = (unsigned int *)(left + 4);
  if ( !v13 )
  {
    v3 = 0;
    goto LABEL_118;
  }
  v85 = a2 - 4;
  if ( a2 - 4 < 4 )
  {
LABEL_114:
    v3 = 1;
    goto LABEL_115;
  }
  while ( 1 )
  {
    v15 = *v14;
    if ( !(_DWORD)v15 )
    {
      if ( v6 )
        goto LABEL_105;
      if ( (_DWORD)v7 == 1 )
        DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v108);
      if ( v86 )
        XDCOBJ::vUnlockFast((XDCOBJ *)&v86);
      v86 = 0LL;
      if ( v8 )
      {
        if ( v8 == SURFACE::pdibDefault )
        {
          DEC_SHARE_REF_CNT(v8);
        }
        else
        {
          GreAcquireHmgrSemaphore(v12, v15, left, v7, v78, v79);
          SURFACE::vDec_cRef(v8);
          GreReleaseHmgrSemaphore();
        }
        v8 = 0LL;
      }
      v94 = 24;
      if ( v85 < 0x18 )
        goto LABEL_147;
      v44 = (int)v14[1];
      if ( v44 != v121 )
        goto LABEL_147;
      LOBYTE(v15) = 1;
      v45 = (DC *)HmgLockEx(v44, v15);
      v86 = v45;
      if ( v45 )
      {
        if ( HIDWORD(v87) )
        {
          if ( (*(_DWORD *)(*((_QWORD *)v45 + 6) + 40LL) & 0x8000) == 0 )
            goto LABEL_182;
          v77 = *((_DWORD *)v45 + 626);
          if ( v77 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          {
LABEL_181:
            v45 = v86;
LABEL_182:
            _InterlockedDecrement((volatile signed __int32 *)v45 + 3);
            v86 = 0LL;
LABEL_147:
            v3 = 0;
            goto LABEL_115;
          }
        }
        if ( !(unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v86) )
          goto LABEL_181;
        if ( (*((_DWORD *)v86 + 132) & 4) != 0 )
          DC::vMarkTransformDirty(v86);
      }
      else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
      {
        PsGetWin32KFilterSet();
      }
      if ( !v86
        || (*((_DWORD *)v86 + 9) & 0x10000) != 0
        || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v108, (struct XDCOBJ *)&v86, 0) )
      {
        goto LABEL_147;
      }
      v106 = *(_DWORD *)(*((_QWORD *)v86 + 10) + 68LL);
      v46 = *(_DWORD *)(*((_QWORD *)v86 + 10) + 312LL) & 1;
      v107 = v46;
      if ( (*(_DWORD *)(*((_QWORD *)v86 + 10) + 352LL) & 0x1E000) != 0 )
      {
        EXFORMOBJ::vInit((EXFORMOBJ *)&v105, (struct XDCOBJ *)&v86, 0x204u, 0);
        v47 = v105;
        v46 = v107;
      }
      else
      {
        v47 = (char *)v86 + 328;
        v105 = (char *)v86 + 328;
      }
      v48 = *((_DWORD *)v47 + 8);
      if ( (v48 & 1) == 0 )
        goto LABEL_147;
      left = v14[2];
      top = v14[3];
      right = v14[4];
      bottom = v14[5];
      v126.left = v14[2];
      v126.top = top;
      v126.right = right;
      v126.bottom = bottom;
      if ( (v48 & 0x43) != 0x43 )
      {
        bCvtPts1(v47, &v126, 2LL);
        bottom = v126.bottom;
        right = v126.right;
        top = v126.top;
        left = (unsigned int)v126.left;
      }
      if ( v46 )
      {
        left = (unsigned int)(left + 1);
        ++right;
        v126.left = left;
        v126.right = right;
      }
      if ( (int)left > right )
      {
        v126.left = right;
        v126.right = left;
      }
      if ( top > bottom )
      {
        v126.top = bottom;
        v126.bottom = top;
      }
      if ( (*((_DWORD *)v86 + 9) & 0xE0) != 0 )
        XDCOBJ::vAccumulate((XDCOBJ *)&v86, (struct ERECTL *)&v126);
      v5 = (SURFACE *)*((_QWORD *)v86 + 63);
      v88 = v5;
      if ( !v5 )
        goto LABEL_147;
      v9 = *((_QWORD *)v5 + 16);
      v10 = *((_QWORD *)v86 + 12);
      if ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 24) & 0x2000) != 0 )
          goto LABEL_147;
      }
      v95 = 1;
      goto LABEL_38;
    }
    v16 = (unsigned int)(v15 - 1);
    if ( !(_DWORD)v16 )
    {
      if ( v6 )
        goto LABEL_105;
      if ( v8 )
      {
        if ( v8 == SURFACE::pdibDefault )
        {
          DEC_SHARE_REF_CNT(v8);
        }
        else
        {
          GreAcquireHmgrSemaphore(v12, v16, left, v7, v78, v79);
          SURFACE::vDec_cRef(v8);
          GreReleaseHmgrSemaphore();
        }
        LODWORD(v7) = v95;
        v8 = 0LL;
      }
      v94 = 8;
      if ( v85 < 8 )
        goto LABEL_147;
      if ( !(_DWORD)v7 )
        goto LABEL_147;
      LOBYTE(v16) = 5;
      v8 = (SURFACE *)HmgShareLockCheck((int)v14[1], v16);
      if ( !v8 )
        goto LABEL_147;
      if ( v8 != SURFACE::pdibDefault )
      {
        GreAcquireHmgrSemaphore(v18, v17, v19, v20, v78, v79);
        INC_SHARE_REF_CNT(v8);
        ++*((_DWORD *)v8 + 42);
        DEC_SHARE_REF_CNT(v8);
        GreReleaseHmgrSemaphore();
      }
      v11 = *((_QWORD *)v8 + 16);
      v99 = v8;
      v104 = ppalDefault;
      if ( !v11 )
        goto LABEL_147;
      v21 = *(_DWORD *)(v11 + 24);
      if ( (v21 & 0x2000) != 0 )
        goto LABEL_147;
      v5 = v88;
      if ( v8 == v88 || *((_DWORD *)v8 + 24) != 6 )
        goto LABEL_147;
      v22 = *((_QWORD *)v86 + 10);
      left = *(unsigned int *)(v22 + 32);
      v101 = *(_DWORD *)(v22 + 40);
      LODWORD(v103) = *((_DWORD *)v86 + 32);
      v100 = left;
      if ( v9 )
      {
        v23 = *(_QWORD *)(v11 + 120);
        if ( v23 == v11 )
          v24 = *(_DWORD *)(v11 + 32);
        else
          v24 = *(_DWORD *)(v23 + 32);
        v25 = *(_QWORD *)(v9 + 120);
        if ( v25 == v9 )
          v26 = *(_DWORD *)(v9 + 32);
        else
          v26 = *(_DWORD *)(v25 + 32);
        if ( v24 != v26 )
        {
          v27 = *(_DWORD *)(v11 + 56);
          v117 = v10;
          v118 = ppalDefault;
          v116 = v9;
          v120 = ghsemPalette;
          GreAcquireSemaphore(ghsemPalette);
          v28 = *(_QWORD *)(v11 + 120);
          v29 = 0;
          for ( i = v28; ; v28 = i )
          {
            if ( v28 == v11 )
              v30 = *(_DWORD *)(v11 + 32);
            else
              v30 = *(_DWORD *)(v28 + 32);
            if ( *((_DWORD *)&xlateTable + 8 * v27 + 4) == v30 )
            {
              v68 = XEPALOBJ::ulTime((XEPALOBJ *)&v116);
              if ( *(_DWORD *)(v69 + v70 + 20) == v68 )
              {
                v71 = XEPALOBJ::ulTime((XEPALOBJ *)&v117);
                if ( *(_DWORD *)(v72 + v73 + 28) == v71 )
                {
                  v74 = *(XLATEOBJ **)(v72 + v73 + 8);
                  v93 = v74;
                  flXlate = v74[3].flXlate;
                  if ( (flXlate & 0x6000) == 0 )
                  {
                    if ( (v74->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                      || (v74->flXlate & 4) != 0
                      && !v74[1].iUniq
                      && (v76 = XEPALOBJ::ulTime((XEPALOBJ *)&v118), *(_DWORD *)(v72 + v73 + 24) == v76)
                      || (flXlate & 0x100) != 0 && v101 == v74[1].flXlate && v100 == *(_DWORD *)&v74[1].iSrcType )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v72 + v73));
                      *(_DWORD *)(v11 + 56) = v27;
                      SEMOBJ::vUnlock((SEMOBJ *)&v120);
                      v14 = v90;
                      goto LABEL_36;
                    }
                  }
                }
              }
            }
            ++v29;
            v27 = ((_BYTE)v27 + 1) & 7;
            if ( v29 >= 8 )
              break;
          }
          if ( ghsemPalette )
          {
            EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
            GreReleaseSemaphoreInternal(ghsemPalette);
          }
          v14 = v90;
          goto LABEL_32;
        }
        v93 = xloIdent;
      }
      else
      {
        if ( (v21 & 0x800) == 0 || (v67 = *(_QWORD *)(v10 + 80)) != 0 && v67 != *(_QWORD *)(v10 + 72) )
        {
LABEL_32:
          LODWORD(v83) = 0;
          LODWORD(v82) = 0;
          LODWORD(v81) = v100;
          v80[0] = v101;
          XlateObject = (XLATEOBJ *)CreateXlateObject(
                                      0LL,
                                      (int)v103,
                                      v11,
                                      v9,
                                      ppalDefault,
                                      v10,
                                      *(_QWORD *)v80,
                                      v81,
                                      v82,
                                      v83,
                                      v84);
          v93 = XlateObject;
          if ( !XlateObject )
            goto LABEL_147;
          if ( v9 && (XlateObject[3].flXlate & 0x200) == 0 )
            EXLATEOBJ::vAddToCache(&v93, v11, v9, ppalDefault, v10);
LABEL_36:
          v5 = v88;
          goto LABEL_37;
        }
        v93 = xloIdent;
      }
LABEL_37:
      v103 = v93;
      goto LABEL_38;
    }
    if ( (_DWORD)v16 != 8 )
      goto LABEL_147;
    v94 = 60;
    if ( v85 < 0x3C )
      goto LABEL_147;
    v32 = v14[9];
    if ( (v32 & 0xFFFFFF80) != 0 )
      goto LABEL_147;
    if ( !v99 )
      goto LABEL_147;
    v33 = v14[5];
    if ( v33 < 0 )
      goto LABEL_147;
    v34 = v14[6];
    if ( v34 < 0 )
      goto LABEL_147;
    v35 = v14[7];
    if ( v35 > *((_DWORD *)v99 + 14) )
      goto LABEL_147;
    v36 = v14[8];
    if ( v36 > *((_DWORD *)v99 + 15) )
      goto LABEL_147;
    left = (unsigned int)(v35 - v33);
    v37 = v36 - v34;
    if ( (int)left <= 0 || v37 <= 0 )
      goto LABEL_147;
    if ( (v32 & 0x20) == 0 )
    {
      v38 = v14[10];
      if ( v38 < 0 )
        goto LABEL_147;
      v39 = v14[11];
      if ( v39 < 0 )
        goto LABEL_147;
      v40 = v14[12];
      if ( v40 < 0 )
        goto LABEL_147;
      v41 = v14[13];
      if ( v41 < 0
        || v38 > (int)left
        || v39 > (int)left
        || v40 > v37
        || v41 > v37
        || v38 + v39 > (int)left
        || v41 + v40 > v37 )
      {
        goto LABEL_147;
      }
      v5 = v88;
      v6 = v96;
    }
    if ( (v32 & 0xC) == 0xC )
      goto LABEL_147;
    if ( (v32 & 8) != 0 )
    {
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v11, v104, v14[14], 1LL);
      v12 = v98;
      v5 = v88;
      v6 = v96;
      v14[14] = NearestIndexFromColorref;
    }
    else
    {
      v42 = v89;
      if ( (v32 & 4) != 0 )
        v42 = 1;
      v89 = v42;
    }
    v43 = (LONG *)(v14 + 1);
    if ( !v6 )
    {
      v127.left = *v43;
      v127.top = v14[2];
      v127.right = v14[3];
      v127.bottom = v14[4];
      v96 = (char *)v14;
      goto LABEL_39;
    }
    ERECTL::operator+=((unsigned int *)&v127, (unsigned int *)v43);
    v5 = v88;
LABEL_38:
    v12 = v98;
LABEL_39:
    v85 -= v94;
    v14 += (unsigned __int64)v94 >> 2;
    v90 = v14;
    if ( v85 )
      goto LABEL_40;
    v6 = v96;
    if ( !v96 )
      goto LABEL_114;
    v4 = v99;
LABEL_105:
    if ( !v86 || !v4 )
      goto LABEL_40;
    v122[0] = 72LL;
    v52 = 0LL;
    v91 = 0LL;
    v53 = 0LL;
    v92 = 0LL;
    v54 = 0LL;
    v97 = 0LL;
    v122[1] = 33488896LL;
    v122[2] = 0LL;
    if ( v89 )
      break;
    v125 = 0LL;
    v124 = 0LL;
    v123 = 0LL;
LABEL_109:
    if ( !(unsigned int)NtGdiDrawStreamInternal(
                          (struct XDCOBJ *)&v86,
                          (struct EXFORMOBJ *)&v105,
                          v99,
                          v103,
                          &v126,
                          &v127,
                          (int)v90 - (int)v6,
                          v6,
                          (struct _DRAWSTREAMINFO *)v122) )
      goto LABEL_146;
    v96 = 0LL;
    v89 = 0;
    if ( v54 )
    {
      v63 = *(int *)(v54 + 36);
      if ( (int)v63 >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v63);
        v52 = v91;
        v53 = v92;
      }
      else if ( (_DWORD)v63 == -1 )
      {
        FreeThreadBufferWithTag(v54);
      }
    }
    if ( v53 )
    {
      v64 = *(int *)(v53 + 36);
      if ( (int)v64 >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v64);
        v52 = v91;
      }
      else if ( (_DWORD)v64 == -1 )
      {
        FreeThreadBufferWithTag(v53);
      }
    }
    if ( v52 )
    {
      v65 = *(int *)(v52 + 36);
      if ( (int)v65 >= 0 )
      {
        _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v65);
      }
      else if ( (_DWORD)v65 == -1 )
      {
        FreeThreadBufferWithTag(v52);
      }
    }
    v14 = v90;
LABEL_40:
    if ( v85 < 4 )
      goto LABEL_114;
    v12 = v98;
    v5 = v88;
    v7 = v95;
    v6 = v96;
    v4 = v99;
  }
  if ( (unsigned int)(*((_DWORD *)v5 + 24) - 1) > 2 )
  {
    v79 = (struct _RECTL *)v104;
    v78 = (struct _RECTL *)v12;
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v91, 0LL, 0LL) )
    {
      v52 = v91;
      v79 = (struct _RECTL *)v10;
      v78 = (struct _RECTL *)v98;
      v123 = v91;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(&v92, 0LL, 0LL) )
      {
        v53 = v92;
        LODWORD(v84) = 0;
        v79 = (struct _RECTL *)v10;
        v78 = (struct _RECTL *)v9;
        v124 = v92;
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v97, 0LL, 0LL) )
        {
LABEL_146:
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v97);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v91);
          goto LABEL_147;
        }
        v54 = v97;
        v6 = v96;
        v125 = v97;
        goto LABEL_109;
      }
    }
  }
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v97);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v91);
  v3 = 0;
LABEL_115:
  if ( v86 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v86);
    v102 = 0;
    v55 = *(_QWORD *)v86;
    HmgDecrementExclusiveReferenceCountEx(v86, HIDWORD(v87), &v102);
    if ( v102 )
      bDeleteDCInternalEx(v55, 0LL);
  }
LABEL_118:
  v86 = 0LL;
  if ( v93 )
  {
    cEntries = (int)v93[1].cEntries;
    if ( (int)cEntries >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
    }
    else if ( (_DWORD)cEntries == -1 )
    {
      FreeThreadBufferWithTag(v93);
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v108);
  if ( v8 )
  {
    if ( v8 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v8);
    }
    else
    {
      GreAcquireHmgrSemaphore(v58, v57, v59, v60, v78, v79);
      DEC_SHARE_REF_CNT(v8);
      v13 = (*((_DWORD *)v8 + 42))-- == 1;
      if ( v13 )
      {
        if ( (*(_DWORD *)v8 & 0x800000) != 0 )
        {
          v61 = *((_WORD *)v8 + 51);
          if ( (v61 & 0x400) != 0 )
          {
            *((_WORD *)v8 + 51) = v61 & 0xFBFF;
            GreMakeBitmapNonStock(*(_QWORD *)v8);
          }
        }
        *((_QWORD *)v8 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
  }
  return v3;
}
