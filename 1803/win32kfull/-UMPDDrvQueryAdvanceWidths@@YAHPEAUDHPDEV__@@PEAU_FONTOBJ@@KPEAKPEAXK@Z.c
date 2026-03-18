/*
 * XREFs of ?UMPDDrvQueryAdvanceWidths@@YAHPEAUDHPDEV__@@PEAU_FONTOBJ@@KPEAKPEAXK@Z @ 0x1C027B210
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0018844 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C011FE50 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C01202A0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall UMPDDrvQueryAdvanceWidths(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int *a4,
        void *a5,
        unsigned int a6)
{
  struct UMPDOBJ *v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  char *KernelPtr; // rax
  size_t Size; // [rsp+20h] [rbp-89h]
  unsigned int v16; // [rsp+30h] [rbp-79h] BYREF
  UMPDOBJ *v17; // [rsp+38h] [rbp-71h] BYREF
  struct _FONTOBJ *v18; // [rsp+40h] [rbp-69h] BYREF
  int v19; // [rsp+48h] [rbp-61h]
  _QWORD v20[10]; // [rsp+50h] [rbp-59h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v17);
  memset(v20, 0, 0x48uLL);
  v10 = v17;
  if ( !v17 )
    goto LABEL_11;
  if ( !a4 )
    goto LABEL_11;
  if ( !a5 )
    goto LABEL_11;
  v20[0] = 0x3500000048LL;
  v20[2] = *(_QWORD *)v17;
  v20[3] = a1;
  v20[4] = a2;
  LODWORD(v20[5]) = a3;
  v20[6] = a4;
  v20[7] = a5;
  LODWORD(v20[8]) = a6;
  if ( a6 > 0x3FFFFFFF )
    goto LABEL_11;
  v20[7] = UMPDOBJ::_AllocUserMem(v17, 2 * a6, 1);
  if ( v20[7]
    && (unsigned int)UMPDOBJ::pfo(v10, (__m128i **)&v20[4])
    && (unsigned int)UMPDOBJ::ThunkMemBlock(v10, (const void **)&v20[6], 4 * a6) )
  {
    v19 = 0;
    v18 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v18, v10, 0LL, 0LL, 0LL);
    LODWORD(Size) = 4;
    v11 = UMPDOBJ::Thunk(v10, v20, 0x48u, &v16, Size);
    v12 = v16;
    if ( v11 == -1 )
      v12 = 0;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v18, v10, 0, 0, 0LL);
    v18 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v18);
    KernelPtr = UMPDOBJ::GetKernelPtr(v10, (char *)v20[7]);
    memmove(a5, KernelPtr, 2LL * a6);
  }
  else
  {
LABEL_11:
    v12 = 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v17);
  return v12;
}
