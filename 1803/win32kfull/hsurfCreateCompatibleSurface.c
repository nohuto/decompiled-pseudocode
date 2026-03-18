/*
 * XREFs of hsurfCreateCompatibleSurface @ 0x1C0008EB4
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0005354 (GreCreateBitmapFromDxSurface.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0009360 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0096D9C (GreCreateCompatibleBitmapInternal.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C00CE528 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00092F8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C000949C (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00AB618 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall hsurfCreateCompatibleSurface(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
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
  int v16; // r13d
  __int64 v17; // rbx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  unsigned int v21; // r15d
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // r14
  __int64 (__fastcall *v25)(_QWORD, unsigned __int64, _QWORD); // rax
  int v26; // eax
  __int64 (__fastcall *v28)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *); // r10
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rbx
  int v33; // eax
  struct _LUID v34; // rdi
  struct _LUID *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  SURFACE *v38; // rbx
  __int64 (__fastcall *v39)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *); // r10
  unsigned int v40; // edi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  int (*v44)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  unsigned int v46; // [rsp+60h] [rbp-69h]
  __int64 v47; // [rsp+68h] [rbp-61h] BYREF
  char v48; // [rsp+70h] [rbp-59h]
  int v49; // [rsp+74h] [rbp-55h]
  int v50; // [rsp+78h] [rbp-51h]
  unsigned int v51; // [rsp+7Ch] [rbp-4Dh]
  __int64 v52; // [rsp+80h] [rbp-49h] BYREF
  unsigned __int64 v53; // [rsp+88h] [rbp-41h]
  __int64 v54; // [rsp+90h] [rbp-39h] BYREF
  _QWORD v55[4]; // [rsp+98h] [rbp-31h] BYREF
  __int64 v56; // [rsp+B8h] [rbp-11h] BYREF
  unsigned int v57; // [rsp+C0h] [rbp-9h]
  unsigned int v58; // [rsp+C4h] [rbp-5h]

  v16 = a13;
  v17 = a1;
  v50 = a14;
  v52 = a1;
  v51 = a4;
  v54 = a15;
  memset(v55, 0, sizeof(v55));
  v19 = a5;
  v20 = a2;
  v21 = a6;
  v55[2] = a3;
  LODWORD(v55[3]) = 1;
  v22 = 1;
  LODWORD(v55[1]) = a5;
  v55[0] = __PAIR64__(a4, a2);
  if ( (*(_DWORD *)(v17 + 40) & 0x8000) != 0 )
    v22 = 262145;
  v23 = 0LL;
  LODWORD(v55[3]) = v22;
  if ( !a6 )
  {
    if ( !a8 )
      goto LABEL_11;
    v21 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v52);
    if ( !v21 )
      goto LABEL_11;
    v17 = v52;
    v20 = LODWORD(v55[0]);
    v19 = a5;
  }
  if ( a8 )
  {
    v21 = 0;
    if ( g_pDwmState )
      v21 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v21 )
    goto LABEL_11;
  v24 = 0LL;
  v53 = __PAIR64__(v19, v51);
  if ( !a8 )
  {
    if ( !a10 )
    {
      v25 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v17 + 2760);
      if ( !v25 )
      {
LABEL_11:
        v26 = 1;
        if ( !a8 )
          v26 = a7;
        LODWORD(v55[3]) |= v26 != 0 ? 0x800 : 0;
        v47 = 0LL;
        v48 = 0;
        v49 = 0;
        SURFMEM::bCreateDIB((SURFMEM *)&v47, (struct _DEVBITMAPINFO *)v55, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( v47 )
        {
          v48 |= 1u;
          *(_DWORD *)(v47 + 112) |= 0x800000u;
          *(_DWORD *)(v47 + 112) |= 0x4000000u;
          *(_QWORD *)(v47 + 48) = v52;
          if ( *(_QWORD *)(v47 + 248) )
            *(_DWORD *)(v47 + 112) |= 0x4000u;
          else
            *(_DWORD *)(v47 + 112) |= 0x200u;
          EtwPhysicalSurfCreateEvent(*(_QWORD *)(v47 + 32), 0LL, 0LL, v21);
          v23 = *(_QWORD *)(v47 + 32);
        }
        SURFMEM::~SURFMEM((SURFMEM *)&v47);
        return v23;
      }
      v24 = v25(*(_QWORD *)(v17 + 1792), v53, (unsigned int)v20);
      goto LABEL_10;
    }
    v39 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))(v17 + 3432);
    if ( !v39 )
      return v23;
    v40 = a11 != 0 ? 6 : 2;
    v41 = v39(*(_QWORD *)(v17 + 1792), v53, (unsigned int)v20, v40, 0LL, a13, v50, &v54);
    v24 = v41;
    if ( !v41 )
      return v23;
    LOBYTE(v42) = 5;
    v43 = HmgShareLockCheck(v41, v42);
    if ( !v43 )
      return v23;
    *(_DWORD *)(v43 + 116) |= 8u;
    *(_QWORD *)(v43 + 568) = v54;
    v36 = v43;
    *(_DWORD *)(v43 + 120) = v40;
LABEL_33:
    DEC_SHARE_REF_CNT(v36);
    goto LABEL_34;
  }
  v28 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *))(v17 + 3432);
  if ( !a13 )
    v16 = 87;
  if ( v28 )
  {
    v56 = 0LL;
    v29 = (a11 != 0 ? 5 : 1) | 8;
    if ( !a12 )
      v29 = a11 != 0 ? 5 : 1;
    v46 = v29;
    v30 = v28(*(_QWORD *)(v17 + 1792), v53, (unsigned int)v20, v29, 0LL, 0, v50, &v56);
    v24 = v30;
    if ( v30 )
    {
      LOBYTE(v20) = 5;
      v31 = HmgShareLockCheck(v30, v20);
      v32 = v31;
      if ( !v31 )
        return v23;
      v33 = *(_DWORD *)(v31 + 116);
      if ( a12 )
      {
        v33 |= 0x400u;
        *(_DWORD *)(v32 + 116) = v33;
      }
      *(_DWORD *)(v32 + 116) = v33 | 1;
      *(_QWORD *)(v32 + 568) = v56;
      if ( (*(_DWORD *)(v52 + 40) & 0x4000000) == 0 )
      {
        v34 = 0LL;
        v35 = PDEVOBJ::pRenderAdapterLuid((PDEVOBJ *)&v52);
        if ( v35 )
          v34 = *v35;
        *(struct _LUID *)(v32 + 576) = v34;
      }
      v36 = v32;
      *(_DWORD *)(v32 + 120) = v46;
      *(_DWORD *)(v32 + 124) = v16;
      goto LABEL_33;
    }
  }
  if ( a9 )
    return v23;
LABEL_10:
  if ( !v24 )
    goto LABEL_11;
LABEL_34:
  if ( (_DWORD)v24 == -1 )
    goto LABEL_11;
  LOBYTE(v20) = 5;
  v37 = HmgShareLockCheck(v24, v20);
  v38 = (SURFACE *)v37;
  if ( v37 )
  {
    *(_DWORD *)(v37 + 112) |= 0x4804000u;
    if ( v55[2] )
    {
      EPALOBJ::EPALOBJ((EPALOBJ *)&v56, (HPALETTE)v55[2]);
      if ( v56 )
        *((_QWORD *)v38 + 16) = v56;
    }
    if ( !a8 && (!a10 || !v54) )
    {
      v57 = v51;
      v58 = a5;
      v56 = 0LL;
      v44 = SURFACE::pfnBitBlt(v38);
      ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v44)(
        (char *)v38 + 24,
        0LL,
        0LL,
        0LL,
        0LL,
        &v56,
        0LL,
        0LL,
        0LL,
        0LL,
        0);
    }
    EtwPhysicalSurfCreateEvent(v24, 1LL, *((_QWORD *)v38 + 71), 1LL);
  }
  else
  {
    v24 = 0LL;
  }
  if ( v38 )
    DEC_SHARE_REF_CNT(v38);
  return v24;
}
