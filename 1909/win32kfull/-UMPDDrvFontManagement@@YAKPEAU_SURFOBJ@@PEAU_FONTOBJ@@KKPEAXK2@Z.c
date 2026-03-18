/*
 * XREFs of ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C02A2ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00952BC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00996D0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C009972C (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0099828 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C009A1A8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009E21C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C009E3F4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00F0AC0 (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C02A5A9C (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  UMPDOBJ *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  int v15; // eax
  void *v16; // r14
  int v17; // eax
  char *KernelPtr; // rax
  size_t v20; // [rsp+20h] [rbp-D1h]
  int v21; // [rsp+40h] [rbp-B1h] BYREF
  struct _FONTOBJ *v22; // [rsp+48h] [rbp-A9h] BYREF
  int v23; // [rsp+50h] [rbp-A1h] BYREF
  int v24; // [rsp+54h] [rbp-9Dh] BYREF
  unsigned int v25; // [rsp+58h] [rbp-99h] BYREF
  struct _FONTOBJ *v26; // [rsp+60h] [rbp-91h]
  void *v27; // [rsp+68h] [rbp-89h] BYREF
  void *v28; // [rsp+70h] [rbp-81h] BYREF
  UMPDOBJ *v29; // [rsp+78h] [rbp-79h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-71h]
  unsigned __int64 v31; // [rsp+88h] [rbp-69h]
  _QWORD v32[10]; // [rsp+90h] [rbp-61h] BYREF

  v31 = (unsigned __int64)a7;
  v30 = (unsigned __int64)a5;
  v10 = -1;
  v23 = -1;
  LODWORD(v22) = a3;
  v26 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v29);
  v27 = 0LL;
  v28 = 0LL;
  v11 = 0;
  v24 = 0;
  v21 = 0;
  memset(v32, 0, sizeof(v32));
  v12 = v29;
  if ( !v29 )
    goto LABEL_29;
  if ( !*((_DWORD *)v29 + 106) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_11;
  if ( a4 + 7 < a4
    || Size + 7 < Size
    || (v13 = (Size + 7) & 0xFFFFFFF8, v14 = ((a4 + 7) & 0xFFFFFFF8) + 152, v14 < 0x98)
    || v14 + v13 < v14 )
  {
LABEL_29:
    v10 = -1;
    goto LABEL_30;
  }
  v25 = v14 + v13;
  v15 = UMPDOBJ::bThunkLargeBitmap(v29, a1, &v27, &v28, &v24, &v21, &v25);
  v11 = v21;
  if ( v15 )
  {
LABEL_11:
    v32[0] = 0x2F00000050LL;
    v32[2] = *(_QWORD *)v12;
    v16 = (void *)(v31 & -(__int64)(Size != 0));
    if ( (_DWORD)v22 == 8 )
    {
      v32[3] = 0LL;
      v32[4] = a1;
    }
    else
    {
      v32[3] = a1;
    }
    v32[5] = v26;
    v32[6] = __PAIR64__(a4, (unsigned int)v22);
    v32[7] = v30 & -(__int64)(a4 != 0);
    LODWORD(v32[8]) = Size;
    v32[9] = v31 & -(__int64)(Size != 0);
    if ( (!v16 || (v32[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&v32[3], v11)
      && (unsigned int)UMPDOBJ::pfo(v12, (__m128i **)&v32[5])
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v32[7], a4) )
    {
      v22 = v26;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v22, v12, 0LL, 0LL, 0LL);
      LODWORD(v20) = 4;
      v17 = UMPDOBJ::Thunk(v12, v32, 80LL, &v23, v20);
      v10 = v23;
      if ( v17 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v22, v12, 0, 0, 0LL);
      if ( v10 != -1 && v16 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v12, (char *)v32[9]);
        memmove(v16, KernelPtr, Size);
      }
      v22 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v22);
    }
  }
  if ( v24 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v27;
    a1->pvScan0 = v28;
  }
LABEL_30:
  XUMPDOBJ::~XUMPDOBJ(&v29);
  return v10;
}
