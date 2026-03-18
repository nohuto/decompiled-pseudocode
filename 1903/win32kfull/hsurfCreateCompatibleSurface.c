/*
 * XREFs of hsurfCreateCompatibleSurface @ 0x1C0034F34
 * Callers:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0033C00 (GreCreateCompatibleBitmapInternal.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0127EBC (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0134354 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C0299AEC (GreCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00EE508 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C010A7E0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0127FEC (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall hsurfCreateCompatibleSurface(
        __int64 a1,
        unsigned int a2,
        HPALETTE a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        __int64 a15)
{
  __int64 v15; // rsi
  int v16; // r15d
  unsigned int v17; // edi
  int v18; // r13d
  unsigned int v19; // r10d
  int v20; // eax
  unsigned int v21; // r9d
  __int64 (__fastcall *v22)(_QWORD, unsigned __int64, _QWORD); // rax
  __int64 v23; // rdx
  __int64 v24; // r14
  int v25; // eax
  __int64 (__fastcall *v27)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *); // r11
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbx
  int v34; // eax
  struct _LUID v35; // rdi
  struct _LUID *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  SURFACE *v39; // rbx
  __int64 (__fastcall *v40)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *); // r11
  unsigned int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  int (*v45)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v46; // [rsp+60h] [rbp-69h] BYREF
  char v47; // [rsp+68h] [rbp-61h]
  int v48; // [rsp+6Ch] [rbp-5Dh]
  __int64 v49; // [rsp+70h] [rbp-59h] BYREF
  unsigned __int64 v50; // [rsp+78h] [rbp-51h]
  unsigned int v51; // [rsp+80h] [rbp-49h]
  unsigned int v52; // [rsp+84h] [rbp-45h]
  __int64 v53; // [rsp+88h] [rbp-41h] BYREF
  _DWORD v54[4]; // [rsp+90h] [rbp-39h] BYREF
  HPALETTE v55; // [rsp+A0h] [rbp-29h]
  __int64 v56; // [rsp+A8h] [rbp-21h]
  __int64 v57; // [rsp+B0h] [rbp-19h] BYREF
  unsigned int v58; // [rsp+B8h] [rbp-11h]
  unsigned int v59; // [rsp+BCh] [rbp-Dh]

  v15 = 0LL;
  v16 = a6;
  v17 = a4;
  v18 = a13;
  v19 = a2;
  v53 = a15;
  v20 = 1;
  v54[1] = a4;
  v56 = 1LL;
  v54[0] = a2;
  v51 = a4;
  v21 = a5;
  v49 = a1;
  v54[3] = 0;
  v54[2] = a5;
  v55 = a3;
  if ( (*(_DWORD *)(a1 + 40) & 0x8000) != 0 )
    v20 = 262145;
  LODWORD(v56) = v20;
  if ( !a6 )
  {
    if ( !a8 )
      goto LABEL_11;
    v16 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v49);
    if ( !v16 )
      goto LABEL_11;
    a1 = v49;
    v19 = v54[0];
    v21 = a5;
  }
  if ( a8 )
  {
    v16 = 0;
    if ( g_pDwmState )
      v16 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v16 )
    goto LABEL_11;
  v50 = __PAIR64__(v21, v17);
  if ( a8 )
  {
    v27 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *))(a1 + 3440);
    if ( !a13 )
      v18 = 87;
    if ( !v27 )
      goto LABEL_52;
    v57 = 0LL;
    v28 = *(_QWORD *)(a1 + 1800);
    v29 = (a11 != 0 ? 5 : 1) | 8;
    if ( !a12 )
      v29 = a11 != 0 ? 5 : 1;
    v52 = v29;
    v30 = v27(v28, v50, v19, v29, 0LL, 0, a14, &v57);
    v24 = v30;
    if ( !v30 )
    {
LABEL_52:
      if ( a9 )
        return v15;
      goto LABEL_11;
    }
    LOBYTE(v31) = 5;
    v32 = HmgShareLockCheck(v30, v31);
    v33 = v32;
    if ( !v32 )
      return v15;
    v34 = *(_DWORD *)(v32 + 116);
    if ( a12 )
      v34 |= 0x400u;
    *(_DWORD *)(v33 + 116) = v34 | 1;
    *(_QWORD *)(v33 + 568) = v57;
    if ( (*(_DWORD *)(v49 + 40) & 0x4000000) == 0 )
    {
      v35 = 0LL;
      v36 = PDEVOBJ::pRenderAdapterLuid((PDEVOBJ *)&v49);
      if ( v36 )
        v35 = *v36;
      *(struct _LUID *)(v33 + 576) = v35;
      v17 = v51;
    }
    v37 = v33;
    *(_DWORD *)(v33 + 120) = v52;
    *(_DWORD *)(v33 + 124) = v18;
    goto LABEL_36;
  }
  if ( a10 )
  {
    v40 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))(a1 + 3440);
    if ( !v40 )
      return v15;
    v41 = a11 != 0 ? 6 : 2;
    v42 = v40(*(_QWORD *)(a1 + 1800), v50, v19, v41, 0LL, a13, a14, &v53);
    v24 = v42;
    if ( !v42 )
      return v15;
    LOBYTE(v43) = 5;
    v44 = HmgShareLockCheck(v42, v43);
    if ( !v44 )
      return v15;
    *(_DWORD *)(v44 + 116) |= 8u;
    *(_QWORD *)(v44 + 568) = v53;
    v37 = v44;
    *(_DWORD *)(v44 + 120) = v41;
LABEL_36:
    DEC_SHARE_REF_CNT(v37);
    goto LABEL_10;
  }
  v22 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(a1 + 2768);
  if ( !v22 )
    goto LABEL_11;
  v24 = v22(*(_QWORD *)(a1 + 1800), v50, v19);
LABEL_10:
  if ( v24 && (_DWORD)v24 != -1 )
  {
    LOBYTE(v23) = 5;
    v38 = HmgShareLockCheck(v24, v23);
    v39 = (SURFACE *)v38;
    if ( v38 )
    {
      *(_DWORD *)(v38 + 112) |= 0x4804000u;
      if ( v55 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v57, v55);
        if ( v57 )
          *((_QWORD *)v39 + 16) = v57;
      }
      if ( !a8 && (!a10 || !v53) )
      {
        v59 = a5;
        v57 = 0LL;
        v58 = v17;
        v45 = SURFACE::pfnBitBlt(v39);
        ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v45)(
          (char *)v39 + 24,
          0LL,
          0LL,
          0LL,
          0LL,
          &v57,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
      }
      EtwPhysicalSurfCreateEvent(v24, 1LL, *((_QWORD *)v39 + 71));
    }
    else
    {
      v24 = 0LL;
    }
    if ( v39 )
      DEC_SHARE_REF_CNT(v39);
    return v24;
  }
LABEL_11:
  v25 = 1;
  if ( !a8 )
    v25 = a7;
  LODWORD(v56) = (v25 != 0 ? 0x800 : 0) | v56;
  v46 = 0LL;
  v47 = 0;
  v48 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v46, (struct _DEVBITMAPINFO *)v54, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v46 )
  {
    v47 |= 1u;
    *(_DWORD *)(v46 + 112) |= 0x800000u;
    *(_DWORD *)(v46 + 112) |= 0x4000000u;
    *(_QWORD *)(v46 + 48) = v49;
    if ( *(_QWORD *)(v46 + 248) )
      *(_DWORD *)(v46 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v46 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v46 + 32), 0LL, 0LL);
    v15 = *(_QWORD *)(v46 + 32);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v46);
  return v15;
}
