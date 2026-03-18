/*
 * XREFs of ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159BC0
 * Callers:
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0096B08 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z @ 0x1C0264E68 (-bSpPtInSprite@@YAHPEAVSPRITE@@HH@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0267C50 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0267F5C (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0056B74 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     OffTransparentBlt @ 0x1C00F3ED4 (OffTransparentBlt.c)
 *     OffBitBlt @ 0x1C00F4008 (OffBitBlt.c)
 *     OffAlphaBlend @ 0x1C00F4994 (OffAlphaBlend.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z @ 0x1C0159F90 (-vSpAddAndCompactDirtyRegion@@YAXPEAVSPRITE@@PEAVREGION@@@Z.c)
 *     ?bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z @ 0x1C015A03C (-bIgnoreMirrorUpdate@@YAHPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C0263EDC (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C026638C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ?vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z @ 0x1C0266E4C (-vSpDeletePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAE@Z.c)
 *     ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C02672E8 (-vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z.c)
 *     ?vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z @ 0x1C0268920 (-vSpUpdatePerPixelAlphaFromColorKey@@YAXPEAU_SURFOBJ@@KPEAU_RECTL@@PEAPEAE@Z.c)
 */

void __fastcall vSpComposite(struct SPRITE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  int *v7; // rcx
  int v8; // ecx
  struct REGION *v9; // r12
  struct REGION *v10; // rdx
  int v11; // eax
  int v12; // ecx
  __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rax
  struct REGION *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // r14
  struct _SURFOBJ *v20; // rdx
  __int64 v21; // rcx
  struct REGION *v22; // rdi
  int v23; // eax
  struct _SURFOBJ *v24; // rdx
  struct _SURFOBJ *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  BOOL (__stdcall *v42)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  struct _SURFOBJ *v47; // rdx
  int v48; // ebx
  unsigned int v49; // eax
  struct REGION *v50; // rdi
  struct _RECTL v51; // xmm6
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  unsigned int v62; // edx
  struct _SURFOBJ *v63; // rcx
  struct _POINTL v64; // [rsp+78h] [rbp-90h] BYREF
  struct _RECTL *v65; // [rsp+80h] [rbp-88h]
  struct REGION *v66; // [rsp+88h] [rbp-80h] BYREF
  __int64 v67; // [rsp+90h] [rbp-78h] BYREF
  struct _POINTL *v68; // [rsp+98h] [rbp-70h]
  struct REGION *v69; // [rsp+A0h] [rbp-68h] BYREF
  struct _XLATEOBJ *v70; // [rsp+A8h] [rbp-60h] BYREF
  struct _CLIPOBJ *v71; // [rsp+B0h] [rbp-58h]
  struct REGION *v72; // [rsp+B8h] [rbp-50h] BYREF
  int v73; // [rsp+C0h] [rbp-48h]
  __int64 v74; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v75; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int8 *v76; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v77; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v78; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v79; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v80; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v81; // [rsp+100h] [rbp-8h] BYREF
  __int64 v82; // [rsp+108h] [rbp+0h] BYREF
  __int64 v83; // [rsp+110h] [rbp+8h] BYREF
  __int64 v84; // [rsp+118h] [rbp+10h] BYREF
  __int64 v85[5]; // [rsp+120h] [rbp+18h] BYREF
  struct _RECTL v86; // [rsp+148h] [rbp+40h] BYREF
  struct _RECTL v87; // [rsp+158h] [rbp+50h] BYREF
  __int64 v88; // [rsp+168h] [rbp+60h] BYREF
  int v89; // [rsp+170h] [rbp+68h]
  int v90; // [rsp+174h] [rbp+6Ch]
  _BYTE v91[4]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v92; // [rsp+17Ch] [rbp+74h]
  __int64 v93; // [rsp+184h] [rbp+7Ch]
  REGION *v94; // [rsp+1B0h] [rbp+A8h]
  __int64 v95; // [rsp+1C8h] [rbp+C0h]
  int v96; // [rsp+1D0h] [rbp+C8h]
  int v97; // [rsp+1F8h] [rbp+F0h]
  __int64 v98; // [rsp+208h] [rbp+100h]
  int v99; // [rsp+210h] [rbp+108h]

  v68 = a2;
  v95 = 0LL;
  v65 = a4;
  v96 = 0;
  v98 = 0LL;
  v97 = 1;
  v94 = 0LL;
  v99 = 0;
  if ( !(unsigned int)bIgnoreMirrorUpdate(a1) )
  {
    v8 = *v7;
    if ( (v8 & 0x400) == 0 && (v8 & 0xC0) != 0x40 && (v8 & 0x20) != 0 && (v8 & 1) == 0 )
    {
      v71 = 0LL;
      v9 = (struct REGION *)_InterlockedExchange64((volatile __int64 *)a1 + 24, 0LL);
      v69 = 0LL;
      if ( !*((_QWORD *)a1 + 23) || !v9 )
        goto LABEL_45;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v72);
      if ( v72
        && (v77 = *((_QWORD *)a1 + 23),
            v66 = v9,
            RGNOBJ::bMerge((RGNOBJ *)&v72, (struct RGNOBJ *)&v77, (struct RGNOBJ *)&v66, BYTE1(gafjRgnOp))) )
      {
        if ( (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v72) == 1 )
        {
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v72);
          vSpAddAndCompactDirtyRegion(a1, v9);
          if ( v73 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v72);
          goto LABEL_42;
        }
        v10 = v72;
        v69 = v72;
      }
      else
      {
        v10 = v69;
      }
      if ( v73 == 1 )
      {
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v72);
        v10 = v69;
      }
      if ( v10 )
      {
        v94 = 0LL;
        v93 = 0LL;
        v92 = 0LL;
        v85[4] = (__int64)v10;
        v99 = 0;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v91, v10, (struct ERECTL *)a4, 0);
      }
      else
      {
LABEL_45:
        if ( (*(_DWORD *)a1 & 0x40) != 0 )
        {
          if ( !*((_QWORD *)a1 + 23) )
            goto LABEL_51;
          if ( !v9 )
          {
LABEL_42:
            if ( v99 )
              REGION::vDeleteREGION(v94);
            return;
          }
        }
        v22 = (struct REGION *)*((_QWORD *)a1 + 23);
        if ( !v22 )
        {
LABEL_18:
          v11 = *(_DWORD *)a1;
          v12 = *((_DWORD *)a1 + 1);
          v13 = *((_QWORD *)a1 + 2);
          if ( (*(_DWORD *)a1 & 8) != 0 )
            v12 = 4;
          v66 = (struct REGION *)*((_QWORD *)a1 + 2);
          v14 = v12 & 0xEFFFFFFF;
          if ( (v11 & 0x100) == 0 )
            v14 = v12;
          v64.x = a4->left + *((_DWORD *)a1 + 24) - *((_DWORD *)a1 + 28);
          v64.y = a4->top + *((_DWORD *)a1 + 25) - *((_DWORD *)a1 + 29);
          v15 = *(_QWORD *)(v13 + 32);
          LODWORD(v67) = v14;
          v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v15);
          v17 = v66;
          v18 = *(_QWORD *)(v16 + 128);
          v19 = *((_QWORD *)a1 + 18);
          *(_QWORD *)&v87.left = 0LL;
          LODWORD(v16) = *((_DWORD *)v66 + 27);
          v70 = 0LL;
          if ( *((_DWORD *)a1 + 38) != (_DWORD)v16
            || *((_DWORD *)a1 + 39) != *((_DWORD *)v66 + 28)
            || (*(_DWORD *)a1 & 0x40) != 0 )
          {
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                  (__int64 *)&v70,
                                  0LL,
                                  0,
                                  v19,
                                  v18,
                                  (__int64)ppalDefault,
                                  (__int64)ppalDefault,
                                  0,
                                  0,
                                  0,
                                  0) )
              goto LABEL_36;
            v17 = v66;
          }
          if ( (_DWORD)v67 != 2 )
          {
            if ( (_DWORD)v67 == 4 )
            {
              v20 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
              if ( v20 && SURFREFVIEW::bMap((SURFREFVIEW *)&v87, v20) )
              {
                NEEDDDILOCK::vLock((NEEDDDILOCK *)&v79, *((struct _SURFOBJ **)a1 + 16));
                NEEDDDILOCK::vLock((NEEDDDILOCK *)&v78, a3);
                INVOKEOFFCOPYBITS(
                  v68,
                  a3,
                  (struct _POINTL *)a1 + 17,
                  *((struct _SURFOBJ **)a1 + 16),
                  v71,
                  v70,
                  v65,
                  &v64);
                if ( v78 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v78 + 48));
                v21 = v79;
                goto LABEL_34;
              }
              goto LABEL_36;
            }
            if ( (_DWORD)v67 != 1 )
            {
              if ( (_DWORD)v67 != 0x1000000 )
              {
                v36 = *(_QWORD *)v17;
                NEEDDDILOCK::vLock((NEEDDDILOCK *)&v82, a3);
                if ( a3->iType == 1
                  && bAllowShareAccess(a3)
                  && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37)
                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38) + 280)
                  && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39) + 104)
                   || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 108))
                  && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 280) + 20LL) & 1) != 0 )
                {
                  v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 280) + 72LL);
                }
                else if ( a3->iType == 1
                       && bAllowShareAccess(a3)
                       && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43)
                       && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44) + 280)
                       && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45) + 104)
                        || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46) + 108))
                       || (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 1) == 0 )
                {
                  v42 = EngBitBlt;
                }
                else
                {
                  v42 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
                }
                OffBitBlt(
                  (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v42,
                  (int *)v68,
                  (__int64)a3,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL,
                  v65,
                  0LL,
                  0LL,
                  v36 + 1544,
                  &gptlZero,
                  23130);
                v21 = v82;
LABEL_34:
                if ( v21 )
                  GreUnlockDisplayDevice(*(_QWORD *)(v21 + 48));
                goto LABEL_36;
              }
              vSpDrawCursor(a1, v68, a3, v65, &v64);
