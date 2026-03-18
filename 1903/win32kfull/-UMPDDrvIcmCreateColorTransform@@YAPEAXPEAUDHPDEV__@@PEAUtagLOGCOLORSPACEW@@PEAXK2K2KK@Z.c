/*
 * XREFs of ?UMPDDrvIcmCreateColorTransform@@YAPEAXPEAUDHPDEV__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2KK@Z @ 0x1C02A3BC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C004FD7C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00503C4 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00506CC (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z @ 0x1C005093C (-ThunkMemBlock@UMPDOBJ@@QEAAHPEAPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

void *__fastcall UMPDDrvIcmCreateColorTransform(
        struct DHPDEV__ *a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8,
        unsigned int a9)
{
  UMPDOBJ *v13; // rbx
  void *v14; // rdi
  size_t Size; // [rsp+20h] [rbp-91h]
  void *v17; // [rsp+30h] [rbp-81h] BYREF
  UMPDOBJ *v18; // [rsp+38h] [rbp-79h] BYREF
  _QWORD v19[12]; // [rsp+40h] [rbp-71h] BYREF

  v17 = a7;
  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v18);
  memset(v19, 0, 0x58uLL);
  v13 = v18;
  v14 = 0LL;
  if ( v18 )
  {
    v19[0] = 0x4000000058LL;
    v19[2] = *(_QWORD *)v18;
    v19[9] = v17;
    v19[3] = a1;
    v19[4] = a2;
    v19[5] = a3;
    LODWORD(v19[6]) = a4;
    v19[7] = a5;
    LODWORD(v19[8]) = a6;
    v19[10] = __PAIR64__(a9, a8);
    if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v18, (const void **)&v19[4], 0x148u) )
    {
      if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v19[5], a4) )
      {
        if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v19[7], a6) )
        {
          if ( (unsigned int)UMPDOBJ::ThunkMemBlock(v13, (const void **)&v19[9], a8) )
          {
            LODWORD(Size) = 8;
            if ( (unsigned int)UMPDOBJ::Thunk(v13, v19, 88LL, &v17, Size) != -1 )
              v14 = v17;
          }
        }
      }
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v18);
  return v14;
}
