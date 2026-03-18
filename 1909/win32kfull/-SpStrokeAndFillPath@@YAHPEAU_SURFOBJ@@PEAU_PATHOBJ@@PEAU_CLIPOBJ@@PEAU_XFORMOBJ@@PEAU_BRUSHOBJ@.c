/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C01503C0
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
 *     OffStrokeAndFillPath @ 0x1C0150628 (OffStrokeAndFillPath.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C015098C (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0150B88 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0150BA8 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0157990 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // r8
  struct _CLIPOBJ *v41; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v42; // [rsp+68h] [rbp-98h] BYREF
  __int64 v43; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v44; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS *v45; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ *v46; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v48; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v49; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v50; // [rsp+A8h] [rbp-58h]
  _QWORD v51[6]; // [rsp+B0h] [rbp-50h] BYREF
  struct _PATHOBJ v52; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v53; // [rsp+E8h] [rbp-18h]
  _BYTE v54[32]; // [rsp+130h] [rbp+30h] BYREF
  int v55; // [rsp+150h] [rbp+50h]
  __int64 *v56[9]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v57; // [rsp+3E8h] [rbp+2E8h]

  v50 = a5;
  v45 = a6;
  v11 = 1;
  v49 = a7;
  v46 = a4;
  v42 = a1;
  v48 = a8;
  v41 = a3;
  v44 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v56, a1, a3, &a3->rclBounds);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum(v56, &v42, &v44, &v41) )
  {
    while ( 1 )
    {
      v12 = 0LL;
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v52);
      memset(v51, 0, 0x28uLL);
      v13 = v42;
      v14 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v42);
      if ( v57 != 1
        || !*(_QWORD *)&this[5] && !(unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
        || (unsigned int)SURFACE::bRedirectionBitmap(v14) )
      {
        goto LABEL_3;
      }
      if ( v53 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&v52, (struct EPATHOBJ *)this) )
        {
          x = v44.x;
          y = v44.y;
          CLIPOBJ_vOffset(v41, v44.x, v44.y);
          PATHOBJ_vOffset(&v52, x, y);
          hdev = v13->hdev;
          PRECOMPUTE::vInit(v51, v14, &hdev, &v52, v41, v46, v45, a9, a10, 2);
          v20 = -y;
          v21 = -x;
          CLIPOBJ_vOffset(v41, v21, v20);
          PATHOBJ_vOffset(&v52, v21, v20);
          if ( v51[4] )
            break;
        }
      }
LABEL_13:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v51);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v52);
      if ( v55 )
        PopThreadGuardedObject(v54);
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v56, &v42, &v44, &v41) )
        return v11;
    }
    v12 = this;
    this = &v52;
LABEL_3:
    PATHOBJ_vEnumStart(this);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v43, v13);
    if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v43, &v41) )
    {
LABEL_9:
      if ( !v12 )
        v12 = this;
      this = v12;
      if ( v43 )
      {
        GreUnlockDisplayDevice(*(_QWORD *)(v43 + 48));
        v43 = 0LL;
      }
      goto LABEL_13;
    }
    p_iType = &v13->iType;
    if ( v13->iType == 1 )
    {
      if ( bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29) + 280) + 20LL) & 0x80u) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31);
          v13 = v42;
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 40LL);
          goto LABEL_7;
        }
        v13 = v42;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v13) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40) + 108)) )
        {
          v13 = v42;
LABEL_40:
          v16 = EngStrokeAndFillPath;
LABEL_7:
          if ( !(unsigned int)OffStrokeAndFillPath(v16, &v44, v13, this, v41, v46, v50, v45, v49, v48, a9, a10) )
            v11 = -1;
          goto LABEL_9;
        }
        v13 = v42;
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