LABEL_36:
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v69);
              if ( v9 )
                vSpAddAndCompactDirtyRegion(a1, v9);
              SURFREFVIEW::bUnMap((SURFREFVIEW *)&v87);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v70);
              goto LABEL_42;
            }
            v24 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            if ( !v24 || !SURFREFVIEW::bMap((SURFREFVIEW *)&v87, v24) )
              goto LABEL_36;
            v88 = (__int64)v64;
            v25 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
            v89 = v64.x + v65->right - v65->left;
            v90 = v64.y + v65->bottom - v65->top;
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v81, v25);
            NEEDDDILOCK::vLock((NEEDDDILOCK *)&v80, a3);
            if ( a3->iType != 1 )
              goto LABEL_70;
            if ( bAllowShareAccess(a3)
              && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26)
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 280) + 20LL) & 0x8000) != 0 )
            {
              v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 280) + 112LL);
LABEL_73:
              OffTransparentBlt(
                (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, int, int))v31,
                (int *)v68,
                (__int64)a3,
                (int *)a1 + 34,
                *((_QWORD *)a1 + 16),
                v71,
                (__int64)v70,
                v65,
                &v88,
                *((_DWORD *)a1 + 51),
                0);
              if ( v80 )
                GreUnlockDisplayDevice(*(_QWORD *)(v80 + 48));
              v21 = v81;
              goto LABEL_34;
            }
            if ( a3->iType != 1
              || !bAllowShareAccess(a3)
              || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32)
              || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 280)
              || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34) + 104)
              && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35) + 108) )
            {
LABEL_70:
              if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x8000) != 0 )
              {
                v31 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)a3->hdev + 169);
                goto LABEL_73;
              }
            }
            v31 = EngTransparentBlt;
            goto LABEL_73;
          }
          v47 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
          if ( !v47 || !SURFREFVIEW::bMap((SURFREFVIEW *)&v87, v47) )
            goto LABEL_36;
          v86.right = v64.x + v65->right - v65->left;
          v86.bottom = v64.y + v65->bottom - v65->top;
          v86.left = v64.x;
          v86.top = v64.y;
          v75 = 0LL;
          v74 = 0LL;
          v67 = 0LL;
          if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                &v75,
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
                                &v74,
                                0LL,
                                0,
                                v18,
                                (__int64)gppalRGB,
                                (__int64)ppalDefault,
                                (__int64)ppalDefault,
                                0,
                                0,
                                0,
                                0)
            || !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                &v67,
                                0LL,
                                0,
                                (__int64)gppalRGB,
                                v18,
                                (__int64)ppalDefault,
                                (__int64)ppalDefault,
                                0,
                                0,
                                0,
                                0) )
          {
LABEL_130:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v67);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v74);
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v75);
            goto LABEL_36;
          }
          v48 = 0;
          LODWORD(v85[0]) = *((_DWORD *)a1 + 50);
          v85[1] = v75;
          v85[2] = v74;
          v85[3] = v67;
          v49 = *((_DWORD *)a1 + 56) & 0xEFFFFFFF;
          v76 = 0LL;
          if ( v49 == 3 && !*((_BYTE *)a1 + 231) && (*(_DWORD *)a1 & 0x40) != 0 )
          {
            v50 = v66;
            GreAcquireSemaphore(*((_QWORD *)v66 + 16));
            vSpUpdatePerPixelAlphaFromColorKey(*((struct _SURFOBJ **)a1 + 16), *((_DWORD *)a1 + 51), &v86, &v76);
            v51 = v86;
            v48 = 1;
          }
          else
          {
            v51 = v87;
            v50 = v66;
          }
          NEEDDDILOCK::vLock((NEEDDDILOCK *)&v84, *((struct _SURFOBJ **)a1 + 16));
          NEEDDDILOCK::vLock((NEEDDDILOCK *)&v83, a3);
          if ( a3->iType != 1 )
            goto LABEL_121;
          if ( bAllowShareAccess(a3)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55) + 280) + 20LL) & 0x10000) != 0 )
          {
            v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56) + 280) + 120LL);
