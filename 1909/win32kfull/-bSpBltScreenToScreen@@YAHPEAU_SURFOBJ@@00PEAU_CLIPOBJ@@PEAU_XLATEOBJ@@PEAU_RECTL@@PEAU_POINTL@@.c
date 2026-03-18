/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027CED0
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0038380 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0083694 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C008371C (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00837B0 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     OffBitBlt @ 0x1C00838A0 (OffBitBlt.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00853C4 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C008574C (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0086DC0 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0087198 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0087DDC (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0087E34 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0087E94 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0087F9C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0087FD8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C008B58C (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A8A00 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A9DD4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00FDDA0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0162410 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0162C6C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C01634E0 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0281034 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 */

__int64 __fastcall bSpBltScreenToScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // ebx
  struct _RECTL *v12; // rdi
  RECTL rclBounds; // xmm6
  int v15; // eax
  __int64 v16; // r8
  struct _SPRITESTATE *v17; // r15
  int v18; // r12d
  int v19; // r13d
  int v20; // esi
  struct _POINTL *v22; // rdx
  struct _CLIPOBJ *v23; // r9
  struct _RECTL *v24; // r8
  struct _POINTL *v25; // r11
  struct _SURFOBJ *v26; // r12
  int v27; // r15d
  int v28; // eax
  struct SPRITE *v29; // rsi
  struct _SURFOBJ *v30; // rsi
  struct _POINTL *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  LONG v34; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v36; // rsi
  XCLIPOBJ *v37; // r12
  __int64 v38; // r10
  struct REGION *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // r8
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // r8
  int v59; // eax
  struct _POINTL *v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // r8
  struct _CLIPOBJ *v63; // [rsp+78h] [rbp-90h] BYREF
  int v64; // [rsp+80h] [rbp-88h]
  struct _POINTL v65; // [rsp+88h] [rbp-80h] BYREF
  int v66; // [rsp+90h] [rbp-78h]
  int v67; // [rsp+94h] [rbp-74h]
  struct _POINTL v68; // [rsp+98h] [rbp-70h]
  int v69; // [rsp+A0h] [rbp-68h]
  HDEV hdev; // [rsp+A8h] [rbp-60h] BYREF
  int v71; // [rsp+B0h] [rbp-58h]
  int v72; // [rsp+B4h] [rbp-54h]
  struct _SURFOBJ *v73; // [rsp+B8h] [rbp-50h]
  __int64 v74; // [rsp+C0h] [rbp-48h] BYREF
  struct _POINTL *v75; // [rsp+C8h] [rbp-40h]
  struct _POINTL *v76; // [rsp+D0h] [rbp-38h]
  __int64 v77; // [rsp+D8h] [rbp-30h] BYREF
  struct SPRITE *v78; // [rsp+E0h] [rbp-28h] BYREF
  struct _RECTL v79; // [rsp+E8h] [rbp-20h] BYREF
  struct SPRITE *v80[2]; // [rsp+F8h] [rbp-10h] BYREF
  struct _SURFOBJ *v81; // [rsp+108h] [rbp+0h]
  struct _XLATEOBJ *v82; // [rsp+110h] [rbp+8h]
  struct REGION *v83; // [rsp+118h] [rbp+10h] BYREF
  __int64 v84; // [rsp+120h] [rbp+18h] BYREF
  struct SPRITE *v85; // [rsp+128h] [rbp+20h] BYREF
  struct _SURFOBJ *v86; // [rsp+130h] [rbp+28h]
  __int64 v87; // [rsp+138h] [rbp+30h]
  __int64 v88; // [rsp+140h] [rbp+38h]
  __int64 v89; // [rsp+148h] [rbp+40h]
  struct _SPRITESTATE *v90; // [rsp+150h] [rbp+48h]
  _BYTE v91[16]; // [rsp+158h] [rbp+50h] BYREF
  struct _RECTL v92; // [rsp+168h] [rbp+60h] BYREF
  struct _POINTL *v93; // [rsp+178h] [rbp+70h]
  __int64 *v94[3]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v95[80]; // [rsp+198h] [rbp+90h] BYREF
  int v96; // [rsp+1E8h] [rbp+E0h]
  _BYTE v97[96]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 *v98[24]; // [rsp+258h] [rbp+150h] BYREF
  struct _RECTL v99; // [rsp+318h] [rbp+210h] BYREF
  struct _RECTL v100; // [rsp+328h] [rbp+220h] BYREF
  struct _RECTL v101; // [rsp+338h] [rbp+230h] BYREF
  unsigned __int128 v102; // [rsp+348h] [rbp+240h] BYREF
  RECTL v103; // [rsp+358h] [rbp+250h] BYREF
  struct _RECTL v104; // [rsp+368h] [rbp+260h] BYREF
  _QWORD v105[3]; // [rsp+378h] [rbp+270h] BYREF

  v11 = 0;
  v12 = a6;
  v82 = a5;
  v93 = a8;
  v88 = (__int64)a9;
  v87 = (__int64)a10;
  v89 = (__int64)a3;
  v86 = a1;
  v63 = a4;
  *(_QWORD *)&v104.left = 0LL;
  *(_QWORD *)&v104.right = 0LL;
  *(_QWORD *)&v99.left = 0LL;
  *(_QWORD *)&v99.right = 0LL;
  *(_QWORD *)&v79.left = 0LL;
  *(_QWORD *)&v79.right = 0LL;
  v103 = (RECTL)0LL;
  *(_QWORD *)&v101.left = 0LL;
  *(_QWORD *)&v101.right = 0LL;
  *(_QWORD *)&v100.left = 0LL;
  *(_QWORD *)&v100.right = 0LL;
  v74 = 0LL;
  v102 = 0uLL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v102 = (unsigned __int128)rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v102) )
      return 1LL;
    v103 = rclBounds;
    ERECTL::operator*=(&v103.left, &a6->left);
    v12 = &v103;
  }
  hdev = a1->hdev;
  memset(v94, 0, sizeof(v94));
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v94);
  v15 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v91, ghsemSprite, v15);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v94) )
    goto LABEL_86;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v98, (struct PDEVOBJ *)&hdev, v16);
  v17 = (struct _SPRITESTATE *)(hdev + 22);
  v18 = v12->left - a7->x;
  v19 = v12->top - a7->y;
  v90 = (struct _SPRITESTATE *)(hdev + 22);
  v69 = v18;
  if ( v18 <= 0 )
  {
    v20 = 0;
    if ( v19 > 0 )
      v20 = 2;
  }
  else
  {
    v20 = 3;
    if ( v19 <= 0 )
      v20 = 1;
  }
  v64 = v20;
  if ( v63 )
  {
    if ( v63->iDComplexity )
      v102 = (unsigned __int128)v63->rclBounds;
    else
      v63 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 52));
  if ( !*((_QWORD *)v17 + 129) )
    goto LABEL_23;
  v99.left = v12->left - v18;
  v99.right = v12->right - v18;
  v99.top = v12->top - v19;
  v99.bottom = v12->bottom - v19;
  if ( *((_QWORD *)v17 + 130) )
  {
    v23 = 0LL;
    v24 = &v99;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v99, &v104) )
  {
    v23 = v63;
    v24 = &v104;
LABEL_22:
    vSpUpdateLockedScreenAreas(v17, v22, v24, v23, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v17 + 120));
  LODWORD(v80[0]) = v12->left - v18;
  LODWORD(v80[1]) = v12->right - v18;
  HIDWORD(v80[0]) = v12->top - v19;
  HIDWORD(v80[1]) = v12->bottom - v19;
  v92 = *(struct _RECTL *)v80;
  ERECTL::operator+=((unsigned int *)&v92, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v105, v17, &v92);
  if ( !v105[0] )
    goto LABEL_83;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v95, v17, v12, v20, &v92);
  if ( !v96 )
    goto LABEL_82;
  do
  {
    v72 = ENUMAREAS::bEnum((ENUMAREAS *)v95, &v78, &v79);
    v99.left = v79.left - v18;
    v99.right = v79.right - v18;
    v99.top = v79.top - v19;
    v99.bottom = v79.bottom - v19;
    do
    {
      if ( v78 )
      {
        v26 = (struct _SURFOBJ *)*((_QWORD *)v78 + 20);
        v76 = (struct _POINTL *)((char *)v78 + 168);
      }
      else
      {
        v26 = v86;
        v76 = v25;
      }
      v81 = v26;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v97, v17, &v99, v20, 0LL);
      v27 = v69;
      do
      {
        v28 = ENUMAREAS::bEnum((ENUMAREAS *)v97, &v85, &v101);
        v29 = v85;
        v71 = v28;
        while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v97, v80) )
          v29 = v80[0];
        v85 = v29;
        if ( v29 )
        {
          v73 = (struct _SURFOBJ *)*((_QWORD *)v29 + 20);
          v31 = (struct _POINTL *)((char *)v29 + 168);
          v30 = v73;
        }
        else
        {
          v30 = v86;
          v31 = &gptlZero;
          v73 = v86;
        }
        v75 = v31;
        v100.left = v27 + v101.left;
        v100.right = v27 + v101.right;
        v100.top = v19 + v101.top;
        v100.bottom = v19 + v101.bottom;
        if ( v63 && !bIntersect(&v100, (const struct _RECTL *)&v102, &v63->rclBounds) )
          goto LABEL_75;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v77, v26);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v84, v30);
        v66 = 0;
        v67 = 0;
        v34 = *((_DWORD *)hdev + 646);
        v68.y = (int)hdev[647];
        v65 = 0LL;
        v68.x = v34;
        if ( !v63 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33);
          if ( ThreadWin32Thread )
          {
            if ( -(*(_DWORD *)(ThreadWin32Thread + 328) & 1) == 1 )
            {
              v36 = *(DC ***)(ThreadWin32Thread + 312);
              v37 = (DC *)((char *)*v36 + 1752);
              v83 = XDCOBJ::prgnEffRao(v36);
              if ( (*(_DWORD *)(v38 + 40) & 0x20000) != 0 )
              {
                v65.x = -v68.x;
                v65.y = -v68.y;
                RGNOBJ::bOffset((RGNOBJ *)&v83, &v65);
                v67 = 1;
              }
              v39 = XDCOBJ::prgnEffRao(v36);
              XCLIPOBJ::vSetup(v37, v39, (struct ERECTL *)&v100, 1);
              v30 = v73;
              v63 = (struct _CLIPOBJ *)v37;
              v26 = v81;
              v66 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v77, &v63) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(v76, v26, v75, v30, v63, v82, &v100, (struct _POINTL *)&v101);
            goto LABEL_67;
          }
          if ( v93 )
          {
            LODWORD(v74) = v100.left + v93->x - v12->left;
            HIDWORD(v74) = v100.top + v93->y - v12->top;
          }
          if ( v26->iType != 1 )
            goto LABEL_63;
          if ( bAllowShareAccess(v26)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47) + 280) + 20LL) & 1) != 0 )
          {
            v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49) + 280) + 72LL);
