/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0162630
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C008282C (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0162410 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C027D9C0 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02806F4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0280A10 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     OffTransparentBlt @ 0x1C008354C (OffTransparentBlt.c)
 *     OffBitBlt @ 0x1C00838A0 (OffBitBlt.c)
 *     OffAlphaBlend @ 0x1C0083C40 (OffAlphaBlend.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00853C4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00AAE4C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0162AFC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0162B24 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0162BD0 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C0162C40 (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027C9E4 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C027F8E4 (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C027FDA0 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0281414 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
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
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r8
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // r8
  struct _SURFOBJ *v66; // rdx
  struct REGION *v67; // rdi
  int v68; // ebx
  unsigned int v69; // eax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rdx
  __int64 v79; // r8
  BOOL (__stdcall *v80)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // rdx
  __int64 v88; // r8
  unsigned int v89; // edx
  struct _SURFOBJ *v90; // rcx
  struct _POINTL v91; // [rsp+70h] [rbp-90h] BYREF
  struct REGION *v92; // [rsp+78h] [rbp-88h] BYREF
  struct _RECTL *v93; // [rsp+80h] [rbp-80h]
  __int64 v94; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL *v95; // [rsp+90h] [rbp-70h]
  struct REGION *v96; // [rsp+98h] [rbp-68h] BYREF
  struct _XLATEOBJ *v97; // [rsp+A0h] [rbp-60h] BYREF
  struct _CLIPOBJ *v98; // [rsp+A8h] [rbp-58h]
  struct REGION *v99; // [rsp+B0h] [rbp-50h] BYREF
  int v100; // [rsp+B8h] [rbp-48h]
  __int64 v101; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v102; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int8 *v103; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v104[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v105; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v106; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v107; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v108; // [rsp+100h] [rbp+0h] BYREF
  __int64 v109; // [rsp+108h] [rbp+8h] BYREF
  __int64 v110; // [rsp+110h] [rbp+10h] BYREF
  __int64 v111; // [rsp+118h] [rbp+18h] BYREF
  __int64 v112; // [rsp+120h] [rbp+20h] BYREF
  __int64 v113[5]; // [rsp+128h] [rbp+28h] BYREF
  struct _RECTL v114; // [rsp+150h] [rbp+50h] BYREF
  __int64 v115; // [rsp+160h] [rbp+60h] BYREF
  int v116; // [rsp+168h] [rbp+68h]
  int v117; // [rsp+16Ch] [rbp+6Ch]
  struct _RECTL v118; // [rsp+170h] [rbp+70h]
  _BYTE v119[4]; // [rsp+180h] [rbp+80h] BYREF
  int v120; // [rsp+184h] [rbp+84h]
  int v121; // [rsp+188h] [rbp+88h]
  int v122; // [rsp+18Ch] [rbp+8Ch]
  int v123; // [rsp+190h] [rbp+90h]
  __int64 v124; // [rsp+1B8h] [rbp+B8h]
  __int64 v125; // [rsp+1D0h] [rbp+D0h]
  int v126; // [rsp+1D8h] [rbp+D8h]
  int v127; // [rsp+200h] [rbp+100h]
  __int64 v128; // [rsp+210h] [rbp+110h]
  int v129; // [rsp+218h] [rbp+118h]

  v95 = a2;
  v91 = 0LL;
  v93 = a4;
  v125 = 0LL;
  v126 = 0;
  v127 = 1;
  v128 = 0LL;
  v124 = 0LL;
  v129 = 0;
  if ( (unsigned int)bIgnoreMirrorUpdate(a1) )
    goto LABEL_39;
  v8 = *v7;
  if ( (v8 & 0x400) != 0 || (v8 & 0xC0) == 0x40 || (v8 & 0x20) == 0 || (v8 & 1) != 0 )
    goto LABEL_39;
  v98 = 0LL;
  v9 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
  v96 = 0LL;
  if ( !*((_QWORD *)a1 + 23) || !v9 )
    goto LABEL_43;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v99);
  if ( !v99
    || (v105 = *((_QWORD *)a1 + 23),
        v92 = v9,
        !RGNOBJ::bMerge((RGNOBJ *)&v99, (struct RGNOBJ *)&v105, (struct RGNOBJ *)&v92, BYTE1(gafjRgnOp))) )
  {
    v10 = v96;
LABEL_12:
    if ( v100 == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v99);
      v10 = v96;
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
      v92 = (struct REGION *)*((_QWORD *)a1 + 2);
      v15 = v13 & 0xEFFFFFFF;
      if ( (v12 & 0x100) == 0 )
        v15 = v13;
      v91.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
      v91.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
      v16 = *(_QWORD *)(v14 + 32);
      LODWORD(v94) = v15;
      v17 = SURFOBJ_TO_SURFACE_NOT_NULL(v16);
      v18 = v92;
      v19 = *(_QWORD *)(v17 + 128);
      v20 = *((_QWORD *)a1 + 18);
      v104[0] = 0LL;
      LODWORD(v17) = *((_DWORD *)v92 + 27);
      v97 = 0LL;
      if ( *((_DWORD *)a1 + 38) != (_DWORD)v17
        || *((_DWORD *)a1 + 39) != *((_DWORD *)v92 + 28)
        || (*(_DWORD *)a1 & 0x40) != 0 )
      {
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v97,
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
        v18 = v92;
      }
      if ( (_DWORD)v94 != 2 )
      {
        if ( (_DWORD)v94 == 4 )
        {
          v21 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v21 && SURFREFVIEW::bMap((SURFREFVIEW *)v104, v21) )
          {
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v107, *((struct _SURFOBJ **)a1 + 16));
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v106, a3);
            INVOKEOFFCOPYBITS(v95, a3, (struct _POINTL *)a1 + 17, *((struct _SURFOBJ **)a1 + 16), v98, v97, v93, &v91);
            if ( v106 )
              GreUnlockDisplayDevice(*(_QWORD *)(v106 + 48));
            v22 = v107;
            goto LABEL_34;
          }
          goto LABEL_36;
        }
        if ( (_DWORD)v94 != 1 )
        {
          if ( (_DWORD)v94 != 0x1000000 )
          {
            v46 = *(_QWORD *)v18;
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v110, a3);
            if ( a3->iType == 1
              && bAllowShareAccess(a3)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49, v50) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54) + 280) + 20LL) & 1) != 0 )
            {
              v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56) + 280) + 72LL);
            }
            else if ( a3->iType == 1
                   && bAllowShareAccess(a3)
                   && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59)
                   && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61) + 280)
                   && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62, v63) + 104)
                    || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65) + 108))
                   || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) == 0 )
            {
              v57 = EngBitBlt;
            }
            else
            {
              v57 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
            }
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v57,
              (int *)v95,
              (__int64)a3,
              0LL,
              0LL,
              0LL,
              0LL,
              0LL,
              &v93->left,
              0LL,
              0LL,
              v46 + 1544,
              (__int64 *)&gptlZero,
              23130);
            v22 = v110;