LABEL_124:
            OffAlphaBlend(
              (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64))v57,
              (int *)v68,
              (__int64)a3,
              (int *)a1 + 34,
              *((_QWORD *)a1 + 16),
              v71,
              (__int64)v70,
              v65,
              &v86,
              (__int64)v85);
            if ( v83 )
              GreUnlockDisplayDevice(*(_QWORD *)(v83 + 48));
            if ( v84 )
              GreUnlockDisplayDevice(*(_QWORD *)(v84 + 48));
            if ( v48 )
            {
              v62 = *((_DWORD *)a1 + 51);
              v63 = (struct _SURFOBJ *)*((_QWORD *)a1 + 16);
              v86 = v51;
              vSpDeletePerPixelAlphaFromColorKey(v63, v62, &v86, v76);
              EtwTraceGreLockReleaseSemaphore(L"pState->hsemState", *((_QWORD *)v50 + 16));
              GreReleaseSemaphoreInternal(*((_QWORD *)v50 + 16));
            }
            goto LABEL_130;
          }
          if ( a3->iType != 1
            || !bAllowShareAccess(a3)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61) + 108) )
          {
LABEL_121:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x10000) != 0 )
            {
              v57 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a3->hdev + 170);
              goto LABEL_124;
            }
          }
          v57 = EngAlphaBlend;
          goto LABEL_124;
        }
        v23 = bConcurrent(*((struct _SPRITESTATE **)a1 + 2));
        ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v91, v23, v22, (struct ERECTL *)a4, 0);
      }
      if ( (int)v92 < (int)v93 )
      {
        v71 = (struct _CLIPOBJ *)v91;
        if ( SHIDWORD(v92) < SHIDWORD(v93) )
          goto LABEL_18;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v69);
LABEL_51:
      if ( v9 )
        vSpAddAndCompactDirtyRegion(a1, v9);
      goto LABEL_42;
    }
  }
}
