/*
 * XREFs of PhysicalToLogicalInPlaceRgn @ 0x1C002AE38
 * Callers:
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x1C00281E0 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     ?InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z @ 0x1C002AEA0 (-InternalInvalidate2@@YAHPEAUtagWND@@PEAUHRGN__@@1PEAUtagRECT@@K@Z.c)
 *     ?CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x1C002B770 (-CalcVisRgnWorker@@YAHQEAUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     xxxRedrawHungWindow @ 0x1C01360F8 (xxxRedrawHungWindow.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z @ 0x1C01ADFB0 (-TransformRgn@@YAPEAUHRGN__@@PEAU1@PEAUtagXFORM@@@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRgn(__int64 a1, HRGN *a2)
{
  unsigned int v2; // ebx
  float *v6; // rax
  float v7; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm3_4
  HRGN v10; // rax
  float v11[6]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  if ( (unsigned __int64)*a2 > 2 )
  {
    if ( *(_QWORD *)(a1 + 200) )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v11[1] = 0.0;
        v11[2] = 0.0;
        v6 = *(float **)(a1 + 200);
        v11[0] = 1.0 / *v6;
        v7 = 1.0 / v6[5];
        v11[3] = v7;
        LODWORD(v8) = COERCE_UNSIGNED_INT(v6[12] / *v6) ^ _xmm;
        v11[4] = v8;
        LODWORD(v9) = COERCE_UNSIGNED_INT(v6[13] / v6[5]) ^ _xmm;
        v11[5] = v9;
        if ( v11[0] != 1.0 || v7 != 1.0 || v8 != 0.0 || v9 != 0.0 )
        {
          v10 = TransformRgn(*a2, (struct tagXFORM *)v11);
          if ( v10 )
          {
            v2 = 1;
            *a2 = v10;
          }
        }
      }
    }
  }
  return v2;
}
