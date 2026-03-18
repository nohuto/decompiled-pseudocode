/*
 * XREFs of NtGdiExtFloodFill @ 0x1C02B25B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BB8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0036028 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C005A43C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C005A464 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00610E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0063160 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C006369C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00636E0 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0072B7C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0072EC4 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0075C14 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C0076B94 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C00803AC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EE7C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00FB020 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0102880 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0107FBC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngPaint @ 0x1C01477A0 (EngPaint.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0147F50 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0156F98 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C02B1788 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C02B1884 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C02B1A4C (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C02B1CA8 (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C02B234C (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C02B240C (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C02B32A0 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  DC *v8; // rbx
  char v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  int v14; // r14d
  DC *v15; // rax
  __int64 v16; // rdx
  int v17; // ebx
  DYNAMICMODECHANGESHARELOCK *v18; // rcx
  DCVISRGNSHARELOCK *v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v26; // rcx
  ULONG v27; // r12d
  int v28; // edx
  __int64 v29; // r8
  char *v30; // r13
  int v31; // edx
  unsigned int v32; // ebx
  bool v33; // zf
  _DWORD *v34; // rax
  _DWORD *v35; // rcx
  void *v36; // r11
  struct _RECTL v37; // xmm6
  __int64 v38; // rcx
  int v39; // edi
  int v40; // edx
  LONG y; // ebx
  LONG x; // r10d
  int v43; // eax
  int v44; // eax
  LONG left; // r10d
  LONG top; // r11d
  BOOL v47; // esi
  int v48; // r8d
  int v49; // r9d
  int v50; // eax
  SURFOBJ *v51; // rcx
  __int64 v52; // rax
  unsigned __int8 *v53; // rsi
  int v54; // ecx
  int v55; // eax
  int v56; // r10d
  int v57; // r12d
  int v58; // r13d
  int v59; // r12d
  LONG v60; // r13d
  __int64 v61; // rsi
  BRUSHOBJ *v62; // rdi
  MIX v63; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v65; // rdx
  POINTL *v66; // r9
  struct ECLIPOBJ *v67; // rdx
  int v69; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v70; // [rsp+70h] [rbp-98h] BYREF
  DC *v71[2]; // [rsp+78h] [rbp-90h] BYREF
  int v72[2]; // [rsp+88h] [rbp-80h] BYREF
  struct _POINTL v73; // [rsp+90h] [rbp-78h] BYREF
  int v74; // [rsp+98h] [rbp-70h] BYREF
  struct REGION *v75[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v76; // [rsp+B0h] [rbp-58h]
  struct REGION *v77; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-48h] BYREF
  int v79; // [rsp+C8h] [rbp-40h]
  int v80; // [rsp+CCh] [rbp-3Ch]
  struct REGION *v81[2]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-28h] BYREF
  char v83; // [rsp+E8h] [rbp-20h]
  int v84; // [rsp+ECh] [rbp-1Ch]
  _BYTE v85[4]; // [rsp+F0h] [rbp-18h] BYREF
  int v86; // [rsp+F4h] [rbp-14h]
  __int64 v87; // [rsp+F8h] [rbp-10h]
  __int64 v88; // [rsp+110h] [rbp+8h]
  int v89; // [rsp+118h] [rbp+10h] BYREF
  struct _RECTL v90; // [rsp+11Ch] [rbp+14h]
  ULONG v91; // [rsp+12Ch] [rbp+24h]
  unsigned __int8 *v92; // [rsp+130h] [rbp+28h]
  int v93; // [rsp+138h] [rbp+30h]
  int v94; // [rsp+13Ch] [rbp+34h]
  _QWORD v95[4]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v96[4]; // [rsp+160h] [rbp+58h] BYREF
  int v97; // [rsp+164h] [rbp+5Ch]
  __int64 v98; // [rsp+168h] [rbp+60h]
  __int64 v99; // [rsp+180h] [rbp+78h]
  BRUSHOBJ *v100; // [rsp+188h] [rbp+80h]
  _BYTE v101[24]; // [rsp+190h] [rbp+88h] BYREF
  _BYTE v102[32]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v103[2]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int16 v104; // [rsp+1D8h] [rbp+D0h]
  BRUSHOBJ pbo; // [rsp+1F8h] [rbp+F0h] BYREF
  int v106; // [rsp+210h] [rbp+108h]
  int v107; // [rsp+214h] [rbp+10Ch]
  __int64 v108; // [rsp+218h] [rbp+110h]
  __int64 v109; // [rsp+220h] [rbp+118h]
  __int64 v110; // [rsp+250h] [rbp+148h]
  __int128 v111; // [rsp+258h] [rbp+150h]
  int v112; // [rsp+270h] [rbp+168h]
  struct _RECTL v113; // [rsp+288h] [rbp+180h] BYREF
  __int64 v114; // [rsp+298h] [rbp+190h] BYREF
  int v115; // [rsp+2A0h] [rbp+198h]
  int v116; // [rsp+2A4h] [rbp+19Ch]
  CLIPOBJ pco; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int64 v118; // [rsp+2F8h] [rbp+1F0h]
  int v119; // [rsp+300h] [rbp+1F8h]
  int v120; // [rsp+328h] [rbp+220h]
  __int64 v121; // [rsp+338h] [rbp+230h]

  v74 = a4;
  DCOBJ::DCOBJ((DCOBJ *)v71, a1);
  v8 = v71[0];
  if ( !v71[0] || (*((_DWORD *)v71[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v14 = 0;
LABEL_118:
    v32 = v14;
    goto LABEL_119;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v71) )
  {
    if ( (v9 & 0xE0) != 0 )
    {
      v10 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v10 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v10 + 48), 11LL);
      v11 = *(_QWORD *)(v10 + 2552);
      if ( v11 )
        v12 = *(_QWORD *)(v11 + 56);
      else
        v12 = *((_QWORD *)v71[0] + 64);
      v13 = *(_QWORD *)(v10 + 48);
      *(_QWORD *)v72 = v12;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v13);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v10 + 48));
      v80 = v72[1];
      v78 = 0LL;
      v79 = v12;
      XDCOBJ::vAccumulate((XDCOBJ *)v71, (struct ERECTL *)&v78);
    }
    v14 = 1;
    goto LABEL_118;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v69);
  v15 = v71[0];
  v16 = *((_QWORD *)v71[0] + 122);
  v17 = *(_DWORD *)(v16 + 152);
  if ( (v17 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v71[0], *(_QWORD *)(v16 + 160));
    v15 = v71[0];
  }
  if ( (v17 & 0x2000) != 0 )
  {
    GreDCSelectPen(v15, *(_QWORD *)(*((_QWORD *)v15 + 122) + 168LL));
    v15 = v71[0];
  }
  v18 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v15 + 62);
  if ( v18 && *((_WORD *)v18 + 50) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v75, (struct XDCOBJ *)v71);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v69);
    *(_QWORD *)v72 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    bConvertDfbDcToDib((struct XDCOBJ *)v71);
    SEMOBJ::vUnlock((SEMOBJ *)v72);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v19);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v75);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v18);
  v103[0] = 0LL;
  v103[1] = 0LL;
  v104 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v102, (struct XDCOBJ *)v71, 0);
  v20 = *((_QWORD *)v71[0] + 62);
  v70.x = a2;
  v70.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v101, (struct XDCOBJ *)v71, 516);
  if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v101, &v70, 1LL) )
  {
LABEL_34:
    v32 = 0;
    goto LABEL_115;
  }
  v21 = *(_QWORD *)(v20 + 48);
  v22 = *(_QWORD *)(v20 + 128);
  v23 = *((_QWORD *)v71[0] + 11);
  if ( (*(_DWORD *)(*((_QWORD *)v71[0] + 6) + 40LL) & 0x80u) == 0
    && !(unsigned int)DC::bIsCMYKColor(v71[0])
    && (*(_DWORD *)(v24 + 120) & 2) == 0 )
  {
    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v22, v23, a4, 1LL);
    v26 = v71[0];
    v27 = NearestIndexFromColorref;
    v28 = *((_DWORD *)v71[0] + 30);
    if ( (v28 & 4) != 0 || (LODWORD(v76) = 0, (v28 & 1) != 0) )
      LODWORD(v76) = 2;
    v29 = *((_QWORD *)v71[0] + 122);
    v30 = (char *)v71[0] + 1184;
    v100 = (BRUSHOBJ *)((char *)v71[0] + 1184);
    v31 = *(_DWORD *)(v29 + 152);
    if ( (v31 & 1) != 0 || (*((_DWORD *)v71[0] + 79) & 1) != 0 )
    {
      *(_DWORD *)(v29 + 152) = v31 & 0xFFFFFFFE;
      *((_DWORD *)v71[0] + 79) &= ~1u;
      EBRUSHOBJ::vInitBrush((char *)v26 + 1184, v71[0], *((_QWORD *)v71[0] + 17), v23, v22, v20, 1);
      v26 = v71[0];
    }
    if ( (*((_DWORD *)v30 + 30) & 0x100) != 0 )
    {
      v32 = 1;
      goto LABEL_115;
    }
    if ( (v102[24] & 1) == 0 )
    {
      v32 = XDCOBJ::bFullScreen((XDCOBJ *)v71);
      goto LABEL_115;
    }
    v33 = (*((_DWORD *)v26 + 10) & 1) == 0;
    v34 = (_DWORD *)((char *)v26 + 1016);
    v35 = (_DWORD *)((char *)v26 + 1024);
    if ( v33 )
      v35 = v34;
    v70.x += *v35;
    v70.y += v35[1];
    v77 = XDCOBJ::prgnEffRao(v71);
    if ( RGNOBJ::bInside((RGNOBJ *)&v77, &v70) != 2 )
      goto LABEL_34;
    memset(v95, 0, sizeof(v95));
    v82 = 0LL;
    v83 = 0;
    v84 = 0;
    *(_QWORD *)v72 = *(_QWORD *)(v20 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)v72, (struct _SURFOBJ *)(v20 + 24), 0LL, 0);
    v36 = 0LL;
    LODWORD(v75[0]) = 0;
    v37 = *(struct _RECTL *)((char *)v77 + 88);
    v73 = 0LL;
    v113 = v37;
    if ( !*(_WORD *)(v20 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v77) != 3 )
    {
      v38 = *(_QWORD *)(v20 + 80);
      v39 = *(_DWORD *)(v20 + 88);
      v40 = *(_DWORD *)(v20 + 96);
      y = v70.y;
      x = v70.x;
      goto LABEL_66;
    }
    LODWORD(v95[0]) = *(_DWORD *)(v20 + 96);
    v72[0] = v95[0];
    HIDWORD(v95[0]) = v113.right - v113.left;
    LODWORD(v95[1]) = v113.bottom - v113.top;
    v43 = 1;
    LODWORD(v95[3]) = 1;
    v95[2] = v36;
    if ( (*(_DWORD *)(v20 + 112) & 0x40000) != 0 )
      v43 = 262145;
    LODWORD(v95[3]) = v43;
    SURFMEM::bCreateDIB(
      (SURFMEM *)&v82,
      (struct _DEVBITMAPINFO *)v95,
      0LL,
      0LL,
      (unsigned int)v36,
      v36,
      (unsigned __int64)v36,
      (_DWORD)v36,
      1,
      (_DWORD)v36,
      (_DWORD)v36);
    if ( !v82 )
    {
      EngSetLastError(8u);
      goto LABEL_75;
    }
    v33 = (*(_DWORD *)(v20 + 112) & 0x400) == 0;
    v114 = 0LL;
    v115 = HIDWORD(v95[0]);
    v116 = v95[1];
    if ( v33 )
      v44 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))EngCopyBits)(
              v82 + 24,
              v20 + 24,
              0LL,
              xloIdent,
              &v114,
              &v113);
    else
      v44 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))(v21 + 2840))(
              v82 + 24,
              v20 + 24,
              0LL,
              xloIdent,
              &v114,
              &v113);
    left = v113.left;
    top = v113.top;
    v47 = v44;
    v48 = -v113.left;
    v49 = -v113.top;
    v73.x = -v113.left;
    v73.y = -v113.top;
    if ( !v44 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v77) != 3 )
    {
      v113.right += v48;
      v113.left = v48 + left;
      v113.bottom += v49;
      v113.top = v49 + top;
LABEL_64:
      if ( v47 )
      {
        x = v48 + v70.x;
        v37 = v113;
        v40 = v72[0];
        y = v49 + v70.y;
        v70.x += v48;
        v73.y = -v49;
        v70.y += v49;
        v73.x = -v48;
        v39 = *(_DWORD *)(v82 + 88);
        v38 = *(_QWORD *)(v82 + 80);
        LODWORD(v75[0]) = 1;
LABEL_66:
        v94 = -1;
        v76 = v38;
        v89 = v40;
        v90 = v37;
        v91 = v27;
        v52 = *(_QWORD *)(v20 + 128);
        v53 = (unsigned __int8 *)(v38 + y * v39);
        v93 = a5;
        v92 = v53;
        if ( v52 )
        {
          v54 = *(_DWORD *)(v52 + 24);
          if ( (v54 & 0xC) != 0 )
          {
            v94 = 0xFFFFFF;
          }
          else if ( (v54 & 2) != 0 )
          {
            v94 = **(_DWORD **)(v52 + 112) | *(_DWORD *)(*(_QWORD *)(v52 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v52 + 112) + 8LL);
          }
        }
        v55 = FLOODBM::iColorGet((FLOODBM *)&v89, x);
        if ( !a5 && v55 == v27 || a5 == 1 && v55 != v27 )
          goto LABEL_75;
        FLOODBM::vFindExtent((FLOODBM *)&v89, v56, &v74, v72);
        v57 = v72[0];
        v58 = v74;
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v96, 0x1B8u, 1, y, v74, v72[0]);
        if ( !v99 )
        {
          EngSetLastError(8u);
          v32 = 0;
LABEL_112:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v96);
          goto LABEL_113;
        }
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v85, 0xF8u, 0, v70.y, v58, v57);
        if ( !v88 )
        {
          EngSetLastError(8u);
          v32 = 0;
LABEL_111:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v85);
          goto LABEL_112;
        }
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v81, 0x1348u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v81);
        if ( !v81[0] )
        {
          EngSetLastError(8u);
LABEL_104:
          v32 = 0;
LABEL_110:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v81);
          goto LABEL_111;
        }
        v32 = 1;
        v59 = v113.bottom - 1;
        v60 = v113.top;
        if ( v70.y >= v113.bottom - 1 )
        {
          v86 -= *(_DWORD *)(v87 + 8);
          v87 = *(_QWORD *)(v87 + 16);
        }
        else
        {
          v32 = FLOODBM::bExtendScanline(
                  (FLOODBM *)&v89,
                  (struct STACKOBJ *)v85,
                  (struct STACKOBJ *)v96,
                  v70.y + 1,
                  v53,
                  &v53[v39]) & 1;
        }
        if ( v32 )
        {
          v61 = v76;
          do
          {
            while ( 1 )
            {
              while ( v86 )
              {
                if ( !(unsigned int)RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v81, (struct STACKOBJ *)v85) )
                  goto LABEL_97;
                if ( *(_DWORD *)v87 >= v59 )
                {
                  v86 -= *(_DWORD *)(v87 + 8);
                  v87 = *(_QWORD *)(v87 + 16);
                }
                else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                           (FLOODBM *)&v89,
                                           (struct STACKOBJ *)v85,
                                           (struct STACKOBJ *)v96,
                                           *(_DWORD *)v87 + 1,
                                           (unsigned __int8 *)(v61 + v39 * *(_DWORD *)v87),
                                           (unsigned __int8 *)(v61 + v39 * *(_DWORD *)v87 + v39)) )
                {
LABEL_97:
                  v32 = 0;
                  goto LABEL_109;
                }
              }
              if ( !v97 )
                goto LABEL_99;
              v32 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v81, (struct STACKOBJ *)v96);
              if ( *(_DWORD *)v98 > v60 )
                break;
              v97 -= *(_DWORD *)(v98 + 8);
              v98 = *(_QWORD *)(v98 + 16);
            }
          }
          while ( (unsigned int)FLOODBM::bExtendScanline(
                                  (FLOODBM *)&v89,
                                  (struct STACKOBJ *)v96,
                                  (struct STACKOBJ *)v85,
                                  *(_DWORD *)v98 - 1,
                                  (unsigned __int8 *)(v61 + v39 * *(_DWORD *)v98),
                                  (unsigned __int8 *)(v61 + v39 * *(_DWORD *)v98 - v39)) );
          v32 = 0;
LABEL_99:
          if ( v32 )
          {
            if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v81) != 1 )
            {
              if ( LODWORD(v75[0])
                && (!RGNOBJ::bOffset((RGNOBJ *)v81, &v73) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v113, &v73, 1)) )
              {
                goto LABEL_104;
              }
              v62 = v100;
              v63 = EBRUSHOBJ::mixBest(
                      (EBRUSHOBJ *)v100,
                      *(_BYTE *)(*((_QWORD *)v71[0] + 122) + 212LL),
                      *(_BYTE *)(*((_QWORD *)v71[0] + 122) + 213LL));
              ++*(_DWORD *)(v20 + 92);
              v118 = 0LL;
              mix = v63;
              v119 = 0;
              v120 = 1;
              v121 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v81[0], (struct ERECTL *)&v113, 0);
              v66 = (POINTL *)v71[0];
              if ( (*((_DWORD *)v71[0] + 9) & 0xE0) != 0 )
              {
                XDCOBJ::vAccumulate((XDCOBJ *)v71, v65, (__m128i *)&v113);
                XDCOBJ::vAccumulateTight((XDCOBJ *)v71, v67, (__m128i *)&v113);
                v66 = (POINTL *)v71[0];
              }
              v32 = EngPaint((SURFOBJ *)(v20 + 24), &pco, v62, v66 + 147, mix);
            }
            if ( v32 )
              goto LABEL_110;
          }
        }
LABEL_109:
        EngSetLastError(8u);
        goto LABEL_110;
      }
LABEL_75:
      v32 = 0;
LABEL_113:
      SURFMEM::~SURFMEM((SURFMEM *)&v82);
      goto LABEL_115;
    }
    v47 = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v78);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v78);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v75);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v75);
    if ( !v78
      || !v75[0]
      || (RGNOBJ::vSet((RGNOBJ *)&v78, &v113),
          !RGNOBJ::bMerge((RGNOBJ *)v75, (struct RGNOBJ *)&v78, (struct RGNOBJ *)&v77, BYTE4(gafjRgnOp))) )
    {
LABEL_61:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v75);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
      v49 = v73.y;
      v48 = v73.x;
      goto LABEL_64;
    }
    if ( !RGNOBJ::bOffset((RGNOBJ *)v75, &v73) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v113, &v73, 1) )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v75);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v78);
      goto LABEL_75;
    }
    v118 = 0LL;
    v119 = 0;
    v120 = 1;
    v121 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v75[0], (struct ERECTL *)&v113, 0);
    v107 = -1;
    pbo.flColorType = v76;
    v111 = 0LL;
    v110 = 0LL;
    pbo.pvRbrush = 0LL;
    v108 = 0LL;
    v109 = 0LL;
    v112 = 0;
    if ( a5 )
    {
      pbo.iSolidColor = (v27 & 1) == 0;
      if ( gbMultiMonMismatchColor )
      {
        v50 = ulIndexToRGB(v22, v23, (v27 & 1) == 0);
        goto LABEL_57;
      }
    }
    else
    {
      pbo.iSolidColor = v27;
      if ( gbMultiMonMismatchColor )
      {
        v50 = v74;
LABEL_57:
        v107 = v50;
        v106 = v50;
      }
    }
    v51 = 0LL;
    if ( v82 )
      v51 = (SURFOBJ *)(v82 + 24);
    v47 = EngPaint(v51, &pco, &pbo, 0LL, 0xD0Du);
    EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
    goto LABEL_61;
  }
  EngSetLastError(0x57u);
  v32 = 0;
LABEL_115:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v102);
  if ( v103[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v103);
LABEL_119:
  if ( v71[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v71);
  return v32;
}
