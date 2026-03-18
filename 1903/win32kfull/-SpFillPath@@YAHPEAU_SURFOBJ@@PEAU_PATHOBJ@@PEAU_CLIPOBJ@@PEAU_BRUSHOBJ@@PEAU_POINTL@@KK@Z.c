/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027C620
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0040DA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0041650 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0041688 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00416BC (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0043E6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C0106918 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C014DC40 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C014FBCC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C014FDC8 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C014FDE8 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0156BD0 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     OffFillPath @ 0x1C02C1500 (OffFillPath.c)
 */

__int64 __fastcall SpFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // r12d
  struct _PATHOBJ *v9; // rbx
  struct _SURFOBJ *v10; // rsi
  SURFACE *v11; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v14; // edi
  LONG v15; // ebx
  USHORT *p_iType; // rdi
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
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v33)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _CLIPOBJ *v47; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v48; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v49; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v50; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v52; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v53; // [rsp+80h] [rbp-80h]
  _QWORD v54[5]; // [rsp+88h] [rbp-78h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-48h]
  _BYTE v57[32]; // [rsp+100h] [rbp+0h] BYREF
  int v58; // [rsp+120h] [rbp+20h]
  __int64 *v59[9]; // [rsp+370h] [rbp+270h] BYREF
  int v60; // [rsp+3B8h] [rbp+2B8h]

  v53 = a4;
  v48 = a1;
  v47 = a3;
  v52 = a5;
  v50 = 0LL;
  v8 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v59, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v59, &v48, &v50, &v47) )
  {
    while ( 1 )
    {
      v9 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
      memset(v54, 0, sizeof(v54));
      v10 = v48;
      v11 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v48);
      if ( v60 != 1
        || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v11) )
      {
        goto LABEL_10;
      }
      if ( v56 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&ppo, (struct EPATHOBJ *)this) )
        {
          x = v50.x;
          y = v50.y;
          CLIPOBJ_vOffset(v47, v50.x, v50.y);
          PATHOBJ_vOffset(&ppo, x, y);
          hdev = v10->hdev;
          PRECOMPUTE::vInit(
            (__int64)v54,
            v11,
            (PDEVOBJ *)&hdev,
            (struct EPATHOBJ *)&ppo,
            (__int64)v47,
            0LL,
            0LL,
            a6,
            a7,
            1);
          v14 = -y;
          v15 = -x;
          CLIPOBJ_vOffset(v47, v15, v14);
          PATHOBJ_vOffset(&ppo, v15, v14);
          if ( v54[4] )
            break;
        }
      }
LABEL_34:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v54);
      EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
      if ( v58 )
        PopThreadGuardedObject(v57);
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v59, &v48, &v50, &v47) )
        return v8;
    }
    v9 = this;
    this = &ppo;
LABEL_10:
    PATHOBJ_vEnumStart(this);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v49, v10);
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v49, &v47) )
    {
LABEL_30:
      if ( !v9 )
        v9 = this;
      this = v9;
      if ( v49 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v49 + 48));
        v49 = 0LL;
      }
      goto LABEL_34;
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20, v21, v22) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24, v25) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27, v28) + 280) + 20LL) & 0x40) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31);
          v10 = v48;
          v33 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
          goto LABEL_28;
        }
        v10 = v48;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38, v39) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v40, v41, v42) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43, v44, v45) + 108)) )
        {
          v10 = v48;
          goto LABEL_27;
        }
        v10 = v48;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x40) != 0 )
    {
      v33 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v10->hdev + 162);
LABEL_28:
      if ( !(unsigned int)OffFillPath(v33, &v50, v10, this, v47, v53, v52, a6, a7) )
        v8 = -1;
      goto LABEL_30;
    }
LABEL_27:
    v33 = EngFillPath;
    goto LABEL_28;
  }
  return v8;
}
