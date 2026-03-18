/*
 * XREFs of ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C028D3B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00875F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C00877C8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C008B9C4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C008BC48 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C008DB54 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C008DD04 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C008E148 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C008E1B4 (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C008E570 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C00910EC (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00E2AC4 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C0290064 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
 */

__int64 __fastcall UMPDDrvFontManagement(
        struct _SURFOBJ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        unsigned int Size,
        void *a7)
{
  unsigned int v10; // r15d
  int v11; // r12d
  struct UMPDOBJ *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  void *v19; // r14
  struct _FONTOBJ *v20; // r15
  int v21; // eax
  char *KernelPtr; // rax
  size_t v24; // [rsp+20h] [rbp-D1h]
  int v25; // [rsp+40h] [rbp-B1h] BYREF
  int v26; // [rsp+44h] [rbp-ADh] BYREF
  int v27; // [rsp+48h] [rbp-A9h] BYREF
  unsigned int v28; // [rsp+4Ch] [rbp-A5h] BYREF
  unsigned int v29; // [rsp+50h] [rbp-A1h]
  struct _FONTOBJ *v30; // [rsp+58h] [rbp-99h] BYREF
  int v31; // [rsp+60h] [rbp-91h]
  void *v32; // [rsp+68h] [rbp-89h] BYREF
  void *v33; // [rsp+70h] [rbp-81h] BYREF
  struct UMPDOBJ *v34; // [rsp+78h] [rbp-79h] BYREF
  unsigned __int64 v35; // [rsp+80h] [rbp-71h]
  unsigned __int64 v36; // [rsp+88h] [rbp-69h]
  _QWORD v37[10]; // [rsp+90h] [rbp-61h] BYREF

  v36 = (unsigned __int64)a7;
  v35 = (unsigned __int64)a5;
  v10 = -1;
  v26 = -1;
  v29 = a3;
  v30 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v34);
  v32 = 0LL;
  v33 = 0LL;
  v11 = 0;
  v27 = 0;
  v25 = 0;
  memset(v37, 0, sizeof(v37));
  v12 = v34;
  if ( !v34 )
    goto LABEL_32;
  if ( !*((_DWORD *)v34 + 106) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_13;
  if ( a4 + 7 < a4 )
    goto LABEL_32;
  v13 = (a4 + 7) & 0xFFFFFFF8;
  if ( Size + 7 < Size )
    goto LABEL_32;
  v14 = (Size + 7) & 0xFFFFFFF8;
  if ( v13 + 152 < 0x98 )
    goto LABEL_32;
  v15 = v13 + 152;
  v16 = v13 + 152 + v14;
  v17 = -1;
  if ( v15 + v14 >= v15 )
    v17 = v16;
  v28 = v17;
  if ( v16 < v15 )
  {
LABEL_32:
    v10 = -1;
    goto LABEL_33;
  }
  v18 = UMPDOBJ::bThunkLargeBitmap(v34, a1, &v32, &v33, &v27, &v25, &v28);
  v11 = v25;
  if ( v18 )
  {
LABEL_13:
    v37[0] = 0x2F00000050LL;
    v37[2] = *(_QWORD *)v12;
    v19 = (void *)(v36 & -(__int64)(Size != 0));
    if ( v29 == 8 )
    {
      v37[3] = 0LL;
      v37[4] = a1;
    }
    else
    {
      v37[3] = a1;
    }
    v20 = v30;
    v37[5] = v30;
    v37[6] = __PAIR64__(a4, v29);
    v37[7] = v35 & -(__int64)(a4 != 0);
    LODWORD(v37[8]) = Size;
    v37[9] = v36 & -(__int64)(Size != 0);
    if ( (!v19 || (v37[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (struct UMPDOBJ *)((char *)v12 + 64), (EVENT_DATA_DESCRIPTOR **)&v37[3], v11)
      && (unsigned int)UMPDOBJ::pfo(v12, (__m128i **)&v37[5])
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v37[7], a4) )
    {
      v31 = 0;
      v30 = v20;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v30, v12, 0LL, 0LL, 0LL);
      LODWORD(v24) = 4;
      v21 = UMPDOBJ::Thunk(v12, v37, 0x50u, &v26, v24);
      v10 = v26;
      if ( v21 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v30, v12, 0, 0, 0LL);
      if ( v10 != -1 && v19 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v12, (char *)v37[9]);
        memmove(v19, KernelPtr, Size);
      }
      v30 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v30);
    }
    else
    {
      v10 = -1;
    }
  }
  if ( v27 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v32;
    a1->pvScan0 = v33;
  }
LABEL_33:
  XUMPDOBJ::~XUMPDOBJ(&v34);
  return v10;
}
