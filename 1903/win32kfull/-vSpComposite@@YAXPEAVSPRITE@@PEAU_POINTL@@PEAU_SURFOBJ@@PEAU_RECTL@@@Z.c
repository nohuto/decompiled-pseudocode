/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0161660
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C003E76C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C027E080 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0280DB4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C02810D0 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     OffTransparentBlt @ 0x1C003F4BC (OffTransparentBlt.c)
 *     OffBitBlt @ 0x1C003F810 (OffBitBlt.c)
 *     OffAlphaBlend @ 0x1C003FBB0 (OffAlphaBlend.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00610E8 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0161B2C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0161B54 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0161C00 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C0161C70 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027D0A4 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C027FFA4 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0280460 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0281AD4 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComposite(struct SPRITE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  int *v7; // rcx
  int v8; // ecx
  struct REGION *v9; // r12
  struct REGION *v10; // r8
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  __int64 v14; // rdi
  unsigned int v15; // edx
  __int64 v16; // rcx
  __int64 v17; // rax
  struct REGION *v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r14
  struct _SURFOBJ *v21; // rdx
  __int64 v22; // rcx
  struct REGION *v23; // rdi
  struct _SURFOBJ *v24; // rdx
  __int64 *p_left; // rbx
  struct _SURFOBJ *v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r9
  BOOL (__stdcall *v71)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // r9
  struct _SURFOBJ *v84; // rdx
  struct REGION *v85; // rdi
  int v86; // ebx
  unsigned int v87; // eax
  __int64 v88; // rdx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // r8
  __int64 v93; // r9
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // r9
  BOOL (__stdcall *v103)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  unsigned int v116; // edx
  struct _SURFOBJ *v117; // rcx
  struct _POINTL v118; // [rsp+70h] [rbp-90h] BYREF
  struct REGION *v119; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL *v120; // [rsp+80h] [rbp-80h]
  __int64 v121; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL *v122; // [rsp+90h] [rbp-70h]
  struct REGION *v123; // [rsp+98h] [rbp-68h] BYREF
  struct _XLATEOBJ *v124; // [rsp+A0h] [rbp-60h] BYREF
  struct _CLIPOBJ *v125; // [rsp+A8h] [rbp-58h]
  struct REGION *v126; // [rsp+B0h] [rbp-50h] BYREF
  int v127; // [rsp+B8h] [rbp-48h]
  __int64 v128; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v129; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int8 *v130; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v131[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v132; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v133; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v134; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v135; // [rsp+100h] [rbp+0h] BYREF
  __int64 v136; // [rsp+108h] [rbp+8h] BYREF
  __int64 v137; // [rsp+110h] [rbp+10h] BYREF
  __int64 v138; // [rsp+118h] [rbp+18h] BYREF
  __int64 v139; // [rsp+120h] [rbp+20h] BYREF
  __int64 v140[5]; // [rsp+128h] [rbp+28h] BYREF
  struct _RECTL v141; // [rsp+150h] [rbp+50h] BYREF
  __int64 v142; // [rsp+160h] [rbp+60h] BYREF
  int v143; // [rsp+168h] [rbp+68h]
  int v144; // [rsp+16Ch] [rbp+6Ch]
  struct _RECTL v145; // [rsp+170h] [rbp+70h]
  _BYTE v146[4]; // [rsp+180h] [rbp+80h] BYREF
  int v147; // [rsp+184h] [rbp+84h]
  int v148; // [rsp+188h] [rbp+88h]
  int v149; // [rsp+18Ch] [rbp+8Ch]
  int v150; // [rsp+190h] [rbp+90h]
  __int64 v151; // [rsp+1B8h] [rbp+B8h]
  __int64 v152; // [rsp+1D0h] [rbp+D0h]
  int v153; // [rsp+1D8h] [rbp+D8h]
  int v154; // [rsp+200h] [rbp+100h]
  __int64 v155; // [rsp+210h] [rbp+110h]
  int v156; // [rsp+218h] [rbp+118h]

  v122 = a2;
  v118 = 0LL;
  v120 = a4;
  v152 = 0LL;
  v153 = 0;
  v154 = 1;
  v155 = 0LL;
  v151 = 0LL;
  v156 = 0;
  if ( (unsigned int)bIgnoreMirrorUpdate(a1) )
    goto LABEL_39;
  v8 = *v7;
  if ( (v8 & 0x400) != 0 || (v8 & 0xC0) == 0x40 || (v8 & 0x20) == 0 || (v8 & 1) != 0 )
    goto LABEL_39;
  v125 = 0LL;
  v9 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
  v123 = 0LL;
  if ( !*((_QWORD *)a1 + 23) || !v9 )
    goto LABEL_43;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v126);
  if ( !v126
    || (v132 = *((_QWORD *)a1 + 23),
        v119 = v9,
        !RGNOBJ::bMerge((RGNOBJ *)&v126, (struct RGNOBJ *)&v132, (struct RGNOBJ *)&v119, BYTE1(gafjRgnOp))) )
  {
    v10 = v123;
LABEL_12:
    if ( v127 == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v126);
      v10 = v123;
    }
    if ( v10 )
    {
      v11 = 0;
      goto LABEL_16;
    }
LABEL_43:
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !v9 )
        goto LABEL_39;
      if ( !*((_QWORD *)a1 + 23) )
        goto LABEL_49;
    }
    v23 = (struct REGION *)*((_QWORD *)a1 + 23);
    if ( !v23 )
    {
LABEL_18:
      v12 = *(_DWORD *)a1;
      v13 = *((_DWORD *)a1 + 1);
      v14 = *((_QWORD *)a1 + 2);
      if ( (*(_DWORD *)a1 & 8) != 0 )
        v13 = 4;
      v119 = (struct REGION *)*((_QWORD *)a1 + 2);
      v15 = v13 & 0xEFFFFFFF;
      if ( (v12 & 0x100) == 0 )
        v15 = v13;
      v118.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
      v118.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
      v16 = *(_QWORD *)(v14 + 32);
      LODWORD(v121) = v15;
      v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
      v18 = v119;
      v19 = *(_QWORD *)(v17 + 128);
      v20 = *((_QWORD *)a1 + 18);
      v131[0] = 0LL;
      LODWORD(v17) = *((_DWORD *)v119 + 27);
      v124 = 0LL;
      if ( *((_DWORD *)a1 + 38) != (_DWORD)v17
        || *((_DWORD *)a1 + 39) != *((_DWORD *)v119 + 28)
        || (*(_DWORD *)a1 & 0x40) != 0 )
      {
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v124,
                              0LL,
                              0,
                              v20,
                              v19,
                              (__int64)ppalDefault,
                              (__int64)ppalDefault,
                              0,
                              0,
                              0,
                              0) )
          goto LABEL_36;
        v18 = v119;
      }
      if ( (_DWORD)v121 != 2 )
      {
        if ( (_DWORD)v121 == 4 )
        {
          v21 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v21 && SURFREFVIEW::bMap((SURFREFVIEW *)v131, v21) )
          {
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v134, *((struct _SURFOBJ **)a1 + 16));
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v133, a3);
            INVOKEOFFCOPYBITS(
              v122,
              a3,
              (struct _POINTL *)a1 + 17,
              *((struct _SURFOBJ **)a1 + 16),
              v125,
              v124,
              v120,
              &v118);
            if ( v133 )
              GreUnlockDisplayDevice(*(_QWORD *)(v133 + 48));
            v22 = v134;
            goto LABEL_34;
          }
          goto LABEL_36;
        }
        if ( (_DWORD)v121 != 1 )
        {
          if ( (_DWORD)v121 != 0x1000000 )
          {
            v55 = *(_QWORD *)v18;
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v137, a3);
            if ( a3->iType == 1
              && bAllowShareAccess(a3)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63, v64) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65, v66, v67) + 280)
                            + 20LL) & 1) != 0 )
            {
              v71 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v68, v69, v70) + 280) + 72LL);
            }
            else if ( a3->iType == 1
                   && bAllowShareAccess(a3)
                   && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v73, v74)
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v75, v76, v77) + 280)
                   && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79, v80) + 104)
                    || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v82, v83) + 108))
                   || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) == 0 )
            {
              v71 = EngBitBlt;
            }
            else
            {
              v71 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
            }
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v71,
              (int *)v122,
              (__int64)a3,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              &v120->left,
              0LL,
              0LL,
              v55 + 1544,
              (__int64 *)&gptlZero,
              23130);
            v22 = v137;
