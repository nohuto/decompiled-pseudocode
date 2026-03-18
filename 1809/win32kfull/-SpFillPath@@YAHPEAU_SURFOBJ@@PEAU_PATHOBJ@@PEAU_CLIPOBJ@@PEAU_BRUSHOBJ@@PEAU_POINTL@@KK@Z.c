/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0262FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00106C4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0061880 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00F507C (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00F50B4 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00F50E8 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C013EFA0 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C01402F4 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0141370 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0141564 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0150D14 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     OffFillPath @ 0x1C02AA9C4 (OffFillPath.c)
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
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v23)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  struct _CLIPOBJ *v29; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v32; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v34; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v35; // [rsp+80h] [rbp-80h]
  _QWORD v36[5]; // [rsp+88h] [rbp-78h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v38; // [rsp+B8h] [rbp-48h]
  _BYTE v39[32]; // [rsp+100h] [rbp+0h] BYREF
  int v40; // [rsp+120h] [rbp+20h]
  __int64 *v41[9]; // [rsp+370h] [rbp+270h] BYREF
  int v42; // [rsp+3B8h] [rbp+2B8h]

  v35 = a4;
  v30 = a1;
  v29 = a3;
  v34 = a5;
  v8 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v41, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v41, &v30, &v32, &v29) )
  {
    while ( 1 )
    {
      v9 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
      memset(v36, 0, sizeof(v36));
      v10 = v30;
      v11 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v30);
      if ( v42 != 1
        || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v11) )
      {
        goto LABEL_10;
      }
      if ( v38 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&ppo, (struct EPATHOBJ *)this) )
        {
          x = v32.x;
          y = v32.y;
          CLIPOBJ_vOffset(v29, v32.x, v32.y);
          PATHOBJ_vOffset(&ppo, x, y);
          hdev = v10->hdev;
          PRECOMPUTE::vInit(
            (__int64)v36,
            v11,
            (PDEVOBJ *)&hdev,
            (struct EPATHOBJ *)&ppo,
            (__int64)v29,
            0LL,
            0LL,
            a6,
            a7,
            1);
          v14 = -y;
          v15 = -x;
          CLIPOBJ_vOffset(v29, v15, v14);
          PATHOBJ_vOffset(&ppo, v15, v14);
          if ( v36[4] )
            break;
        }
      }
LABEL_34:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v36);
      EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
      if ( v40 )
        PopThreadGuardedObject(v39);
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v41, &v30, &v32, &v29) )
        return v8;
    }
    v9 = this;
    this = &ppo;
LABEL_10:
    PATHOBJ_vEnumStart(this);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v31, v10);
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v31, &v29) )
    {
LABEL_30:
      if ( !v9 )
        v9 = this;
      this = v9;
      if ( v31 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v31 + 48));
        v31 = 0LL;
      }
      goto LABEL_34;
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 280) + 20LL) & 0x40) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21);
          v10 = v30;
          v23 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
          goto LABEL_28;
        }
        v10 = v30;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27) + 108)) )
        {
          v10 = v30;
          goto LABEL_27;
        }
        v10 = v30;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x40) != 0 )
    {
      v23 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v10->hdev + 162);
LABEL_28:
      if ( !(unsigned int)OffFillPath(v23, &v32, v10, this, v29, v35, v34, a6, a7) )
        v8 = -1;
      goto LABEL_30;
    }
LABEL_27:
    v23 = EngFillPath;
    goto LABEL_28;
  }
  return v8;
}