LABEL_34:
            if ( v22 )
              GreUnlockDisplayDevice(*(_QWORD *)(v22 + 48));
            goto LABEL_36;
          }
          vSpDrawCursor(a1, v95, a3, v93, &v91);
LABEL_36:
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v96);
          if ( v9 )
            vSpAddAndCompactDirtyRegion(a1, v9);
          SURFREFVIEW::bUnMap((SURFREFVIEW *)v104);
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v97);
          goto LABEL_39;
        }
        v24 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        if ( !v24 || !SURFREFVIEW::bMap((SURFREFVIEW *)v104, v24) )
          goto LABEL_36;
        p_left = (__int64 *)&v93->left;
        v115 = (__int64)v91;
        v26 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
        v116 = v91.x + v93->right - v93->left;
        v117 = v91.y + v93->bottom - v93->top;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v109, v26);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v108, a3);
        if ( a3->iType != 1 )
          goto LABEL_67;
        if ( bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34) + 280) + 20LL) & 0x8000) != 0 )
        {
          v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36) + 280) + 112LL);
LABEL_70:
          OffTransparentBlt(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int64 *, __int64 *, int, int))v37,
            (int *)v95,
            (__int64)a3,
            (int *)a1 + 34,
            *((_QWORD *)a1 + 16),
            v98,
            (__int64)v97,
            p_left,
            &v115,
            *((_DWORD *)a1 + 51),
            0);
          if ( v108 )
            GreUnlockDisplayDevice(*(_QWORD *)(v108 + 48));
          v22 = v109;
          goto LABEL_34;
        }
        if ( a3->iType != 1
          || !bAllowShareAccess(a3)
          || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39)
          || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41) + 280)
          || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43) + 104)
          && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45) + 108) )
        {
LABEL_67:
          if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x8000) != 0 )
          {
            v37 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 169);
            goto LABEL_70;
          }
        }
        v37 = EngTransparentBlt;
        goto LABEL_70;
      }
      v66 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
      if ( !v66 || !SURFREFVIEW::bMap((SURFREFVIEW *)v104, v66) )
        goto LABEL_36;
      v114.right = v91.x + v93->right - v93->left;
      v114.bottom = v91.y + v93->bottom - v93->top;
      v114.left = v91.x;
      v114.top = v91.y;
      v102 = 0LL;
      v101 = 0LL;
      v94 = 0LL;
      if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                            &v102,
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
                            &v101,
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
                            &v94,
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
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v94);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v101);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v102);
        goto LABEL_36;
      }
      v67 = v92;
      v118 = (struct _RECTL)0LL;
      v68 = 0;
      LODWORD(v113[0]) = *((_DWORD *)a1 + 50);
      v113[1] = v102;
      v113[2] = v101;
      v113[3] = v94;
      v69 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
      v103 = 0LL;
      if ( v69 == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
      {
        GreAcquireSemaphore(*((_QWORD *)v92 + 16));
        vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v114, &v103);
        v118 = v114;
        v68 = 1;
      }
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v112, *((struct _SURFOBJ **)a1 + 16));
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v111, a3);
      if ( a3->iType != 1 )
        goto LABEL_116;
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70, v71)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v73) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v74, v75) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77) + 280) + 20LL) & 0x10000) != 0 )
      {
        v80 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v78, v79) + 280) + 120LL);
