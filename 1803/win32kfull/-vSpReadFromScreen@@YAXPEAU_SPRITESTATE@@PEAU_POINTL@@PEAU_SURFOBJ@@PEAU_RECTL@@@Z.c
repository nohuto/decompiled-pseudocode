/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0253B90
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0251858 (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0254F44 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0256F80 (vSpUnTearDownSprites.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C00A7A10 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A7BA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C02498CC (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C024CB28 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C02511BC (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     OffCopyBits @ 0x1C0296A70 (OffCopyBits.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rbx
  struct _SURFOBJ *v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  POINTL *v14; // r13
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rbx
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  HDEV hdev; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v38; // [rsp+68h] [rbp-98h]
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  int v42[2]; // [rsp+88h] [rbp-78h]
  REGION *v43[11]; // [rsp+90h] [rbp-70h] BYREF
  int v44; // [rsp+E8h] [rbp-18h]
  int v45; // [rsp+110h] [rbp+10h]
  __int64 v46; // [rsp+120h] [rbp+20h]
  int v47; // [rsp+128h] [rbp+28h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  v41 = (__int64)a4;
  *(_QWORD *)v42 = a2;
  v43[10] = 0LL;
  v44 = 0;
  v45 = 1;
  v46 = 0LL;
  v43[7] = 0LL;
  v47 = 0;
  v38 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1, (__int64)a2);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v43, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v43 + 4)) )
      goto LABEL_61;
    v38 = (struct _CLIPOBJ *)v43;
  }
  v9 = *((_QWORD *)a1 + 4);
  v40 = 0LL;
  if ( v9
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v9) + 112) & 0x200) == 0 )
  {
    v40 = SURFOBJ_TO_SURFACE_NOT_NULL(v9);
    GreLockDisplayDevice(*(_QWORD *)(v40 + 48));
  }
  v39 = 0LL;
  if ( a3
    && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x4000) != 0
     || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) < 0)
    && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x200) == 0 )
  {
    v39 = SURFOBJ_TO_SURFACE_NOT_NULL(a3);
    GreLockDisplayDevice(*(_QWORD *)(v39 + 48));
  }
  v10 = (struct _SURFOBJ *)*((_QWORD *)a1 + 4);
  v11 = 0LL;
  v12 = SURFOBJ_TO_SURFACE(v10);
  v37 = 0LL;
  v14 = &gptlZero;
  if ( !v12 )
    goto LABEL_57;
  if ( (*(_DWORD *)(v12 + 112) & 0x80000) == 0 || (v15 = *(_QWORD *)(v12 + 48), v16 = *(_QWORD *)(v15 + 24), v15 == v16) )
  {
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) == 0 && v10->hdev )
    {
      if ( v10->iType != 1 )
      {
LABEL_36:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x400) != 0 )
        {
          hdev = v10->hdev;
LABEL_54:
          v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 164);
          goto LABEL_56;
        }
        goto LABEL_55;
      }
      if ( !bAllowShareAccess(v10)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( v10->iType == 1
          && bAllowShareAccess(v10)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27) + 108)) )
        {
          goto LABEL_55;
        }
        goto LABEL_36;
      }
LABEL_45:
      v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 280)
                                                                                                 + 80LL);
      goto LABEL_56;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_45;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33)
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36) + 108)) )
      {
        goto LABEL_55;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(a3) + 112) & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_54;
    }
LABEL_55:
    v18 = EngCopyBits;
    goto LABEL_56;
  }
  LODWORD(v14) = v15 + 2576;
  LOBYTE(v13) = 5;
  v17 = HmgShareLockCheck(*(_QWORD *)(v12 + 144), v13);
  if ( v17 )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v37,
                         0LL,
                         0,
                         *(_QWORD *)(v16 + 1800),
                         *(_QWORD *)(v15 + 1800),
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0x2000) )
    {
      v11 = v37;
      v10 = (struct _SURFOBJ *)(v17 + 24);
      v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v16 + 2832);
      DEC_SHARE_REF_CNT(v17);
LABEL_56:
      OffCopyBits((int)v18, v42[0], (int)a3, (int)v14, (__int64)v10, v38, v11, v41, v41);
      goto LABEL_57;
    }
    DEC_SHARE_REF_CNT(v17);
  }
LABEL_57:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v37);
  if ( v39 )
    GreUnlockDisplayDevice(*(_QWORD *)(v39 + 48));
  if ( v40 )
    GreUnlockDisplayDevice(*(_QWORD *)(v40 + 48));
LABEL_61:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v43);
}
