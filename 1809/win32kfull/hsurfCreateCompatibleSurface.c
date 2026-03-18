/*
 * XREFs of hsurfCreateCompatibleSurface @ 0x1C009A870
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0003F84 (GreCreateBitmapFromDxSurface.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 *     ?hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C011E898 (-hsurfSpCreateSurface@@YAPEAUHSURF__@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0129194 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00127A8 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0055368 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C009FF7C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C011E9E8 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

HSURF __fastcall hsurfCreateCompatibleSurface(
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
  __int64 v18; // rbx
  unsigned int v19; // r12d
  unsigned int v20; // edx
  int v21; // ecx
  unsigned int v22; // r14d
  HSURF v23; // rdi
  __int64 (__fastcall *v24)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *); // r10
  unsigned int v25; // r12d
  HSURF v26; // rax
  HSURF v27; // rsi
  SURFACE *v28; // rax
  struct _LUID v29; // rbx
  struct _LUID *v30; // rax
  int v31; // eax
  __int64 (__fastcall *v32)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *); // r10
  HSURF v33; // rax
  __int64 (__fastcall *v34)(_QWORD, unsigned __int64, _QWORD); // rax
  int (*v35)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v36; // r10
  __int64 v39; // [rsp+68h] [rbp-81h] BYREF
  __int64 v40; // [rsp+70h] [rbp-79h] BYREF
  char v41; // [rsp+78h] [rbp-71h]
  int v42; // [rsp+7Ch] [rbp-6Dh]
  unsigned __int64 v43; // [rsp+80h] [rbp-69h]
  _BYTE v44[32]; // [rsp+88h] [rbp-61h] BYREF
  SURFACE *v45; // [rsp+A8h] [rbp-41h]
  __int64 v46; // [rsp+B0h] [rbp-39h] BYREF
  _QWORD v47[4]; // [rsp+B8h] [rbp-31h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-11h] BYREF
  unsigned int v49; // [rsp+E0h] [rbp-9h]
  unsigned int v50; // [rsp+E4h] [rbp-5h]

  v16 = a13;
  v18 = a1;
  v39 = a1;
  v19 = a4;
  v46 = a15;
  memset(v47, 0, sizeof(v47));
  v20 = a5;
  v21 = 67108865;
  v22 = a6;
  LODWORD(v47[3]) = 67108865;
  v47[2] = a3;
  LODWORD(v47[1]) = a5;
  v47[0] = __PAIR64__(v19, a2);
  if ( (*(_DWORD *)(v18 + 40) & 0x8000) != 0 )
    v21 = 67371009;
  v23 = 0LL;
  LODWORD(v47[3]) = v21;
  if ( !a6 )
  {
    if ( !a8 )
      goto LABEL_28;
    v22 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v39);
    if ( !v22 )
      goto LABEL_28;
    v18 = v39;
    a2 = v47[0];
    v20 = a5;
  }
  if ( a8 )
  {
    v22 = 0;
    if ( g_pDwmState )
      v22 = gfDwmDeviceBitmapsEnabled;
  }
  if ( v22 )
  {
    v43 = __PAIR64__(v20, v19);
    if ( a8 )
    {
      v24 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *))(v18 + 3440);
      if ( !a13 )
        v16 = 87;
      if ( !v24 )
        goto LABEL_27;
      v48 = 0LL;
      v25 = (a11 != 0 ? 5 : 1) | 8;
      if ( !a12 )
        v25 = a11 != 0 ? 5 : 1;
      v26 = (HSURF)v24(*(_QWORD *)(v18 + 1800), v43, a2, v25, 0LL, 0, a14, &v48);
      v27 = v26;
      if ( !v26 )
      {
LABEL_27:
        if ( a9 )
          return v23;
        goto LABEL_28;
      }
      SURFREF::SURFREF((SURFREF *)v44, v26);
      v28 = v45;
      if ( v45 )
      {
        if ( a12 )
        {
          *((_DWORD *)v45 + 29) |= 0x400u;
          v28 = v45;
        }
        *((_DWORD *)v28 + 29) |= 1u;
        *((_QWORD *)v45 + 71) = v48;
        if ( (*(_DWORD *)(v39 + 40) & 0x4000000) == 0 )
        {
          v29 = 0LL;
          v30 = PDEVOBJ::pRenderAdapterLuid((PDEVOBJ *)&v39);
          if ( v30 )
            v29 = *v30;
          *((struct _LUID *)v45 + 72) = v29;
        }
        *((_DWORD *)v45 + 31) = v16;
        goto LABEL_26;
      }
      goto LABEL_51;
    }
    if ( a10 )
    {
      v32 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))(v18 + 3440);
      if ( !v32 )
        return v23;
      v25 = a11 != 0 ? 6 : 2;
      v33 = (HSURF)v32(*(_QWORD *)(v18 + 1800), v43, a2, v25, 0LL, a13, a14, &v46);
      v27 = v33;
      if ( !v33 )
        return v23;
      SURFREF::SURFREF((SURFREF *)v44, v33);
      if ( v45 )
      {
        *((_DWORD *)v45 + 29) |= 8u;
        *((_QWORD *)v45 + 71) = v46;
LABEL_26:
        *((_DWORD *)v45 + 30) = v25;
        SURFREF::~SURFREF((SURFREF *)v44);
        v19 = a4;
LABEL_40:
        if ( v27 && (_DWORD)v27 != -1 )
        {
          SURFREF::SURFREF((SURFREF *)v44, v27);
          if ( v45 )
          {
            *((_DWORD *)v45 + 28) |= 0x800000u;
            *((_DWORD *)v45 + 28) |= 0x4000000u;
            *((_DWORD *)v45 + 28) |= 0x4000u;
            if ( v47[2] )
            {
              EPALOBJ::EPALOBJ((EPALOBJ *)&v48, (HPALETTE)v47[2]);
              if ( v48 )
                *((_QWORD *)v45 + 16) = v48;
            }
            if ( !a8 && (!a10 || !v46) )
            {
              v48 = 0LL;
              v49 = v19;
              v50 = a5;
              v35 = SURFACE::pfnBitBlt(v45);
              ((void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v35)(
                v36,
                0LL,
                0LL,
                0LL,
                0LL,
                &v48,
                0LL,
                0LL,
                0LL,
                0LL,
                0);
            }
            EtwPhysicalSurfCreateEvent(v27, 1LL, *((_QWORD *)v45 + 71), 1LL);
            v23 = v27;
          }
          goto LABEL_51;
        }
        goto LABEL_28;
      }
LABEL_51:
      SURFREF::~SURFREF((SURFREF *)v44);
      return v23;
    }
    v34 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(v18 + 2768);
    if ( v34 )
    {
      v27 = (HSURF)v34(*(_QWORD *)(v18 + 1800), v43, a2);
      goto LABEL_40;
    }
  }
LABEL_28:
  v31 = 1;
  if ( !a8 )
    v31 = a7;
  v40 = 0LL;
  LODWORD(v47[3]) |= v31 != 0 ? 0x800 : 0;
  v41 = 0;
  v42 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v40, (struct _DEVBITMAPINFO *)v47, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v40 )
  {
    v41 |= 1u;
    *(_DWORD *)(v40 + 112) |= 0x800000u;
    *(_QWORD *)(v40 + 48) = v39;
    if ( *(_QWORD *)(v40 + 248) )
      *(_DWORD *)(v40 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v40 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v40 + 32), 0LL, 0LL, v22);
    v23 = *(HSURF *)(v40 + 32);
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v40);
  return v23;
}
