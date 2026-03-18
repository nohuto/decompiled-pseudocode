/*
 * XREFs of ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C02A4890
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C009958C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C00996D0 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C009972C (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0099C30 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0099F38 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C009A1A8 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C009E21C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C009E3F4 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        int a3,
        unsigned int a4,
        struct _GLYPHDATA *a5,
        unsigned __int64 a6,
        size_t Size)
{
  struct UMPDOBJ *v9; // rbx
  void *v10; // r15
  int v11; // eax
  unsigned int v12; // r14d
  char *KernelPtr; // rax
  size_t v15; // [rsp+20h] [rbp-91h]
  unsigned int v16; // [rsp+30h] [rbp-81h] BYREF
  struct _FONTOBJ *v17; // [rsp+38h] [rbp-79h] BYREF
  UMPDOBJ *v18[2]; // [rsp+40h] [rbp-71h] BYREF
  _QWORD v19[10]; // [rsp+50h] [rbp-61h] BYREF

  v16 = a4;
  LODWORD(v17) = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)v18);
  memset(v19, 0, 0x48uLL);
  v9 = v18[0];
  if ( !v18[0] )
    goto LABEL_12;
  v19[0] = 0x1C00000048LL;
  v19[2] = *(_QWORD *)v18[0];
  v19[3] = a1;
  v19[5] = __PAIR64__(v16, (unsigned int)v17);
  v10 = (void *)(a6 & -(__int64)((_DWORD)Size != 0));
  v19[7] = v10;
  v19[4] = a2;
  v19[6] = a5;
  LODWORD(v19[8]) = Size;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v18[0], (const void **)&v19[6], 0x40u) )
    goto LABEL_12;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)&v19[7], Size)
    && (unsigned int)UMPDOBJ::pfo(v9, (__m128i **)&v19[4]) )
  {
    v17 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v17, v9, 0LL, 0LL, 0LL);
    LODWORD(v15) = 4;
    v11 = UMPDOBJ::Thunk(v9, v19, 72LL, &v16, v15);
    v12 = v16;
    if ( v11 == -1 )
      v12 = -1;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v17, v9, 0, 0, 0LL);
    v17 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v17);
    if ( v12 != -1 )
    {
      if ( v10 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v9, (char *)v19[7]);
        memmove(v10, KernelPtr, (unsigned int)Size);
      }
      if ( a5 )
        *a5 = *(struct _GLYPHDATA *)UMPDOBJ::GetKernelPtr(v9, (char *)v19[6]);
    }
  }
  else
  {
LABEL_12:
    v12 = -1;
  }
  XUMPDOBJ::~XUMPDOBJ(v18);
  return v12;
}
