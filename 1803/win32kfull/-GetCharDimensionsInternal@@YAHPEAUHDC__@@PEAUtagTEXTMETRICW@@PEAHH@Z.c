/*
 * XREFs of ?GetCharDimensionsInternal@@YAHPEAUHDC__@@PEAUtagTEXTMETRICW@@PEAHH@Z @ 0x1C00FABFC
 * Callers:
 *     ?UserReinitializeStockFonts@@YAXKHH@Z @ 0x1C005021C (-UserReinitializeStockFonts@@YAXKHH@Z.c)
 *     xxxSetNCFonts @ 0x1C0054100 (xxxSetNCFonts.c)
 *     ValidateExternalLogFont @ 0x1C0054984 (ValidateExternalLogFont.c)
 *     FinalUserInit @ 0x1C00B4064 (FinalUserInit.c)
 *     CreateScaledFont @ 0x1C0197B88 (CreateScaledFont.c)
 * Callees:
 *     GreGetTextMetricsW @ 0x1C00FAD74 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C00FAEAC (GreGetTextExtentW.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall GetCharDimensionsInternal(unsigned __int64 a1, struct tagTEXTMETRICW *a2, int *a3, __int64 a4)
{
  int v4; // r14d
  HDC v7; // r15
  int TextMetricsW; // eax
  __int64 v9; // xmm4_8
  __int128 v10; // xmm3
  __m128i v11; // xmm1
  __int128 v12; // xmm5
  unsigned int v13; // esi
  __int64 DPIServerInfo; // rax
  int v16; // [rsp+38h] [rbp-49h]
  __m128i v17; // [rsp+48h] [rbp-39h]
  __int64 v18; // [rsp+68h] [rbp-19h]
  _OWORD v19[5]; // [rsp+78h] [rbp-9h] BYREF
  struct tagSIZE v20; // [rsp+F0h] [rbp+6Fh] BYREF

  v4 = a4;
  v7 = (HDC)a1;
  if ( !(_DWORD)a4 )
    goto LABEL_12;
  memset(v19, 0, 0x44uLL);
  TextMetricsW = GreGetTextMetricsW(v7, (struct _TMW_INTERNAL *)v19);
  v9 = *(_QWORD *)&v19[3];
  a1 = DWORD2(v19[3]);
  HIBYTE(v18) = BYTE7(v19[3]);
  v10 = v19[0];
  v11 = (__m128i)v19[1];
  v12 = v19[2];
  v16 = v19[0];
  if ( TextMetricsW )
  {
    v13 = DWORD1(v19[1]);
  }
  else
  {
LABEL_12:
    DPIServerInfo = GetDPIServerInfo(a1, a2, a3, a4);
    LODWORD(a1) = *(_DWORD *)(DPIServerInfo + 96);
    v12 = *(_OWORD *)(DPIServerInfo + 72);
    v17 = *(__m128i *)(DPIServerInfo + 56);
    v18 = *(_QWORD *)(DPIServerInfo + 88);
    v9 = v18;
    v10 = *(_OWORD *)(DPIServerInfo + 40);
    v13 = _mm_cvtsi128_si32(_mm_srli_si128(v17, 4));
    v16 = v10;
    if ( !v17.m128i_i32[1] )
      v13 = 8;
    v17.m128i_i32[1] = v13;
    v11 = v17;
  }
  if ( a2 )
  {
    *(_OWORD *)&a2->tmHeight = v10;
    *(__m128i *)&a2->tmExternalLeading = v11;
    *(_OWORD *)&a2->tmOverhang = v12;
    *(_QWORD *)&a2->tmDefaultChar = v9;
    *(_DWORD *)&a2->tmCharSet = a1;
  }
  if ( a3 )
    *a3 = v16;
  if ( v4
    && (v18 & 0x100000000000000LL) != 0
    && (unsigned int)GreGetTextExtentW(v7, L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", 0x34u, &v20, 1u) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v20.cx) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v20.cx) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v13;
  }
}
