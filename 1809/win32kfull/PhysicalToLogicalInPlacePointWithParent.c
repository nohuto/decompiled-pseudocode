/*
 * XREFs of PhysicalToLogicalInPlacePointWithParent @ 0x1C01D26B8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01DCC74 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C02087A4 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C004134C (-GetTopLevelOrDpiBoundaryWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     FixedPointSubPixel @ 0x1C01D2210 (FixedPointSubPixel.c)
 */

__int64 __fastcall PhysicalToLogicalInPlacePointWithParent(struct tagWND *a1, int *a2, int *a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  float *v7; // rdx
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  __int64 v11; // rdx
  float v12; // xmm0_4
  __m128i v13; // xmm0

  result = (__int64)GetTopLevelOrDpiBoundaryWindow(a1);
  v6 = result;
  if ( result )
  {
    result = IsWindowDesktopComposed(result);
    if ( (_DWORD)result )
    {
      v7 = *(float **)(v6 + 200);
      if ( v7 )
      {
        v8 = 1.0 / *v7;
        v9 = 1.0 / v7[5];
        if ( a3 )
        {
          v10 = FixedPointSubPixel(*a3);
          *a2 = (int)(float)((float)((float)(v10 + (float)*a2) - *(float *)(v11 + 48)) * v8);
          v12 = FixedPointSubPixel(a3[1]) + (float)a2[1];
        }
        else
        {
          v13 = _mm_cvtsi32_si128(a2[1]);
          *a2 = (int)(float)((float)((float)*a2 - v7[12]) * v8);
          LODWORD(v12) = _mm_cvtepi32_ps(v13).m128_u32[0];
        }
        result = (unsigned int)(int)(float)(v9 * (float)(v12 - v7[13]));
        a2[1] = result;
      }
    }
  }
  return result;
}
