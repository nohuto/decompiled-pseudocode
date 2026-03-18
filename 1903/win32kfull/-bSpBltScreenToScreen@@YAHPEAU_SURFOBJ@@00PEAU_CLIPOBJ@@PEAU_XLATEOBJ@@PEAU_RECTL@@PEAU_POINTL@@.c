/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D590
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C003F604 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C003F68C (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C003F720 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     OffBitBlt @ 0x1C003F810 (OffBitBlt.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00416BC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0043DD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0043E90 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043F98 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0043FD4 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0046BBC (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C005ED08 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0097650 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0123680 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0161440 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0161C9C (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0162510 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02816F4 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
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
  __int64 v17; // r9
  struct _SPRITESTATE *v18; // r15
  int v19; // r12d
  int v20; // r13d
  int v21; // esi
  struct _POINTL *v23; // rdx
  struct _CLIPOBJ *v24; // r9
  struct _RECTL *v25; // r8
  struct _POINTL *v26; // r11
  struct _SURFOBJ *v27; // r12
  int v28; // r15d
  int v29; // eax
  struct SPRITE *v30; // rsi
  struct _SURFOBJ *v31; // rsi
  struct _POINTL *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  LONG v36; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v38; // rsi
  XCLIPOBJ *v39; // r12
  __int64 v40; // r10
  struct REGION *v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // r8
  __int64 v56; // r9
  BOOL (__stdcall *v57)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  int v70; // eax
  struct _POINTL *v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // r8
  __int64 v74; // r9
  struct _CLIPOBJ *v75; // [rsp+78h] [rbp-90h] BYREF
  int v76; // [rsp+80h] [rbp-88h]
  struct _POINTL v77; // [rsp+88h] [rbp-80h] BYREF
  int v78; // [rsp+90h] [rbp-78h]
  int v79; // [rsp+94h] [rbp-74h]
  struct _POINTL v80; // [rsp+98h] [rbp-70h]
  int v81; // [rsp+A0h] [rbp-68h]
  HDEV hdev; // [rsp+A8h] [rbp-60h] BYREF
  int v83; // [rsp+B0h] [rbp-58h]
  int v84; // [rsp+B4h] [rbp-54h]
  struct _SURFOBJ *v85; // [rsp+B8h] [rbp-50h]
  __int64 v86; // [rsp+C0h] [rbp-48h] BYREF
  struct _POINTL *v87; // [rsp+C8h] [rbp-40h]
  struct _POINTL *v88; // [rsp+D0h] [rbp-38h]
  __int64 v89; // [rsp+D8h] [rbp-30h] BYREF
  struct SPRITE *v90; // [rsp+E0h] [rbp-28h] BYREF
  struct _RECTL v91; // [rsp+E8h] [rbp-20h] BYREF
  struct SPRITE *v92[2]; // [rsp+F8h] [rbp-10h] BYREF
  struct _SURFOBJ *v93; // [rsp+108h] [rbp+0h]
  struct _XLATEOBJ *v94; // [rsp+110h] [rbp+8h]
  struct REGION *v95; // [rsp+118h] [rbp+10h] BYREF
  __int64 v96; // [rsp+120h] [rbp+18h] BYREF
  struct SPRITE *v97; // [rsp+128h] [rbp+20h] BYREF
  struct _SURFOBJ *v98; // [rsp+130h] [rbp+28h]
  __int64 v99; // [rsp+138h] [rbp+30h]
  __int64 v100; // [rsp+140h] [rbp+38h]
  __int64 v101; // [rsp+148h] [rbp+40h]
  struct _SPRITESTATE *v102; // [rsp+150h] [rbp+48h]
  _BYTE v103[16]; // [rsp+158h] [rbp+50h] BYREF
  struct _RECTL v104; // [rsp+168h] [rbp+60h] BYREF
  struct _POINTL *v105; // [rsp+178h] [rbp+70h]
  __int64 *v106[3]; // [rsp+180h] [rbp+78h] BYREF
  _BYTE v107[80]; // [rsp+198h] [rbp+90h] BYREF
  int v108; // [rsp+1E8h] [rbp+E0h]
  _BYTE v109[96]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 *v110[24]; // [rsp+258h] [rbp+150h] BYREF
  struct _RECTL v111; // [rsp+318h] [rbp+210h] BYREF
  struct _RECTL v112; // [rsp+328h] [rbp+220h] BYREF
  struct _RECTL v113; // [rsp+338h] [rbp+230h] BYREF
  unsigned __int128 v114; // [rsp+348h] [rbp+240h] BYREF
  RECTL v115; // [rsp+358h] [rbp+250h] BYREF
  struct _RECTL v116; // [rsp+368h] [rbp+260h] BYREF
  _QWORD v117[3]; // [rsp+378h] [rbp+270h] BYREF

  v11 = 0;
  v12 = a6;
  v94 = a5;
  v105 = a8;
  v100 = (__int64)a9;
  v99 = (__int64)a10;
  v101 = (__int64)a3;
  v98 = a1;
  v75 = a4;
  *(_QWORD *)&v116.left = 0LL;
  *(_QWORD *)&v116.right = 0LL;
  *(_QWORD *)&v111.left = 0LL;
  *(_QWORD *)&v111.right = 0LL;
  *(_QWORD *)&v91.left = 0LL;
  *(_QWORD *)&v91.right = 0LL;
  v115 = (RECTL)0LL;
  *(_QWORD *)&v113.left = 0LL;
  *(_QWORD *)&v113.right = 0LL;
  *(_QWORD *)&v112.left = 0LL;
  *(_QWORD *)&v112.right = 0LL;
  v86 = 0LL;
  v114 = 0uLL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v114 = (unsigned __int128)rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v114) )
      return 1LL;
    v115 = rclBounds;
    ERECTL::operator*=(&v115.left, &a6->left);
    v12 = &v115;
  }
  hdev = a1->hdev;
  memset(v106, 0, sizeof(v106));
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v106);
  v15 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v103, ghsemSprite, v15);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v106) )
    goto LABEL_86;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v110, (struct PDEVOBJ *)&hdev, v16, v17);
  v18 = (struct _SPRITESTATE *)(hdev + 22);
  v19 = v12->left - a7->x;
  v20 = v12->top - a7->y;
  v102 = (struct _SPRITESTATE *)(hdev + 22);
  v81 = v19;
  if ( v19 <= 0 )
  {
    v21 = 0;
    if ( v20 > 0 )
      v21 = 2;
  }
  else
  {
    v21 = 3;
    if ( v20 <= 0 )
      v21 = 1;
  }
  v76 = v21;
  if ( v75 )
  {
    if ( v75->iDComplexity )
      v114 = (unsigned __int128)v75->rclBounds;
    else
      v75 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 52));
  if ( !*((_QWORD *)v18 + 129) )
    goto LABEL_23;
  v111.left = v12->left - v19;
  v111.right = v12->right - v19;
  v111.top = v12->top - v20;
  v111.bottom = v12->bottom - v20;
  if ( *((_QWORD *)v18 + 130) )
  {
    v24 = 0LL;
    v25 = &v111;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v111, &v116) )
  {
    v24 = v75;
    v25 = &v116;
LABEL_22:
    vSpUpdateLockedScreenAreas(v18, v23, v25, v24, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v18 + 120));
  LODWORD(v92[0]) = v12->left - v19;
  LODWORD(v92[1]) = v12->right - v19;
  HIDWORD(v92[0]) = v12->top - v20;
  HIDWORD(v92[1]) = v12->bottom - v20;
  v104 = *(struct _RECTL *)v92;
  ERECTL::operator+=((unsigned int *)&v104, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v117, v18, &v104);
  if ( !v117[0] )
    goto LABEL_83;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v107, v18, v12, v21, &v104);
  if ( !v108 )
    goto LABEL_82;
  do
  {
    v84 = ENUMAREAS::bEnum((ENUMAREAS *)v107, &v90, &v91);
    v111.left = v91.left - v19;
    v111.right = v91.right - v19;
    v111.top = v91.top - v20;
    v111.bottom = v91.bottom - v20;
    do
    {
      if ( v90 )
      {
        v27 = (struct _SURFOBJ *)*((_QWORD *)v90 + 20);
        v88 = (struct _POINTL *)((char *)v90 + 168);
      }
      else
      {
        v27 = v98;
        v88 = v26;
      }
      v93 = v27;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v109, v18, &v111, v21, 0LL);
      v28 = v81;
      do
      {
        v29 = ENUMAREAS::bEnum((ENUMAREAS *)v109, &v97, &v113);
        v30 = v97;
        v83 = v29;
        while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v109, v92) )
          v30 = v92[0];
        v97 = v30;
        if ( v30 )
        {
          v85 = (struct _SURFOBJ *)*((_QWORD *)v30 + 20);
          v32 = (struct _POINTL *)((char *)v30 + 168);
          v31 = v85;
        }
        else
        {
          v31 = v98;
          v32 = &gptlZero;
          v85 = v98;
        }
        v87 = v32;
        v112.left = v28 + v113.left;
        v112.right = v28 + v113.right;
        v112.top = v20 + v113.top;
        v112.bottom = v20 + v113.bottom;
        if ( v75 && !bIntersect(&v112, (const struct _RECTL *)&v114, &v75->rclBounds) )
          goto LABEL_75;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v89, v27);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v96, v31);
        v78 = 0;
        v79 = 0;
        v36 = *((_DWORD *)hdev + 646);
        v80.y = (int)hdev[647];
        v77 = 0LL;
        v80.x = v36;
        if ( !v75 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34, v35);
          if ( ThreadWin32Thread )
          {
            if ( -(*(_DWORD *)(ThreadWin32Thread + 328) & 1) == 1 )
            {
              v38 = *(DC ***)(ThreadWin32Thread + 312);
              v39 = (DC *)((char *)*v38 + 1752);
              v95 = XDCOBJ::prgnEffRao(v38);
              if ( (*(_DWORD *)(v40 + 40) & 0x20000) != 0 )
              {
                v77.x = -v80.x;
                v77.y = -v80.y;
                RGNOBJ::bOffset((RGNOBJ *)&v95, &v77);
                v79 = 1;
              }
              v41 = XDCOBJ::prgnEffRao(v38);
              XCLIPOBJ::vSetup(v39, v41, (struct ERECTL *)&v112, 1);
              v31 = v85;
              v75 = (struct _CLIPOBJ *)v39;
              v27 = v93;
              v78 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v89, &v75) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(v88, v27, v87, v31, v75, v94, &v112, (struct _POINTL *)&v113);
            goto LABEL_67;
          }
          if ( v105 )
          {
            LODWORD(v86) = v112.left + v105->x - v12->left;
            HIDWORD(v86) = v112.top + v105->y - v12->top;
          }
          if ( v27->iType != 1 )
            goto LABEL_63;
          if ( bAllowShareAccess(v27)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43, v44)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 280)
                          + 20LL) & 1) != 0 )
          {
            v57 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 280) + 72LL);
