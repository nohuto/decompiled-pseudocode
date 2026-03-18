/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00E11F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F00 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C007AFA8 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00E1720 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00E17FC (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00E18D4 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00E1924 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00E1960 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00E19E8 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     OffBitBlt @ 0x1C010B5E4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02510A4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C025431C (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02552B0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0256250 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 */

__int64 __fastcall bSpBltFromScreen(
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
  unsigned int v11; // esi
  struct _RECTL *v12; // rbx
  HDEV v16; // rdi
  int v17; // eax
  LONG x; // ecx
  LONG left; // edx
  int v20; // r13d
  int v21; // edx
  LONG v22; // eax
  struct _POINTL *v23; // rdx
  struct _CLIPOBJ *v24; // r15
  unsigned int v25; // r9d
  BYTE iDComplexity; // bl
  int v27; // eax
  __int64 v28; // rdi
  struct _SURFOBJ *v29; // rax
  __int64 v30; // rbx
  __int64 v32; // rdi
  __int64 v33; // rbx
  unsigned int v34; // eax
  unsigned int v35; // r14d
  RECTL rclBounds; // xmm6
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
  LONG y; // r8d
  LONG v48; // ecx
  int v49; // ecx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  BOOL (__stdcall *v55)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  BYTE v60; // [rsp+78h] [rbp-90h]
  __int64 v61; // [rsp+80h] [rbp-88h]
  struct _POINTL *v63; // [rsp+88h] [rbp-80h]
  int v64; // [rsp+90h] [rbp-78h]
  struct _RECTL *v65; // [rsp+98h] [rbp-70h]
  int v66; // [rsp+ACh] [rbp-5Ch]
  HDEV hdev; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v68; // [rsp+B8h] [rbp-50h] BYREF
  HDEV v69; // [rsp+C0h] [rbp-48h]
  __int64 v70; // [rsp+C8h] [rbp-40h]
  __int64 v71; // [rsp+D0h] [rbp-38h]
  __int64 v72; // [rsp+D8h] [rbp-30h]
  __int64 v73; // [rsp+E0h] [rbp-28h]
  struct SPRITE *v74; // [rsp+E8h] [rbp-20h] BYREF
  char v75[8]; // [rsp+F0h] [rbp-18h] BYREF
  _QWORD v76[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v77[96]; // [rsp+118h] [rbp+10h] BYREF
  struct _SPRITESTATE *v78[24]; // [rsp+178h] [rbp+70h] BYREF
  struct _SPRITESTATE *v79[24]; // [rsp+238h] [rbp+130h] BYREF
  struct _RECTL v80; // [rsp+2F8h] [rbp+1F0h] BYREF
  struct _RECTL v81; // [rsp+308h] [rbp+200h] BYREF
  RECTL v82; // [rsp+318h] [rbp+210h] BYREF
  RECTL v83; // [rsp+328h] [rbp+220h] BYREF
  _QWORD v84[3]; // [rsp+338h] [rbp+230h] BYREF

  v11 = 0;
  v12 = a6;
  v72 = (__int64)a8;
  v71 = (__int64)a9;
  v70 = (__int64)a10;
  v73 = (__int64)a3;
  v65 = a6;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v82 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v82) )
      return 1LL;
    v83 = rclBounds;
    ERECTL::operator*=(&v83.left, &a6->left);
    v12 = &v83;
    v65 = &v83;
  }
  hdev = a2->hdev;
  memset(v76, 0, 24);
  v16 = hdev + 20;
  v69 = hdev + 20;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v76);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v75, ghsemSprite, v17);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo((UNDOW32THREADPIDLOCKS *)v76) )
    goto LABEL_38;
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v16) )
  {
    SURFOBJ_TO_SURFACE(a1);
    if ( !(unsigned int)SURFACE::bIncludeSprites() )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v78, (struct PDEVOBJ *)&hdev);
      x = a7->x;
      left = v12->left;
      v20 = v12->top - a7->y;
      v80.top = a7->y;
      v21 = left - x;
      v22 = v12->right - v21;
      v80.left = x;
      v80.right = v22;
      v64 = v21;
      v80.bottom = v12->bottom - v20;
      SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v16 + 30));
      v24 = a4;
      if ( *((_QWORD *)v16 + 129) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v16, v23, v65, a4, 1);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v16 + 30));
      if ( v64 > 0 )
      {
        v25 = 3;
        if ( v20 <= 0 )
          v25 = 1;
      }
      else
      {
        v25 = 0;
        if ( v20 > 0 )
          v25 = 2;
      }
      if ( a4 )
      {
        iDComplexity = a4->iDComplexity;
        v60 = iDComplexity;
        if ( iDComplexity )
          v82 = a4->rclBounds;
      }
      else
      {
        iDComplexity = 0;
        v60 = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v77, (struct _SPRITESTATE *)v16, &v80, v25, 0LL);
      while ( 1 )
      {
        v27 = ENUMAREAS::bEnum((ENUMAREAS *)v77, &v74, &v80);
        v81.left = v64 + v80.left;
        v81.right = v64 + v80.right;
        v81.top = v20 + v80.top;
        v66 = v27;
        v81.bottom = v20 + v80.bottom;
        if ( !iDComplexity || bIntersect(&v81, &v82, &v24->rclBounds) )
          break;
LABEL_34:
        if ( !v66 )
        {
          if ( iDComplexity )
            v24->rclBounds = v82;
          v11 = 1;
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v77);
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v78);
          goto LABEL_38;
        }
      }
      if ( v74 )
      {
        v63 = (struct _POINTL *)((char *)v74 + 168);
        v61 = *((_QWORD *)v74 + 20);
      }
      else
      {
        v61 = *((_QWORD *)v16 + 4);
        v63 = &gptlZero;
      }
      v28 = 0LL;
      if ( a1
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
      {
        v28 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
        GreLockDisplayDevice(*(_QWORD *)(v28 + 48));
      }
      v29 = (struct _SURFOBJ *)v61;
      v30 = 0LL;
      if ( v61 )
      {
        if ( ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v61) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v61) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v61) + 112) & 0x200) == 0 )
        {
          v30 = SURFOBJ_TO_SURFACE_NOT_NULL(v61);
          GreLockDisplayDevice(*(_QWORD *)(v30 + 48));
        }
        v29 = (struct _SURFOBJ *)v61;
      }
      if ( a11 == 52428 )
      {
        INVOKEOFFCOPYBITS(&gptlZero, a1, v63, v29, v24, a5, &v81, (struct _POINTL *)&v80);
LABEL_29:
        if ( v30 )
          GreUnlockDisplayDevice(*(_QWORD *)(v30 + 48));
        if ( v28 )
          GreUnlockDisplayDevice(*(_QWORD *)(v28 + 48));
        iDComplexity = v60;
        v16 = v69;
        goto LABEL_34;
      }
      if ( v72 )
      {
        LODWORD(v68) = v81.left + *(_DWORD *)v72 - v65->left;
        HIDWORD(v68) = v81.top + *(_DWORD *)(v72 + 4) - v65->top;
      }
      if ( a1->iType != 1 )
        goto LABEL_85;
      if ( bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 280) + 20LL) & 1) != 0 )
      {
        v42 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 280) + 72LL);
