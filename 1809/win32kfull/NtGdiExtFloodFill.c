/*
 * XREFs of NtGdiExtFloodFill @ 0x1C0141900
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0057450 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0077198 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C009CEC0 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C009F614 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009FFA0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00A12B4 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00A4AD4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00FAE64 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E24 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C0137E68 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     EngPaint @ 0x1C013E320 (EngPaint.c)
 *     ?mixBest@EBRUSHOBJ@@QEBAKEE@Z @ 0x1C013EA14 (-mixBest@EBRUSHOBJ@@QEBAKEE@Z.c)
 *     ?bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z @ 0x1C01425F4 (-bExtendScanline@FLOODBM@@QEAAHAEAVSTACKOBJ@@0JPEAE1@Z.c)
 *     ?vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z @ 0x1C01427C4 (-vFindExtent@FLOODBM@@QEAAXJAEAJ0@Z.c)
 *     ?iColorGet@FLOODBM@@QEAAKJ@Z @ 0x1C0142AE8 (-iColorGet@FLOODBM@@QEAAKJ@Z.c)
 *     ?bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z @ 0x1C0142BCC (-bMergeScanline@RGNMEMOBJ@@QEAAHAEAVSTACKOBJ@@@Z.c)
 *     ??1STACKMEMOBJ@@QEAA@XZ @ 0x1C0142F84 (--1STACKMEMOBJ@@QEAA@XZ.c)
 *     ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C0142FE8 (--0STACKMEMOBJ@@QEAA@KKJJJ@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0143190 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0143340 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014EF6C (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z @ 0x1C029C9C4 (-bConvertDfbDcToDib@@YA_NPEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiExtFloodFill(HDC a1, LONG a2, LONG a3, unsigned int a4, int a5)
{
  DC *v8; // rbx
  unsigned int v9; // r14d
  char v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // r15d
  DC *v16; // rax
  __int64 v17; // rdx
  int v18; // ebx
  DYNAMICMODECHANGESHARELOCK *v19; // rcx
  DCVISRGNSHARELOCK *v20; // rcx
  __int64 v21; // r13
  int v22; // r15d
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // rdi
  __int64 v26; // r9
  ULONG NearestIndexFromColorref; // eax
  DC *v28; // rcx
  ULONG v29; // r12d
  int v30; // edx
  __int64 v31; // r8
  BRUSHOBJ *v32; // r10
  int v33; // edx
  bool v34; // zf
  _DWORD *v35; // rax
  _DWORD *v36; // rcx
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
  unsigned int v55; // eax
  int v56; // r10d
  int v57; // r11d
  int v58; // r12d
  int v59; // ebx
  int v60; // r12d
  __int64 v61; // rsi
  BRUSHOBJ *v62; // rdi
  MIX v63; // eax
  MIX mix; // ebx
  struct ECLIPOBJ *v65; // rdx
  POINTL *v66; // r9
  struct ECLIPOBJ *v67; // rdx
  int v69; // [rsp+68h] [rbp-A0h] BYREF
  struct _POINTL v70; // [rsp+70h] [rbp-98h] BYREF
  __int64 v71; // [rsp+78h] [rbp-90h] BYREF
  int v72; // [rsp+80h] [rbp-88h] BYREF
  struct _POINTL v73; // [rsp+88h] [rbp-80h] BYREF
  int v74; // [rsp+90h] [rbp-78h]
  struct REGION *v75; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v76[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v77; // [rsp+B0h] [rbp-58h]
  BRUSHOBJ *v78; // [rsp+B8h] [rbp-50h] BYREF
  struct REGION *v79[2]; // [rsp+C0h] [rbp-48h] BYREF
  DC *v80[2]; // [rsp+D0h] [rbp-38h] BYREF
  char v81[32]; // [rsp+E0h] [rbp-28h] BYREF
  struct REGION *v82[2]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v83; // [rsp+110h] [rbp+8h] BYREF
  char v84; // [rsp+118h] [rbp+10h]
  int v85; // [rsp+11Ch] [rbp+14h]
  _BYTE v86[4]; // [rsp+120h] [rbp+18h] BYREF
  int v87; // [rsp+124h] [rbp+1Ch]
  __int64 v88; // [rsp+128h] [rbp+20h]
  __int64 v89; // [rsp+140h] [rbp+38h]
  int v90; // [rsp+148h] [rbp+40h] BYREF
  struct _RECTL v91; // [rsp+14Ch] [rbp+44h]
  ULONG v92; // [rsp+15Ch] [rbp+54h]
  unsigned __int8 *v93; // [rsp+160h] [rbp+58h]
  int v94; // [rsp+168h] [rbp+60h]
  int v95; // [rsp+16Ch] [rbp+64h]
  _QWORD v96[4]; // [rsp+170h] [rbp+68h] BYREF
  _BYTE v97[4]; // [rsp+190h] [rbp+88h] BYREF
  int v98; // [rsp+194h] [rbp+8Ch]
  __int64 v99; // [rsp+198h] [rbp+90h]
  __int64 v100; // [rsp+1B0h] [rbp+A8h]
  _BYTE v101[16]; // [rsp+1B8h] [rbp+B0h] BYREF
  BRUSHOBJ pbo; // [rsp+1C8h] [rbp+C0h] BYREF
  int v103; // [rsp+1E0h] [rbp+D8h]
  int v104; // [rsp+1E4h] [rbp+DCh]
  __int64 v105; // [rsp+1E8h] [rbp+E0h]
  __int64 v106; // [rsp+1F0h] [rbp+E8h]
  __int64 v107; // [rsp+220h] [rbp+118h]
  __int128 v108; // [rsp+228h] [rbp+120h]
  int v109; // [rsp+240h] [rbp+138h]
  _BYTE v110[32]; // [rsp+258h] [rbp+150h] BYREF
  _BYTE v111[80]; // [rsp+278h] [rbp+170h] BYREF
  struct _RECTL v112; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int64 v113; // [rsp+2D8h] [rbp+1D0h] BYREF
  int v114; // [rsp+2E0h] [rbp+1D8h]
  int v115; // [rsp+2E4h] [rbp+1DCh]
  CLIPOBJ pco; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v117; // [rsp+320h] [rbp+218h]
  __int64 v118; // [rsp+338h] [rbp+230h]
  int v119; // [rsp+340h] [rbp+238h]
  int v120; // [rsp+368h] [rbp+260h]
  __int64 v121; // [rsp+378h] [rbp+270h]

  LODWORD(v77) = a4;
  DCOBJ::DCOBJ((DCOBJ *)v80, a1);
  v8 = v80[0];
  v9 = 0;
  if ( !v80[0] || (*((_DWORD *)v80[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v15 = 0;
LABEL_115:
    v9 = v15;
    goto LABEL_116;
  }
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v80) )
  {
    if ( (v10 & 0xE0) != 0 )
    {
      v11 = *((_QWORD *)v8 + 6);
      GreAcquireSemaphore(*(_QWORD *)(v11 + 48));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", *(_QWORD *)(v11 + 48), 11LL);
      v12 = *(_QWORD *)(v11 + 2552);
      if ( v12 )
        v13 = *(_QWORD *)(v12 + 56);
      else
        v13 = *((_QWORD *)v80[0] + 64);
      v14 = *(_QWORD *)(v11 + 48);
      v71 = v13;
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v14);
      GreReleaseSemaphoreInternal(*(_QWORD *)(v11 + 48));
      v76[0] = 0LL;
      v76[1] = v13;
      XDCOBJ::vAccumulate((XDCOBJ *)v80, (struct ERECTL *)v76);
    }
    v15 = 1;
    goto LABEL_115;
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&v69);
  v16 = v80[0];
  v17 = *((_QWORD *)v80[0] + 122);
  v18 = *(_DWORD *)(v17 + 152);
  if ( (v18 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v80[0], *(_QWORD *)(v17 + 160));
    v16 = v80[0];
  }
  if ( (v18 & 0x2000) != 0 )
  {
    GreDCSelectPen(v16, *(_QWORD *)(*((_QWORD *)v16 + 122) + 168LL));
    v16 = v80[0];
  }
  v19 = (DYNAMICMODECHANGESHARELOCK *)*((_QWORD *)v16 + 62);
  if ( v19 && *((_WORD *)v19 + 50) == 3 )
  {
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v71, (struct XDCOBJ *)v80);
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v69);
    v78 = (BRUSHOBJ *)ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    bConvertDfbDcToDib((struct XDCOBJ *)v80);
    SEMOBJ::vUnlock((SEMOBJ *)&v78);
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v20);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v71);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v19);
  DCOBJ::DCOBJ((DCOBJ *)v111);
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v110, (struct XDCOBJ *)v80, 0);
  v21 = *((_QWORD *)v80[0] + 62);
  v70.x = a2;
  v70.y = a3;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v101, (struct XDCOBJ *)v80, 516);
  v22 = 1;
  if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v101, &v70, 1LL) )
  {
    v23 = *(_QWORD *)(v21 + 48);
    v24 = *(_QWORD *)(v21 + 128);
    v25 = *((_QWORD *)v80[0] + 11);
    if ( (*(_DWORD *)(*((_QWORD *)v80[0] + 6) + 40LL) & 0x80u) != 0
      || (unsigned int)DC::bIsCMYKColor(v80[0])
      || (*(_DWORD *)(v26 + 120) & 2) != 0 )
    {
      EngSetLastError(0x57u);
      v22 = 0;
      goto LABEL_112;
    }
    NearestIndexFromColorref = ulGetNearestIndexFromColorref(v24, v25, a4, 1LL);
    v28 = v80[0];
    v29 = NearestIndexFromColorref;
    v30 = *((_DWORD *)v80[0] + 30);
    if ( (v30 & 4) != 0 || (v72 = 0, (v30 & 1) != 0) )
      v72 = 2;
    v31 = *((_QWORD *)v80[0] + 122);
    v32 = (BRUSHOBJ *)((char *)v80[0] + 1208);
    v78 = (BRUSHOBJ *)((char *)v80[0] + 1208);
    v33 = *(_DWORD *)(v31 + 152);
    if ( (v33 & 1) != 0 || (*((_DWORD *)v80[0] + 79) & 1) != 0 )
    {
      *(_DWORD *)(v31 + 152) = v33 & 0xFFFFFFFE;
      *((_DWORD *)v80[0] + 79) &= ~1u;
      EBRUSHOBJ::vInitBrush((char *)v28 + 1208, v80[0], *((_QWORD *)v80[0] + 17), v25, v24, v21, 1);
      v28 = v80[0];
      v32 = v78;
    }
    if ( (v32[5].iSolidColor & 0x100) != 0 )
      goto LABEL_112;
    if ( (v110[24] & 1) == 0 )
    {
      v22 = XDCOBJ::bFullScreen((XDCOBJ *)v80);
LABEL_112:
      v9 = v22;
      goto LABEL_113;
    }
    v34 = (*((_DWORD *)v28 + 10) & 1) == 0;
    v35 = (_DWORD *)((char *)v28 + 1016);
    v36 = (_DWORD *)((char *)v28 + 1024);
    if ( v34 )
      v36 = v35;
    v70.x += *v36;
    v70.y += v36[1];
    v75 = XDCOBJ::prgnEffRao(v80);
    if ( RGNOBJ::bInside((RGNOBJ *)&v75, &v70) != 2 )
      goto LABEL_113;
    memset(v96, 0, sizeof(v96));
    v83 = 0LL;
    v84 = 0;
    v85 = 0;
    v71 = *(_QWORD *)(v21 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v71, (struct _SURFOBJ *)(v21 + 24), 0LL, 0);
    v74 = 0;
    v37 = *(struct _RECTL *)((char *)v75 + 88);
    v112 = v37;
    if ( !*(_WORD *)(v21 + 100) && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v75) != 3 )
    {
      v38 = *(_QWORD *)(v21 + 80);
      v39 = *(_DWORD *)(v21 + 88);
      v40 = *(_DWORD *)(v21 + 96);
      y = v70.y;
      x = v70.x;
      goto LABEL_64;
    }
    LODWORD(v96[0]) = *(_DWORD *)(v21 + 96);
    LODWORD(v71) = v96[0];
    HIDWORD(v96[0]) = v112.right - v112.left;
    LODWORD(v96[1]) = v112.bottom - v112.top;
    v43 = 1;
    LODWORD(v96[3]) = 1;
    v96[2] = 0LL;
    if ( (*(_DWORD *)(v21 + 112) & 0x40000) != 0 )
      v43 = 262145;
    LODWORD(v96[3]) = v43;
    SURFMEM::bCreateDIB((SURFMEM *)&v83, (struct _DEVBITMAPINFO *)v96, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v83 )
    {
      EngSetLastError(8u);
      goto LABEL_109;
    }
    v34 = (*(_DWORD *)(v21 + 112) & 0x400) == 0;
    v114 = HIDWORD(v96[0]);
    v115 = v96[1];
    v113 = 0LL;
    if ( v34 )
      v44 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))EngCopyBits)(
              v83 + 24,
              v21 + 24,
              0LL,
              xloIdent,
              &v113,
              &v112);
    else
      v44 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, __int64 *, struct _RECTL *))(v23 + 2840))(
              v83 + 24,
              v21 + 24,
              0LL,
              xloIdent,
              &v113,
              &v112);
    left = v112.left;
    top = v112.top;
    v47 = v44;
    v48 = -v112.left;
    v49 = -v112.top;
    v73.x = -v112.left;
    v73.y = -v112.top;
    if ( !v44 || (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v75) != 3 )
    {
      v112.right += v48;
      v112.left = v48 + left;
      v112.bottom += v49;
      v112.top = v49 + top;
LABEL_62:
      if ( v47 )
      {
        x = v48 + v70.x;
        v37 = v112;
        v40 = v71;
        y = v49 + v70.y;
        v70.x += v48;
        v73.y = -v49;
        v70.y += v49;
        v73.x = -v48;
        v39 = *(_DWORD *)(v83 + 88);
        v38 = *(_QWORD *)(v83 + 80);
        v74 = 1;
LABEL_64:
        v95 = -1;
        v77 = v38;
        v90 = v40;
        v91 = v37;
        v92 = v29;
        v52 = *(_QWORD *)(v21 + 128);
        v53 = (unsigned __int8 *)(v38 + y * v39);
        v94 = a5;
        v93 = v53;
        if ( v52 )
        {
          v54 = *(_DWORD *)(v52 + 24);
          if ( (v54 & 0xC) != 0 )
          {
            v95 = 0xFFFFFF;
          }
          else if ( (v54 & 2) != 0 )
          {
            v95 = **(_DWORD **)(v52 + 112) | *(_DWORD *)(*(_QWORD *)(v52 + 112) + 4LL) | *(_DWORD *)(*(_QWORD *)(v52 + 112) + 8LL);
          }
        }
        v55 = FLOODBM::iColorGet((FLOODBM *)&v90, x);
        if ( !v57 && v55 == v29 || v57 == 1 && v55 != v29 )
          goto LABEL_109;
        FLOODBM::vFindExtent((FLOODBM *)&v90, v56, &v72, (int *)&v71);
        v58 = v71;
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v97, 0x1B8u, 1u, y, v72, v71);
        if ( !v100 )
        {
          EngSetLastError(8u);
LABEL_108:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v97);
          goto LABEL_109;
        }
        STACKMEMOBJ::STACKMEMOBJ((STACKMEMOBJ *)v86, 0xF8u, 0, v70.y, v72, v58);
        if ( !v89 )
        {
          EngSetLastError(8u);
LABEL_107:
          STACKMEMOBJ::~STACKMEMOBJ((STACKMEMOBJ *)v86);
          goto LABEL_108;
        }
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v79, 0x1348u);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v79);
        if ( !v79[0] )
        {
          EngSetLastError(8u);
LABEL_106:
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v79);
          goto LABEL_107;
        }
        v59 = 1;
        v60 = v112.bottom - 1;
        LODWORD(v71) = v112.top;
        if ( v70.y >= v112.bottom - 1 )
        {
          v87 -= *(_DWORD *)(v88 + 8);
          v88 = *(_QWORD *)(v88 + 16);
        }
        else
        {
          v59 = FLOODBM::bExtendScanline(
                  (FLOODBM *)&v90,
                  (struct STACKOBJ *)v86,
                  (struct STACKOBJ *)v97,
                  v70.y + 1,
                  v53,
                  &v53[v39]) & 1;
        }
        if ( v59 )
        {
          v61 = v77;
          do
          {
            while ( 1 )
            {
              while ( v87 )
              {
                if ( !RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v79, (struct STACKOBJ *)v86) )
                  goto LABEL_103;
                if ( *(_DWORD *)v88 >= v60 )
                {
                  v87 -= *(_DWORD *)(v88 + 8);
                  v88 = *(_QWORD *)(v88 + 16);
                }
                else if ( !(unsigned int)FLOODBM::bExtendScanline(
                                           (FLOODBM *)&v90,
                                           (struct STACKOBJ *)v86,
                                           (struct STACKOBJ *)v97,
                                           *(_DWORD *)v88 + 1,
                                           (unsigned __int8 *)(v61 + v39 * *(_DWORD *)v88),
                                           (unsigned __int8 *)(v61 + v39 * *(_DWORD *)v88 + v39)) )
                {
LABEL_103:
                  v59 = 0;
                  goto LABEL_104;
                }
              }
              if ( !v98 )
                goto LABEL_89;
              v59 &= RGNMEMOBJ::bMergeScanline((RGNMEMOBJ *)v79, (struct STACKOBJ *)v97);
              if ( *(_DWORD *)v99 > (int)v71 )
                break;
              v98 -= *(_DWORD *)(v99 + 8);
              v99 = *(_QWORD *)(v99 + 16);
            }
          }
          while ( (unsigned int)FLOODBM::bExtendScanline(
                                  (FLOODBM *)&v90,
                                  (struct STACKOBJ *)v97,
                                  (struct STACKOBJ *)v86,
                                  *(_DWORD *)v99 - 1,
                                  (unsigned __int8 *)(v61 + v39 * *(_DWORD *)v99),
                                  (unsigned __int8 *)(v61 + v39 * *(_DWORD *)v99 - v39)) );
          v59 = 0;
LABEL_89:
          if ( !v59 )
            goto LABEL_104;
          if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v79) != 1 )
          {
            if ( v74
              && (!RGNOBJ::bOffset((RGNOBJ *)v79, &v73) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v112, &v73, 1)) )
            {
              goto LABEL_106;
            }
            v62 = v78;
            v63 = EBRUSHOBJ::mixBest(
                    (EBRUSHOBJ *)v78,
                    *(_BYTE *)(*((_QWORD *)v80[0] + 122) + 212LL),
                    *(_BYTE *)(*((_QWORD *)v80[0] + 122) + 213LL));
            ++*(_DWORD *)(v21 + 92);
            v117 = 0LL;
            mix = v63;
            v118 = 0LL;
            v119 = 0;
            v120 = 1;
            v121 = 0LL;
            XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v79[0], (struct ERECTL *)&v112, 0);
            v66 = (POINTL *)v80[0];
            if ( (*((_DWORD *)v80[0] + 9) & 0xE0) != 0 )
            {
              XDCOBJ::vAccumulate((XDCOBJ *)v80, v65, (__m128i *)&v112);
              XDCOBJ::vAccumulateTight((XDCOBJ *)v80, v67, (__m128i *)&v112);
              v66 = (POINTL *)v80[0];
            }
            v59 = EngPaint((SURFOBJ *)(v21 + 24), &pco, v62, v66 + 150, mix);
          }
          if ( v59 )
            goto LABEL_105;
        }
LABEL_104:
        EngSetLastError(8u);
LABEL_105:
        v9 = v59;
        goto LABEL_106;
      }
LABEL_109:
      SURFMEM::~SURFMEM((SURFMEM *)&v83);
      goto LABEL_113;
    }
    v47 = 0;
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v76);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v76);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v82);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v82);
    if ( !v76[0]
      || !v82[0]
      || (RGNOBJ::vSet((RGNOBJ *)v76, &v112),
          !RGNOBJ::bMerge((RGNOBJ *)v82, (struct RGNOBJ *)v76, (struct RGNOBJ *)&v75, BYTE4(gafjRgnOp))) )
    {
LABEL_59:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v82);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v76);
      v49 = v73.y;
      v48 = v73.x;
      goto LABEL_62;
    }
    if ( !RGNOBJ::bOffset((RGNOBJ *)v82, &v73) || !(unsigned int)ERECTL::bOffsetAdd((ERECTL *)&v112, &v73, 1) )
    {
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v82);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v76);
      goto LABEL_109;
    }
    v117 = 0LL;
    v118 = 0LL;
    v119 = 0;
    v120 = 1;
    v121 = 0LL;
    XCLIPOBJ::vSetup((XCLIPOBJ *)&pco, v82[0], (struct ERECTL *)&v112, 0);
    v104 = -1;
    pbo.flColorType = v72;
    v108 = 0LL;
    v107 = 0LL;
    pbo.pvRbrush = 0LL;
    v105 = 0LL;
    v106 = 0LL;
    v109 = 0;
    if ( a5 )
    {
      pbo.iSolidColor = (v29 & 1) == 0;
      if ( gbMultiMonMismatchColor )
      {
        v50 = ulIndexToRGB(v24, v25, (v29 & 1) == 0);
        goto LABEL_55;
      }
    }
    else
    {
      pbo.iSolidColor = v29;
      if ( gbMultiMonMismatchColor )
      {
        v50 = v77;
LABEL_55:
        v104 = v50;
        v103 = v50;
      }
    }
    v51 = 0LL;
    if ( v83 )
      v51 = (SURFOBJ *)(v83 + 24);
    v47 = EngPaint(v51, &pco, &pbo, 0LL, 0xD0Du);
    EBRUSHOBJ::vDelete((EBRUSHOBJ *)&pbo);
    goto LABEL_59;
  }
LABEL_113:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v110);
  DCOBJ::~DCOBJ((DCOBJ *)v111);
LABEL_116:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v80);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v81);
  return v9;
}
