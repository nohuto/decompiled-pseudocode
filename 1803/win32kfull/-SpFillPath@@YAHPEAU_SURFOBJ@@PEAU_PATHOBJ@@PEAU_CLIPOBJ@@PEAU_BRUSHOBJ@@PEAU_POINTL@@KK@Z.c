/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C024BA60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C007C7A0 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C009F688 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00AB63C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C00B2888 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C00B28B8 (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C012BB58 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C012BC28 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C012BE20 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C012BE40 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     OffFillPath @ 0x1C0296CE8 (OffFillPath.c)
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
  struct _PATHOBJ *v9; // rdi
  struct _SURFOBJ *v10; // rsi
  SURFACE *v11; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v14; // edi
  LONG v15; // ebx
  __int64 v16; // rbx
  USHORT *p_iType; // r15
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v24)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rdx
  struct _CLIPOBJ *v30; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v31; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v33; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v35; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v36; // [rsp+80h] [rbp-80h]
  _QWORD v37[5]; // [rsp+88h] [rbp-78h] BYREF
  struct _PATHOBJ v38; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+B8h] [rbp-48h]
  _BYTE v40[32]; // [rsp+100h] [rbp+0h] BYREF
  int v41; // [rsp+120h] [rbp+20h]
  __int64 *v42[9]; // [rsp+370h] [rbp+270h] BYREF
  int v43; // [rsp+3B8h] [rbp+2B8h]

  v36 = a4;
  v31 = a1;
  v30 = a3;
  v35 = a5;
  v8 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v42, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v42, &v31, &v33, &v30) )
  {
    while ( 1 )
    {
      v9 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v38);
      memset(v37, 0, sizeof(v37));
      v10 = v31;
      v11 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v31);
      if ( v43 != 1
        || !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v11) )
      {
        goto LABEL_9;
      }
      if ( !v39 || !EPATHOBJ::bClone((EPATHOBJ *)&v38, (struct EPATHOBJ *)this) )
      {
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v37);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v38);
        if ( v41 )
          goto LABEL_41;
        goto LABEL_42;
      }
      x = v33.x;
      y = v33.y;
      CLIPOBJ_vOffset(v30, v33.x, v33.y);
      PATHOBJ_vOffset(&v38, x, y);
      hdev = v10->hdev;
      PRECOMPUTE::vInit((__int64)v37, v11, (PDEVOBJ *)&hdev, (struct EPATHOBJ *)&v38, (__int64)v30, 0LL, 0LL, a6, a7, 1);
      v14 = -y;
      v15 = -x;
      CLIPOBJ_vOffset(v30, v15, v14);
      PATHOBJ_vOffset(&v38, v15, v14);
      if ( v37[4] )
        break;
LABEL_40:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v37);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v38);
      if ( v41 )
LABEL_41:
        PopThreadGuardedObject(v40);
LABEL_42:
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v42, &v31, &v33, &v30) )
        return v8;
    }
    v9 = this;
    this = &v38;
LABEL_9:
    PATHOBJ_vEnumStart(this);
    v16 = 0LL;
    v32 = 0LL;
    if ( v10
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x200) == 0 )
    {
      v16 = SURFOBJ_TO_SURFACE_NOT_NULL(v10);
      v32 = v16;
      GreLockDisplayDevice(*(_QWORD *)(v16 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v32, &v30) )
    {
LABEL_36:
      if ( !v9 )
        v9 = this;
      this = v9;
      if ( v16 )
        GreUnlockDisplayDevice(*(_QWORD *)(v16 + 48));
      goto LABEL_40;
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 280) + 20LL) & 0x40) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
          v16 = v32;
          v10 = v31;
          v24 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
          goto LABEL_34;
        }
        v16 = v32;
        v10 = v31;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28) + 108)) )
        {
          v16 = v32;
          v10 = v31;
          goto LABEL_33;
        }
        v16 = v32;
        v10 = v31;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v10) + 112) & 0x40) != 0 )
    {
      v24 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v10->hdev + 161);
LABEL_34:
      if ( !(unsigned int)OffFillPath(v24, &v33, v10, this, v30, v36, v35, a6, a7) )
        v8 = -1;
      goto LABEL_36;
    }
LABEL_33:
    v24 = EngFillPath;
    goto LABEL_34;
  }
  return v8;
}
