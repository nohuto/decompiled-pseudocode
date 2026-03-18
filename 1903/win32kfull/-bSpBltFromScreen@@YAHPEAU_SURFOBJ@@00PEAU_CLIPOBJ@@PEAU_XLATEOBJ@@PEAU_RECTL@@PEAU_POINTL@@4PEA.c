/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00416F0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C003F604 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C003F68C (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C003F720 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C003F770 (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     OffBitBlt @ 0x1C003F810 (OffBitBlt.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C0041334 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0042DBC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0043194 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0043DD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C0043E90 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043F98 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0043FD4 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C0046BBC (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00600A4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0162510 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0280DB4 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02816F4 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
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
  unsigned int v11; // ebx
  struct _RECTL *v12; // r12
  HDEV v16; // r15
  int v17; // eax
  LONG x; // ecx
  LONG left; // r8d
  int v20; // edx
  int v21; // r8d
  LONG v22; // eax
  struct _POINTL *v23; // rdx
  unsigned int v24; // r9d
  struct _POINTL *v25; // r13
  int v26; // eax
  unsigned int v28; // eax
  unsigned int v29; // edi
  RECTL rclBounds; // xmm6
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  LONG y; // r8d
  LONG v33; // ecx
  int v34; // ecx
  BOOL (__stdcall *v35)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  BYTE iDComplexity; // [rsp+78h] [rbp-90h]
  int v37; // [rsp+7Ch] [rbp-8Ch]
  struct _SURFOBJ *v38; // [rsp+80h] [rbp-88h]
  struct _POINTL *v39; // [rsp+88h] [rbp-80h]
  POINTL *v40; // [rsp+88h] [rbp-80h]
  int v41; // [rsp+90h] [rbp-78h]
  int v42; // [rsp+A0h] [rbp-68h]
  __int64 v43; // [rsp+A8h] [rbp-60h] BYREF
  HDEV hdev; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-40h]
  __int64 v48; // [rsp+D0h] [rbp-38h]
  __int64 v49; // [rsp+D8h] [rbp-30h]
  __int64 v50; // [rsp+E0h] [rbp-28h]
  struct SPRITE *v51; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v52; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v53; // [rsp+F8h] [rbp-10h] BYREF
  char v54[8]; // [rsp+100h] [rbp-8h] BYREF
  __int64 *v55[4]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v56[96]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v57[192]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v58[192]; // [rsp+248h] [rbp+140h] BYREF
  struct _RECTL v59; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v60; // [rsp+318h] [rbp+210h] BYREF
  unsigned __int128 v61; // [rsp+328h] [rbp+220h] BYREF
  RECTL v62; // [rsp+338h] [rbp+230h] BYREF
  _QWORD v63[3]; // [rsp+348h] [rbp+240h] BYREF

  v11 = 0;
  v12 = a6;
  v49 = (__int64)a8;
  v48 = (__int64)a9;
  v47 = (__int64)a10;
  v50 = (__int64)a3;
  v39 = (struct _POINTL *)a6;
  *(_QWORD *)&v59.left = 0LL;
  *(_QWORD *)&v59.right = 0LL;
  *(_QWORD *)&v60.left = 0LL;
  *(_QWORD *)&v60.right = 0LL;
  v62 = (RECTL)0LL;
  v43 = 0LL;
  v61 = 0uLL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v61 = (unsigned __int128)rclBounds;
    if ( (unsigned int)ERECTL::bEmpty((ERECTL *)&v61) )
      return 1LL;
    v62 = rclBounds;
    ERECTL::operator*=(&v62, a6);
    v12 = &v62;
    v39 = (struct _POINTL *)&v62;
  }
  hdev = a2->hdev;
  memset(v55, 0, 24);
  v16 = hdev + 22;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v55);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v54, ghsemSprite, v17);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v55) )
    goto LABEL_28;
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v16) )
  {
    SURFOBJ_TO_SURFACE(a1);
    if ( !(unsigned int)SURFACE::bIncludeSprites() )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v57, (struct PDEVOBJ *)&hdev);
      x = a7->x;
      left = v12->left;
      v20 = v12->top - a7->y;
      v59.top = a7->y;
      v21 = left - x;
      v22 = v12->right - v21;
      v59.left = x;
      v59.right = v22;
      v41 = v21;
      v59.bottom = v12->bottom - v20;
      v37 = v20;
      SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v16 + 30));
      if ( *((_QWORD *)v16 + 129) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v16, v23, v12, a4, 1);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v16 + 30));
      if ( v41 > 0 )
      {
        v24 = 3;
        if ( v37 <= 0 )
          v24 = 1;
      }
      else
      {
        v24 = 0;
        if ( v37 > 0 )
          v24 = 2;
      }
      if ( a4 )
      {
        iDComplexity = a4->iDComplexity;
        if ( iDComplexity )
          v61 = (unsigned __int128)a4->rclBounds;
      }
      else
      {
        iDComplexity = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v56, (struct _SPRITESTATE *)v16, &v59, v24, 0LL);
      v25 = v39;
      while ( 1 )
      {
        v26 = ENUMAREAS::bEnum((ENUMAREAS *)v56, &v51, &v59);
        v60.left = v41 + v59.left;
        v60.right = v41 + v59.right;
        v60.top = v37 + v59.top;
        v42 = v26;
        v60.bottom = v37 + v59.bottom;
        if ( !iDComplexity || bIntersect(&v60, (const struct _RECTL *)&v61, &a4->rclBounds) )
          break;
LABEL_24:
        if ( !v42 )
        {
          if ( iDComplexity )
            a4->rclBounds = (RECTL)v61;
          v11 = 1;
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v56);
          SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v57);
          goto LABEL_28;
        }
      }
      if ( v51 )
      {
        v40 = (POINTL *)((char *)v51 + 168);
        v38 = (struct _SURFOBJ *)*((_QWORD *)v51 + 20);
      }
      else
      {
        v38 = (struct _SURFOBJ *)*((_QWORD *)v16 + 4);
        v40 = &gptlZero;
      }
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v46, a1);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v45, v38);
      if ( a11 == 52428 )
      {
        INVOKEOFFCOPYBITS(&gptlZero, a1, v40, v38, a4, a5, &v60, (struct _POINTL *)&v59);
LABEL_20:
        if ( v45 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v45 + 48));
          v45 = 0LL;
        }
        if ( v46 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v46 + 48));
          v46 = 0LL;
        }
        goto LABEL_24;
      }
      if ( v49 )
      {
        LODWORD(v43) = v60.left + *(_DWORD *)v49 - v25->x;
        HIDWORD(v43) = v60.top + *(_DWORD *)(v49 + 4) - v25->y;
      }
      if ( a1->iType != 1 )
        goto LABEL_63;
      if ( bAllowShareAccess(a1)
        && W32GetThreadWin32Thread(KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 72LL);
LABEL_66:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v31,
          (int *)&gptlZero,
          (__int64)a1,
          v40,
          (__int64)v38,
          v50,
          a4,
          (__int64)a5,
          &v60.left,
          (__int64 *)&v59.left,
          (__int64)&v43,
          v48,
          (__int64 *)v47,
          a11);
        goto LABEL_20;
      }
      if ( a1->iType != 1
        || !bAllowShareAccess(a1)
        || !W32GetThreadWin32Thread(KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108) )
      {
LABEL_63:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
        {
          v31 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
          goto LABEL_66;
        }
      }
      v31 = EngBitBlt;
      goto LABEL_66;
    }
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v58, (struct PDEVOBJ *)&hdev);
  if ( *((_QWORD *)v16 + 166) )
  {
    y = a7->y;
    v33 = a7->x + v12->right - v12->left;
    v59.left = a7->x;
    v59.right = v33;
    v34 = v12->bottom - v12->top;
    v59.top = y;
    v59.bottom = y + v34;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v63, (struct _SPRITESTATE *)v16, &v59);
    if ( v63[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v16, &v59);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v16 + 166);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v63);
  }
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v53, a1);
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v52, a2);
  if ( a11 == 52428 )
  {
    v28 = INVOKEOFFCOPYBITS(&gptlZero, a1, &gptlZero, a2, a4, a5, v12, a7);
    goto LABEL_33;
  }
  if ( a1->iType != 1 )
  {
LABEL_84:
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
    {
      v35 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
      goto LABEL_87;
    }
LABEL_86:
    v35 = EngBitBlt;
    goto LABEL_87;
  }
  if ( !bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread(KeGetCurrentThread())
    || !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)
    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 1) == 0 )
  {
    if ( a1->iType == 1
      && bAllowShareAccess(a1)
      && W32GetThreadWin32Thread(KeGetCurrentThread())
      && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
    {
      goto LABEL_86;
    }
    goto LABEL_84;
  }
  v35 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 72LL);
LABEL_87:
  v28 = OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v35,
          (int *)&gptlZero,
          (__int64)a1,
          &gptlZero,
          (__int64)a2,
          v50,
          a4,
          (__int64)a5,
          &v12->left,
          (__int64 *)a7,
          v49,
          v48,
          (__int64 *)v47,
          a11);
LABEL_33:
  v29 = v28;
  if ( v52 )
    GreUnlockDisplayDevice(*(_QWORD *)(v52 + 48));
  if ( v53 )
    GreUnlockDisplayDevice(*(_QWORD *)(v53 + 48));
  SPRITEDDIACCESS::~SPRITEDDIACCESS((SPRITEDDIACCESS *)v58);
  v11 = v29;
LABEL_28:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v54);
  return v11;
}
