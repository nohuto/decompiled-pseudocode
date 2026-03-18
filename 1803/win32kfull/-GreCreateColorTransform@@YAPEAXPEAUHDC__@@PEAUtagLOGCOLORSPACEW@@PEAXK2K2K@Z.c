/*
 * XREFs of ?GreCreateColorTransform@@YAPEAXPEAUHDC__@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0286044
 * Callers:
 *     NtGdiCreateColorTransform @ 0x1C02869C0 (NtGdiCreateColorTransform.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C008FB20 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0264684 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
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
  __int64 v14; // [rsp+50h] [rbp-18h] BYREF
  int v15; // [rsp+58h] [rbp-10h]
  int v16; // [rsp+5Ch] [rbp-Ch]
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v8 = 0LL;
  if ( *(_QWORD *)&a2->lcsSignature == 0x40050534F43LL && a2->lcsSize == 588 )
  {
    v15 = 0;
    v16 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v14, a1);
    if ( v14 )
    {
      v12 = *(_DWORD *)(v14 + 36);
      if ( (v12 & 0x1000) == 0 || (v12 & 0x4000) != 0 )
      {
        v17 = 0LL;
        v8 = COLORTRANSFORMOBJ::hCreate((COLORTRANSFORMOBJ *)&v17, (struct XDCOBJ *)&v14, a2, a3, a4, a5, a6, a7, a8);
        if ( !v8 )
          EngSetLastError(8u);
        if ( v17 )
          DEC_SHARE_REF_CNT(v17);
      }
      else
      {
        EngSetLastError(0x57u);
      }
      XDCOBJ::vUnlockFast((XDCOBJ *)&v14);
    }
    else
    {
      EngSetLastError(0x57u);
    }
    return v8;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
