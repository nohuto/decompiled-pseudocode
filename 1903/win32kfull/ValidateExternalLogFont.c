/*
 * XREFs of ValidateExternalLogFont @ 0x1C00E59CC
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C00E1130 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00E5820 (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     _GetTextMetricsW @ 0x1C003E0A8 (_GetTextMetricsW.c)
 *     GreCreateFontIndirectW @ 0x1C004BB3C (GreCreateFontIndirectW.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall ValidateExternalLogFont(__int64 a1)
{
  unsigned int v1; // ebx
  HDC v2; // rsi
  __int64 FontIndirectW; // rax
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r15d
  int v9; // edi
  __int64 DPIServerInfo; // rax
  __int128 v11; // xmm0
  __int64 v12; // xmm1_8
  __m128i v13; // xmm2
  __int64 v14; // rax
  _OWORD v16[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v17; // [rsp+A8h] [rbp+38h] BYREF

  v1 = 0;
  v2 = *(HDC *)(gpDispInfo + 64LL);
  FontIndirectW = GreCreateFontIndirectW(a1, 0);
  v4 = FontIndirectW;
  if ( FontIndirectW )
  {
    v5 = GreSelectFont((__int64)v2, FontIndirectW);
    memset(v16, 0, 0x3CuLL);
    v8 = GreTextInitialized(v7, v6);
    if ( v8 && (unsigned int)GetTextMetricsW(v2, (__int64)v16) )
    {
      v9 = DWORD1(v16[1]);
    }
    else
    {
      DPIServerInfo = GetDPIServerInfo();
      v11 = *(_OWORD *)(DPIServerInfo + 40);
      v12 = *(_QWORD *)(DPIServerInfo + 88);
      v13 = _mm_srli_si128(*(__m128i *)(DPIServerInfo + 56), 4);
      v14 = HIDWORD(*(_QWORD *)(DPIServerInfo + 56));
      v9 = _mm_cvtsi128_si32(v13);
      v16[0] = v11;
      if ( !(_DWORD)v14 )
        v9 = 8;
      *(_QWORD *)&v16[3] = v12;
    }
    if ( v8 )
    {
      if ( (BYTE7(v16[3]) & 1) != 0 )
      {
        v17 = 0LL;
        if ( (unsigned int)GreGetTextExtentW(
                             v2,
                             L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
                             0x34u,
                             &v17,
                             1) )
          v9 = (int)(((int)((unsigned __int64)(1321528399LL * v17.x) >> 32) >> 3)
                   + 1
                   + ((unsigned int)((unsigned __int64)(1321528399LL * v17.x) >> 32) >> 31))
             / 2;
      }
    }
    if ( SLODWORD(v16[0]) > 0 && v9 > 0 && SLODWORD(v16[0]) < 0x7FFF && v9 < 0x7FFF )
      v1 = 1;
    GreSelectFont((__int64)v2, v5);
    GreDeleteObject(v4);
  }
  return v1;
}
