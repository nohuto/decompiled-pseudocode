/*
 * XREFs of GreDrawStream @ 0x1C0047970
 * Callers:
 *     NtGdiDrawStream @ 0x1C0047160 (NtGdiDrawStream.c)
 * Callees:
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C0047240 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C00477FC (bCvtPts1.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C004AB70 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00E503C (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00E51A4 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C011B2B4 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C015E92C (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015F778 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01B8390 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C026014C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C02601B0 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0SURFREFDC@@QEAA@XZ @ 0x1C026FA4C (--0SURFREFDC@@QEAA@XZ.c)
 */

__int64 __fastcall GreDrawStream(HDC a1, unsigned int a2, _DWORD *a3)
{
  __int64 v4; // rsi
  SURFACE *v5; // r8
  struct SURFACE *v6; // r9
  struct PALETTE *v7; // rdi
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r15
  XLATEOBJ *v11; // r14
  char *v12; // r11
  int v13; // r10d
  bool v14; // zf
  _DWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rbx
  int v18; // r11d
  int v19; // r8d
  int v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // edx
  int v24; // ecx
  int v25; // r10d
  int v26; // eax
  int v27; // r9d
  int v28; // r8d
  int v29; // eax
  LONG *v30; // rdx
  char *v31; // r11
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r9
  SURFACE *v35; // rbx
  int v36; // ecx
  __int64 v37; // rax
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // edx
  __int64 v42; // rax
  int v43; // ecx
  unsigned int v44; // esi
  __int64 v45; // r14
  unsigned int i; // r11d
  int v47; // eax
  unsigned int v48; // eax
  __int64 v49; // r9
  __int64 v50; // r10
  unsigned int v51; // eax
  __int64 v52; // r9
  __int64 v53; // r10
  struct _XLATEOBJ *v54; // rdx
  FLONG flXlate; // r8d
  unsigned int v56; // eax
  __int64 XlateObject; // rax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  HDC v61; // rdx
  int v62; // ebx
  unsigned __int64 v63; // rcx
  int v64; // r8d
  LONG left; // edx
  LONG top; // r10d
  LONG right; // eax
  LONG bottom; // r9d
  __int64 v69; // rdi
  struct PALETTE *v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 cEntries; // rax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  SURFACE *v78; // rbx
  __int16 v79; // ax
  __int64 v80; // rcx
  unsigned int v83; // [rsp+64h] [rbp-9Ch]
  int v84; // [rsp+68h] [rbp-98h]
  __int64 v85; // [rsp+70h] [rbp-90h] BYREF
  struct _XLATEOBJ *v86; // [rsp+78h] [rbp-88h] BYREF
  char *v87; // [rsp+80h] [rbp-80h]
  __int64 v88; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v89; // [rsp+90h] [rbp-70h]
  int v90; // [rsp+94h] [rbp-6Ch]
  _DWORD *v91; // [rsp+98h] [rbp-68h]
  __int64 v92; // [rsp+A0h] [rbp-60h] BYREF
  SURFACE *v93; // [rsp+A8h] [rbp-58h]
  int v94; // [rsp+B0h] [rbp-50h]
  int v95; // [rsp+B4h] [rbp-4Ch]
  struct _XLATEOBJ *v96; // [rsp+B8h] [rbp-48h]
  struct SURFACE *v97; // [rsp+C0h] [rbp-40h]
  __int64 v98; // [rsp+C8h] [rbp-38h] BYREF
  int v99; // [rsp+D0h] [rbp-30h]
  int v100; // [rsp+D4h] [rbp-2Ch]
  struct PALETTE *v101; // [rsp+D8h] [rbp-28h]
  _BYTE v102[32]; // [rsp+E0h] [rbp-20h] BYREF
  SURFACE *v103; // [rsp+100h] [rbp+0h]
  _QWORD v104[6]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v105; // [rsp+138h] [rbp+38h] BYREF
  __int64 v106; // [rsp+140h] [rbp+40h] BYREF
  struct PALETTE *v107; // [rsp+148h] [rbp+48h] BYREF
  __int64 v108; // [rsp+150h] [rbp+50h] BYREF
  HDC v109; // [rsp+158h] [rbp+58h]
  struct PALETTE *v110; // [rsp+160h] [rbp+60h]
  __int128 v111; // [rsp+170h] [rbp+70h] BYREF
  __int64 v112; // [rsp+180h] [rbp+80h]
  int v113; // [rsp+188h] [rbp+88h]
  _QWORD v114[10]; // [rsp+190h] [rbp+90h] BYREF
  _QWORD v115[4]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v116; // [rsp+200h] [rbp+100h]
  __int64 v117; // [rsp+208h] [rbp+108h]
  __int64 v118; // [rsp+210h] [rbp+110h]
  struct _RECTL v119; // [rsp+230h] [rbp+130h] BYREF
  struct _RECTL v120; // [rsp+240h] [rbp+140h] BYREF

  v109 = a1;
  DCOBJ::DCOBJ((DCOBJ *)v104);
  SURFREFDC::SURFREFDC((SURFREFDC *)v102);
  LODWORD(v4) = 0;
  v98 = 0LL;
  v100 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v114);
  v5 = 0LL;
  v112 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v110 = gppalRGB;
  v13 = 0;
  v93 = 0LL;
  v97 = 0LL;
  v101 = 0LL;
  v96 = 0LL;
  v86 = 0LL;
  v84 = 0;
  v87 = 0LL;
  v90 = 0;
  v111 = 0LL;
  v113 = 0;
  v114[0] = 0LL;
  memset(&v114[6], 0, 24);
  if ( a2 >= 4 )
  {
    v14 = *a3 == 1148352339;
    v15 = a3 + 1;
    v91 = a3 + 1;
    if ( v14 )
    {
      v16 = a2 - 4;
      LODWORD(v17) = 1;
      v83 = v16;
      if ( (unsigned int)v16 >= 4 )
      {
        while ( 1 )
        {
          switch ( *v15 )
          {
            case 0:
              if ( v12 )
                goto LABEL_125;
              if ( v13 == 1 )
                DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v111);
              XDCOBJ::vUnlock((XDCOBJ *)v104);
              if ( v103 )
              {
                if ( v103 == SURFACE::pdibDefault )
                {
                  DEC_SHARE_REF_CNT(v103);
                }
                else
                {
                  GreAcquireHmgrSemaphore(v103, v58, v59, v60);
                  SURFACE::vDec_cRef(v103);
                  GreReleaseHmgrSemaphore();
                }
                v103 = 0LL;
              }
              v89 = 24;
              if ( v83 < 0x18 )
                goto LABEL_154;
              v61 = (HDC)(int)v15[1];
              if ( v61 != v109 )
                goto LABEL_154;
              XDCOBJ::vLock((XDCOBJ *)v104, v61);
              if ( !v104[0]
                || (*(_DWORD *)(v104[0] + 36LL) & 0x10000) != 0
                || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v111, (struct XDCOBJ *)v104, 0) )
              {
                goto LABEL_154;
              }
              v99 = *(_DWORD *)(*(_QWORD *)(v104[0] + 976LL) + 208LL);
              v62 = *(_DWORD *)(*(_QWORD *)(v104[0] + 976LL) + 108LL) & 1;
              v100 = v62;
              if ( (*(_DWORD *)(*(_QWORD *)(v104[0] + 976LL) + 340LL) & 0x1E000) != 0 )
              {
                EXFORMOBJ::vInit((EXFORMOBJ *)&v98, (struct XDCOBJ *)v104, 0x204u, 0);
                v63 = v98;
                v62 = v100;
              }
              else
              {
                v63 = v104[0] + 320LL;
                v98 = v104[0] + 320LL;
              }
              v64 = *(_DWORD *)(v63 + 32);
              if ( (v64 & 1) == 0 )
                goto LABEL_154;
              left = v15[2];
              top = v15[3];
              right = v15[4];
              bottom = v15[5];
              v119.left = left;
              v119.top = top;
              v119.right = right;
              v119.bottom = bottom;
              if ( (v64 & 0x43) != 0x43 )
              {
                bCvtPts1(v63, &v119, 2LL);
                bottom = v119.bottom;
                right = v119.right;
                top = v119.top;
                left = v119.left;
              }
              if ( v62 )
              {
                ++left;
                ++right;
                v119.left = left;
                v119.right = right;
              }
              if ( left > right )
              {
                v119.left = right;
                v119.right = left;
              }
              if ( top > bottom )
              {
                v119.top = bottom;
                v119.bottom = top;
              }
              if ( (*(_DWORD *)(v104[0] + 36LL) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)v104, (struct ERECTL *)&v119);
              v5 = *(SURFACE **)(v104[0] + 496LL);
              v93 = v5;
              if ( !v5 )
                goto LABEL_154;
              v8 = *((_QWORD *)v5 + 16);
              v9 = *(_QWORD *)(v104[0] + 88LL);
              if ( v10 )
              {
                if ( (*(_DWORD *)(v10 + 24) & 0x2000) != 0 )
                  goto LABEL_154;
              }
              v90 = 1;
              break;
            case 1:
              if ( v12 )
                goto LABEL_125;
              if ( v103 )
              {
                if ( v103 == SURFACE::pdibDefault )
                {
                  DEC_SHARE_REF_CNT(v103);
                }
                else
                {
                  GreAcquireHmgrSemaphore((unsigned int)(*v15 - 1), v16, v103, v6);
                  SURFACE::vDec_cRef(v103);
                  GreReleaseHmgrSemaphore();
                }
                v16 = v83;
                v13 = v90;
                v103 = 0LL;
              }
              v89 = 8;
              if ( (unsigned int)v16 < 8 )
                goto LABEL_154;
              if ( !v13 )
                goto LABEL_154;
              LOBYTE(v16) = 5;
              v103 = (SURFACE *)HmgShareLockCheck((int)v15[1], v16);
              if ( !v103 )
                goto LABEL_154;
              if ( v103 != SURFACE::pdibDefault )
              {
                GreAcquireHmgrSemaphore(v33, v32, v103, v34);
                v35 = v103;
                INC_SHARE_REF_CNT(v103);
                ++*((_DWORD *)v35 + 42);
                DEC_SHARE_REF_CNT(v103);
                GreReleaseHmgrSemaphore();
              }
              v97 = v103;
              if ( !v103 )
                goto LABEL_154;
              v10 = *((_QWORD *)v103 + 16);
              v101 = ppalDefault;
              if ( !v10 )
                goto LABEL_154;
              v36 = *(_DWORD *)(v10 + 24);
              if ( (v36 & 0x2000) != 0 || v103 == v93 || *((_DWORD *)v103 + 24) != 6 )
                goto LABEL_154;
              v37 = *(_QWORD *)(v104[0] + 976LL);
              v38 = *(_DWORD *)(v37 + 176);
              v95 = *(_DWORD *)(v37 + 184);
              LODWORD(v96) = *(_DWORD *)(v104[0] + 120LL);
              v94 = v38;
              if ( v8 )
              {
                v40 = *(_QWORD *)(v10 + 120);
                if ( v40 == v10 )
                  v41 = *(_DWORD *)(v10 + 32);
                else
                  v41 = *(_DWORD *)(v40 + 32);
                v42 = *(_QWORD *)(v8 + 120);
                if ( v42 == v8 )
                  v43 = *(_DWORD *)(v8 + 32);
                else
                  v43 = *(_DWORD *)(v42 + 32);
                if ( v41 != v43 )
                {
                  v44 = *(_DWORD *)(v10 + 56);
                  v106 = v9;
                  v107 = ppalDefault;
                  v105 = v8;
                  v108 = ghsemPalette;
                  GreAcquireSemaphore(ghsemPalette);
                  v45 = *(_QWORD *)(v10 + 120);
                  for ( i = 0; i < 8; ++i )
                  {
                    if ( v45 == v10 )
                      v47 = *(_DWORD *)(v10 + 32);
                    else
                      v47 = *(_DWORD *)(v45 + 32);
                    if ( *((_DWORD *)&xlateTable + 8 * v44 + 4) == v47 )
                    {
                      v48 = XEPALOBJ::ulTime((XEPALOBJ *)&v105);
                      if ( *(_DWORD *)(v49 + v50 + 20) == v48 )
                      {
                        v51 = XEPALOBJ::ulTime((XEPALOBJ *)&v106);
                        if ( *(_DWORD *)(v52 + v53 + 28) == v51 )
                        {
                          v54 = *(struct _XLATEOBJ **)(v52 + v53 + 8);
                          v86 = v54;
                          flXlate = v54[3].flXlate;
                          if ( (flXlate & 0x6000) == 0 )
                          {
                            if ( (v54->flXlate & 4) == 0 && (flXlate & 0x100) == 0
                              || (v54->flXlate & 4) != 0
                              && !v54[1].iUniq
                              && (v56 = XEPALOBJ::ulTime((XEPALOBJ *)&v107), *(_DWORD *)(v52 + v53 + 24) == v56)
                              || (flXlate & 0x100) != 0 && v95 == v54[1].flXlate && v94 == *(_DWORD *)&v54[1].iSrcType )
                            {
                              _InterlockedIncrement((volatile signed __int32 *)(v52 + v53));
                              *(_DWORD *)(v10 + 56) = v44;
                              SEMOBJ::~SEMOBJ((SEMOBJ *)&v108);
                              v11 = v86;
                              v15 = v91;
                              v5 = v93;
                              v96 = v86;
                              goto LABEL_121;
                            }
                          }
                        }
                      }
                    }
                    v44 = ((_BYTE)v44 + 1) & 7;
                  }
                  if ( ghsemPalette )
                  {
                    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
                    GreReleaseSemaphoreInternal(ghsemPalette);
                  }
LABEL_84:
                  XlateObject = CreateXlateObject(0LL, (unsigned int)v96, v10, v8, ppalDefault, v9, v95, v94, 0, 0);
                  v86 = (struct _XLATEOBJ *)XlateObject;
                  v11 = (XLATEOBJ *)XlateObject;
                  if ( !XlateObject )
                  {
                    LODWORD(v4) = 0;
                    goto LABEL_166;
                  }
                  if ( v8 && (*(_DWORD *)(XlateObject + 76) & 0x200) == 0 )
                    EXLATEOBJ::vAddToCache(&v86, v10, v8, ppalDefault, v9);
                  v15 = v91;
                  v5 = v93;
                  v96 = v11;
                  break;
                }
LABEL_64:
                v11 = xloIdent;
                v15 = v91;
                v5 = v93;
                v86 = xloIdent;
                v96 = xloIdent;
                break;
              }
              if ( (v36 & 0x800) == 0 )
                goto LABEL_84;
              v39 = *(_QWORD *)(v9 + 80);
              if ( !v39 )
                goto LABEL_64;
              if ( v39 != *(_QWORD *)(v9 + 72) )
                goto LABEL_84;
              v11 = xloIdent;
              v15 = v91;
              v5 = v93;
              v86 = xloIdent;
              v96 = xloIdent;
              break;
            case 9:
              v89 = 60;
              if ( (unsigned int)v16 < 0x3C )
                goto LABEL_154;
              v18 = v15[9];
              if ( (v18 & 0xFFFFFF80) != 0 )
                goto LABEL_154;
              if ( !v6 )
                goto LABEL_154;
              v19 = v15[5];
              if ( v19 < 0 )
                goto LABEL_154;
              v20 = v15[6];
              if ( v20 < 0 )
                goto LABEL_154;
              v21 = v15[7];
              if ( v21 > *((_DWORD *)v6 + 14) )
                goto LABEL_154;
              v22 = v15[8];
              if ( v22 > *((_DWORD *)v6 + 15) )
                goto LABEL_154;
              v23 = v21 - v19;
              v24 = v22 - v20;
              if ( v23 <= 0 )
                goto LABEL_154;
              if ( v24 <= 0 )
                goto LABEL_154;
              if ( (v18 & 0x20) == 0 )
              {
                v25 = v15[10];
                if ( v25 < 0 )
                  goto LABEL_154;
                v26 = v15[11];
                if ( v26 < 0 )
                  goto LABEL_154;
                v27 = v15[12];
                if ( v27 < 0 )
                  goto LABEL_154;
                v28 = v15[13];
                if ( v28 < 0 || v25 > v23 || v26 > v23 || v27 > v24 || v28 > v24 || v25 + v26 > v23 || v28 + v27 > v24 )
                  goto LABEL_154;
              }
              if ( (v18 & 0xC) == 0xC )
                goto LABEL_154;
              if ( (v18 & 8) != 0 )
              {
                v15[14] = ulGetNearestIndexFromColorref(v10, v7, (unsigned int)v15[14], 1LL);
              }
              else
              {
                v29 = v84;
                if ( (v18 & 4) != 0 )
                  v29 = 1;
                v84 = v29;
              }
              v30 = v15 + 1;
              if ( !v87 )
              {
                v31 = (char *)v15;
                v5 = v93;
                v120.left = *v30;
                v120.top = v15[2];
                v120.right = v15[3];
                v120.bottom = v15[4];
                v87 = (char *)v15;
                goto LABEL_122;
              }
              ERECTL::operator+=(&v120, v30);
              v5 = v93;
              break;
            default:
              goto LABEL_154;
          }
LABEL_121:
          v31 = v87;
LABEL_122:
          v16 = v83 - v89;
          v83 = v16;
          v15 += (unsigned __int64)v89 >> 2;
          v91 = v15;
          if ( (_DWORD)v16 || !v31 )
            goto LABEL_151;
          v6 = v97;
LABEL_125:
          if ( v104[0] && v6 )
          {
            v115[0] = 72LL;
            v4 = 0LL;
            v85 = 0LL;
            v69 = 0LL;
            v88 = 0LL;
            v17 = 0LL;
            v92 = 0LL;
            v115[1] = 33488896LL;
            v115[2] = 0LL;
            if ( v84 )
            {
              if ( (unsigned int)(*((_DWORD *)v5 + 24) - 1) <= 2 )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v88);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
                break;
              }
              v70 = v110;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v85, 0LL, 0LL, v10, v110, v101, v101, 0, 0, 0, 0) )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v88);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
                goto LABEL_155;
              }
              v4 = v85;
              v116 = v85;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v88, 0LL, 0LL, v8, v70, v9, v9, 0, 0, 0, 0) )
              {
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v88);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
                LODWORD(v4) = 0;
                goto LABEL_155;
              }
              v69 = v88;
              v117 = v88;
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v92, 0LL, 0LL, v70, v8, v9, v9, 0, 0, 0, 0) )
                goto LABEL_153;
              v17 = v92;
              v118 = v92;
            }
            else
            {
              v118 = 0LL;
              v117 = 0LL;
              v116 = 0LL;
            }
            if ( !(unsigned int)NtGdiDrawStreamInternal(
                                  (struct XDCOBJ *)v104,
                                  (struct EXFORMOBJ *)&v98,
                                  v97,
                                  v96,
                                  &v119,
                                  &v120,
                                  (int)v91 - (int)v87,
                                  v87,
                                  (struct _DRAWSTREAMINFO *)v115) )
            {
LABEL_153:
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v92);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v88);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v85);
LABEL_154:
              LODWORD(v4) = 0;
              goto LABEL_155;
            }
            v87 = 0LL;
            v84 = 0;
            if ( v17 )
            {
              v71 = *(int *)(v17 + 36);
              if ( (int)v71 < 0 )
              {
                if ( (_DWORD)v71 == -1 )
                  FreeThreadBufferWithTag(v17);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v71);
                v11 = v86;
                v4 = v85;
                v69 = v88;
              }
            }
            if ( v69 )
            {
              v72 = *(int *)(v69 + 36);
              if ( (int)v72 < 0 )
              {
                if ( (_DWORD)v72 == -1 )
                  FreeThreadBufferWithTag(v69);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v72);
                v11 = v86;
                v4 = v85;
              }
            }
            if ( v4 )
            {
              v73 = *(int *)(v4 + 36);
              if ( (int)v73 < 0 )
              {
                if ( (_DWORD)v73 == -1 )
                  FreeThreadBufferWithTag(v4);
              }
              else
              {
                _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v73);
                v11 = v86;
              }
            }
            v16 = v83;
            v15 = v91;
          }