LABEL_119:
        OffAlphaBlend(
          (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int64 *, __int64 *, __int64))v80,
          (int *)v95,
          (__int64)a3,
          (int *)a1 + 34,
          *((_QWORD *)a1 + 16),
          v98,
          (__int64)v97,
          (__int64 *)&v93->left,
          (__int64 *)&v114.left,
          (__int64)v113);
        if ( v111 )
          GreUnlockDisplayDevice(*(_QWORD *)(v111 + 48));
        if ( v112 )
          GreUnlockDisplayDevice(*(_QWORD *)(v112 + 48));
        if ( v68 )
        {
          v89 = *((_DWORD *)a1 + 51);
          v90 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          v114 = v118;
          vSpDeletePerPixelAlphaFromColorKey(v90, v89, &v114, v103);
          EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", *((_QWORD *)v67 + 16));
          GreReleaseSemaphoreInternal(*((_QWORD *)v67 + 16));
        }
        goto LABEL_125;
      }
      if ( a3->iType != 1
        || !bAllowShareAccess(a3)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v81, v82)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v83, v84) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85, v86) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v87, v88) + 108) )
      {
LABEL_116:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x10000) != 0 )
        {
          v80 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 170);
          goto LABEL_119;
        }
      }
      v80 = EngAlphaBlend;
      goto LABEL_119;
    }
    v11 = bConcurrent(*((struct _SPRITESTATE **)a1 + 2));
    v10 = v23;
LABEL_16:
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v119, v11, v10, (struct ERECTL *)a4, 0);
    if ( v120 < v122 )
    {
      v98 = (struct _CLIPOBJ *)v119;
      if ( v121 < v123 )
        goto LABEL_18;
    }
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v96);
    if ( !v9 )
      goto LABEL_39;
LABEL_49:
    vSpAddAndCompactDirtyRegion(a1, v9);
    goto LABEL_39;
  }
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v99) != 1 )
  {
    v10 = v99;
    v96 = v99;
    goto LABEL_12;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v99);
  vSpAddAndCompactDirtyRegion(a1, v9);
  if ( v100 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v99);
LABEL_39:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED((ECLIPOBJTMPIFNEEDED *)v119);
}
