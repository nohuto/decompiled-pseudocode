/*
 * XREFs of ?UMPDDrvQueryFontData@@YAJPEAUDHPDEV__@@PEAU_FONTOBJ@@KKPEAU_GLYPHDATA@@PEAXK@Z @ 0x1C027B970
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0018734 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00187A4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z @ 0x1C0018844 (-GetKernelPtr@UMPDOBJ@@QEAAPEAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0018974 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C0018DB4 (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z @ 0x1C011FE50 (-pfo@UMPDOBJ@@QEAAHPEAPEAU_FONTOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C01202A0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z @ 0x1C0120454 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEAH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall UMPDDrvQueryFontData(
        struct DHPDEV__ *a1,
        struct _FONTOBJ *a2,
        unsigned int a3,
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
  unsigned int v17; // [rsp+34h] [rbp-7Dh]
  UMPDOBJ *v18; // [rsp+38h] [rbp-79h] BYREF
  struct _FONTOBJ *v19; // [rsp+40h] [rbp-71h] BYREF
  int v20; // [rsp+48h] [rbp-69h]
  _QWORD v21[10]; // [rsp+50h] [rbp-61h] BYREF

  v16 = a4;
  v17 = a3;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  memset(v21, 0, 0x48uLL);
  v9 = v18;
  if ( !v18 )
    goto LABEL_12;
  v21[0] = 0x1C00000048LL;
  v21[2] = *(_QWORD *)v18;
  v21[3] = a1;
  v21[5] = __PAIR64__(v16, v17);
  v10 = (void *)(a6 & -(__int64)((_DWORD)Size != 0));
  v21[7] = v10;
  v21[4] = a2;
  v21[6] = a5;
  LODWORD(v21[8]) = Size;
  if ( !(unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v21[6], 0x40u) )
    goto LABEL_12;
  if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v9, (const void **)&v21[7], Size)
    && (unsigned int)UMPDOBJ::pfo(v9, (__m128i **)&v21[4]) )
  {
    v20 = 0;
    v19 = a2;
    UMPDReleaseRFONTSem((struct RFONTOBJ *)&v19, v9, 0LL, 0LL, 0LL);
    LODWORD(v15) = 4;
    v11 = UMPDOBJ::Thunk(v9, v21, 0x48u, &v16, v15);
    v12 = v16;
    if ( v11 == -1 )
      v12 = -1;
    UMPDAcquireRFONTSem((struct RFONTOBJ *)&v19, v9, 0, 0, 0LL);
    v19 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v19);
    if ( v12 != -1 )
    {
      if ( v10 )
      {
        KernelPtr = UMPDOBJ::GetKernelPtr(v9, (char *)v21[7]);
        memmove(v10, KernelPtr, (unsigned int)Size);
      }
      if ( a5 )
        *a5 = *(struct _GLYPHDATA *)UMPDOBJ::GetKernelPtr(v9, (char *)v21[6]);
    }
  }
  else
  {
LABEL_12:
    v12 = -1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v12;
}
