/*
 * XREFs of NtGdiExtFloodFill @ 0x1C0122B80
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0F0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008F380 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C008F8E0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008F930 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C008FAD8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C008FE1C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009C1AC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C611C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00C615C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C00FE8D8 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C011920C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C011C1DC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     EngPaint @ 0x1C011CCC0 (EngPaint.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C011D58C (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C01231E4 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C01232D0 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C01236D8 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C0123864 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C0123B68 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C0123C64 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0123EA4 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C0288D80 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  int v8; // r14d
  char v9; // r8
  DC *v10; // r9
  DC *v11; // rax
  __int64 v12; // rdx
  int v13; // ebx
  DYNAMICMODECHANGESHARELOCK *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // rbx
  __int64 v18; // rdi
  __int64 v19; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v21; // rdx
  ULONG v22; // r12d
  int v23; // ecx
  __int64 v24; // r8
  char *v25; // r13
  int v26; // ecx
  __int64 v27; // rcx
  void *v28; // r11
  struct _RECTL v29; // xmm6
  __int64 v30; // rcx
  int v31; // edi
  int v32; // edx
  LONG y; // ebx
  LONG x; // r10d
  __int64 v35; // rax
  unsigned __int8 *v36; // rsi
  int v37; // ecx
  unsigned int v38; // eax
  int v39; // r10d
  int v40; // r12d
  int v41; // r13d
  unsigned int v42; // ebx
  int v43; // r12d
  LONG v44; // r13d
  __int64 v45; // rsi
  BRUSHOBJ *v46; // rdi
  MIX v47; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v49; // rdx
  POINTL *v50; // r9
  __int64 v52; // rbx
  __int64 v53; // rdi
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  DCVISRGNSHARELOCK *v62; // rcx
  int v63; // eax
  bool v64; // zf
  int v65; // eax
  LONG left; // r10d
  LONG top; // r11d
  BOOL v68; // esi
  int v69; // r8d
  int v70; // r9d
  int v71; // eax
  SURFOBJ *v72; // rcx
  struct ECLIPOBJ *v73; // rdx
  int v74; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v75; // [rsp+70h] [rbp-98h] BYREF
  DC *v76[2]; // [rsp+78h] [rbp-90h] BYREF
  int v77[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _POINTL v78; // [rsp+90h] [rbp-78h] BYREF
  int v79; // [rsp+98h] [rbp-70h] BYREF
  struct REGION *v80[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v81; // [rsp+B0h] [rbp-58h]
  struct REGION *v82; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v83; // [rsp+C0h] [rbp-48h] BYREF
  int v84; // [rsp+C8h] [rbp-40h]
  int v85; // [rsp+CCh] [rbp-3Ch]
  struct REGION *v86[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v87; // [rsp+E0h] [rbp-28h] BYREF
  char v88; // [rsp+E8h] [rbp-20h]
  int v89; // [rsp+ECh] [rbp-1Ch]
  _BYTE v90[4]; // [rsp+F0h] [rbp-18h] BYREF
  int v91; // [rsp+F4h] [rbp-14h]
  __int64 v92; // [rsp+F8h] [rbp-10h]
  __int64 v93; // [rsp+110h] [rbp+8h]
  int v94; // [rsp+118h] [rbp+10h] BYREF
  struct _RECTL v95; // [rsp+11Ch] [rbp+14h]
  ULONG v96; // [rsp+12Ch] [rbp+24h]
  unsigned __int8 *v97; // [rsp+130h] [rbp+28h]
  int v98; // [rsp+138h] [rbp+30h]
  int v99; // [rsp+13Ch] [rbp+34h]
  _QWORD v100[4]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v101[4]; // [rsp+160h] [rbp+58h] BYREF
  int v102; // [rsp+164h] [rbp+5Ch]
  __int64 v103; // [rsp+168h] [rbp+60h]
  __int64 v104; // [rsp+180h] [rbp+78h]
  BRUSHOBJ *pbo; // [rsp+188h] [rbp+80h]
  _BYTE v106[24]; // [rsp+190h] [rbp+88h] BYREF
  BRUSHOBJ v107; // [rsp+1A8h] [rbp+A0h] BYREF
  int v108; // [rsp+1C0h] [rbp+B8h]
  int v109; // [rsp+1C4h] [rbp+BCh]
  __int64 v110; // [rsp+1C8h] [rbp+C0h]
  __int64 v111; // [rsp+1D0h] [rbp+C8h]
  __int64 v112; // [rsp+200h] [rbp+F8h]
  __int128 v113; // [rsp+208h] [rbp+100h]
  int v114; // [rsp+220h] [rbp+118h]
  _BYTE v115[32]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v116; // [rsp+258h] [rbp+150h]
  __int64 v117; // [rsp+260h] [rbp+158h]
  struct _RECTL v118; // [rsp+288h] [rbp+180h] BYREF
  __int64 v119; // [rsp+298h] [rbp+190h] BYREF
  int v120; // [rsp+2A0h] [rbp+198h]
  int v121; // [rsp+2A4h] [rbp+19Ch]
  CLIPOBJ pco; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v123; // [rsp+2F8h] [rbp+1F0h]
  int v124; // [rsp+300h] [rbp+1F8h]
  int v125; // [rsp+328h] [rbp+220h]
  __int64 v126; // [rsp+338h] [rbp+230h]

  v79 = a4;
  MDCOBJ::MDCOBJ((MDCOBJ *)v76, a1);
  v8 = 0;
  if ( !v76[0] || (*((_DWORD *)v76[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v10 = v76[0];
  }
  else
  {
    if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v76) )
    {
      DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v74);
      v11 = v76[0];
      v12 = *((_QWORD *)v76[0] + 10);
      v13 = *(_DWORD *)(v12 + 8);
      if ( (v13 & 0x1000) != 0 )
      {
        GreDCSelectBrush(v76[0], *(_QWORD *)(v12 + 16));
        v11 = v76[0];
      }
      if ( (v13 & 0x2000) != 0 )
      {
        GreDCSelectPen(v11, *(_QWORD *)(*((_QWORD *)v11 + 10) + 24LL));
        v11 = v76[0];
      }
      v14 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v11 + 63);
      if ( v14 && *((_WORD *)v14 + 50) == 3 )
      {
        NEEDGRELOCK::vLock((NEEDGRELOCK *)v80, (struct XDCOBJ *)v76);
        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v74);
        *(_QWORD *)v77 = ghsemSprite;
        GreAcquireSemaphore(ghsemSprite);
        GreAcquireHmgrSemaphore(v57, v56, v58, v59);
        bConvertDfbDcToDib((struct XDCOBJ *)v76);
        GreReleaseHmgrSemaphore(v61, v60);
        SEMOBJ::vUnlock((SEMOBJ *)v77);
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v62);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v80);
      }
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v14);
      v116 = 0LL;
      v117 = 0LL;
      DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v115, (struct XDCOBJ *)v76, 0);
      v15 = *((_QWORD *)v76[0] + 63);
      v75.x = a2;
      v75.y = a3;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v106, (struct XDCOBJ *)v76, 516);
      if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v106, &v75, 1LL) )
        goto LABEL_62;
      v16 = *(_QWORD *)(v15 + 48);
      v17 = *(_QWORD *)(v15 + 128);
      v18 = *((_QWORD *)v76[0] + 12);
      if ( (*(_DWORD *)(*((_QWORD *)v76[0] + 6) + 40LL) & 0x80u) != 0
        || (unsigned int)DC::bIsCMYKColor(v76[0])
        || (*(_DWORD *)(v19 + 128) & 2) != 0 )
      {
        EngSetLastError(0x57u);
        v42 = 0;
        goto LABEL_57;
      }
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(v17, v18, a4, 1LL);
      v21 = v76[0];
      v22 = NearestIndexFromColorref;
      v23 = *((_DWORD *)v76[0] + 32);
      if ( (v23 & 4) != 0 || (LODWORD(v81) = 0, (v23 & 1) != 0) )
        LODWORD(v81) = 2;
      v24 = *((_QWORD *)v76[0] + 10);
      v25 = (char *)v76[0] + 1592;
      pbo = (BRUSHOBJ *)((char *)v76[0] + 1592);
      v26 = *(_DWORD *)(v24 + 8);
      if ( (v26 & 1) != 0 || (*((_DWORD *)v76[0] + 81) & 1) != 0 )
      {
        *(_DWORD *)(v24 + 8) = v26 & 0xFFFFFFFE;
        *((_DWORD *)v76[0] + 81) &= ~1u;
        EBRUSHOBJ::vInitBrush((char *)v21 + 1592, v76[0], *((_QWORD *)v76[0] + 18), v18, v17, v15, 1);
        v21 = v76[0];
      }
      if ( (*((_DWORD *)v25 + 30) & 0x100) != 0 )
      {
        v42 = 1;
        goto LABEL_57;
      }
      if ( (v115[24] & 1) == 0 )
      {
        v42 = XDCOBJ::bFullScreen((XDCOBJ *)v76);
        goto LABEL_57;
      }
      v27 = *((_DWORD *)v21 + 10) & 1LL;
      v75.x += *((_DWORD *)v21 + 2 * v27 + 356);
      v75.y += *((_DWORD *)v21 + 2 * v27 + 357);
      v82 = XDCOBJ::prgnEffRao(v76);
      if ( RGNOBJ::bInside((RGNOBJ *)&v82, &v75) != 2 )
      {
LABEL_62:
        v42 = 0;
        goto LABEL_57;
      }
      memset(v100, 0, sizeof(v100));
      v87 = 0LL;
      v88 = 0;
      v89 = 0;
      *(_QWORD *)v77 = *(_QWORD *)(v15 + 48);
      PDEVOBJ::vSync((PDEVOBJ *)v77, (struct _SURFOBJ *)(v15 + 24), 0LL, 0);
      v28 = 0LL;
      LODWORD(v80[0]) = 0;
      v29 = *(struct _RECTL *)((char *)v82 + 88);
      v118 = v29;
      if ( !*(_WORD *)(v15 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v82) != 3 )
      {
        v30 = *(_QWORD *)(v15 + 80);
        v31 = *(_DWORD *)(v15 + 88);
        v32 = *(_DWORD *)(v15 + 96);
        y = v75.y;
        x = v75.x;
        goto LABEL_25;
      }
      LODWORD(v100[0]) = *(_DWORD *)(v15 + 96);
      v77[0] = v100[0];
      HIDWORD(v100[0]) = v118.right - v118.left;
      LODWORD(v100[1]) = v118.bottom - v118.top;
      v63 = 1;
      LODWORD(v100[3]) = 1;
      v100[2] = v28;
      if ( (*(_DWORD *)(v15 + 112) & 0x40000) != 0 )
        v63 = 262145;
      LODWORD(v100[3]) = v63;
      SURFMEM::bCreateDIB(
        (SURFMEM *)&v87,
        (struct _DEVBITMAPINFO *)v100,
        0LL,
        0LL,
        (unsigned int)v28,
        v28,
        (unsigned __int64)v28,
        (_DWORD)v28,
        1,
        (_DWORD)v28,
        (_DWORD)v28);
      if ( !v87 )
      {
        EngSetLastError(8u);
        goto LABEL_108;
      }
      v64 = (*(_DWORD *)(v15 + 112) & 0x400) == 0;
      v119 = 0LL;
      v120 = HIDWORD(v100[0]);
      v121 = v100[1];
      if ( v64 )
        v65 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))EngCopyBits)(
                v87 + 24,
                v15 + 24,
                0LL,
                xloIdent,
                &v119,
                &v118);
      else
        v65 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))(v16 + 2832))(
                v87 + 24,
                v15 + 24,
                0LL,
                xloIdent,
                &v119,
                &v118);
      left = v118.left;
      top = v118.top;
      v68 = v65;
      v69 = -v118.left;
      v70 = -v118.top;
      v78.x = -v118.left;
      v78.y = -v118.top;
      if ( !v65 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v82) != 3 )
      {
        v118.right += v69;
        v118.left = v69 + left;
        v118.bottom += v70;
        v118.top = v70 + top;
LABEL_101:
        if ( v68 )
        {
          x = v69 + v75.x;
          v29 = v118;
          v32 = v77[0];
          y = v70 + v75.y;
          v75.x += v69;
          v78.y = -v70;
          v75.y += v70;
          v78.x = -v69;
          v31 = *(_DWORD *)(v87 + 88);
          v30 = *(_QWORD *)(v87 + 80);
          LODWORD(v80[0]) = 1;
LABEL_25:
          v99 = -1;
          v81 = v30;
          v94 = v32;
          v95 = v29;
          v96 = v22;
          v35 = *(_QWORD *)(v15 + 128);
          v36 = (unsigned __int8 *)(v30 + y * v31);
          v98 = a5;
          v97 = v36;
          if ( v35 )
          {
            v37 = *(_DWORD *)(v35 + 24);
            if ( (v37 & 0xC) != 0 )
            {
              v99 = 0xFFFFFF;
            }
            else if ( (v37 & 2) != 0 )
            {
              v99 = **(_DWORD **)(v35 + 112) | *(_DWORD *)(*(_QWORD *)(v35 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v35 + 112) + 8LL);
            }
          }
          v38 = FLOODBM::iColorGet((FLOODBM *)&v94, x);
          if ( !a5 && v38 == v22 || v38 != v22 && a5 == 1 )
            goto LABEL_108;
          FLOODBM::vFindExtent((FLOODBM *)&v94, v39, &v79, v77);
          v40 = v77[0];
          v41 = v79;
          STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v101, 0x1B8u, 1u, y, v79, v77[0]);
          v42 = 0;
          if ( !v104 )
          {
            EngSetLastError(8u);
            goto LABEL_55;
          }
          STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v90, 0xF8u, 0, v75.y, v41, v40);
          if ( !v93 )
          {
            EngSetLastError(8u);
            goto LABEL_54;
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v86, 0x1348u);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v86);
          if ( v86[0] )
          {
            v42 = 1;
            v43 = v118.bottom - 1;
            v44 = v118.top;
            if ( v75.y >= v118.bottom - 1 )
            {
              v91 -= *(_DWORD *)(v92 + 8);
              v92 = *(_QWORD *)(v92 + 16);
            }
            else
            {
              v42 = FLOODBM::bExtendScanline(
                      (FLOODBM *)&v94,
                      (struct STACKOBJ *)v90,
                      (struct STACKOBJ *)v101,
                      v75.y + 1,
                      v36,
                      &v36[v31]) & 1;
            }
            if ( !v42 )
            {
LABEL_119:
              EngSetLastError(8u);
              goto LABEL_53;
            }
            v45 = v81;
            do
            {
              while ( 1 )
              {
                while ( v91 )
                {
                  if ( !RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v86, (struct STACKOBJ *)v90) )
                    goto LABEL_118;
                  if ( *(_DWORD *)v92 >= v43 )
                  {
                    v91 -= *(_DWORD *)(v92 + 8);
                    v92 = *(_QWORD *)(v92 + 16);
                  }
                  else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                             (FLOODBM *)&v94,
                                             (struct STACKOBJ *)v90,
                                             (struct STACKOBJ *)v101,
                                             *(_DWORD *)v92 + 1,
                                             (unsigned __int8 *)(v45 + v31 * *(_DWORD *)v92),
                                             (unsigned __int8 *)(v45 + v31 * *(_DWORD *)v92 + v31)) )
                  {
LABEL_118:
                    v42 = 0;
                    goto LABEL_119;
                  }
                }
                if ( !v102 )
                  goto LABEL_46;
                v42 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v86, (struct STACKOBJ *)v101);
                if ( *(_DWORD *)v103 > v44 )
                  break;
                v102 -= *(_DWORD *)(v103 + 8);
                v103 = *(_QWORD *)(v103 + 16);
              }
            }
            while ( (unsigned int)FLOODBM::bExtendScanline(
                                    (FLOODBM *)&v94,
                                    (struct STACKOBJ *)v101,
                                    (struct STACKOBJ *)v90,
                                    *(_DWORD *)v103 - 1,
                                    (unsigned __int8 *)(v45 + v31 * *(_DWORD *)v103),
                                    (unsigned __int8 *)(v45 + v31 * *(_DWORD *)v103 - v31)) );
            v42 = 0;
LABEL_46:
            if ( !v42 )
              goto LABEL_119;
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v86) != 1 )
            {
              if ( LODWORD(v80[0])
                && (!RGNOBJ::bOffset((RGNOBJ *)v86, &v78) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v118, &v78, 1)) )
              {
                goto LABEL_117;
              }
              v46 = pbo;
              v47 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)pbo,
                      *(_BYTE *)(*((_QWORD *)v76[0] + 10) + 72LL),
                      *(_BYTE *)(*((_QWORD *)v76[0] + 10) + 73LL));
              ++*(_DWORD *)(v15 + 92);
              v123 = 0LL;
              mix = v47;
              v124 = 0;
              v125 = 1;
              v126 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v86[0], (struct ERECTL *)&v118, 0);
              v50 = (POINTL *)v76[0];
              if ( (*((_DWORD *)v76[0] + 9) & 0xE0) != 0 )
              {
                XDCOBJ::vAccumulate((XDCOBJ *)v76, v49, (__m128i *)&v118);
                XDCOBJ::vAccumulateTight((struct _RECTL **)v76, v73, (__m128i *)&v118);
                v50 = (POINTL *)v76[0];
              }
              v42 = EngPaint((SURFOBJ *)(v15 + 24), &pco, v46, v50 + 198, mix);
            }
            if ( !v42 )
              goto LABEL_119;
            goto LABEL_53;
          }
          EngSetLastError(8u);
LABEL_117:
          v42 = 0;
LABEL_53:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v86);
LABEL_54:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v90);
LABEL_55:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v101);
LABEL_56:
          SURFMEM::~SURFMEM((SURFMEM *)&v87);
LABEL_57:
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v115);
          v10 = v76[0];
          goto LABEL_58;
        }
LABEL_108:
        v42 = 0;
        goto LABEL_56;
      }
      v68 = 0;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v83);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v83);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v80);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v80);
      if ( !v83
        || !v80[0]
        || (RGNOBJ::vSet((RGNOBJ *)&v83, &v118),
            !RGNOBJ::bMerge((RGNOBJ *)v80, (struct RGNOBJ *)&v83, (struct RGNOBJ *)&v82, BYTE4(gafjRgnOp))) )
      {
LABEL_98:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v80);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
        v70 = v78.y;
        v69 = v78.x;
        goto LABEL_101;
      }
      if ( !RGNOBJ::bOffset((RGNOBJ *)v80, &v78) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v118, &v78, 1) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v80);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
        goto LABEL_108;
      }
      v123 = 0LL;
      v124 = 0;
      v125 = 1;
      v126 = 0LL;
      XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v80[0], (struct ERECTL *)&v118, 0);
      v109 = -1;
      v107.flColorType = v81;
      v113 = 0LL;
      v112 = 0LL;
      v107.pvRbrush = 0LL;
      v110 = 0LL;
      v111 = 0LL;
      v114 = 0;
      if ( a5 )
      {
        v107.iSolidColor = (v22 & 1) == 0;
        if ( gbMultiMonMismatchColor )
        {
          v71 = ulIndexToRGB(v17, v18, (v22 & 1) == 0);
          goto LABEL_94;
        }
      }
      else
      {
        v107.iSolidColor = v22;
        if ( gbMultiMonMismatchColor )
        {
          v71 = v79;
LABEL_94:
          v109 = v71;
          v108 = v71;
        }
      }
      v72 = 0LL;
      if ( v87 )
        v72 = (SURFOBJ *)(v87 + 24);
      v68 = EngPaint(v72, &pco, &v107, 0LL, 0xD0Du);
      EBRUSHOBJ::vDelete((EBRUSHOBJ *)&v107);
      goto LABEL_98;
    }
    if ( (v9 & 0xE0) != 0 )
    {
      v52 = *((_QWORD *)v10 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v52 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v52 + 48), 11LL);
      v53 = *(_QWORD *)(v52 + 2544);
      if ( v53 )
        v54 = *(_QWORD *)(v53 + 56);
      else
        v54 = *((_QWORD *)v76[0] + 65);
      v55 = *(_QWORD *)(v52 + 48);
      *(_QWORD *)v77 = v54;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v55);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v52 + 48));
      v85 = v77[1];
      v83 = 0LL;
      v84 = v54;
      XDCOBJ::vAccumulate((XDCOBJ *)v76, (struct ERECTL *)&v83);
      v10 = v76[0];
    }
    v8 = 1;
  }
  v42 = v8;
LABEL_58:
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v76);
  return v42;
}