LABEL_34:
            if ( v22 )
              GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
            goto LABEL_36;
          }
          vSpDrawCursor(a1, v122, a3, v120, &v118);
LABEL_36:
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v123);
          if ( v9 )
            vSpAddAndCompactDirtyRegion(a1, v9);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v131);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v124);
          goto LABEL_39;
        }
        v24 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( !v24 || !SURFREFVIEW::bMap((SURFREFVIEW *)v131, v24) )
          goto LABEL_36;
        p_left = (__int64 *)&v120->left;
        v142 = (__int64)v118;
        v26 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        v143 = v118.x + v120->right - v120->left;
        v144 = v118.y + v120->bottom - v120->top;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v136, v26);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v135, a3);
        if ( a3->iType != 1 )
          goto LABEL_67;
        if ( bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28, v29)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38) + 280) + 20LL) & 0x8000) != 0 )
        {
          v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40, v41) + 280) + 112LL);
LABEL_70:
          OffTransparentBlt(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int64 *, __int64 *, int, int))v42,
            (int *)v122,
            (__int64)a3,
            (int *)a1 + 34,
            *((_QWORD *)a1 + 16),
            v125,
            (__int64)v124,
            p_left,
            &v142,
            *((_DWORD *)a1 + 51),
            0);
          if ( v135 )
            GreUnlockDisplayDevice(*(_QWORD *)(v135 + 48));
          v22 = v136;
          goto LABEL_34;
        }
        if ( a3->iType != 1
          || !bAllowShareAccess(a3)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45)
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50, v51) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52, v53, v54) + 108) )
        {
LABEL_67:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x8000) != 0 )
          {
            v42 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 169);
            goto LABEL_70;
          }
        }
        v42 = EngTransparentBlt;
        goto LABEL_70;
      }
      v84 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( !v84 || !SURFREFVIEW::bMap((SURFREFVIEW *)v131, v84) )
        goto LABEL_36;
      v141.right = v118.x + v120->right - v120->left;
      v141.bottom = v118.y + v120->bottom - v120->top;
      v141.left = v118.x;
      v141.top = v118.y;
      v129 = 0LL;
      v128 = 0LL;
      v121 = 0LL;
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v129,
                            0LL,
                            0,
                            v20,
                            (__int64)gppalRGB,
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0)
        || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v128,
                            0LL,
                            0,
                            v19,
                            (__int64)gppalRGB,
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0)
        || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v121,
                            0LL,
                            0,
                            (__int64)gppalRGB,
                            v19,
                            (__int64)ppalDefault,
                            (__int64)ppalDefault,
                            0,
                            0,
                            0,
                            0) )
      {
LABEL_125:
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v121);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v128);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v129);
        goto LABEL_36;
      }
      v85 = v119;
      v145 = (struct _RECTL)0LL;
      v86 = 0;
      LODWORD(v140[0]) = *((_DWORD *)a1 + 50);
      v140[1] = v129;
      v140[2] = v128;
      v140[3] = v121;
      v87 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
      v130 = 0LL;
      if ( v87 == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
      {
        GreAcquireSemaphore(*((_QWORD *)v119 + 16));
        vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v141, &v130);
        v145 = v141;
        v86 = 1;
      }
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v139, *((struct _SURFOBJ **)a1 + 16));
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v138, a3);
      if ( a3->iType != 1 )
        goto LABEL_116;
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v88, v89, v90)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v91, v92, v93) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v94, v95, v96) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v97, v98, v99) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v97, v98, v99) + 280) + 20LL) & 0x10000) != 0 )
      {
        v103 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100, v101, v102) + 280) + 120LL);
