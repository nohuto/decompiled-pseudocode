/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251B08
 * Callers:
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C024E028 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0078C9C (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffAlphaBlend @ 0x1C00B2750 (OffAlphaBlend.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffTransparentBlt @ 0x1C00B28E4 (OffTransparentBlt.c)
 *     OffBitBlt @ 0x1C010B5E4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C02498CC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C024CB28 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C024CC0C (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C02511BC (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0251474 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C0252D7C (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0253404 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0255724 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComposite(struct SPRITE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  __int64 v7; // rdx
  int *v8; // rcx
  int v9; // ecx
  struct REGION *v10; // r13
  struct REGION *v11; // r8
  int v12; // edx
  struct REGION *v13; // rdi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r14
  struct _SURFOBJ *v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rbx
  struct _SURFOBJ *v26; // rdx
  __int64 v27; // rbx
  int v28; // ecx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  BOOL (__stdcall *v34)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  BOOL (__stdcall *v47)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  struct _SURFOBJ *v52; // rdx
  unsigned int v53; // eax
  struct _RECTL v54; // xmm6
  __int64 v55; // rbx
  __int64 v56; // rdi
  __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rdx
  BOOL (__stdcall *v63)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 v67; // rdx
  unsigned int v68; // edx
  struct _SURFOBJ *v69; // rcx
  __int64 v70; // rbx
  unsigned int v71; // [rsp+78h] [rbp-90h]
  int v72; // [rsp+78h] [rbp-90h]
  struct _POINTL v73; // [rsp+80h] [rbp-88h] BYREF
  struct _RECTL *v74; // [rsp+88h] [rbp-80h]
  struct _POINTL *v75; // [rsp+90h] [rbp-78h]
  struct REGION *v76; // [rsp+98h] [rbp-70h] BYREF
  struct _XLATEOBJ *v77; // [rsp+A0h] [rbp-68h] BYREF
  struct _CLIPOBJ *v78; // [rsp+A8h] [rbp-60h]
  __int64 v79; // [rsp+B0h] [rbp-58h]
  struct REGION *v80; // [rsp+B8h] [rbp-50h] BYREF
  int v81; // [rsp+C0h] [rbp-48h]
  __int64 v82; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v83; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v84; // [rsp+D8h] [rbp-30h] BYREF
  unsigned __int8 *v85; // [rsp+E0h] [rbp-28h] BYREF
  struct REGION *v86; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v88[4]; // [rsp+F8h] [rbp-10h] BYREF
  struct _RECTL v89; // [rsp+118h] [rbp+10h] BYREF
  struct _RECTL v90; // [rsp+128h] [rbp+20h] BYREF
  __int64 v91; // [rsp+138h] [rbp+30h] BYREF
  int v92; // [rsp+140h] [rbp+38h]
  int v93; // [rsp+144h] [rbp+3Ch]
  REGION *v94; // [rsp+148h] [rbp+40h] BYREF
  int v95; // [rsp+150h] [rbp+48h]
  int v96; // [rsp+154h] [rbp+4Ch]
  int v97; // [rsp+158h] [rbp+50h]
  __int64 v98; // [rsp+180h] [rbp+78h]
  __int64 v99; // [rsp+198h] [rbp+90h]
  int v100; // [rsp+1A0h] [rbp+98h]
  int v101; // [rsp+1C8h] [rbp+C0h]
  __int64 v102; // [rsp+1D8h] [rbp+D0h]
  int v103; // [rsp+1E0h] [rbp+D8h]

  v75 = a2;
  v99 = 0LL;
  v74 = a4;
  v100 = 0;
  v102 = 0LL;
  v101 = 1;
  v98 = 0LL;
  v103 = 0;
  if ( (unsigned int)bIgnoreMirrorUpdate(a1) )
    goto LABEL_162;
  v9 = *v8;
  if ( (v9 & 0x400) != 0 || (v9 & 0xC0) == 0x40 || (v9 & 0x20) == 0 || (v9 & 1) != 0 )
    goto LABEL_162;
  v78 = 0LL;
  v10 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
  v76 = 0LL;
  if ( !*((_QWORD *)a1 + 23) || !v10 )
    goto LABEL_19;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v80);
  if ( !v80
    || (v87 = *((_QWORD *)a1 + 23),
        v86 = v10,
        !RGNOBJ::bMerge((RGNOBJ *)&v80, (struct RGNOBJ *)&v87, (struct RGNOBJ *)&v86, BYTE1(gafjRgnOp))) )
  {
    v11 = v76;
LABEL_15:
    if ( v81 == 1 )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v80);
      v11 = v76;
    }
    if ( v11 )
    {
      v12 = 0;
      goto LABEL_24;
    }
LABEL_19:
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
    {
      if ( !*((_QWORD *)a1 + 23) )
        goto LABEL_27;
      if ( !v10 )
        goto LABEL_162;
    }
    v13 = (struct REGION *)*((_QWORD *)a1 + 23);
    if ( !v13 )
    {
LABEL_29:
      v14 = *(_DWORD *)a1;
      v15 = *((_DWORD *)a1 + 1);
      v16 = *((_QWORD *)a1 + 2);
      if ( (*(_DWORD *)a1 & 8) != 0 )
        v15 = 4;
      v79 = *((_QWORD *)a1 + 2);
      v17 = v15 & 0xEFFFFFFF;
      if ( (v14 & 0x100) == 0 )
        v17 = v15;
      v73.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
      v73.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
      v71 = v17;
      v18 = SURFOBJ_TO_SURFACE_NOT_NULL(*(_QWORD *)(v16 + 32));
      v19 = (__int64 *)v79;
      v20 = *(_QWORD *)(v18 + 128);
      v21 = *((_QWORD *)a1 + 18);
      *(_QWORD *)&v90.left = 0LL;
      LODWORD(v18) = *(_DWORD *)(v79 + 108);
      v77 = 0LL;
      if ( *((_DWORD *)a1 + 38) != (_DWORD)v18
        || *((_DWORD *)a1 + 39) != *(_DWORD *)(v79 + 112)
        || (*(_DWORD *)a1 & 0x40) != 0 )
      {
        if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                              (__int64 *)&v77,
                              0LL,
                              0,
                              v21,
                              v20,
                              (__int64)ppalDefault,
                              (__int64)ppalDefault,
                              0,
                              0,
                              0,
                              0) )
          goto LABEL_159;
        v19 = (__int64 *)v79;
      }
      switch ( v71 )
      {
        case 2u:
          v52 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( v52 && SURFREFVIEW::bMap((SURFREFVIEW *)&v90, v52) )
          {
            v89.right = v73.x + v74->right - v74->left;
            v89.bottom = v73.y + v74->bottom - v74->top;
            v89.left = v73.x;
            v89.top = v73.y;
            v84 = 0LL;
            v83 = 0LL;
            v82 = 0LL;
            if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v84,
                                 0LL,
                                 0,
                                 v21,
                                 (__int64)gppalRGB,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0)
              && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v83,
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
              && (unsigned int)EXLATEOBJ::bInitXlateObj(
                                 &v82,
                                 0LL,
                                 0,
                                 (__int64)gppalRGB,
                                 v20,
                                 (__int64)ppalDefault,
                                 (__int64)ppalDefault,
                                 0,
                                 0,
                                 0,
                                 0) )
            {
              LODWORD(v88[0]) = *((_DWORD *)a1 + 50);
              v88[1] = v84;
              v88[2] = v83;
              v88[3] = v82;
              v53 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
              v72 = 0;
              v85 = 0LL;
              if ( v53 == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
              {
                GreAcquireSemaphore(*(_QWORD *)(v79 + 128));
                vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v89, &v85);
                v54 = v89;
                v72 = 1;
              }
              else
              {
                v54 = v90;
              }
              v55 = *((_QWORD *)a1 + 16);
              v56 = 0LL;
              if ( v55
                && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 16)) + 112) & 0x4000) != 0
                 || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v55) + 112) < 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v55) + 112) & 0x200) == 0 )
              {
                v56 = SURFOBJ_TO_SURFACE_NOT_NULL(v55);
                GreLockDisplayDevice(*(_QWORD *)(v56 + 48));
              }
              v57 = 0LL;
              if ( a3
                && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
                 || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
                && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
              {
                v57 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
                GreLockDisplayDevice(*(_QWORD *)(v57 + 48));
              }
              if ( a3->iType == 1
                && bAllowShareAccess(a3)
                && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58)
                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59) + 280)
                && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60) + 104)
                 || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61) + 108))
                && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61) + 280) + 20LL) & 0x10000) != 0 )
              {
                v63 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v62) + 280) + 120LL);
              }
              else if ( a3->iType == 1
                     && bAllowShareAccess(a3)
                     && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64)
                     && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v65) + 280)
                     && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66) + 104)
                      || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67) + 108))
                     || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x10000) == 0 )
              {
                v63 = EngAlphaBlend;
              }
              else
              {
                v63 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 169);
              }
              OffAlphaBlend(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64))v63,
                (LONG *)v75,
                (__int64)a3,
                (int *)a1 + 34,
                *((_QWORD *)a1 + 16),
                v78,
                (__int64)v77,
                v74,
                &v89,
                (__int64)v88);
              if ( v57 )
                GreUnlockDisplayDevice(*(_QWORD *)(v57 + 48));
              if ( v56 )
                GreUnlockDisplayDevice(*(_QWORD *)(v56 + 48));
              if ( v72 )
              {
                v68 = *((_DWORD *)a1 + 51);
                v69 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
                v89 = v54;
                vSpDeletePerPixelAlphaFromColorKey(v69, v68, &v89, v85);
                v70 = v79;
                EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", *(_QWORD *)(v79 + 128));
                GreReleaseSemaphoreInternal(*(_QWORD *)(v70 + 128));
              }
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v82);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v83);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v84);
          }
          goto LABEL_159;
        case 4u:
          v22 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( !v22 || !SURFREFVIEW::bMap((SURFREFVIEW *)&v90, v22) )
            goto LABEL_159;
          v23 = *((_QWORD *)a1 + 16);
          v24 = 0LL;
          if ( v23
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(*((_QWORD *)a1 + 16)) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v23) + 112) & 0x200) == 0 )
          {
            v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v23);
            GreLockDisplayDevice(*(_QWORD *)(v24 + 48));
          }
          v25 = 0LL;
          if ( a3
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
          {
            v25 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
            GreLockDisplayDevice(*(_QWORD *)(v25 + 48));
          }
          INVOKEOFFCOPYBITS(v75, a3, (struct _POINTL *)a1 + 17, *((struct _SURFOBJ **)a1 + 16), v78, v77, v74, &v73);
          goto LABEL_84;
        case 1u:
          v26 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( !v26 || !SURFREFVIEW::bMap((SURFREFVIEW *)&v90, v26) )
            goto LABEL_159;
          v24 = 0LL;
          v27 = *((_QWORD *)a1 + 16);
          v28 = v73.x + v74->right - v74->left;
          v91 = (__int64)v73;
          v92 = v28;
          v93 = v73.y + v74->bottom - v74->top;
          if ( v27
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 0x200) == 0 )
          {
            v24 = SURFOBJ_TO_SURFACE_NOT_NULL(v27);
            GreLockDisplayDevice(*(_QWORD *)(v24 + 48));
          }
          v25 = 0LL;
          if ( a3
            && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
             || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
            && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
          {
            v25 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
            GreLockDisplayDevice(*(_QWORD *)(v25 + 48));
          }
          if ( a3->iType == 1
            && bAllowShareAccess(a3)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 280) + 20LL) & 0x8000) != 0 )
          {
            v34 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 280) + 112LL);
          }
          else if ( a3->iType == 1
                 && bAllowShareAccess(a3)
                 && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35)
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36) + 280)
                 && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37) + 104)
                  || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38) + 108))
                 || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x8000) == 0 )
          {
            v34 = EngTransparentBlt;
          }
          else
          {
            v34 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 168);
          }
          OffTransparentBlt(
            (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, int, int))v34,
            (LONG *)v75,
            (__int64)a3,
            (int *)a1 + 34,
            *((_QWORD *)a1 + 16),
            v78,
            (__int64)v77,
            v74,
            &v91,
            *((_DWORD *)a1 + 51),
            0);
