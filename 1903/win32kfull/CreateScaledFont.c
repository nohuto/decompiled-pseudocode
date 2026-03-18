/*
 * XREFs of CreateScaledFont @ 0x1C01CCA70
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C0021E28 (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01CC784 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01CC8B0 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     _GetTextMetricsW @ 0x1C003E0A8 (_GetTextMetricsW.c)
 *     GreCreateFontIndirectW @ 0x1C004BB3C (GreCreateFontIndirectW.c)
 *     GreSelectFont @ 0x1C008CDF0 (GreSelectFont.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall CreateScaledFont(HBRUSH a1, __int64 *a2, __int64 a3, INT a4, int *a5, _DWORD *a6, __m128i *a7)
{
  unsigned int v10; // edi
  __int64 FontIndirectW; // rax
  HDC v12; // r12
  BOOL v13; // r13d
  __int32 v14; // ecx
  __int64 v15; // xmm2_8
  __m128i v16; // xmm4
  int v17; // ebx
  __m128i v18; // xmm3
  __int64 DPIServerInfo; // rax
  __int64 v20; // xmm0_8
  __m128i v21; // xmm0
  struct _POINTL v23; // [rsp+30h] [rbp-71h] BYREF
  __int64 v24; // [rsp+38h] [rbp-69h]
  __m128i a[6]; // [rsp+40h] [rbp-61h] BYREF

  memset(a, 0, 0x5CuLL);
  *a2 = 0LL;
  v10 = 0;
  if ( (unsigned int)GreExtGetObjectW(a1, 92LL, a[0].m128i_i8) )
  {
    a[0].m128i_i32[0] = EngMulDiv(a[0].m128i_i32[0], a4, 96);
    a[0].m128i_i32[1] = EngMulDiv(a[0].m128i_i32[1], a4, 96);
    FontIndirectW = GreCreateFontIndirectW((__int64)a, 0x88u);
    *a2 = FontIndirectW;
    if ( FontIndirectW )
    {
      v10 = 1;
      if ( a5 || a6 || a7 )
      {
        v24 = GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), FontIndirectW);
        v12 = *(HDC *)(gpDispInfo + 64LL);
        memset(a, 0, 0x3CuLL);
        v13 = GreTextInitialized();
        if ( v13 && (unsigned int)GetTextMetricsW(v12, (__int64)a) )
        {
          v14 = a[3].m128i_i32[2];
          v15 = a[3].m128i_i64[0];
          v16 = a[2];
          v17 = a[1].m128i_i32[1];
          v18 = a[0];
        }
        else
        {
          DPIServerInfo = GetDPIServerInfo();
          v14 = *(_DWORD *)(DPIServerInfo + 96);
          v20 = *(_QWORD *)(DPIServerInfo + 88);
          v18 = *(__m128i *)(DPIServerInfo + 40);
          v16 = *(__m128i *)(DPIServerInfo + 72);
          a[1] = *(__m128i *)(DPIServerInfo + 56);
          a[3].m128i_i64[0] = v20;
          v15 = v20;
          v17 = _mm_cvtsi128_si32(_mm_srli_si128(a[1], 4));
          a[0] = v18;
          if ( !a[1].m128i_i32[1] )
            v17 = 8;
          a[1].m128i_i32[1] = v17;
        }
        if ( a7 )
        {
          v21 = a[1];
          *a7 = v18;
          a7[1] = v21;
          a7[2] = v16;
          a7[3].m128i_i64[0] = v15;
          a7[3].m128i_i32[2] = v14;
        }
        if ( a6 )
          *a6 = a[0].m128i_i32[0];
        if ( v13 )
        {
          if ( (a[3].m128i_i8[7] & 1) != 0 )
          {
            v23 = 0LL;
            if ( (unsigned int)GreGetTextExtentW(
                                 v12,
                                 L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
                                 0x34u,
                                 (struct tagSIZE *)&v23,
                                 1) )
              v17 = (int)(((int)((unsigned __int64)(1321528399LL * v23.x) >> 32) >> 3)
                        + 1
                        + ((unsigned int)((unsigned __int64)(1321528399LL * v23.x) >> 32) >> 31))
                  / 2;
          }
        }
        if ( a5 )
          *a5 = v17;
        GreSelectFont(*(_QWORD *)(gpDispInfo + 64LL), v24);
      }
    }
  }
  return v10;
}