LABEL_66:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v57,
              (int *)v88,
              (__int64)v27,
              v87,
              (__int64)v31,
              v101,
              v75,
              (__int64)v94,
              &v112.left,
              (__int64 *)&v113.left,
              (__int64)&v86,
              v100,
              (__int64 *)v99,
              a11);
            goto LABEL_67;
          }
          if ( v27->iType != 1
            || !bAllowShareAccess(v27)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58, v59, v60)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64, v65, v66) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69) + 108) )
          {
LABEL_63:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v27) + 112) & 1) != 0 )
            {
              v57 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v27->hdev + 164);
              goto LABEL_66;
            }
          }
          v57 = EngBitBlt;
          goto LABEL_66;
        }
LABEL_67:
        if ( v78 == 1 )
        {
          if ( v79 == 1 )
          {
            v77 = v80;
            RGNOBJ::bOffset((RGNOBJ *)&v95, &v77);
          }
          v75 = 0LL;
        }
        if ( v96 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v96 + 48));
          v96 = 0LL;
        }
        if ( v89 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v89 + 48));
          v89 = 0LL;
        }
LABEL_75:
        if ( v75 )
          v75->rclBounds = (RECTL)v114;
      }
      while ( v83 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v109);
      v70 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v107, &v90);
      v18 = v102;
      v26 = &gptlZero;
      v21 = v76;
    }
    while ( v70 );
    if ( v90 )
      vSpRedrawArea(v102, &v91, 0);
    v19 = v81;
  }
  while ( v84 );
LABEL_82:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v107);
LABEL_83:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v117);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v18 + 120));
  if ( *((_QWORD *)v18 + 129) )
    vSpUpdateLockedScreenAreas(v18, v71, v12, v75, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v18 + 120));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v117);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v110, v72, v73, v74);
LABEL_86:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v103);
  return v11;
}
