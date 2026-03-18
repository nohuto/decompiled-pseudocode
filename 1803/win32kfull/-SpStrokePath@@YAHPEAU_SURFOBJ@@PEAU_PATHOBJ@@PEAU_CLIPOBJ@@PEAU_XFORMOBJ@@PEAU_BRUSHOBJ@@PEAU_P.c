/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C012B8F0
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
 *     OffStrokePath @ 0x1C012BD14 (OffStrokePath.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C012BE20 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C012BE40 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
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
  struct _PATHOBJ *v11; // rsi
  struct _SURFOBJ *v12; // r14
  SURFACE *v13; // r12
  __int64 v14; // rbx
  USHORT *p_iType; // r12
  BOOL (__stdcall *v16)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  LONG x; // ebx
  LONG y; // esi
  LONG v20; // esi
  LONG v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  struct _CLIPOBJ *v32; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v35; // [rsp+68h] [rbp-98h] BYREF
  struct _LINEATTRS *v36; // [rsp+70h] [rbp-90h]
  struct _XFORMOBJ *v37; // [rsp+78h] [rbp-88h]
  HDEV hdev; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL *v39; // [rsp+88h] [rbp-78h]
  struct _BRUSHOBJ *v40; // [rsp+90h] [rbp-70h]
  _QWORD v41[5]; // [rsp+98h] [rbp-68h] BYREF
  struct _PATHOBJ v42; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-38h]
  _BYTE v44[32]; // [rsp+110h] [rbp+10h] BYREF
  int v45; // [rsp+130h] [rbp+30h]
  __int64 *v46[9]; // [rsp+380h] [rbp+280h] BYREF
  int v47; // [rsp+3C8h] [rbp+2C8h]

  v40 = a5;
  v39 = a6;
  v9 = 1;
  v37 = a4;
  v33 = a1;
  v32 = a3;
  LODWORD(v10.e) = a7->elStyleState;
  v36 = a7;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v46, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v46, &v33, &v35, &v32) )
  {
    v11 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v42);
    memset(v41, 0, sizeof(v41));
    v12 = v33;
    v13 = (SURFACE *)SURFOBJ_TO_SURFACE_NOT_NULL(v33);
    if ( v47 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap(v13) )
    {
      if ( v43 && EPATHOBJ::bClone((EPATHOBJ *)&v42, (struct EPATHOBJ *)this) )
      {
        x = v35.x;
        y = v35.y;
        CLIPOBJ_vOffset(v32, v35.x, v35.y);
        PATHOBJ_vOffset(&v42, x, y);
        hdev = v12->hdev;
        PRECOMPUTE::vInit(v41, v13, &hdev, &v42, v32, v37, v36, a8, 0, 0);
        v20 = -y;
        v21 = -x;
        CLIPOBJ_vOffset(v32, v21, v20);
        PATHOBJ_vOffset(&v42, v21, v20);
        if ( !v41[4] )
          goto LABEL_17;
        v11 = this;
        this = &v42;
        goto LABEL_4;
      }
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v41);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v42);
      if ( v45 )
        PopThreadGuardedObject(v44);
    }
    else
    {
LABEL_4:
      v36->elStyleState = v10;
      PATHOBJ_vEnumStart(this);
      v14 = 0LL;
      v34 = 0LL;
      if ( v12
        && ((*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x4000) != 0
         || *(int *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) < 0)
        && (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x200) == 0 )
      {
        v14 = SURFOBJ_TO_SURFACE_NOT_NULL(v12);
        v34 = v14;
        GreLockDisplayDevice(*(_QWORD *)(v14 + 48));
      }
      if ( !NEEDDDILOCK::bRender((NEEDDDILOCK *)&v34, &v32) )
        goto LABEL_13;
      p_iType = &v12->iType;
      if ( v12->iType != 1 )
        goto LABEL_9;
      if ( bAllowShareAccess(v12) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22)
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v23) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25) + 280) + 20LL) & 0x20) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26);
          v14 = v34;
          v12 = v33;
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 48LL);
          goto LABEL_11;
        }
        v14 = v34;
        v12 = v33;
      }
      if ( *p_iType != 1 || !bAllowShareAccess(v12) )
        goto LABEL_9;
      if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28)
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v31) + 108) )
      {
        v14 = v34;
        v12 = v33;
LABEL_9:
        if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL(v12) + 112) & 0x20) != 0 )
        {
          v16 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v12->hdev + 160);
          goto LABEL_11;
        }
        goto LABEL_46;
      }
      v14 = v34;
      v12 = v33;
LABEL_46:
      v16 = EngStrokePath;
LABEL_11:
      if ( !(unsigned int)OffStrokePath(v16, &v35, v12, this, v32, v37, v40, v39, v36, a8) )
        v9 = -1;
LABEL_13:
      if ( !v11 )
        v11 = this;
      this = v11;
      if ( v14 )
        GreUnlockDisplayDevice(*(_QWORD *)(v14 + 48));
LABEL_17:
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v41);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v42);
      if ( v45 )
        PopThreadGuardedObject(v44);
    }
  }
  return v9;
}
