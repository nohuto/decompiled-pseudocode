/*
 * XREFs of ?UMPDDrvFontManagement@@YAKPEAU_SURFOBJ@@PEAU_FONTOBJ@@KKPEAXK2@Z @ 0x1C0279F30
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0018844 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z @ 0x1C001890C (-bThunkLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAPEAX1PEAH2PEAK@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ?pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z @ 0x1C0018E4C (-pso@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAU_SURFOBJ@@H@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C011FE50 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C01202A0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z @ 0x1C027CB58 (-bDeleteLargeBitmaps@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@00@Z.c)
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
  UMPDOBJ *v12; // rbx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // eax
  void *v22; // r14
  struct _FONTOBJ *v23; // r15
  int v24; // eax
  char *KernelPtr; // rax
  size_t v27; // [rsp+20h] [rbp-D1h]
  int v28; // [rsp+40h] [rbp-B1h] BYREF
  unsigned int v29; // [rsp+44h] [rbp-ADh]
  int v30; // [rsp+48h] [rbp-A9h] BYREF
  int v31; // [rsp+4Ch] [rbp-A5h] BYREF
  unsigned int v32; // [rsp+50h] [rbp-A1h] BYREF
  struct _FONTOBJ *v33; // [rsp+58h] [rbp-99h] BYREF
  int v34; // [rsp+60h] [rbp-91h]
  void *v35; // [rsp+68h] [rbp-89h] BYREF
  void *v36; // [rsp+70h] [rbp-81h] BYREF
  UMPDOBJ *v37; // [rsp+78h] [rbp-79h] BYREF
  unsigned __int64 v38; // [rsp+80h] [rbp-71h]
  unsigned __int64 v39; // [rsp+88h] [rbp-69h]
  _QWORD v40[10]; // [rsp+90h] [rbp-61h] BYREF

  v39 = (unsigned __int64)a7;
  v38 = (unsigned __int64)a5;
  v10 = -1;
  v30 = -1;
  v29 = a3;
  v33 = a2;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v37);
  v35 = 0LL;
  v36 = 0LL;
  v11 = 0;
  v31 = 0;
  v28 = 0;
  memset(v40, 0, sizeof(v40));
  v12 = v37;
  if ( !v37 )
    goto LABEL_38;
  if ( !*((_DWORD *)v37 + 106) || a3 == 8 || !a1 || !a1->pvBits )
    goto LABEL_19;
  v13 = a4 + 7;
  v14 = a4 + 7 < a4 ? v29 : v13 & 0xFFFFFFF8;
  if ( v13 < a4 )
    goto LABEL_38;
  v15 = Size + 7;
  v16 = Size + 7 < Size ? v29 : v15 & 0xFFFFFFF8;
  if ( v15 < Size )
    goto LABEL_38;
  v17 = v14 + 152;
  if ( v17 < 0x98 )
    goto LABEL_38;
  v18 = v17;
  v19 = v17 + v16;
  v20 = -1;
  if ( v19 >= v18 )
    v20 = v19;
  v32 = v20;
  if ( v19 < v18 )
  {
LABEL_38:
    v10 = -1;
    goto LABEL_39;
  }
  v21 = UMPDOBJ::bThunkLargeBitmap(v37, a1, &v35, &v36, &v31, &v28, &v32);
  v11 = v28;
  if ( v21 )
  {
LABEL_19:
    v40[0] = 0x2F00000050LL;
    v40[2] = *(_QWORD *)v12;
    v22 = (void *)(v39 & -(__int64)(Size != 0));
    if ( v29 == 8 )
    {
      v40[3] = 0LL;
      v40[4] = a1;
    }
    else
    {
      v40[3] = a1;
    }
    v23 = v33;
    v40[5] = v33;
    v40[6] = __PAIR64__(a4, v29);
    v40[7] = v38 & -(__int64)(a4 != 0);
    LODWORD(v40[8]) = Size;
    v40[9] = v39 & -(__int64)(Size != 0);
    if ( (!v22 || (v40[9] = UMPDOBJ::_AllocUserMem(v12, Size, 1)) != 0LL)
      && (unsigned int)UMPDOBJ::pso(v12, (UMPDOBJ *)((char *)v12 + 64), (struct _SURFOBJ **)&v40[3], v11)
      && (unsigned int)UMPDOBJ::pfo(v12, (__m128i **)&v40[5])
      && (unsigned int)UMPDOBJ::ThunkMemBlock(v12, (const void **)&v40[7], a4) )
    {
      v34 = 0;
      v33 = v23;
      UMPDReleaseRFONTSem((struct RFONTOBJ *)&v33, v12, 0LL, 0LL, 0LL);
      LODWORD(v27) = 4;
      v24 = UMPDOBJ::Thunk(v12, v40, 0x50u, &v30, v27);
      v10 = v30;
      if ( v24 == -1 )
        v10 = -1;
      UMPDAcquireRFONTSem((struct RFONTOBJ *)&v33, v12, 0, 0, 0LL);
      if ( v10 != -1 && v22 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v12, (char *)v40[9]);
        memmove(v22, KernelPtr, Size);
      }
      v33 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
    }
    else
    {
      v10 = -1;
    }
  }
  if ( v31 )
  {
    if ( v11 )
      UMPDOBJ::bDeleteLargeBitmaps(v12, a1, 0LL, 0LL);
    a1->pvBits = v35;
    a1->pvScan0 = v36;
  }
LABEL_39:
  XUMPDOBJ::~XUMPDOBJ(&v37);
  return v10;
}
