/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02808F0
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C027F86C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0281458 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C02831A0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C005A41C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C006E810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0072E38 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0161B2C (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C0161C00 (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027D0A4 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     OffCopyBits @ 0x1C02C1298 (OffCopyBits.c)
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
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  HDEV hdev; // rax
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
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v70; // [rsp+68h] [rbp-98h]
  int v71[2]; // [rsp+70h] [rbp-90h]
  int v72[2]; // [rsp+78h] [rbp-88h]
  __int64 v73; // [rsp+80h] [rbp-80h] BYREF
  __int64 v74; // [rsp+88h] [rbp-78h] BYREF
  REGION *v75[11]; // [rsp+90h] [rbp-70h] BYREF
  int v76; // [rsp+E8h] [rbp-18h]
  int v77; // [rsp+110h] [rbp+10h]
  __int64 v78; // [rsp+120h] [rbp+20h]
  int v79; // [rsp+128h] [rbp+28h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  *(_QWORD *)v72 = a2;
  v75[10] = 0LL;
  v76 = 0;
  v78 = 0LL;
  v77 = 1;
  v75[7] = 0LL;
  v79 = 0;
  v70 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1, (__int64)a2, (__int64)a3, (__int64)a4);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v75, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v75 + 4)) )
      goto LABEL_51;
    v70 = (struct _CLIPOBJ *)v75;
  }
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v74, *((struct _SURFOBJ **)a1 + 4));
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v73, a3);
  v9 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
  v10 = 0LL;
  v11 = SURFOBJ_TO_SURFACE(v9);
  v69 = 0LL;
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
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( v9->iType == 1
          && bAllowShareAccess(v9)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 108)) )
        {
          goto LABEL_45;
        }
        goto LABEL_26;
      }
LABEL_35:
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 280)
                                                                                                 + 80LL);
      goto LABEL_46;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45, v46, v47)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48, v49, v50) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51, v52, v53) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v54, v55, v56) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_35;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58, v59)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v60, v61, v62) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v66, v67, v68) + 108)) )
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
  *(_QWORD *)v71 = v14 + 2584;
  v13 = (POINTL *)HmgShareLockCheck(*(_QWORD *)(v11 + 144), v12);
  if ( v13 )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v69,
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
      v10 = v69;
      v9 = (struct _SURFOBJ *)&v13[3];
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v15 + 2840);
      DEC_SHARE_REF_CNT(v13);
      LODWORD(v13) = v71[0];
LABEL_46:
      OffCopyBits((int)v16, v72[0], (int)a3, (int)v13, (__int64)v9, v70, v10, (__int64)a4, (__int64)a4);
      goto LABEL_47;
    }
    DEC_SHARE_REF_CNT(v13);
  }
LABEL_47:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v69);
  if ( v73 )
    GreUnlockDisplayDevice(*(_QWORD *)(v73 + 48));
  if ( v74 )
    GreUnlockDisplayDevice(*(_QWORD *)(v74 + 48));
LABEL_51:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v75);
}
