/*
 * XREFs of ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0299A50
 * Callers:
 *     NtGdiCreateColorTransform @ 0x1C029A500 (NtGdiCreateColorTransform.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0251304 (--0SURFREF@@QEAA@XZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0278340 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 */

struct HOBJ__ *__fastcall GreCreateColorTransform(
        HDC a1,
        struct tagLOGCOLORSPACEW *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        void *a7,
        unsigned int a8)
{
  struct HOBJ__ *v8; // rdi
  int v12; // eax
  _BYTE v14[32]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v15; // [rsp+70h] [rbp-48h]
  _QWORD v16[7]; // [rsp+78h] [rbp-40h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)&a2->lcsSignature == 0x40050534F43LL && a2->lcsSize == 588 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v16, a1);
    if ( v16[0] && ((v12 = *(_DWORD *)(v16[0] + 36LL), (v12 & 0x1000) == 0) || (v12 & 0x4000) != 0) )
    {
      SURFREF::SURFREF((SURFREF *)v14);
      v8 = COLORTRANSFORMOBJ::hCreate((COLORTRANSFORMOBJ *)v14, (struct XDCOBJ *)v16, a2, a3, a4, a5, a6, a7, a8);
      if ( !v8 )
        EngSetLastError(8u);
      if ( v15 )
        DEC_SHARE_REF_CNT(v15);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v14);
    }
    else
    {
      EngSetLastError(0x57u);
    }
    DCOBJ::~DCOBJ((DCOBJ *)v16);
    return v8;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
