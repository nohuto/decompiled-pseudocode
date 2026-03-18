/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027BF60
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0084B2C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0084E30 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00856E0 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0085718 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C008574C (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0087E70 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00E0B78 (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C014EA0C (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C015098C (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0150B88 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0150BA8 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0157990 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     OffFillPath @ 0x1C02C1050 (OffFillPath.c)
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
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v28)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  struct _CLIPOBJ *v38; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v39; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v41; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v43; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v44; // [rsp+80h] [rbp-80h]
  _QWORD v45[5]; // [rsp+88h] [rbp-78h] BYREF
  PATHOBJ ppo; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-48h]
  _BYTE v48[32]; // [rsp+100h] [rbp+0h] BYREF
  int v49; // [rsp+120h] [rbp+20h]
  __int64 *v50[9]; // [rsp+370h] [rbp+270h] BYREF
  int v51; // [rsp+3B8h] [rbp+2B8h]

  v44 = a4;
  v39 = a1;
  v38 = a3;
  v43 = a5;
  v41 = 0LL;
  v8 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v50, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v50, &v39, &v41, &v38) )
  {
    while ( 1 )
    {
      v9 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
      memset(v45, 0, sizeof(v45));
      v10 = v39;
      v11 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v39);
      if ( v51 != 1
        || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v11) )
      {
        goto LABEL_10;
      }
      if ( v47 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&ppo, (struct EPATHOBJ *)this) )
        {
          x = v41.x;
          y = v41.y;
          CLIPOBJ_vOffset(v38, v41.x, v41.y);
          PATHOBJ_vOffset(&ppo, x, y);
          hdev = v10->hdev;
          PRECOMPUTE::vInit(
            (__int64)v45,
            v11,
            (PDEVOBJ *)&hdev,
            (struct EPATHOBJ *)&ppo,
            (__int64)v38,
            0LL,
            0LL,
            a6,
            a7,
            1);
          v14 = -y;
          v15 = -x;
          CLIPOBJ_vOffset(v38, v15, v14);
          PATHOBJ_vOffset(&ppo, v15, v14);
          if ( v45[4] )
            break;
        }
      }
LABEL_34:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v45);
      EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
      if ( v49 )
        PopThreadGuardedObject(v48);
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v50, &v39, &v41, &v38) )
        return v8;
    }
    v9 = this;
    this = &ppo;
LABEL_10:
    PATHOBJ_vEnumStart(this);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v40, v10);
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v40, &v38) )
    {
LABEL_30:
      if ( !v9 )
        v9 = this;
      this = v9;
      if ( v40 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v40 + 48));
        v40 = 0LL;
      }
      goto LABEL_34;
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23, v24) + 280) + 20LL) & 0x40) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26);
          v10 = v39;
          v28 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
          goto LABEL_28;
        }
        v10 = v39;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36) + 108)) )
        {
          v10 = v39;
          goto LABEL_27;
        }
        v10 = v39;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x40) != 0 )
    {
      v28 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v10->hdev + 162);
LABEL_28:
      if ( !(unsigned int)OffFillPath(v28, &v41, v10, this, v38, v44, v43, a6, a7) )
        v8 = -1;
      goto LABEL_30;
    }
LABEL_27:
    v28 = EngFillPath;
    goto LABEL_28;
  }
  return v8;
}
