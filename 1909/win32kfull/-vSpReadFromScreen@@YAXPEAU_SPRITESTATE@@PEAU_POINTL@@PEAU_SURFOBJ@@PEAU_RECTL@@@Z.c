/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0280230
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C027F1AC (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0280D98 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0282AE0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00B8C10 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00BF39C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0162AFC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0162BD0 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027C9E4 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     OffCopyBits @ 0x1C02C0DE8 (OffCopyBits.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  struct _SURFOBJ *v9; // r14
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  POINTL *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  HDEV hdev; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // r8
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
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v53; // [rsp+68h] [rbp-98h]
  int v54[2]; // [rsp+70h] [rbp-90h]
  int v55[2]; // [rsp+78h] [rbp-88h]
  __int64 v56; // [rsp+80h] [rbp-80h] BYREF
  __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  REGION *v58[11]; // [rsp+90h] [rbp-70h] BYREF
  int v59; // [rsp+E8h] [rbp-18h]
  int v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+120h] [rbp+20h]
  int v62; // [rsp+128h] [rbp+28h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  *(_QWORD *)v55 = a2;
  v58[10] = 0LL;
  v59 = 0;
  v61 = 0LL;
  v60 = 1;
  v58[7] = 0LL;
  v62 = 0;
  v53 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1, (__int64)a2, (__int64)a3);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v58, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v58 + 4)) )
      goto LABEL_51;
    v53 = (struct _CLIPOBJ *)v58;
  }
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v57, *((struct _SURFOBJ **)a1 + 4));
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v56, a3);
  v9 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
  v10 = 0LL;
  v11 = SURFOBJ_TO_SURFACE(v9);
  v52 = 0LL;
  v13 = &gptlZero;
  if ( !v11 )
    goto LABEL_47;
  if ( (*(_DWORD *)(v11 + 112) & 0x80000) == 0 || (v14 = *(_QWORD *)(v11 + 48), v15 = *(_QWORD *)(v14 + 24), v14 == v15) )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 && v9->hdev )
    {
      if ( v9->iType != 1 )
      {
LABEL_26:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x400) != 0 )
        {
          hdev = v9->hdev;
LABEL_44:
          v16 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 165);
          goto LABEL_46;
        }
        goto LABEL_45;
      }
      if ( !bAllowShareAccess(v9)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( v9->iType == 1
          && bAllowShareAccess(v9)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27, v28)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34) + 108)) )
        {
          goto LABEL_45;
        }
        goto LABEL_26;
      }
LABEL_35:
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26) + 280)
                                                                                                 + 80LL);
      goto LABEL_46;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v42, v43) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_35;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51) + 108)) )
      {
        goto LABEL_45;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_44;
    }
LABEL_45:
    v16 = EngCopyBits;
    goto LABEL_46;
  }
  LOBYTE(v12) = 5;
  *(_QWORD *)v54 = v14 + 2584;
  v13 = (POINTL *)HmgShareLockCheck(*(_QWORD *)(v11 + 144), v12);
  if ( v13 )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v52,
                         0LL,
                         0,
                         *(_QWORD *)(v15 + 1808),
                         *(_QWORD *)(v14 + 1808),
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0x2000) )
    {
      v10 = v52;
      v9 = (struct _SURFOBJ *)&v13[3];
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2840);
      DEC_SHARE_REF_CNT(v13);
      LODWORD(v13) = v54[0];
LABEL_46:
      OffCopyBits((int)v16, v55[0], (int)a3, (int)v13, (__int64)v9, v53, v10, (__int64)a4, (__int64)a4);
      goto LABEL_47;
    }
    DEC_SHARE_REF_CNT(v13);
  }
LABEL_47:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v52);
  if ( v56 )
    GreUnlockDisplayDevice(*(_QWORD *)(v56 + 48));
  if ( v57 )
    GreUnlockDisplayDevice(*(_QWORD *)(v57 + 48));
LABEL_51:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v58);
}
