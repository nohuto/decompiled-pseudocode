/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C024C580
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
 *     OffStrokeAndFillPath @ 0x1C0296FC4 (OffStrokeAndFillPath.c)
 */

__int64 __fastcall SpStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  unsigned int v11; // r12d
  struct _PATHOBJ *v12; // rdi
  struct _SURFOBJ *v13; // rsi
  SURFACE *v14; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v17; // edi
  LONG v18; // ebx
  __int64 v19; // rbx
  USHORT *p_iType; // r15
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v27)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  struct _CLIPOBJ *v33; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v36; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS *v37; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ *v38; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v40; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v41; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v42; // [rsp+A8h] [rbp-58h]
  _QWORD v43[6]; // [rsp+B0h] [rbp-50h] BYREF
  struct _PATHOBJ v44; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v45; // [rsp+E8h] [rbp-18h]
  _BYTE v46[32]; // [rsp+130h] [rbp+30h] BYREF
  int v47; // [rsp+150h] [rbp+50h]
  __int64 *v48[9]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v49; // [rsp+3E8h] [rbp+2E8h]

  v42 = a5;
  v37 = a6;
  v11 = 1;
  v41 = a7;
  v38 = a4;
  v34 = a1;
  v40 = a8;
  v33 = a3;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v48, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v48, &v34, &v36, &v33) )
  {
    while ( 1 )
    {
      v12 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v44);
      memset(v43, 0, 0x28uLL);
      v13 = v34;
      v14 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v34);
      if ( v49 != 1
        || !*(_QWORD *)&this[5] && !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v14) )
      {
        goto LABEL_10;
      }
      if ( !v45 || !EPATHOBJ::bClone((EPATHOBJ *)&v44, (struct EPATHOBJ *)this) )
      {
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v43);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v44);
        if ( v47 )
          goto LABEL_42;
        goto LABEL_43;
      }
      x = v36.x;
      y = v36.y;
      CLIPOBJ_vOffset(v33, v36.x, v36.y);
      PATHOBJ_vOffset(&v44, x, y);
      hdev = v13->hdev;
      PRECOMPUTE::vInit(
        (__int64)v43,
        v14,
        (PDEVOBJ *)&hdev,
        (struct EPATHOBJ *)&v44,
        (__int64)v33,
        v38,
        v37,
        a9,
        a10,
        2);
      v17 = -y;
      v18 = -x;
      CLIPOBJ_vOffset(v33, v18, v17);
      PATHOBJ_vOffset(&v44, v18, v17);
      if ( v43[4] )
        break;
LABEL_41:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v43);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v44);
      if ( v47 )
LABEL_42:
        PopThreadGuardedObject(v46);
LABEL_43:
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v48, &v34, &v36, &v33) )
        return v11;
    }
    v12 = this;
    this = &v44;
LABEL_10:
    PATHOBJ_vEnumStart(this);
    v19 = 0LL;
    v35 = 0LL;
    if ( v13
      && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x4000) != 0
       || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) < 0)
      && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x200) == 0 )
    {
      v19 = SURFOBJ_TO_SURFACE_NOT_NULL(v13);
      v35 = v19;
      GreLockDisplayDevice(*(_QWORD *)(v19 + 48));
    }
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v35, &v33) )
    {
LABEL_37:
      if ( !v12 )
        v12 = this;
      this = v12;
      if ( v19 )
        GreUnlockDisplayDevice(*(_QWORD *)(v19 + 48));
      goto LABEL_41;
    }
    p_iType = &v13->iType;
    if ( v13->iType == 1 )
    {
      if ( bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 280) + 20LL) & 0x80u) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25);
          v19 = v35;
          v13 = v34;
          v27 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 40LL);
          goto LABEL_35;
        }
        v19 = v35;
        v13 = v34;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 108)) )
        {
          v19 = v35;
          v13 = v34;
          goto LABEL_34;
        }
        v19 = v35;
        v13 = v34;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x80u) != 0 )
    {
      v27 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v13->hdev + 159);
LABEL_35:
      if ( !(unsigned int)OffStrokeAndFillPath(v27, &v36, v13, this, v33, v38, v42, v37, v41, v40, a9, a10) )
        v11 = -1;
      goto LABEL_37;
    }
LABEL_34:
    v27 = EngStrokeAndFillPath;
    goto LABEL_35;
  }
  return v11;
}
