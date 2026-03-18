/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02643D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C00106E8 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001D634 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0044A20 (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C0044DF8 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00539F4 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0055AF0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C00A1B64 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     OffBitBlt @ 0x1C00F4008 (OffBitBlt.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00F50E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00F51BC (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00F520C (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00F52A0 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F52F8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00F5380 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C00F547C (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C011B2B4 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0159B74 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C015A944 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C0268558 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
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
  struct _SPRITESTATE *v16; // r15
  int v17; // r12d
  int v18; // r13d
  int v19; // esi
  struct _POINTL *v21; // rdx
  struct _CLIPOBJ *v22; // r9
  struct _RECTL *v23; // r8
  struct _POINTL *v24; // r11
  struct _SURFOBJ *v25; // r12
  int v26; // r15d
  int v27; // eax
  struct SPRITE *v28; // rsi
  struct _SURFOBJ *v29; // rsi
  struct _POINTL *v30; // rax
  __int64 v31; // rdx
  LONG v32; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v34; // rsi
  XCLIPOBJ *v35; // r12
  __int64 v36; // r10
  struct REGION *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  BOOL (__stdcall *v43)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  int v48; // eax
  struct _POINTL *v49; // rdx
  __int64 v50; // rdx
  struct _CLIPOBJ *v51; // [rsp+78h] [rbp-90h] BYREF
  int v52; // [rsp+80h] [rbp-88h]
  int v53; // [rsp+84h] [rbp-84h]
  int v54; // [rsp+88h] [rbp-80h]
  struct _POINTL v55; // [rsp+8Ch] [rbp-7Ch]
  int v56; // [rsp+94h] [rbp-74h]
  struct _POINTL v57[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _RECTL v58; // [rsp+A8h] [rbp-60h] BYREF
  HDEV hdev; // [rsp+B8h] [rbp-50h] BYREF
  int v60; // [rsp+C0h] [rbp-48h]
  int v61; // [rsp+C4h] [rbp-44h]
  struct _SURFOBJ *v62; // [rsp+C8h] [rbp-40h]
  struct _POINTL *v63; // [rsp+D0h] [rbp-38h]
  struct _POINTL *v64; // [rsp+D8h] [rbp-30h]
  struct REGION *v65; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-20h] BYREF
  struct SPRITE *v67; // [rsp+F0h] [rbp-18h] BYREF
  struct _SURFOBJ *v68; // [rsp+F8h] [rbp-10h]
  struct _SURFOBJ *v69; // [rsp+100h] [rbp-8h]
  __int64 v70; // [rsp+108h] [rbp+0h] BYREF
  struct _XLATEOBJ *v71; // [rsp+110h] [rbp+8h]
  __int64 v72; // [rsp+118h] [rbp+10h] BYREF
  struct SPRITE *v73; // [rsp+120h] [rbp+18h] BYREF
  struct _POINTL *v74; // [rsp+128h] [rbp+20h]
  __int64 v75; // [rsp+130h] [rbp+28h]
  __int64 v76; // [rsp+138h] [rbp+30h]
  __int64 v77; // [rsp+140h] [rbp+38h]
  struct _SPRITESTATE *v78; // [rsp+148h] [rbp+40h]
  char v79[8]; // [rsp+150h] [rbp+48h] BYREF
  struct SPRITE *v80; // [rsp+158h] [rbp+50h] BYREF
  struct _RECTL v81; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v82[4]; // [rsp+178h] [rbp+70h] BYREF
  _BYTE v83[80]; // [rsp+198h] [rbp+90h] BYREF
  int v84; // [rsp+1E8h] [rbp+E0h]
  _BYTE v85[96]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 *v86[24]; // [rsp+258h] [rbp+150h] BYREF
  struct _RECTL v87; // [rsp+318h] [rbp+210h] BYREF
  struct _RECTL v88; // [rsp+328h] [rbp+220h] BYREF
  unsigned __int128 v89; // [rsp+338h] [rbp+230h] BYREF
  struct _RECTL v90; // [rsp+348h] [rbp+240h] BYREF
  RECTL v91; // [rsp+358h] [rbp+250h] BYREF
  _QWORD v92[3]; // [rsp+368h] [rbp+260h] BYREF
  struct _RECTL v93; // [rsp+380h] [rbp+278h] BYREF

  v11 = 0;
  v12 = a6;
  v71 = a5;
  v74 = a8;
  v76 = (__int64)a9;
  v75 = (__int64)a10;
  v77 = (__int64)a3;
  v68 = a1;
  v51 = a4;
  v89 = 0uLL;
  if ( a4 && a4->iDComplexity )
  {
    rclBounds = a4->rclBounds;
    v89 = (unsigned __int128)rclBounds;
    if ( ERECTL::bEmpty((ERECTL *)&v89) )
      return 1LL;
    v91 = rclBounds;
    ERECTL::operator*=(&v91.left, &a6->left);
    v12 = &v91;
  }
  hdev = a1->hdev;
  memset(v82, 0, 24);
  UNDOW32THREADPIDLOCKS::vUndo((UNDOW32THREADPIDLOCKS *)v82, (__int64)a2);
  v15 = PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&hdev);
  SEMOBJEXORSHARED::SEMOBJEXORSHARED((SEMOBJEXORSHARED *)v79, ghsemSprite, v15);
  if ( !(unsigned int)UNDOW32THREADPIDLOCKS::bRedo(v82) )
    goto LABEL_86;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v86, (struct PDEVOBJ *)&hdev);
  v16 = (struct _SPRITESTATE *)(hdev + 22);
  v17 = v12->left - a7->x;
  v18 = v12->top - a7->y;
  v78 = (struct _SPRITESTATE *)(hdev + 22);
  v56 = v17;
  if ( v17 <= 0 )
  {
    v19 = 0;
    if ( v18 > 0 )
      v19 = 2;
  }
  else
  {
    v19 = 3;
    if ( v18 <= 0 )
      v19 = 1;
  }
  v52 = v19;
  if ( v51 )
  {
    if ( v51->iDComplexity )
      v89 = (unsigned __int128)v51->rclBounds;
    else
      v51 = 0LL;
  }
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 52));
  if ( !*((_QWORD *)v16 + 129) )
    goto LABEL_23;
  v87.left = v12->left - v17;
  v87.right = v12->right - v17;
  v87.top = v12->top - v18;
  v87.bottom = v12->bottom - v18;
  if ( *((_QWORD *)v16 + 130) )
  {
    v22 = 0LL;
    v23 = &v87;
    goto LABEL_22;
  }
  if ( bIntersect(v12, &v87, &v93) )
  {
    v22 = v51;
    v23 = &v93;
LABEL_22:
    vSpUpdateLockedScreenAreas(v16, v21, v23, v22, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 120));
  v58.left = v12->left - v17;
  v58.right = v12->right - v17;
  v58.top = v12->top - v18;
  v58.bottom = v12->bottom - v18;
  v81 = v58;
  ERECTL::operator+=((unsigned int *)&v81, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v92, v16, &v81);
  if ( !v92[0] )
    goto LABEL_83;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v83, v16, v12, v19, &v81);
  if ( !v84 )
    goto LABEL_82;
  do
  {
    v61 = ENUMAREAS::bEnum((ENUMAREAS *)v83, &v67, &v58);
    v87.left = v58.left - v17;
    v87.right = v58.right - v17;
    v87.top = v58.top - v18;
    v87.bottom = v58.bottom - v18;
    do
    {
      if ( v67 )
      {
        v25 = (struct _SURFOBJ *)*((_QWORD *)v67 + 20);
        v64 = (struct _POINTL *)((char *)v67 + 168);
      }
      else
      {
        v25 = v68;
        v64 = v24;
      }
      v69 = v25;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v85, v16, &v87, v19, 0LL);
      v26 = v56;
      do
      {
        v27 = ENUMAREAS::bEnum((ENUMAREAS *)v85, &v73, &v90);
        v28 = v73;
        v60 = v27;
        while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v85, &v80) )
          v28 = v80;
        v73 = v28;
        if ( v28 )
        {
          v62 = (struct _SURFOBJ *)*((_QWORD *)v28 + 20);
          v30 = (struct _POINTL *)((char *)v28 + 168);
          v29 = v62;
        }
        else
        {
          v29 = v68;
          v30 = &gptlZero;
          v62 = v68;
        }
        v63 = v30;
        v88.left = v26 + v90.left;
        v88.right = v26 + v90.right;
        v88.top = v18 + v90.top;
        v88.bottom = v18 + v90.bottom;
        if ( v51 && !bIntersect(&v88, (const struct _RECTL *)&v89, &v51->rclBounds) )
          goto LABEL_75;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v66, v25);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v72, v29);
        v65 = 0LL;
        v53 = 0;
        v54 = 0;
        v32 = *((_DWORD *)hdev + 646);
        v55.y = (int)hdev[647];
        v55.x = v32;
        if ( !v51 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31);
          if ( ThreadWin32Thread )
          {
            if ( *(_BYTE *)(ThreadWin32Thread + 328) == 1 )
            {
              v34 = *(DC ***)(ThreadWin32Thread + 312);
              v35 = (DC *)((char *)*v34 + 1776);
              v65 = XDCOBJ::prgnEffRao(v34);
              if ( (*(_DWORD *)(v36 + 40) & 0x20000) != 0 )
              {
                v57[0].x = -v55.x;
                v57[0].y = -v55.y;
                RGNOBJ::bOffset((RGNOBJ *)&v65, v57);
                v54 = 1;
              }
              v37 = XDCOBJ::prgnEffRao(v34);
              XCLIPOBJ::vSetup(v35, v37, (struct ERECTL *)&v88, 1);
              v29 = v62;
              v51 = (struct _CLIPOBJ *)v35;
              v25 = v69;
              v53 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v66, &v51) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(v64, v25, v63, v29, v51, v71, &v88, (struct _POINTL *)&v90);
            goto LABEL_67;
          }
          if ( v74 )
          {
            LODWORD(v70) = v88.left + v74->x - v12->left;
            HIDWORD(v70) = v88.top + v74->y - v12->top;
          }
          if ( v25->iType != 1 )
            goto LABEL_63;
          if ( bAllowShareAccess(v25)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 280) + 20LL) & 1) != 0 )
          {
            v43 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42) + 280) + 72LL);
