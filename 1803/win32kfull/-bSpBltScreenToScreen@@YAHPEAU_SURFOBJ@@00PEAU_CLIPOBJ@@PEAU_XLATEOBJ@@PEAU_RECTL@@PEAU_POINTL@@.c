/*
 * XREFs of ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C024D080
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?vLockShared@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F00 (-vLockShared@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0035F30 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??1SPRITEDDIACCESS@@QEAA@XZ @ 0x1C007A2B4 (--1SPRITEDDIACCESS@@QEAA@XZ.c)
 *     ??0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C007A2EC (--0SPRITEDDIACCESS@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z @ 0x1C007AFA8 (--0SEMOBJEXORSHARED@@QEAA@PEAUHSEMAPHORE__@@H@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C008FDD0 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C009F23C (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C00A5154 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A51E0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00B2888 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ @ 0x1C00E17FC (-vUndo@UNDOW32THREADPIDLOCKS@@QEAAXXZ.c)
 *     ?bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ @ 0x1C00E18D4 (-bRedo@UNDOW32THREADPIDLOCKS@@QEAAHXZ.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00E1924 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00E1960 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ??0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z @ 0x1C00E19E8 (--0ENUMAREAS@@QEAA@PEAU_SPRITESTATE@@PEAU_RECTL@@K1@Z.c)
 *     OffBitBlt @ 0x1C010B5E4 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C024CB88 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z @ 0x1C02510A4 (-vLock@PIDLOCKSPRITEAREA@@QEAAXPEAU_SPRITESTATE@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C02540A8 (-vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z.c)
 *     ?vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z @ 0x1C02552B0 (-vSpUpdateLockedScreenAreas@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_RECTL@@PEAU_CLIPOBJ@@H@Z.c)
 *     ?vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ @ 0x1C0256250 (-vUnlock@PIDLOCKSPRITEAREA@@QEAAXXZ.c)
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
  unsigned int v11; // edi
  struct _RECTL *v12; // rsi
  RECTL rclBounds; // xmm6
  int v15; // eax
  int v16; // r15d
  int v17; // ebx
  struct _SPRITESTATE *v18; // r13
  int v19; // r12d
  struct _POINTL *v21; // rdx
  struct _CLIPOBJ *v22; // r9
  struct _RECTL *v23; // r8
  struct _POINTL *v24; // r11
  struct _SURFOBJ *v25; // r15
  int v26; // r13d
  int v27; // eax
  struct SPRITE *v28; // rbx
  __int64 v29; // rdx
  struct _SURFOBJ *v30; // r12
  struct _POINTL *v31; // rax
  __int64 v32; // rbx
  LONG v33; // ecx
  __int64 ThreadWin32Thread; // rax
  DC **v35; // r15
  XCLIPOBJ *v36; // r12
  __int64 v37; // r10
  struct REGION *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  BOOL (__stdcall *v44)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v45; // rdx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rdx
  int v49; // eax
  struct _POINTL *v50; // rdx
  struct _CLIPOBJ *v51; // [rsp+78h] [rbp-90h] BYREF
  int v52; // [rsp+80h] [rbp-88h]
  int v53; // [rsp+84h] [rbp-84h]
  int v54; // [rsp+88h] [rbp-80h]
  struct _POINTL v55; // [rsp+8Ch] [rbp-7Ch]
  int v56; // [rsp+94h] [rbp-74h]
  int v57; // [rsp+98h] [rbp-70h]
  struct _POINTL v58; // [rsp+A0h] [rbp-68h] BYREF
  struct _RECTL v59; // [rsp+A8h] [rbp-60h] BYREF
  HDEV hdev; // [rsp+B8h] [rbp-50h] BYREF
  int v61; // [rsp+C0h] [rbp-48h]
  int v62; // [rsp+C4h] [rbp-44h]
  struct _POINTL *v63; // [rsp+C8h] [rbp-40h]
  struct _POINTL *v64; // [rsp+D0h] [rbp-38h]
  __int64 v65; // [rsp+D8h] [rbp-30h] BYREF
  struct SPRITE *v66; // [rsp+E0h] [rbp-28h] BYREF
  struct _SURFOBJ *v67; // [rsp+E8h] [rbp-20h]
  struct _SURFOBJ *v68; // [rsp+F0h] [rbp-18h]
  struct _SURFOBJ *v69; // [rsp+F8h] [rbp-10h]
  __int64 v70; // [rsp+100h] [rbp-8h] BYREF
  struct _XLATEOBJ *v71; // [rsp+108h] [rbp+0h]
  struct REGION *v72; // [rsp+110h] [rbp+8h] BYREF
  struct SPRITE *v73; // [rsp+118h] [rbp+10h] BYREF
  struct _POINTL *v74; // [rsp+120h] [rbp+18h]
  __int64 v75; // [rsp+128h] [rbp+20h]
  __int64 v76; // [rsp+130h] [rbp+28h]
  __int64 v77; // [rsp+138h] [rbp+30h]
  struct _SPRITESTATE *v78; // [rsp+140h] [rbp+38h]
  char v79[8]; // [rsp+148h] [rbp+40h] BYREF
  struct SPRITE *v80; // [rsp+150h] [rbp+48h] BYREF
  struct _RECTL v81; // [rsp+158h] [rbp+50h] BYREF
  __int64 *v82[4]; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v83[80]; // [rsp+188h] [rbp+80h] BYREF
  int v84; // [rsp+1D8h] [rbp+D0h]
  _BYTE v85[96]; // [rsp+1E8h] [rbp+E0h] BYREF
  struct _SPRITESTATE *v86[24]; // [rsp+248h] [rbp+140h] BYREF
  struct _RECTL v87; // [rsp+308h] [rbp+200h] BYREF
  struct _RECTL v88; // [rsp+318h] [rbp+210h] BYREF
  unsigned __int128 v89; // [rsp+328h] [rbp+220h] BYREF
  struct _RECTL v90; // [rsp+338h] [rbp+230h] BYREF
  RECTL v91; // [rsp+348h] [rbp+240h] BYREF
  _QWORD v92[3]; // [rsp+358h] [rbp+250h] BYREF
  struct _RECTL v93; // [rsp+370h] [rbp+268h] BYREF

  v11 = 0;
  v12 = a6;
  v71 = a5;
  v74 = a8;
  v76 = (__int64)a9;
  v75 = (__int64)a10;
  v77 = (__int64)a3;
  v67 = a1;
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
    goto LABEL_96;
  SPRITEDDIACCESS::SPRITEDDIACCESS((SPRITEDDIACCESS *)v86, (struct PDEVOBJ *)&hdev);
  v16 = v12->left - a7->x;
  v17 = v12->top - a7->y;
  v18 = (struct _SPRITESTATE *)(hdev + 20);
  v57 = v16;
  v78 = (struct _SPRITESTATE *)(hdev + 20);
  v56 = v17;
  if ( v16 <= 0 )
  {
    v19 = 0;
    if ( v17 > 0 )
      v19 = 2;
  }
  else
  {
    v19 = 3;
    if ( v17 <= 0 )
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
  SPRITERANGELOCK::vLockShared((SPRITERANGELOCK *)(hdev + 50));
  if ( !*((_QWORD *)v18 + 129) )
    goto LABEL_23;
  v87.left = v12->left - v16;
  v87.right = v12->right - v16;
  v87.top = v12->top - v17;
  v87.bottom = v12->bottom - v17;
  if ( *((_QWORD *)v18 + 130) )
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
    vSpUpdateLockedScreenAreas(v18, v21, v23, v22, 1);
  }
LABEL_23:
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v18 + 120));
  v59.left = v12->left - v16;
  v59.right = v12->right - v16;
  v59.top = v12->top - v17;
  v59.bottom = v12->bottom - v17;
  v81 = v59;
  ERECTL::operator+=((unsigned int *)&v81, (unsigned int *)v12);
  PIDLOCKSPRITEAREA::vLock((PIDLOCKSPRITEAREA *)v92, v18, &v81);
  if ( !v92[0] )
    goto LABEL_93;
  ENUMAREAS::ENUMAREAS((ENUMAREAS *)v83, v18, v12, v19, &v81);
  if ( !v84 )
    goto LABEL_92;
  do
  {
    v62 = ENUMAREAS::bEnum((ENUMAREAS *)v83, &v66, &v59);
    v87.left = v59.left - v16;
    v87.right = v59.right - v16;
    v87.top = v59.top - v17;
    v87.bottom = v59.bottom - v17;
    do
    {
      if ( v66 )
      {
        v25 = (struct _SURFOBJ *)*((_QWORD *)v66 + 20);
        v64 = (struct _POINTL *)((char *)v66 + 168);
      }
      else
      {
        v25 = v67;
        v64 = v24;
      }
      v68 = v25;
      ENUMAREAS::ENUMAREAS((ENUMAREAS *)v85, v18, &v87, v19, 0LL);
      v26 = v56;
      do
      {
        v27 = ENUMAREAS::bEnum((ENUMAREAS *)v85, &v73, &v90);
        v28 = v73;
        v61 = v27;
        while ( (unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v85, &v80) )
          v28 = v80;
        v73 = v28;
        if ( v28 )
        {
          v30 = (struct _SURFOBJ *)*((_QWORD *)v28 + 20);
          v31 = (struct _POINTL *)((char *)v28 + 168);
        }
        else
        {
          v30 = v67;
          v31 = &gptlZero;
        }
        v88.left = v57 + v90.left;
        v88.right = v57 + v90.right;
        v63 = v31;
        v88.top = v26 + v90.top;
        v69 = v30;
        v88.bottom = v26 + v90.bottom;
        if ( v51 && !bIntersect(&v88, (const struct _RECTL *)&v89, &v51->rclBounds) )
          goto LABEL_85;
        v65 = 0LL;
        if ( v25
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 0x200) == 0 )
        {
          v65 = SURFOBJ_TO_SURFACE_NOT_NULL(v25);
          GreLockDisplayDevice(*(_QWORD *)(v65 + 48));
        }
        v32 = 0LL;
        if ( v30
          && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x4000) != 0
           || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) < 0)
          && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v30) + 112) & 0x200) == 0 )
        {
          v32 = SURFOBJ_TO_SURFACE_NOT_NULL(v30);
          GreLockDisplayDevice(*(_QWORD *)(v32 + 48));
        }
        v53 = 0;
        v54 = 0;
        v33 = *((_DWORD *)hdev + 644);
        v55.y = (int)hdev[645];
        v55.x = v33;
        if ( !v51 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29);
          if ( ThreadWin32Thread )
          {
            if ( *(_BYTE *)(ThreadWin32Thread + 328) == 1 )
            {
              v35 = *(DC ***)(ThreadWin32Thread + 312);
              v36 = (DC *)((char *)*v35 + 2160);
              v72 = XDCOBJ::prgnEffRao(v35);
              if ( (*(_DWORD *)(v37 + 40) & 0x20000) != 0 )
              {
                v58.x = -v55.x;
                v58.y = -v55.y;
                RGNOBJ::bOffset((RGNOBJ *)&v72, &v58);
                v54 = 1;
              }
              v38 = XDCOBJ::prgnEffRao(v35);
              XCLIPOBJ::vSetup(v36, v38, (struct ERECTL *)&v88, 1);
              v25 = v68;
              v51 = (struct _CLIPOBJ *)v36;
              v30 = v69;
              v53 = 1;
            }
          }
        }
        if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v65, &v51) )
        {
          if ( a11 == 52428 )
          {
            INVOKEOFFCOPYBITS(v64, v25, v63, v30, v51, v71, &v88, (struct _POINTL *)&v90);
            goto LABEL_77;
          }
          if ( v74 )
          {
            LODWORD(v70) = v88.left + v74->x - v12->left;
            HIDWORD(v70) = v88.top + v74->y - v12->top;
          }
          if ( v25->iType != 1 )
            goto LABEL_73;
          if ( bAllowShareAccess(v25)
            && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39)
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40) + 280)
            && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41) + 104)
             || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42) + 108))
            && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42) + 280) + 20LL) & 1) != 0 )
          {
            v44 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43) + 280) + 72LL);
LABEL_76:
            OffBitBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, _DWORD *, __int64, __int64, _DWORD *, int))v44,
              (LONG *)v64,
              (__int64)v25,
              v63,
              (__int64)v30,
              v77,
              v51,
              (__int64)v71,
              &v88,
              &v90,
              (__int64)&v70,
              v76,
              (_DWORD *)v75,
              a11);
            goto LABEL_77;
          }
          if ( v25->iType != 1
            || !bAllowShareAccess(v25)
            || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45)
            || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46) + 280)
            || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47) + 104)
            && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48) + 108) )
          {
LABEL_73:
            if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v25) + 112) & 1) != 0 )
            {
              v44 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)v25->hdev + 163);
              goto LABEL_76;
            }
          }
          v44 = EngBitBlt;
          goto LABEL_76;
        }
LABEL_77:
        if ( v53 == 1 )
        {
          if ( v54 == 1 )
          {
            v58 = v55;
            RGNOBJ::bOffset((RGNOBJ *)&v72, &v58);
          }
          v51 = 0LL;
        }
        if ( v32 )
          GreUnlockDisplayDevice(*(_QWORD *)(v32 + 48));
        if ( v65 )
          GreUnlockDisplayDevice(*(_QWORD *)(v65 + 48));
LABEL_85:
        if ( v51 )
          v51->rclBounds = (RECTL)v89;
      }
      while ( v61 );
      ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v85);
      v49 = ENUMAREAS::bEnumLayers((ENUMAREAS *)v83, &v66);
      v18 = v78;
      v24 = &gptlZero;
      v19 = v52;
    }
    while ( v49 );
    if ( v66 )
      vSpRedrawArea(v78, &v59, 0);
    v17 = v56;
    v16 = v57;
  }
  while ( v62 );
LABEL_92:
  ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v83);
LABEL_93:
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v92);
  SPRITERANGELOCK::vLockExclusive((struct _SPRITESTATE *)((char *)v18 + 120));
  if ( *((_QWORD *)v18 + 129) )
    vSpUpdateLockedScreenAreas(v18, v50, v12, v51, 0);
  SPRITERANGELOCK::vUnlock((struct _SPRITESTATE *)((char *)v18 + 120));
  v11 = 1;
  PIDLOCKSPRITEAREA::vUnlock((PIDLOCKSPRITEAREA *)v92);
  SPRITEDDIACCESS::~SPRITEDDIACCESS(v86);
LABEL_96:
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v79);
  return v11;
}
