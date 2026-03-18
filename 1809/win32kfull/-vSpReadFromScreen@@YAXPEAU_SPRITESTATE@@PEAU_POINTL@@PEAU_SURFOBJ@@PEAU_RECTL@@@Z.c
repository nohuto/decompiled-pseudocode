/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0267774
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0266720 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C02682D0 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0269FD0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00486A0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C004CB04 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0261A38 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C0263EDC (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C026638C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     OffCopyBits @ 0x1C02AA74C (OffCopyBits.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  struct _CLIPOBJ *v8; // r13
  int v9; // eax
  struct _SURFOBJ *v10; // rsi
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdi
  HSURF v15; // rdx
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  HDEV hdev; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  int v36[2]; // [rsp+68h] [rbp-98h]
  int v37[2]; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v40[32]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+A8h] [rbp-58h]
  REGION *v42[11]; // [rsp+B0h] [rbp-50h] BYREF
  int v43; // [rsp+108h] [rbp+8h]
  int v44; // [rsp+130h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+40h]
  int v46; // [rsp+148h] [rbp+48h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  *(_QWORD *)v37 = a2;
  v42[10] = 0LL;
  v43 = 0;
  v45 = 0LL;
  v44 = 1;
  v8 = 0LL;
  v42[7] = 0LL;
  v46 = 0;
  if ( v4 )
  {
    v9 = bConcurrent(a1, (__int64)a2);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v42, v9, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v42 + 4)) )
      goto LABEL_57;
    v8 = (struct _CLIPOBJ *)v42;
  }
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v39, *((struct _SURFOBJ **)a1 + 4));
  NEEDDDILOCK::vLock((NEEDDDILOCK *)&v38, a3);
  v10 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
  v11 = 0LL;
  v12 = SURFOBJ_TO_SURFACE(v10);
  v35 = 0LL;
  *(_QWORD *)v36 = &gptlZero;
  if ( !v12 )
    goto LABEL_53;
  if ( (*(_DWORD *)(v12 + 112) & 0x80000) == 0 || (v13 = *(_QWORD *)(v12 + 48), v14 = *(_QWORD *)(v13 + 24), v13 == v14) )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 && v10->hdev )
    {
      if ( v10->iType != 1 )
      {
LABEL_32:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x400) != 0 )
        {
          hdev = v10->hdev;
LABEL_50:
          v16 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 165);
          goto LABEL_52;
        }
        goto LABEL_51;
      }
      if ( !bAllowShareAccess(v10)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( v10->iType == 1
          && bAllowShareAccess(v10)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 108)) )
        {
          goto LABEL_51;
        }
        goto LABEL_32;
      }
LABEL_41:
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 280)
                                                                                                 + 80LL);
LABEL_52:
      OffCopyBits((int)v16, v37[0], (int)a3, v36[0], (__int64)v10, v8, v11, (__int64)a4, (__int64)a4);
      goto LABEL_53;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_41;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34) + 108)) )
      {
        goto LABEL_51;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_50;
    }
LABEL_51:
    v16 = EngCopyBits;
    goto LABEL_52;
  }
  v15 = *(HSURF *)(v12 + 144);
  *(_QWORD *)v36 = v13 + 2584;
  SURFREF::SURFREF((SURFREF *)v40, v15);
  v10 = 0LL;
  if ( v41 )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v35,
                         0LL,
                         0,
                         *(_QWORD *)(v14 + 1808),
                         *(_QWORD *)(v13 + 1808),
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0x2000) )
    {
      v11 = v35;
      if ( v41 )
        v10 = (struct _SURFOBJ *)(v41 + 24);
      v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v14 + 2840);
      if ( v41 )
        DEC_SHARE_REF_CNT(v41);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v40);
      goto LABEL_52;
    }
    if ( v41 )
      DEC_SHARE_REF_CNT(v41);
  }
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v40);
LABEL_53:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v35);
  if ( v38 )
    GreUnlockDisplayDevice(*(_QWORD *)(v38 + 48));
  if ( v39 )
    GreUnlockDisplayDevice(*(_QWORD *)(v39 + 48));
LABEL_57:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v42);
}
