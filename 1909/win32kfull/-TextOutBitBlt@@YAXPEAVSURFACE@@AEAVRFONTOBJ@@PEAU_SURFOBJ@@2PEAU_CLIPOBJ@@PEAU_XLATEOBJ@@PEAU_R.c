/*
 * XREFs of ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00E0D14
 * Callers:
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C00076A8 (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00AF610 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C0289E0C (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009E21C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C009E3F4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TextOutBitBlt(
        struct SURFACE *a1,
        struct RFONTOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8,
        struct _POINTL *a9,
        struct _BRUSHOBJ *a10,
        struct _POINTL *a11)
{
  int *v11; // rbx
  struct _RECTL *v12; // r8
  struct _BRUSHOBJ *v14; // r9
  unsigned int v15; // r14d
  struct _POINTL *v16; // r11
  unsigned int v17; // r15d
  int v18; // r12d
  int v19; // ecx
  BOOL (__stdcall *v21)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  int v22; // eax
  unsigned int v23; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v24; // [rsp+64h] [rbp-55h] BYREF
  int *v25; // [rsp+68h] [rbp-51h] BYREF
  struct _RECTL *v26; // [rsp+70h] [rbp-49h]
  struct _BRUSHOBJ *v27; // [rsp+78h] [rbp-41h]
  struct _POINTL *v28; // [rsp+80h] [rbp-39h]
  int v29[10]; // [rsp+88h] [rbp-31h] BYREF

  v11 = v29;
  v12 = a7;
  v14 = a10;
  v15 = 0;
  v16 = a11;
  v17 = 0;
  v18 = 0;
  v19 = *(_DWORD *)(*((_QWORD *)a1 + 6) + 40LL) & 0x8080;
  v26 = a7;
  v27 = a10;
  v28 = a11;
  v23 = 0;
  v24 = 0;
  v25 = v29;
  if ( v19 == 32896 && *(_QWORD *)a2 )
  {
    v22 = UMPDReleaseRFONTSem(a2, 0LL, &v23, &v24, (void **)&v25);
    v12 = v26;
    v18 = v22;
    v14 = v27;
    v16 = v28;
    v15 = v23;
    v17 = v24;
    v11 = v25;
  }
  if ( (*((_DWORD *)a1 + 28) & 1) != 0 )
    v21 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)a1 + 6) + 2832LL);
  else
    v21 = EngBitBlt;
  ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, struct _RECTL *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _POINTL *, int))v21)(
    ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
    0LL,
    0LL,
    a5,
    0LL,
    v12,
    0LL,
    0LL,
    v14,
    v16,
    61680);
  if ( v18 )
  {
    UMPDAcquireRFONTSem(a2, 0LL, v15, v17, v11);
    if ( v11 )
    {
      if ( v11 != v29 )
        Win32FreePool(v11);
    }
  }
}
