/*
 * XREFs of GreDrawStream @ 0x1C00BA5C0
 * Callers:
 *     NtGdiDrawStream @ 0x1C00BC810 (NtGdiDrawStream.c)
 * Callees:
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C00A22B4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00AD000 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B5580 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@4JPEADPEAU_DRAWSTREAMINFO@@@Z @ 0x1C00BC0E0 (-NtGdiDrawStreamInternal@@YAHAEAVXDCOBJ@@AEAVEXFORMOBJ@@PEAVSURFACE@@PEAU_XLATEOBJ@@PEAU_RECTL@@.c)
 *     bCvtPts1 @ 0x1C00BC6A0 (bCvtPts1.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00C06B0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z @ 0x1C00D0344 (-vAddToCache@EXLATEOBJ@@QEAAXVXEPALOBJ@@000@Z.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00D04D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00FDDA0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269334 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1C027911C (-vDec_cRef@SURFACE@@QEAAXXZ.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0279180 (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreDrawStream(__int64 a1, unsigned int a2, _DWORD *a3)
{
  SURFACE *v4; // r15
  __int64 v5; // rsi
  struct PALETTE *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r14
  unsigned int v10; // ecx
  __int64 v11; // rdx
  bool v12; // zf
  _DWORD *v13; // rsi
  char *v14; // rbx
  char *v15; // rcx
  int v16; // ecx
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // rax
  int v20; // edx
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v23; // esi
  __int64 v24; // rax
  unsigned int v25; // r10d
  int v26; // eax
  int v27; // r11d
  int v28; // r8d
  int v29; // eax
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  int v33; // ecx
  int v34; // r10d
  int v35; // eax
  int v36; // r9d
  int v37; // r8d
  int v38; // eax
  LONG *v39; // rdx
  unsigned int v40; // eax
  XLATEOBJ *XlateObject; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  struct _DC_ATTR *UserAttr; // rax
  int v45; // ebx
  char *v46; // rcx
  int v47; // eax
  LONG left; // r8d
  LONG top; // r10d
  LONG right; // edx
  LONG bottom; // r9d
  __int64 *v52; // rax
  __int64 v53; // rbx
  __int64 v54; // rdi
  struct _DC_ATTR *v55; // rax
  __int64 v56; // rbx
  __int64 cEntries; // rcx
  __int16 v58; // cx
  struct PALETTE *v60; // rbx
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned int v65; // eax
  __int64 v66; // r8
  __int64 v67; // r9
  unsigned int v68; // eax
  __int64 v69; // r8
  __int64 v70; // r9
  XLATEOBJ *v71; // rdx
  int v72; // r11d
  unsigned int v73; // eax
  int v74; // ebx
  int v75[2]; // [rsp+30h] [rbp-D0h]
  char *v76; // [rsp+38h] [rbp-C8h]
  struct _DRAWSTREAMINFO *v77; // [rsp+40h] [rbp-C0h]
  __int64 v78; // [rsp+48h] [rbp-B8h]
  unsigned int v80; // [rsp+64h] [rbp-9Ch]
  DC *v81; // [rsp+68h] [rbp-98h] BYREF
  __int64 v82; // [rsp+70h] [rbp-90h]
  char *v83; // [rsp+78h] [rbp-88h]
  int v84; // [rsp+80h] [rbp-80h]
  unsigned int v85; // [rsp+84h] [rbp-7Ch]
  _DWORD *v86; // [rsp+88h] [rbp-78h]
  __int64 v87; // [rsp+90h] [rbp-70h] BYREF
  __int64 v88; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v89; // [rsp+A0h] [rbp-60h]
  __int64 v90; // [rsp+A8h] [rbp-58h] BYREF
  XLATEOBJ *v91; // [rsp+B0h] [rbp-50h] BYREF
  int v92; // [rsp+B8h] [rbp-48h]
  int v93; // [rsp+BCh] [rbp-44h]
  int v94; // [rsp+C0h] [rbp-40h] BYREF
  struct _XLATEOBJ *v95; // [rsp+C8h] [rbp-38h]
  struct SURFACE *v96; // [rsp+D0h] [rbp-30h]
  char *v97; // [rsp+D8h] [rbp-28h] BYREF
  int v98; // [rsp+E0h] [rbp-20h]
  int v99; // [rsp+E4h] [rbp-1Ch]
  _QWORD v100[2]; // [rsp+E8h] [rbp-18h] BYREF
  SURFACE *v101; // [rsp+F8h] [rbp-8h]
  struct PALETTE *v102; // [rsp+100h] [rbp+0h]
  __int64 v103; // [rsp+108h] [rbp+8h] BYREF
  __int64 v104; // [rsp+110h] [rbp+10h] BYREF
  struct PALETTE *v105; // [rsp+118h] [rbp+18h] BYREF
  __int64 i; // [rsp+120h] [rbp+20h]
  __int64 v107; // [rsp+128h] [rbp+28h] BYREF
  __int64 v108; // [rsp+130h] [rbp+30h]
  struct PALETTE *v109; // [rsp+138h] [rbp+38h]
  __int128 v110; // [rsp+140h] [rbp+40h] BYREF
  __int64 v111; // [rsp+150h] [rbp+50h]
  int v112; // [rsp+158h] [rbp+58h]
  _QWORD v113[2]; // [rsp+160h] [rbp+60h] BYREF
  __int16 v114; // [rsp+170h] [rbp+70h]
  __int64 v115; // [rsp+178h] [rbp+78h]
  __int64 v116; // [rsp+180h] [rbp+80h]
  __int64 v117; // [rsp+188h] [rbp+88h]
  _QWORD v118[10]; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v119; // [rsp+1E0h] [rbp+E0h] BYREF
  struct _RECTL v120; // [rsp+1F0h] [rbp+F0h] BYREF

  v108 = a1;
  v81 = 0LL;
  v4 = 0LL;
  v82 = 0LL;
  LODWORD(v5) = 0;
  v100[0] = 0LL;
  v6 = 0LL;
  v100[1] = 0LL;
  v97 = 0LL;
  v7 = 0LL;
  v99 = 0;
  v8 = 0LL;
  v113[1] = 0LL;
  v9 = 0LL;
  v101 = 0LL;
  v96 = 0LL;
  v102 = 0LL;
  v95 = 0LL;
  v91 = 0LL;
  v84 = 0;
  v83 = 0LL;
  v114 = 256;
  v109 = gppalRGB;
  memset(v118, 0, 0x48uLL);
  v10 = a2;
  v11 = 0LL;
  v85 = 0;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0;
  v113[0] = 0LL;
  v117 = 0LL;
  v116 = 0LL;
  v115 = 0LL;
  if ( a2 >= 4 )
  {
    v12 = *a3 == 1148352339;
    v13 = a3 + 1;
    v86 = a3 + 1;
    if ( v12 )
    {
      v80 = a2 - 4;
      if ( v10 - 4 >= 4 )
      {
        v14 = 0LL;
        while ( 1 )
        {
          if ( !*v13 )
          {
            v15 = v83;
            if ( v83 )
            {
LABEL_201:
              v40 = v80;
LABEL_109:
              if ( v81 && v96 )
              {
                v53 = 0LL;
                v118[0] = 72LL;
                v5 = 0LL;
                v90 = 0LL;
                v54 = 0LL;
                v87 = 0LL;
                v88 = 0LL;
                v118[1] = 33488896LL;
                v118[2] = 0LL;
                if ( v84 )
                {
                  if ( (unsigned int)(*((_DWORD *)v101 + 24) - 1) <= 2 )
                    goto LABEL_205;
                  v60 = v109;
                  if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                        &v87,
                                        0LL,
                                        0,
                                        v9,
                                        (__int64)v109,
                                        (__int64)v102,
                                        (__int64)v102,
                                        0,
                                        0,
                                        0,
                                        0) )
                  {
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v90);
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v88);
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v87);
                    goto LABEL_120;
                  }
                  v5 = v87;
                  v118[4] = v87;
                  if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v88, 0LL, 0, v7, (__int64)v60, v8, v8, 0, 0, 0, 0) )
                  {
LABEL_205:
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v90);
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v88);
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v87);
                    LODWORD(v5) = 0;
                    goto LABEL_120;
                  }
                  v54 = v88;
                  v118[5] = v88;
                  if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v90, 0LL, 0, (__int64)v60, v7, v8, v8, 0, 0, 0, 0) )
                  {
LABEL_161:
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v90);
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v88);
                    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v87);
LABEL_162:
                    LODWORD(v5) = 0;
                    goto LABEL_120;
                  }
                  v53 = v90;
                  v15 = v83;
                }
                else
                {
                  v118[5] = 0LL;
                  v118[4] = 0LL;
                }
                v118[6] = v53;
                if ( !NtGdiDrawStreamInternal(
                        (struct XDCOBJ *)&v81,
                        (struct EXFORMOBJ *)&v97,
                        v96,
                        v95,
                        &v119,
                        &v120,
                        (_DWORD)v86 - (_DWORD)v15,
                        v15,
                        (struct _DRAWSTREAMINFO *)v118) )
                  goto LABEL_161;
                v83 = 0LL;
                v84 = 0;
                if ( v53 )
                {
                  v61 = *(int *)(v53 + 36);
                  if ( (int)v61 >= 0 )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v61);
                    v5 = v87;
                    v54 = v88;
                  }
                  else if ( (_DWORD)v61 == -1 )
                  {
                    FreeThreadBufferWithTag(v53);
                  }
                }
                if ( v54 )
                {
                  v62 = *(int *)(v54 + 36);
                  if ( (int)v62 >= 0 )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v62);
                    v5 = v87;
                  }
                  else if ( (_DWORD)v62 == -1 )
                  {
                    FreeThreadBufferWithTag(v54);
                  }
                }
                if ( v5 )
                {
                  v63 = *(int *)(v5 + 36);
                  if ( (int)v63 >= 0 )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * v63);
                  }
                  else if ( (_DWORD)v63 == -1 )
                  {
                    FreeThreadBufferWithTag(v5);
                  }
                }
                v13 = v86;
                v40 = v80;
              }
              goto LABEL_118;
            }
            if ( (_DWORD)v11 == 1 )
              DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)&v110);
            if ( v81 )
              XDCOBJ::vUnlockFast((XDCOBJ *)&v81);
            v81 = 0LL;
            if ( v4 )
            {
              if ( v4 == SURFACE::pdibDefault )
              {
                DEC_SHARE_REF_CNT(v4);
              }
              else
              {
                GreAcquireHmgrSemaphore();
                SURFACE::vDec_cRef(v4);
                GreReleaseHmgrSemaphore();
              }
              v4 = 0LL;
            }
            v89 = 24;
            if ( v80 < 0x18 )
              goto LABEL_162;
            v42 = (int)v13[1];
            if ( v42 != v108 )
              goto LABEL_162;
            LOBYTE(v11) = 1;
            v43 = HmgLockEx(v42, v11, HIDWORD(v82));
            v81 = (DC *)v43;
            if ( v43 )
            {
              if ( HIDWORD(v82) )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(v43 + 48) + 40LL) & 0x8000) == 0
                  || (v74 = *(_DWORD *)(v43 + 2096), v74 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
                {
LABEL_195:
                  _InterlockedDecrement((volatile signed __int32 *)v81 + 3);
                  v81 = 0LL;
                  goto LABEL_162;
                }
              }
              if ( (*((_DWORD *)v81 + 11) & 2) == 0 )
              {
                if ( !HIDWORD(v82) )
                {
                  UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v81);
                  if ( UserAttr )
                  {
                    if ( !DC::SaveAttributes(v81, UserAttr) )
                      goto LABEL_195;
                  }
                }
                *((_DWORD *)v81 + 11) |= 2u;
                LODWORD(v82) = 1;
              }
              if ( (*((_DWORD *)v81 + 130) & 4) != 0 )
                DC::vMarkTransformDirty(v81);
            }
            else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
            {
              PsGetWin32KFilterSet();
            }
            if ( !v81
              || (*((_DWORD *)v81 + 9) & 0x10000) != 0
              || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v110, (struct XDCOBJ *)&v81, 0) )
            {
              goto LABEL_162;
            }
            v98 = *(_DWORD *)(*((_QWORD *)v81 + 122) + 208LL);
            v45 = *(_DWORD *)(*((_QWORD *)v81 + 122) + 108LL) & 1;
            v99 = v45;
            if ( (*(_DWORD *)(*((_QWORD *)v81 + 122) + 340LL) & 0x1E000) != 0 )
            {
              EXFORMOBJ::vInit((EXFORMOBJ *)&v97, (struct XDCOBJ *)&v81, 0x204u, 0);
              v46 = v97;
              v45 = v99;
            }
            else
            {
              v46 = (char *)v81 + 320;
              v97 = (char *)v81 + 320;
            }
            v47 = *((_DWORD *)v46 + 8);
            if ( (v47 & 1) == 0 )
              goto LABEL_162;
            left = v13[2];
            top = v13[3];
            right = v13[4];
            bottom = v13[5];
            v119.left = left;
            v119.top = top;
            v119.right = right;
            v119.bottom = bottom;
            if ( (v47 & 0x43) != 0x43 )
            {
              bCvtPts1(v46, &v119, 2LL);
              bottom = v119.bottom;
              right = v119.right;
              top = v119.top;
              left = v119.left;
            }
            if ( v45 )
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
            if ( (*((_DWORD *)v81 + 9) & 0xE0) != 0 )
              XDCOBJ::vAccumulate((XDCOBJ *)&v81, (struct ERECTL *)&v119);
            v52 = (__int64 *)*((_QWORD *)v81 + 62);
            v101 = (SURFACE *)v52;
            if ( !v52 )
              goto LABEL_162;
            v7 = v52[16];
            v8 = *((_QWORD *)v81 + 11);
            if ( v9 )
            {
              if ( (*(_DWORD *)(v9 + 24) & 0x2000) != 0 )
                goto LABEL_162;
            }
            v85 = 1;
            goto LABEL_60;
          }
          if ( *v13 == 1 )
            break;
          if ( *v13 != 9 )
            goto LABEL_162;
          v89 = 60;
          if ( v80 < 0x3C )
            goto LABEL_162;
          v27 = v13[9];
          if ( (v27 & 0xFFFFFF80) != 0 )
            goto LABEL_162;
          if ( !v96 )
            goto LABEL_162;
          v28 = v13[5];
          if ( v28 < 0 )
            goto LABEL_162;
          v29 = v13[6];
          if ( v29 < 0 )
            goto LABEL_162;
          v30 = v13[7];
          if ( v30 > *((_DWORD *)v96 + 14) )
            goto LABEL_162;
          v31 = v13[8];
          if ( v31 > *((_DWORD *)v96 + 15) )
            goto LABEL_162;
          v32 = v30 - v28;
          v33 = v31 - v29;
          if ( v32 <= 0 )
            goto LABEL_162;
          if ( v33 <= 0 )
            goto LABEL_162;
          if ( (v27 & 0x20) == 0 )
          {
            v34 = v13[10];
            if ( v34 < 0 )
              goto LABEL_162;
            v35 = v13[11];
            if ( v35 < 0 )
              goto LABEL_162;
            v36 = v13[12];
            if ( v36 < 0 )
              goto LABEL_162;
            v37 = v13[13];
            if ( v37 < 0 || v34 > v32 || v35 > v32 || v36 > v33 || v37 > v33 || v34 + v35 > v32 || v37 + v36 > v33 )
              goto LABEL_162;
          }
          if ( (v27 & 0xC) == 0xC )
            goto LABEL_162;
          if ( (v27 & 8) != 0 )
          {
            v13[14] = ulGetNearestIndexFromColorref(v9, v6, (unsigned int)v13[14], 1LL);
          }
          else
          {
            v38 = v84;
            if ( (v27 & 4) != 0 )
              v38 = 1;
            v84 = v38;
          }
          v39 = v13 + 1;
          if ( !v14 )
          {
            v120.left = *v39;
            v120.top = v13[2];
            v120.right = v13[3];
            v120.bottom = v13[4];
            v83 = (char *)v13;
LABEL_60:
            v14 = v83;
            goto LABEL_61;
          }
          ERECTL::operator+=(&v120, v39);
LABEL_61:
          v80 -= v89;
          v13 += (unsigned __int64)v89 >> 2;
          v40 = v80;
          v86 = v13;
          if ( v80 )
            goto LABEL_62;
          v15 = v83;
          if ( v83 )
            goto LABEL_109;
LABEL_118:
          v14 = v83;
LABEL_62:
          if ( v40 < 4 )
            goto LABEL_119;
          v6 = v102;
          v11 = v85;
        }
        v15 = v83;
        if ( v83 )
          goto LABEL_201;
        if ( v100[0] )
        {
          XDCOBJ::vUnlockFast((XDCOBJ *)v100);
          v11 = v85;
        }
        v100[0] = 0LL;
        if ( v4 )
        {
          if ( v4 == SURFACE::pdibDefault )
          {
            DEC_SHARE_REF_CNT(v4);
          }
          else
          {
            GreAcquireHmgrSemaphore();
            SURFACE::vDec_cRef(v4);
            GreReleaseHmgrSemaphore();
          }
          v11 = v85;
          v4 = 0LL;
        }
        v89 = 8;
        if ( v80 < 8 )
          goto LABEL_162;
        if ( !(_DWORD)v11 )
          goto LABEL_162;
        LOBYTE(v11) = 5;
        v4 = (SURFACE *)HmgShareLockCheck((int)v13[1], v11);
        if ( !v4 )
          goto LABEL_162;
        if ( v4 != SURFACE::pdibDefault )
        {
          GreAcquireHmgrSemaphore();
          INC_SHARE_REF_CNT(v4);
          ++*((_DWORD *)v4 + 42);
          DEC_SHARE_REF_CNT(v4);
          GreReleaseHmgrSemaphore();
        }
        v9 = *((_QWORD *)v4 + 16);
        v96 = v4;
        v102 = ppalDefault;
        if ( !v9 )
          goto LABEL_162;
        v16 = *(_DWORD *)(v9 + 24);
        if ( (v16 & 0x2000) != 0 || v4 == v101 || *((_DWORD *)v4 + 24) != 6 )
          goto LABEL_162;
        v17 = *((_QWORD *)v81 + 122);
        v18 = *(_DWORD *)(v17 + 176);
        v93 = *(_DWORD *)(v17 + 184);
        LODWORD(v95) = *((_DWORD *)v81 + 30);
        v92 = v18;
        if ( v7 )
        {
          v19 = *(_QWORD *)(v9 + 120);
          if ( v19 == v9 )
            v20 = *(_DWORD *)(v9 + 32);
          else
            v20 = *(_DWORD *)(v19 + 32);
          v21 = *(_QWORD *)(v7 + 120);
          if ( v21 == v7 )
            v22 = *(_DWORD *)(v7 + 32);
          else
            v22 = *(_DWORD *)(v21 + 32);
          if ( v20 != v22 )
          {
            v23 = *(_DWORD *)(v9 + 56);
            v104 = v8;
            v105 = ppalDefault;
            v103 = v7;
            v107 = ghsemPalette;
            GreAcquireSemaphore(ghsemPalette);
            v24 = *(_QWORD *)(v9 + 120);
            v25 = 0;
            for ( i = v24; ; v24 = i )
            {
              if ( v24 == v9 )
                v26 = *(_DWORD *)(v9 + 32);
              else
                v26 = *(_DWORD *)(v24 + 32);
              if ( *((_DWORD *)&xlateTable + 8 * v23 + 4) == v26 )
              {
                v65 = XEPALOBJ::ulTime((XEPALOBJ *)&v103);
                if ( *(_DWORD *)(v66 + v67 + 20) == v65 )
                {
                  v68 = XEPALOBJ::ulTime((XEPALOBJ *)&v104);
                  if ( *(_DWORD *)(v69 + v70 + 28) == v68 )
                  {
                    v71 = *(XLATEOBJ **)(v69 + v70 + 8);
                    v91 = v71;
                    if ( (v71[3].flXlate & 0x6000) == 0 )
                    {
                      if ( (v71->flXlate & 4) == 0 && (v71[3].flXlate & 0x100) == 0
                        || (v72 = v71[3].flXlate & 0x100, (v71->flXlate & 4) != 0)
                        && !v71[1].iUniq
                        && (v73 = XEPALOBJ::ulTime((XEPALOBJ *)&v105), *(_DWORD *)(v69 + v70 + 24) == v73)
                        || v72 && v93 == v71[1].flXlate && v92 == *(_DWORD *)&v71[1].iSrcType )
                      {
                        _InterlockedIncrement((volatile signed __int32 *)(v69 + v70));
                        *(_DWORD *)(v9 + 56) = v23;
                        SEMOBJ::vUnlock((SEMOBJ *)&v107);
                        v13 = v86;
                        goto LABEL_71;
                      }
                    }
                  }
                }
              }
              ++v25;
              v23 = ((_BYTE)v23 + 1) & 7;
              if ( v25 >= 8 )
                break;
            }
            if ( ghsemPalette )
            {
              EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemPalette);
              GreReleaseSemaphoreInternal(ghsemPalette);
            }
            v13 = v86;
            goto LABEL_67;
          }
        }
        else if ( (v16 & 0x800) == 0 || (v64 = *(_QWORD *)(v8 + 80)) != 0 && v64 != *(_QWORD *)(v8 + 72) )
        {
LABEL_67:
          LODWORD(v78) = 0;
          LODWORD(v77) = 0;
          LODWORD(v76) = v92;
          v75[0] = v93;
          XlateObject = (XLATEOBJ *)CreateXlateObject(
                                      0LL,
                                      (int)v95,
                                      v9,
                                      v7,
                                      ppalDefault,
                                      v8,
                                      *(_QWORD *)v75,
                                      v76,
                                      v77,
                                      v78);
          v91 = XlateObject;
          if ( !XlateObject )
            goto LABEL_162;
          if ( v7 && (XlateObject[3].flXlate & 0x200) == 0 )
            EXLATEOBJ::vAddToCache(&v91, v9, v7, ppalDefault, v8);
          goto LABEL_71;
        }
        v91 = xloIdent;
LABEL_71:
        v95 = v91;
        goto LABEL_60;
      }
LABEL_119:
      LODWORD(v5) = 1;
LABEL_120:
      if ( v81 )
      {
        if ( (_DWORD)v82 && (*((_DWORD *)v81 + 11) & 2) != 0 )
        {
          if ( !HIDWORD(v82) )
          {
            v55 = XDCOBJ::GetUserAttr((XDCOBJ *)&v81);
            if ( v55 )
              DC::RestoreAttributes(v81, v55);
          }
          *((_DWORD *)v81 + 11) &= ~2u;
          LODWORD(v82) = 0;
        }
        v94 = 0;
        v56 = *(_QWORD *)v81;
        HmgDecrementExclusiveReferenceCountEx(v81, HIDWORD(v82), &v94);
        if ( v94 )
          bDeleteDCInternalEx(v56, 0LL);
      }
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  v81 = 0LL;
  if ( v100[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v100);
  v100[0] = 0LL;
  if ( v91 )
  {
    cEntries = (int)v91[1].cEntries;
    if ( (int)cEntries >= 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)&xlateTable + 8 * cEntries);
    }
    else if ( (_DWORD)cEntries == -1 )
    {
      FreeThreadBufferWithTag(v91);
    }
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v110);
  if ( v113[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v113);
  if ( v4 )
  {
    if ( v4 == SURFACE::pdibDefault )
    {
      DEC_SHARE_REF_CNT(v4);
    }
    else
    {
      GreAcquireHmgrSemaphore();
      DEC_SHARE_REF_CNT(v4);
      v12 = (*((_DWORD *)v4 + 42))-- == 1;
      if ( v12 )
      {
        if ( (*(_DWORD *)v4 & 0x800000) != 0 )
        {
          v58 = *((_WORD *)v4 + 51);
          if ( (v58 & 0x400) != 0 )
          {
            *((_WORD *)v4 + 51) = v58 & 0xFBFF;
            GreMakeBitmapNonStock(*(_QWORD *)v4);
          }
        }
        *((_QWORD *)v4 + 20) = 0LL;
      }
      GreReleaseHmgrSemaphore();
    }
  }
  return (unsigned int)v5;
}