LABEL_66:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v50,
              (int *)v76,
              (__int64)v26,
              v75,
              (__int64)v30,
              v89,
              v63,
              (__int64)v82,
              &v100.left,
              (__int64 *)&v101.left,
              (__int64)&v74,
              v88,
              (__int64 *)v87,
              a11);
            goto LABEL_67;
          }
          if ( v26->iType != 1
            || !bAllowShareAccess(v26)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53, v54) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v55, v56) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58) + 108) )
          {
LABEL_63:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v26) + 112) & 1) != 0 )
            {
              v50 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v26->hdev + 164);
              goto LABEL_66;
            }
          }
          v50 = EngBitBlt;
          goto LABEL_66;
        }
LABEL_67:
        if ( v66 == 1 )
        {
          if ( v67 == 1 )
          {
            v65 = v68;
            RGNOBJ::bOffset((RGNOBJ *)&v83, &v65);
          }
          v63 = 0LL;
        }
        if ( v84 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v84 + 48));
          v84 = 0LL;
        }
        if ( v77 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v77 + 48));
          v77 = 0LL;
        }
LABEL_75:
        if ( v63 )
          v63->rclBounds = (RECTL)v102;
      }
      while ( v71 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v97);
      v59 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v95, &v78);
      v17 = v90;
      v25 = &gptlZero;
      v20 = v64;
    }
    while ( v59 );
    if ( v78 )
      vSpRedrawArea(v90, &v79, 0);
    v18 = v69;
  }
  while ( v72 );
LABEL_82:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v95);
LABEL_83:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v105);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v17 + 120));
  if ( *((_QWORD *)v17 + 129) )
    vSpUpdateLockedScreenAreas(v17, v60, v12, v63, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v17 + 120));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v105);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v98, v61, v62);
LABEL_86:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v91);
  return v11;
}
