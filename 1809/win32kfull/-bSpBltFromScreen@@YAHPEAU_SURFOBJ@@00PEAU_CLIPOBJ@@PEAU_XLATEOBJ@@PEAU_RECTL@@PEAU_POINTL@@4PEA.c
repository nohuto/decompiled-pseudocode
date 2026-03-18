/*
 * XREFs of ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00F4190
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00106E8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00A1B64 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     OffBitBlt @ 0x1C00F4008 (OffBitBlt.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C00F511C (-bInsideDriverCall@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00F51BC (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00F520C (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00F52A0 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F52F8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00F5380 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00F547C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C015A944 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C0267C50 (-vSpRedrawAreaExMirror@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0268558 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
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
  struct _RECTL *v13; // r12
  HDEV v16; // r13
  int v17; // eax
  LONG x; // ecx
  LONG left; // r8d
  int v20; // edx
  int v21; // r8d
  LONG v22; // eax
  struct _POINTL *v23; // rdx
  unsigned int v24; // r9d
  int v25; // eax
  __int64 v26; // rdx
  int v28; // eax
  __int64 v29; // rdx
  unsigned int v30; // edi
  RECTL rclBounds; // xmm6
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  BOOL (__stdcall *v37)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  LONG y; // r8d
  LONG v43; // ecx
  int v44; // ecx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rdx
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  BYTE iDComplexity; // [rsp+78h] [rbp-90h]
  int v56; // [rsp+7Ch] [rbp-8Ch]
  int v57; // [rsp+80h] [rbp-88h]
  POINTL *v58; // [rsp+88h] [rbp-80h]
  struct _SURFOBJ *v59; // [rsp+90h] [rbp-78h]
  int v60; // [rsp+A0h] [rbp-68h]
  HDEV hdev; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v62; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v63; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v65; // [rsp+C8h] [rbp-40h]
  __int64 v66; // [rsp+D0h] [rbp-38h]
  __int64 v67; // [rsp+D8h] [rbp-30h]
  __int64 v68; // [rsp+E0h] [rbp-28h]
  struct SPRITE *v69; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v70; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v71; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v72[8]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v73[4]; // [rsp+108h] [rbp+0h] BYREF
  _BYTE v74[96]; // [rsp+128h] [rbp+20h] BYREF
  __int64 *v75[24]; // [rsp+188h] [rbp+80h] BYREF
  __int64 *v76[24]; // [rsp+248h] [rbp+140h] BYREF
  struct _RECTL v77; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v78; // [rsp+318h] [rbp+210h] BYREF
  RECTL v79; // [rsp+328h] [rbp+220h] BYREF
  RECTL v80; // [rsp+338h] [rbp+230h] BYREF
  _QWORD v81[3]; // [rsp+348h] [rbp+240h] BYREF

  v11 = 0;
  v13 = a6;
  v67 = (__int64)a8;
  v66 = (__int64)a9;
  v65 = (__int64)a10;
  v68 = (__int64)a3;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v79 = rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v79) )
      return 1LL;
    v80 = rclBounds;
    ERECTL::operator*=(&v80.left, &a6->left);
    v13 = &v80;
  }
  hdev = a2->hdev;
  memset(v73, 0, 24);
  v16 = hdev + 22;
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v73);
  v17 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v72, ghsemSprite, v17);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo((UNDOW32THREADPIDLOCKS *)v73) )
    goto LABEL_28;
  if ( !(unsigned int)bInsideDriverCall((struct _SPRITESTATE *)v16) )
  {
    SURFOBJ_TO_SURFACE(a1);
    if ( !(unsigned int)SURFACE::bIncludeSprites() )
    {
      SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v75, (struct PDEVOBJ *)&hdev);
      x = a7->x;
      left = v13->left;
      v20 = v13->top - a7->y;
      v77.top = a7->y;
      v21 = left - x;
      v22 = v13->right - v21;
      v77.left = x;
      v77.right = v22;
      v57 = v21;
      v77.bottom = v13->bottom - v20;
      v56 = v20;
      SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(v16 + 30));
      if ( *((_QWORD *)v16 + 129) )
        vSpUpdateLockedScreenAreas((struct _SPRITESTATE *)v16, v23, v13, a4, 1);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(v16 + 30));
      if ( v57 > 0 )
      {
        v24 = 3;
        if ( v56 <= 0 )
          v24 = 1;
      }
      else
      {
        v24 = 0;
        if ( v56 > 0 )
          v24 = 2;
      }
      if ( a4 )
      {
        iDComplexity = a4->iDComplexity;
        if ( iDComplexity )
          v79 = a4->rclBounds;
      }
      else
      {
        iDComplexity = 0;
      }
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v74, (struct _SPRITESTATE *)v16, &v77, v24, 0LL);
      while ( 1 )
      {
        v25 = ENUMAREAS::bEnum((ENUMAREAS *)v74, &v69, &v77);
        v78.left = v57 + v77.left;
        v78.right = v57 + v77.right;
        v78.top = v56 + v77.top;
        v60 = v25;
        v78.bottom = v56 + v77.bottom;
        if ( !iDComplexity || bIntersect(&v78, &v79, &a4->rclBounds) )
          break;
LABEL_24:
        if ( !v60 )
        {
          if ( iDComplexity )
            a4->rclBounds = v79;
          v11 = 1;
          ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v74);
          SPRITEDDIACCESS::~SPRITEDDIACCESS(v75, v26);
          goto LABEL_28;
        }
      }
      if ( v69 )
      {
        v58 = (POINTL *)((char *)v69 + 168);
        v59 = (struct _SURFOBJ *)*((_QWORD *)v69 + 20);
      }
      else
      {
        v59 = (struct _SURFOBJ *)*((_QWORD *)v16 + 4);
        v58 = &gptlZero;
      }
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v64, a1);
      NEEDDDILOCK::vLock((NEEDDDILOCK *)&v63, v59);
      if ( a11 == 52428 )
      {
        INVOKEOFFCOPYBITS(&gptlZero, a1, v58, v59, a4, a5, &v78, (struct _POINTL *)&v77);
LABEL_20:
        if ( v63 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v63 + 48));
          v63 = 0LL;
        }
        if ( v64 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v64 + 48));
          v64 = 0LL;
        }
        goto LABEL_24;
      }
      if ( v67 )
      {
        LODWORD(v62) = v78.left + *(_DWORD *)v67 - v13->left;
        HIDWORD(v62) = v78.top + *(_DWORD *)(v67 + 4) - v13->top;
      }
      if ( a1->iType != 1 )
        goto LABEL_63;
      if ( (unsigned int)bAllowShareAccess(a1)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35) + 280) + 20LL) & 1) != 0 )
      {
        v37 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36) + 280) + 72LL);
LABEL_66:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v37,
          (int *)&gptlZero,
          (__int64)a1,
          v58,
          (__int64)v59,
          v68,
          a4,
          (__int64)a5,
          &v78,
          &v77,
          (__int64)&v62,
          v66,
          (_DWORD *)v65,
          a11);
        goto LABEL_20;
      }
      if ( a1->iType != 1
        || !(unsigned int)bAllowShareAccess(a1)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 108) )
      {
LABEL_63:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
        {
          v37 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
          goto LABEL_66;
        }
      }
      v37 = EngBitBlt;
      goto LABEL_66;
    }
  }
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v76, (struct PDEVOBJ *)&hdev);
  if ( *((_QWORD *)v16 + 166) )
  {
    y = a7->y;
    v43 = a7->x + v13->right - v13->left;
    v77.left = a7->x;
    v77.right = v43;
    v44 = v13->bottom - v13->top;
    v77.top = y;
    v77.bottom = y + v44;
    PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v81, (struct _SPRITESTATE *)v16, &v77);
    if ( v81[0] )
      vSpRedrawAreaExMirror((struct _SPRITESTATE *)v16, &v77);
    a2 = (struct _SURFOBJ *)*((_QWORD *)v16 + 166);
    PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v81);
  }
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v71, a1);
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v70, a2);
  if ( a11 == 52428 )
  {
    v28 = INVOKEOFFCOPYBITS(&gptlZero, a1, &gptlZero, a2, a4, a5, v13, a7);
    goto LABEL_33;
  }
  if ( a1->iType != 1 )
  {
LABEL_84:
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a1) + 112) & 1) != 0 )
    {
      v50 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 164);
      goto LABEL_87;
    }
LABEL_86:
    v50 = EngBitBlt;
    goto LABEL_87;
  }
  if ( !(unsigned int)bAllowShareAccess(a1)
    || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45)
    || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46) + 280)
    || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47) + 104)
    && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48) + 108)
    || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48) + 280) + 20LL) & 1) == 0 )
  {
    if ( a1->iType == 1
      && (unsigned int)bAllowShareAccess(a1)
      && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51)
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v52) + 280)
      && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v53) + 104)
       || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54) + 108)) )
    {
      goto LABEL_86;
    }
    goto LABEL_84;
  }
  v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v49) + 280) + 72LL);
LABEL_87:
  v28 = OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v50,
          (int *)&gptlZero,
          (__int64)a1,
          &gptlZero,
          (__int64)a2,
          v68,
          a4,
          (__int64)a5,
          v13,
          a7,
          v67,
          v66,
          (_DWORD *)v65,
          a11);
LABEL_33:
  v30 = v28;
  if ( v70 )
    GreUnlockDisplayDevice(*(_QWORD *)(v70 + 48));
  if ( v71 )
    GreUnlockDisplayDevice(*(_QWORD *)(v71 + 48));
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v76, v29);
  v11 = v30;
LABEL_28:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v72);
  return v11;
}
