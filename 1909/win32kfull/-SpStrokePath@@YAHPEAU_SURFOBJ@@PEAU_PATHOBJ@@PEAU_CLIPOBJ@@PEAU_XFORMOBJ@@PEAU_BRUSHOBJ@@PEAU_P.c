/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0150760
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
 *     OffStrokePath @ 0x1C0150A74 (OffStrokePath.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0150B88 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0150BA8 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C0157990 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  struct _PATHOBJ *v11; // rbx
  struct _SURFOBJ *v12; // r14
  SURFACE *v13; // r12
  struct _LINEATTRS *v14; // r12
  USHORT *p_iType; // rsi
  BOOL (__stdcall *v16)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  LONG x; // ebx
  LONG y; // esi
  LONG v20; // esi
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
  struct _CLIPOBJ *v41; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v42; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v44; // [rsp+68h] [rbp-98h] BYREF
  struct _LINEATTRS *v45; // [rsp+70h] [rbp-90h]
  struct _XFORMOBJ *v46; // [rsp+78h] [rbp-88h]
  HDEV hdev; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL *v48; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v49; // [rsp+90h] [rbp-70h]
  _QWORD v50[5]; // [rsp+98h] [rbp-68h] BYREF
  struct _PATHOBJ v51; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-38h]
  _BYTE v53[32]; // [rsp+110h] [rbp+10h] BYREF
  int v54; // [rsp+130h] [rbp+30h]
  __int64 *v55[9]; // [rsp+380h] [rbp+280h] BYREF
  int v56; // [rsp+3C8h] [rbp+2C8h]

  v49 = a5;
  v48 = a6;
  v9 = 1;
  v46 = a4;
  v42 = a1;
  v41 = a3;
  LODWORD(v10.e) = a7->elStyleState;
  v45 = a7;
  v44 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v55, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v55, &v42, &v44, &v41) )
  {
    v11 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v51);
    memset(v50, 0, sizeof(v50));
    v12 = v42;
    v13 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v42);
    if ( v56 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap(v13) )
    {
      if ( !v52 )
        goto LABEL_14;
      if ( !EPATHOBJ::bClone((EPATHOBJ *)&v51, (struct EPATHOBJ *)this) )
        goto LABEL_14;
      x = v44.x;
      y = v44.y;
      CLIPOBJ_vOffset(v41, v44.x, v44.y);
      PATHOBJ_vOffset(&v51, x, y);
      hdev = v12->hdev;
      PRECOMPUTE::vInit(v50, v13, &hdev, &v51, v41, v46, v45, a8, 0, 0);
      v20 = -y;
      v21 = -x;
      CLIPOBJ_vOffset(v41, v21, v20);
      PATHOBJ_vOffset(&v51, v21, v20);
      if ( !v50[4] )
        goto LABEL_14;
      v11 = this;
      this = &v51;
    }
    v14 = v45;
    v45->elStyleState = v10;
    PATHOBJ_vEnumStart(this);
    NEEDDDILOCK::vLock((NEEDDDILOCK *)&v43, v12);
    if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v43, &v41) )
    {
      p_iType = &v12->iType;
      if ( v12->iType != 1 )
        goto LABEL_6;
      if ( bAllowShareAccess(v12) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29) + 280) + 20LL) & 0x20) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31);
          v12 = v42;
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 48LL);
          goto LABEL_8;
        }
        v12 = v42;
      }
      if ( *p_iType == 1 && bAllowShareAccess(v12) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v33, v34)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v37, v38) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v39, v40) + 108)) )
        {
          v12 = v42;
LABEL_38:
          v16 = EngStrokePath;
LABEL_8:
          if ( !(unsigned int)OffStrokePath(v16, &v44, v12, this, v41, v46, v49, v48, v14, a8) )
            v9 = -1;
          goto LABEL_10;
        }
        v12 = v42;
      }
LABEL_6:
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x20) != 0 )
      {
        v16 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v12->hdev + 161);
        goto LABEL_8;
      }
      goto LABEL_38;
    }
LABEL_10:
    if ( !v11 )
      v11 = this;
    this = v11;
    if ( v43 )
    {
      GreUnlockDisplayDevice(*(_QWORD *)(v43 + 48));
      v43 = 0LL;
    }
LABEL_14:
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v50);
    EPATHOBJ::vUnlock((EPATHOBJ *)&v51);
    if ( v54 )
      PopThreadGuardedObject(v53);
  }
  return v9;
}
