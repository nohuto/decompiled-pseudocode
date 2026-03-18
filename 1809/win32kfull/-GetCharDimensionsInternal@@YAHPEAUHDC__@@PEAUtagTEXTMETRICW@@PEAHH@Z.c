/*
 * XREFs of ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C0111088
 * Callers:
 *     xxxSetNCFonts @ 0x1C00BF664 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C00BFF4C (ValidateExternalLogFont.c)
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C00C2A48 (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     FinalUserInit @ 0x1C00EBC78 (FinalUserInit.c)
 *     CreateScaledFont @ 0x1C01B8B58 (CreateScaledFont.c)
 * Callees:
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     GreGetTextMetricsW @ 0x1C01111FC (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0111340 (GreGetTextExtentW.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall GetCharDimensionsInternal(__int64 a1, struct tagTEXTMETRICW *a2, int *a3, int a4)
{
  HDC v7; // r15
  int TextMetricsW; // eax
  __int128 v9; // xmm2
  __m128i v10; // xmm1
  __int64 v11; // xmm0_8
  __int128 v12; // xmm3
  unsigned int v13; // esi
  __int64 DPIServerInfo; // rax
  int v16; // [rsp+38h] [rbp-49h]
  __m128i v17; // [rsp+48h] [rbp-39h]
  char v18; // [rsp+6Fh] [rbp-12h]
  _OWORD v19[5]; // [rsp+78h] [rbp-9h] BYREF
  struct _POINTL v20; // [rsp+F0h] [rbp+6Fh] BYREF

  v7 = (HDC)a1;
  if ( !a4 )
    goto LABEL_12;
  memset(v19, 0, 0x44uLL);
  TextMetricsW = GreGetTextMetricsW(v7, (struct _TMW_INTERNAL *)v19);
  v9 = v19[0];
  v10 = (__m128i)v19[1];
  v11 = *(_QWORD *)&v19[3];
  v12 = v19[2];
  a1 = DWORD2(v19[3]);
  v18 = BYTE7(v19[3]);
  v16 = v19[0];
  if ( TextMetricsW )
  {
    v13 = DWORD1(v19[1]);
  }
  else
  {
LABEL_12:
    DPIServerInfo = GetDPIServerInfo(a1, (__int64)a2);
    LODWORD(a1) = *(_DWORD *)(DPIServerInfo + 96);
    v9 = *(_OWORD *)(DPIServerInfo + 40);
    v11 = *(_QWORD *)(DPIServerInfo + 88);
    v12 = *(_OWORD *)(DPIServerInfo + 72);
    v17 = *(__m128i *)(DPIServerInfo + 56);
    v18 = HIBYTE(v11);
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
    v16 = v9;
    if ( !v17.m128i_i32[1] )
      v13 = 8;
    v17.m128i_i32[1] = v13;
    v10 = v17;
  }
  if ( a2 )
  {
    *(_OWORD *)&a2->tmHeight = v9;
    *(__m128i *)&a2->tmExternalLeading = v10;
    *(_OWORD *)&a2->tmOverhang = v12;
    *(_QWORD *)&a2->tmDefaultChar = v11;
    *(_DWORD *)&a2->tmCharSet = a1;
  }
  if ( a3 )
    *a3 = v16;
  if ( a4
    && (v18 & 1) != 0
    && (unsigned int)GreGetTextExtentW(v7, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v20, 1) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v20.x) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v20.x) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v13;
  }
}