LABEL_151:
          LODWORD(v17) = 1;
          if ( (unsigned int)v16 < 4 )
            break;
          v7 = v101;
          v6 = v97;
          v5 = v93;
          v13 = v90;
          v12 = v87;
        }
      }
      LODWORD(v4) = v17;
LABEL_155:
      if ( v11 )
      {
        cEntries = (int)v11[1].cEntries;
        if ( (int)cEntries < 0 )
        {
          if ( (_DWORD)cEntries == -1 )
            FreeThreadBufferWithTag(v11);
        }
        else
        {
          _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
        }
      }
    }
    else
    {
      LODWORD(v4) = 0;
    }
  }
LABEL_166:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v111);
  DCOBJ::~DCOBJ((DCOBJ *)v114);
  if ( v103 )
  {
    if ( v103 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v103);
    }
    else
    {
      GreAcquireHmgrSemaphore(v103, v75, v76, v77);
      v78 = v103;
      DEC_SHARE_REF_CNT(v103);
      v14 = (*((_DWORD *)v78 + 42))-- == 1;
      if ( v14 )
      {
        if ( (*(_DWORD *)v78 & 0x800000) != 0 )
        {
          v79 = *((_WORD *)v78 + 51);
          if ( (v79 & 0x400) != 0 )
          {
            v80 = *(_QWORD *)v78;
            *((_WORD *)v78 + 51) = v79 & 0xFBFF;
            GreMakeBitmapNonStock(v80);
          }
        }
        *((_QWORD *)v78 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
    v103 = 0LL;
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v102);
  DCOBJ::~DCOBJ((DCOBJ *)v104);
  return (unsigned int)v4;
}
