/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C02A4610
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C004FEC0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C004FF1C (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C00549BC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0054B94 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00777AC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall UMPDDrvQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  __int64 v10; // r9
  struct UMPDOBJ *v11; // rbx
  int v12; // eax
  unsigned int v13; // esi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-89h]
  struct _FONTOBJ *v17; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-71h] BYREF
  UMPDOBJ *v19[2]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v20[10]; // [rsp+50h] [rbp-59h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v19);
  memset(v20, 0, 0x48uLL);
  v11 = v19[0];
  if ( !v19[0] )
    goto LABEL_11;
  if ( !a4 )
    goto LABEL_11;
  if ( !a5 )
    goto LABEL_11;
  v20[0] = 0x3500000048LL;
  v20[2] = *(_QWORD *)v19[0];
  v20[3] = a1;
  v20[4] = a2;
  LODWORD(v20[5]) = a3;
  v20[6] = a4;
  v20[7] = a5;
  LODWORD(v20[8]) = a6;
  if ( a6 > 0x3FFFFFFF )
    goto LABEL_11;
  v20[7] = UMPDOBJ::_AllocUserMem(v19[0], 2 * a6, 1LL, v10);
  if ( v20[7]
    && (unsigned int)UMPDOBJ::pfo(v11, (__m128i **)&v20[4])
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v11, (const void **)&v20[6], 4 * a6) )
  {
    v17 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v17, v11, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v12 = UMPDOBJ::Thunk(v11, v20, 72LL, &v18, Size);
    v13 = v18;
    if ( v12 == -1 )
      v13 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v17, v11, 0, 0, 0LL);
    v17 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    KernelPtr = UMPDOBJ::GetKernelPtr(v11, (char *)v20[7]);
    memmove(a5, KernelPtr, 2LL * a6);
  }
  else
  {
LABEL_11:
    v13 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(v19);
  return v13;
}
