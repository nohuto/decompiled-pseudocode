/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0263A20
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
 *     OffStrokeAndFillPath @ 0x1C02AACA0 (OffStrokeAndFillPath.c)
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
  struct _PATHOBJ *v12; // rbx
  struct _SURFOBJ *v13; // rsi
  SURFACE *v14; // r15
  LONG x; // ebx
  LONG y; // edi
  LONG v17; // edi
  LONG v18; // ebx
  USHORT *p_iType; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v26)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  struct _CLIPOBJ *v32; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v33; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v35; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS *v36; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ *v37; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v39; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v40; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v41; // [rsp+A8h] [rbp-58h]
  _QWORD v42[6]; // [rsp+B0h] [rbp-50h] BYREF
  PATHOBJ ppo; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-18h]
  _BYTE v45[32]; // [rsp+130h] [rbp+30h] BYREF
  int v46; // [rsp+150h] [rbp+50h]
  __int64 *v47[9]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v48; // [rsp+3E8h] [rbp+2E8h]

  v41 = a5;
  v36 = a6;
  v11 = 1;
  v40 = a7;
  v37 = a4;
  v33 = a1;
  v39 = a8;
  v32 = a3;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v47, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v47, &v33, &v35, &v32) )
  {
    while ( 1 )
    {
      v12 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
      memset(v42, 0, 0x28uLL);
      v13 = v33;
      v14 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v33);
      if ( v48 != 1
        || !*(_QWORD *)&this[5] && !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v14) )
      {
        goto LABEL_11;
      }
      if ( v44 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&ppo, (struct EPATHOBJ *)this) )
        {
          x = v35.x;
          y = v35.y;
          CLIPOBJ_vOffset(v32, v35.x, v35.y);
          PATHOBJ_vOffset(&ppo, x, y);
          hdev = v13->hdev;
          PRECOMPUTE::vInit(
            (__int64)v42,
            v14,
            (PDEVOBJ *)&hdev,
            (struct EPATHOBJ *)&ppo,
            (__int64)v32,
            v37,
            v36,
            a9,
            a10,
            2);
          v17 = -y;
          v18 = -x;
          CLIPOBJ_vOffset(v32, v18, v17);
          PATHOBJ_vOffset(&ppo, v18, v17);
          if ( v42[4] )
            break;
        }
      }
LABEL_35:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v42);
      EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
      if ( v46 )
        PopThreadGuardedObject(v45);
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v47, &v33, &v35, &v32) )
        return v11;
    }
    v12 = this;
    this = &ppo;
LABEL_11:
    PATHOBJ_vEnumStart(this);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v34, v13);
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v34, &v32) )
    {
LABEL_31:
      if ( !v12 )
        v12 = this;
      this = v12;
      if ( v34 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v34 + 48));
        v34 = 0LL;
      }
      goto LABEL_35;
    }
    p_iType = &v13->iType;
    if ( v13->iType == 1 )
    {
      if ( bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v20)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 280) + 20LL) & 0x80u) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24);
          v13 = v33;
          v26 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 40LL);
          goto LABEL_29;
        }
        v13 = v33;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v27)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 108)) )
        {
          v13 = v33;
          goto LABEL_28;
        }
        v13 = v33;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x80u) != 0 )
    {
      v26 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v13->hdev + 160);
LABEL_29:
      if ( !(unsigned int)OffStrokeAndFillPath(v26, &v35, v13, this, v32, v37, v41, v36, v40, v39, a9, a10) )
        v11 = -1;
      goto LABEL_31;
    }
LABEL_28:
    v26 = EngStrokeAndFillPath;
    goto LABEL_29;
  }
  return v11;
}