LABEL_66:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v43,
              (int *)v64,
              (__int64)v25,
              v63,
              (__int64)v29,
              v77,
              v51,
              (__int64)v71,
              &v88,
              &v90,
              (__int64)&v70,
              v76,
              (_DWORD *)v75,
              a11);
            goto LABEL_67;
          }
          if ( v25->iType != 1
            || !bAllowShareAccess(v25)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47) + 108) )
          {
LABEL_63:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 1) != 0 )
            {
              v43 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v25->hdev + 164);
              goto LABEL_66;
            }
          }
          v43 = EngBitBlt;
          goto LABEL_66;
        }
LABEL_67:
        if ( v53 == 1 )
        {
          if ( v54 == 1 )
          {
            v57[0] = v55;
            RGNOBJ::bOffset((RGNOBJ *)&v65, v57);
          }
          v51 = 0LL;
        }
        if ( v72 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v72 + 48));
          v72 = 0LL;
        }
        if ( v66 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v66 + 48));
          v66 = 0LL;
        }
LABEL_75:
        if ( v51 )
          v51->rclBounds = (RECTL)v89;
      }
      while ( v60 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v85);
      v48 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v83, &v67);
      v16 = v78;
      v24 = &gptlZero;
      v19 = v52;
    }
    while ( v48 );
    if ( v67 )
      vSpRedrawArea(v78, &v58, 0);
    v17 = v56;
  }
  while ( v61 );
LABEL_82:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v83);
LABEL_83:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v92);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v16 + 120));
  if ( *((_QWORD *)v16 + 129) )
    vSpUpdateLockedScreenAreas(v16, v49, v12, v51, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v16 + 120));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v92);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v86, v50);
LABEL_86:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v79);
  return v11;
}
