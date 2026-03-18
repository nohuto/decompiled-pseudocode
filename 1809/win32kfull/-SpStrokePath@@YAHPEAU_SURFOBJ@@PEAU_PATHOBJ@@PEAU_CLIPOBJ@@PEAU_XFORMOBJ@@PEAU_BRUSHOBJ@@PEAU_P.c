/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C01400B0
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
 *     OffStrokePath @ 0x1C0141458 (OffStrokePath.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0141564 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0150D14 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall SpStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v9; // r13d
  FLOAT_LONG v10; // edi
  int i; // eax
  struct _PATHOBJ *v12; // rbx
  struct _SURFOBJ *v13; // r14
  SURFACE *v14; // r12
  struct _LINEATTRS *v15; // r12
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v17)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  LONG x; // ebx
  LONG y; // esi
  LONG v21; // esi
  LONG v22; // ebx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  struct _CLIPOBJ *v33; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v36; // [rsp+68h] [rbp-98h] BYREF
  struct _LINEATTRS *v37; // [rsp+70h] [rbp-90h]
  struct _XFORMOBJ *v38; // [rsp+78h] [rbp-88h]
  HDEV hdev; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL *v40; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v41; // [rsp+90h] [rbp-70h]
  _QWORD v42[5]; // [rsp+98h] [rbp-68h] BYREF
  struct _PATHOBJ v43; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-38h]
  _BYTE v45[32]; // [rsp+110h] [rbp+10h] BYREF
  int v46; // [rsp+130h] [rbp+30h]
  __int64 *v47[9]; // [rsp+380h] [rbp+280h] BYREF
  int v48; // [rsp+3C8h] [rbp+2C8h]

  v41 = a5;
  v9 = 1;
  v40 = a6;
  v38 = a4;
  v34 = a1;
  v33 = a3;
  LODWORD(v10.e) = a7->elStyleState;
  v37 = a7;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v47, a1, a3, &a3->rclBounds);
  for ( i = ENUMUNDERLAYS::bEnum(v47, &v34, &v36, &v33); i; i = ENUMUNDERLAYS::bEnum(v47, &v34, &v36, &v33) )
  {
    v12 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v43);
    memset(v42, 0, sizeof(v42));
    v13 = v34;
    v14 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v34);
    if ( v48 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap(v14) )
    {
      if ( !v44 )
        goto LABEL_14;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v43, (struct EPATHOBJ *)this) )
        goto LABEL_14;
      x = v36.x;
      y = v36.y;
      CLIPOBJ_vOffset(v33, v36.x, v36.y);
      PATHOBJ_vOffset(&v43, x, y);
      hdev = v13->hdev;
      PRECOMPUTE::vInit(v42, v14, &hdev, &v43, v33, v38, v37, a8, 0, 0);
      v21 = -y;
      v22 = -x;
      CLIPOBJ_vOffset(v33, v22, v21);
      PATHOBJ_vOffset(&v43, v22, v21);
      if ( !v42[4] )
        goto LABEL_14;
      v12 = this;
      this = &v43;
    }
    v15 = v37;
    v37->elStyleState = v10;
    PATHOBJ_vEnumStart(this);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v35, v13);
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v35, &v33) )
    {
      p_iType = &v13->iType;
      if ( v13->iType != 1 )
        goto LABEL_6;
      if ( bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26) + 280) + 20LL) & 0x20) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27);
          v13 = v34;
          v17 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 48LL);
          goto LABEL_8;
        }
        v13 = v34;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32) + 108)) )
        {
          v13 = v34;
LABEL_39:
          v17 = EngStrokePath;
LABEL_8:
          if ( !(unsigned int)OffStrokePath(v17, &v36, v13, this, v33, v38, v41, v40, v15, a8) )
            v9 = -1;
          goto LABEL_10;
        }
        v13 = v34;
      }
LABEL_6:
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x20) != 0 )
      {
        v17 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v13->hdev + 161);
        goto LABEL_8;
      }
      goto LABEL_39;
    }
LABEL_10:
    if ( !v12 )
      v12 = this;
    this = v12;
    if ( v35 )
    {
      GreUnlockDisplayDevice(*(_QWORD *)(v35 + 48));
      v35 = 0LL;
    }
LABEL_14:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v42);
    EPATHOBJ::vUnlock((EPATHOBJ *)&v43);
    if ( v46 )
      PopThreadGuardedObject(v45);
  }
  return v9;
}
