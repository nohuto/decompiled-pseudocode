/*
 * XREFs of ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A33B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C004FF1C (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0050018 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00549BC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0054B94 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C007A1D0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5F4C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvFontManagement(
        struct _SURFOBJ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int a4,
        void *a5,
        unsigned int Size,
        void *a7)
{
  unsigned int v10; // r12d
  int v11; // r15d
  __int64 v12; // r9
  UMPDOBJ *v13; // rbx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // eax
  void *v17; // r14
  int v18; // eax
  char *KernelPtr; // rax
  size_t v21; // [rsp+20h] [rbp-D1h]
  int v22; // [rsp+40h] [rbp-B1h] BYREF
  struct _FONTOBJ *v23; // [rsp+48h] [rbp-A9h] BYREF
  int v24; // [rsp+50h] [rbp-A1h] BYREF
  int v25; // [rsp+54h] [rbp-9Dh] BYREF
  unsigned int v26; // [rsp+58h] [rbp-99h] BYREF
  struct _FONTOBJ *v27; // [rsp+60h] [rbp-91h]
  void *v28; // [rsp+68h] [rbp-89h] BYREF
  void *v29; // [rsp+70h] [rbp-81h] BYREF
  UMPDOBJ *v30; // [rsp+78h] [rbp-79h] BYREF
  unsigned __int64 v31; // [rsp+80h] [rbp-71h]
  unsigned __int64 v32; // [rsp+88h] [rbp-69h]
  _QWORD v33[10]; // [rsp+90h] [rbp-61h] BYREF

  v32 = (unsigned __int64)a7;
  v31 = (unsigned __int64)a5;
  v10 = -1;
  v24 = -1;
  LODWORD(v23) = a3;
  v27 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v30);
  v28 = 0LL;
  v29 = 0LL;
  v11 = 0;
  v25 = 0;
  v22 = 0;
  memset(v33, 0, sizeof(v33));
  v13 = v30;
  if ( !v30 )
    goto LABEL_29;
  if ( !*((_DWORD *)v30 + 106) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_11;
  if ( a4 + 7 < a4
    || Size + 7 < Size
    || (v14 = (Size + 7) & 0xFFFFFFF8, v15 = ((a4 + 7) & 0xFFFFFFF8) + 152, v15 < 0x98)
    || v15 + v14 < v15 )
  {
LABEL_29:
    v10 = -1;
    goto LABEL_30;
  }
  v26 = v15 + v14;
  v16 = UMPDOBJ::bThunkLargeBitmap(v30, a1, &v28, &v29, &v25, &v22, &v26);
  v11 = v22;
  if ( v16 )
  {
LABEL_11:
    v33[0] = 0x2F00000050LL;
    v33[2] = *(_QWORD *)v13;
    v17 = (void *)(v32 & -(__int64)(Size != 0));
    if ( (_DWORD)v23 == 8 )
    {
      v33[3] = 0LL;
      v33[4] = a1;
    }
    else
    {
      v33[3] = a1;
    }
    v33[5] = v27;
    v33[6] = __PAIR64__(a4, (unsigned int)v23);
    v33[7] = v31 & -(__int64)(a4 != 0);
    LODWORD(v33[8]) = Size;
    v33[9] = v32 & -(__int64)(Size != 0);
    if ( (!v17 || (v33[9] = UMPDOBJ::_AllocUserMem(v13, Size, 1LL, v12)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v13, (UMPDOBJ *)((char *)v13 + 64), (struct _SURFOBJ **)&v33[3], v11)
      && (unsigned int)UMPDOBJ::pfo(v13, (__m128i **)&v33[5])
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v33[7], a4) )
    {
      v23 = v27;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v23, v13, 0LL, 0LL, 0LL);
      LODWORD(v21) = 4;
      v18 = UMPDOBJ::Thunk(v13, v33, 80LL, &v24, v21);
      v10 = v24;
      if ( v18 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v23, v13, 0, 0, 0LL);
      if ( v10 != -1 && v17 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v13, (char *)v33[9]);
        memmove(v17, KernelPtr, Size);
      }
      v23 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v23);
    }
  }
  if ( v25 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v13, a1, 0LL, 0LL);
    a1->pvBits = v28;
    a1->pvScan0 = v29;
  }
LABEL_30:
  XUMPDOBJ::~XUMPDOBJ(&v30);
  return v10;
}