LABEL_119:
        OffAlphaBlend(
          (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int64 *, __int64 *, __int64))v103,
          (int *)v122,
          (__int64)a3,
          (int *)a1 + 34,
          *((_QWORD *)a1 + 16),
          v125,
          (__int64)v124,
          (__int64 *)&v120->left,
          (__int64 *)&v141.left,
          (__int64)v140);
        if ( v138 )
          GreUnlockDisplayDevice(*(_QWORD *)(v138 + 48));
        if ( v139 )
          GreUnlockDisplayDevice(*(_QWORD *)(v139 + 48));
        if ( v86 )
        {
          v116 = *((_DWORD *)a1 + 51);
          v117 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          v141 = v145;
          vSpDeletePerPixelAlphaFromColorKey(v117, v116, &v141, v130);
          EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", *((_QWORD *)v85 + 16));
          GreReleaseSemaphoreInternal(*((_QWORD *)v85 + 16));
        }
        goto LABEL_125;
      }
      if ( a3->iType != 1
        || !bAllowShareAccess(a3)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v104, v105, v106)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v110, v111, v112) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v113, v114, v115) + 108) )
      {
LABEL_116:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x10000) != 0 )
        {
          v103 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 170);
          goto LABEL_119;
        }
      }
      v103 = EngAlphaBlend;
      goto LABEL_119;
    }
    v11 = bConcurrent(*((struct _SPRITESTATE **)a1 + 2));
    v10 = v23;
LABEL_16:
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v146, v11, v10, (struct ERECTL *)a4, 0);
    if ( v147 < v149 )
    {
      v125 = (struct _CLIPOBJ *)v146;
      if ( v148 < v150 )
        goto LABEL_18;
    }
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v123);
    if ( !v9 )
      goto LABEL_39;
LABEL_49:
    vSpAddAndCompactDirtyRegion(a1, v9);
    goto LABEL_39;
  }
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v126) != 1 )
  {
    v10 = v126;
    v123 = v126;
    goto LABEL_12;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v126);
  vSpAddAndCompactDirtyRegion(a1, v9);
  if ( v127 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v126);
LABEL_39:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v146);
}
