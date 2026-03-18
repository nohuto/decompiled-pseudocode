/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C014F600
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
 *     OffStrokeAndFillPath @ 0x1C014F868 (OffStrokeAndFillPath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C014FBCC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C014FDC8 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C014FDE8 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0156BD0 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  USHORT *p_iType; // rdi
  BOOL (__stdcall *v16)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  LONG x; // ebx
  LONG y; // edi
  LONG v20; // edi
  LONG v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  struct _CLIPOBJ *v50; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v51; // [rsp+68h] [rbp-98h] BYREF
  __int64 v52; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v53; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS *v54; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ *v55; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v57; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v58; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v59; // [rsp+A8h] [rbp-58h]
  _QWORD v60[6]; // [rsp+B0h] [rbp-50h] BYREF
  struct _PATHOBJ v61; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v62; // [rsp+E8h] [rbp-18h]
  _BYTE v63[32]; // [rsp+130h] [rbp+30h] BYREF
  int v64; // [rsp+150h] [rbp+50h]
  __int64 *v65[9]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v66; // [rsp+3E8h] [rbp+2E8h]

  v59 = a5;
  v54 = a6;
  v11 = 1;
  v58 = a7;
  v55 = a4;
  v51 = a1;
  v57 = a8;
  v50 = a3;
  v53 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v65, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v65, &v51, &v53, &v50) )
  {
    while ( 1 )
    {
      v12 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v61);
      memset(v60, 0, 0x28uLL);
      v13 = v51;
      v14 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v51);
      if ( v66 != 1
        || !*(_QWORD *)&this[5] && !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v14) )
      {
        goto LABEL_3;
      }
      if ( v62 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&v61, (struct EPATHOBJ *)this) )
        {
          x = v53.x;
          y = v53.y;
          CLIPOBJ_vOffset(v50, v53.x, v53.y);
          PATHOBJ_vOffset(&v61, x, y);
          hdev = v13->hdev;
          PRECOMPUTE::vInit(v60, v14, &hdev, &v61, v50, v55, v54, a9, a10, 2);
          v20 = -y;
          v21 = -x;
          CLIPOBJ_vOffset(v50, v21, v20);
          PATHOBJ_vOffset(&v61, v21, v20);
          if ( v60[4] )
            break;
        }
      }
LABEL_13:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v60);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v61);
      if ( v64 )
        PopThreadGuardedObject(v63);
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v65, &v51, &v53, &v50) )
        return v11;
    }
    v12 = this;
    this = &v61;
LABEL_3:
    PATHOBJ_vEnumStart(this);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v52, v13);
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v52, &v50) )
    {
LABEL_9:
      if ( !v12 )
        v12 = this;
      this = v12;
      if ( v52 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v52 + 48));
        v52 = 0LL;
      }
      goto LABEL_13;
    }
    p_iType = &v13->iType;
    if ( v13->iType == 1 )
    {
      if ( bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29, v30) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31, v32, v33) + 280) + 20LL) & 0x80u) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v34, v35, v36);
          v13 = v51;
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 40LL);
          goto LABEL_7;
        }
        v13 = v51;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v38, v39, v40)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v41, v42, v43) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v44, v45, v46) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47, v48, v49) + 108)) )
        {
          v13 = v51;
LABEL_40:
          v16 = EngStrokeAndFillPath;
LABEL_7:
          if ( !(unsigned int)OffStrokeAndFillPath(v16, &v53, v13, this, v50, v55, v59, v54, v58, v57, a9, a10) )
            v11 = -1;
          goto LABEL_9;
        }
        v13 = v51;
      }
    }
    if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v13) + 112) & 0x80u) != 0 )
    {
      v16 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v13->hdev + 160);
      goto LABEL_7;
    }
    goto LABEL_40;
  }
  return v11;
}