LABEL_84:
          if ( v25 )
            GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
          if ( !v24 )
            goto LABEL_159;
          v39 = *(_QWORD *)(v24 + 48);
          goto LABEL_114;
        case 0x1000000u:
          vSpDrawCursor(a1, v75, a3, v74, &v73);
          goto LABEL_159;
      }
      v40 = *v19;
      v41 = 0LL;
      if ( a3
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
      {
        v41 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
        GreLockDisplayDevice(*(_QWORD *)(v41 + 48));
      }
      if ( a3->iType == 1 )
      {
        if ( bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45) + 280) + 20LL) & 1) != 0 )
        {
          v47 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46) + 280) + 72LL);
          goto LABEL_112;
        }
        if ( a3->iType == 1
          && bAllowShareAccess(a3)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51) + 108)) )
        {
          goto LABEL_111;
        }
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) == 0 )
LABEL_111:
        v47 = EngBitBlt;
      else
        v47 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 163);
LABEL_112:
      OffBitBlt(
        (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v47,
        (LONG *)v75,
        (__int64)a3,
        0LL,
        0LL,
        0LL,
        0LL,
        0LL,
        v74,
        0LL,
        0LL,
        v40 + 1536,
        &gptlZero,
        23130);
      if ( v41 )
      {
        v39 = *(_QWORD *)(v41 + 48);
LABEL_114:
        GreUnlockDisplayDevice(v39);
      }
LABEL_159:
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v76);
      if ( v10 )
        vSpAddAndCompactDirtyRegion(a1, v10);
      SURFREFVIEW::bUnMap((SURFREFVIEW *)&v90);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v77);
      goto LABEL_162;
    }
    v12 = bConcurrent(*((struct _SPRITESTATE **)a1 + 2), v7);
    v11 = v13;
LABEL_24:
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)&v94, v12, v11, (struct ERECTL *)a4, 0);
    if ( SHIDWORD(v94) >= v96 || (v78 = (struct _CLIPOBJ *)&v94, v95 >= v97) )
    {
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v76);
LABEL_27:
      if ( v10 )
        vSpAddAndCompactDirtyRegion(a1, v10);
      goto LABEL_162;
    }
    goto LABEL_29;
  }
  if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v80) != 1 )
  {
    v11 = v80;
    v76 = v80;
    goto LABEL_15;
  }
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v80);
  vSpAddAndCompactDirtyRegion(a1, v10);
  if ( v81 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v80);
LABEL_162:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(&v94);
}