LABEL_88:
        OffBitBlt(
          (int)v42,
          (int)&gptlZero,
          (int)a1,
          (int)v63,
          v61,
          v73,
          v24,
          (__int64)a5,
          (__int64)&v81,
          (__int64)&v80,
          (__int64)&v68,
          v71,
          v70,
          a11);
        goto LABEL_29;
      }
      if ( a1->iType != 1
        || !bAllowShareAccess(a1)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46) + 108) )
      {
LABEL_85:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
        {
          v42 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 163);
          goto LABEL_88;
        }
      }
      v42 = EngBitBlt;
      goto LABEL_88;
    }
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v79, (struct PDEVOBJ *)&hdev);
  if ( *((_QWORD *)v16 + 166) )
  {
    y = a7->y;
    v48 = a7->x + v12->right - v12->left;
    v80.left = a7->x;
    v80.right = v48;
    v49 = v12->bottom - v12->top;
    v80.top = y;
    v80.bottom = y + v49;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v84, (struct _SPRITESTATE *)v16, &v80);
    if ( v84[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v16, &v80);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v16 + 166);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v84);
  }
  v32 = 0LL;
  if ( a1
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 0x200) == 0 )
  {
    v32 = SURFOBJ_TO_SURFACE_NOT_NULL(a1);
    GreLockDisplayDevice(*(_QWORD *)(v32 + 48));
  }
  v33 = 0LL;
  if ( a2
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a2) + 112) & 0x200) == 0 )
  {
    v33 = SURFOBJ_TO_SURFACE_NOT_NULL(a2);
    GreLockDisplayDevice(*(_QWORD *)(v33 + 48));
  }
  if ( a11 == 52428 )
  {
    v34 = INVOKEOFFCOPYBITS(&gptlZero, a1, &gptlZero, a2, a4, a5, v65, a7);
    goto LABEL_52;
  }
  if ( a1->iType != 1 )
  {
LABEL_106:
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
    {
      v55 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 163);
      goto LABEL_109;
    }
LABEL_108:
    v55 = EngBitBlt;
    goto LABEL_109;
  }
  if ( !bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50)
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53) + 108)
    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53) + 280) + 20LL) & 1) == 0 )
  {
    if ( a1->iType == 1
      && bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59) + 108)) )
    {
      goto LABEL_108;
    }
    goto LABEL_106;
  }
  v55 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54) + 280) + 72LL);
LABEL_109:
  v34 = OffBitBlt(
          (int)v55,
          (int)&gptlZero,
          (int)a1,
          (int)&gptlZero,
          (__int64)a2,
          v73,
          a4,
          (__int64)a5,
          (__int64)v65,
          (__int64)a7,
          v72,
          v71,
          v70,
          a11);
LABEL_52:
  v35 = v34;
  if ( v33 )
    GreUnlockDisplayDevice(*(_QWORD *)(v33 + 48));
  if ( v32 )
    GreUnlockDisplayDevice(*(_QWORD *)(v32 + 48));
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v79);
  v11 = v35;
LABEL_38:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v75);
  return v11;
}
