/*
 * XREFs of CreateScaledFont @ 0x1C01CC8E0
 * Callers:
 *     GetScaledLogFontForDpi @ 0x1C012A5EC (GetScaledLogFontForDpi.c)
 *     ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01CC5F4 (-EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z.c)
 *     ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01CC720 (-RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0090888 (GreCreateFontIndirectW.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     _GetTextMetricsW @ 0x1C0107DCC (_GetTextMetricsW.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GreTextInitialized @ 0x1C0166B18 (GreTextInitialized.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall CreateScaledFont(HBRUSH a1, __int64 *a2, __int64 a3, INT a4, int *a5, _DWORD *a6, __m128i *a7)
{
  unsigned int v10; // edi
  __int64 FontIndirectW; // rax
  HDC v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  BOOL v16; // r13d
  __int32 v17; // ecx
  __int64 v18; // xmm2_8
  __m128i v19; // xmm4
  int v20; // ebx
  __m128i v21; // xmm3
  __int64 DPIServerInfo; // rax
  __int64 v23; // xmm0_8
  __m128i v24; // xmm0
  struct _POINTL v26; // [rsp+30h] [rbp-71h] BYREF
  __int64 v27; // [rsp+38h] [rbp-69h]
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
        v27 = GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
        v12 = *(HDC *)(gpDispInfo + 64LL);
        memset(a, 0, 0x3CuLL);
        v16 = GreTextInitialized();
        if ( v16 && (unsigned int)GetTextMetricsW(v12, (__int64)a) )
        {
          v17 = a[3].m128i_i32[2];
          v18 = a[3].m128i_i64[0];
          v19 = a[2];
          v20 = a[1].m128i_i32[1];
          v21 = a[0];
        }
        else
        {
          DPIServerInfo = GetDPIServerInfo(v14, v13, v15);
          v17 = *(_DWORD *)(DPIServerInfo + 96);
          v23 = *(_QWORD *)(DPIServerInfo + 88);
          v21 = *(__m128i *)(DPIServerInfo + 40);
          v19 = *(__m128i *)(DPIServerInfo + 72);
          a[1] = *(__m128i *)(DPIServerInfo + 56);
          a[3].m128i_i64[0] = v23;
          v18 = v23;
          v20 = _mm_cvtsi128_si32(_mm_srli_si128(a[1], 4));
          a[0] = v21;
          if ( !a[1].m128i_i32[1] )
            v20 = 8;
          a[1].m128i_i32[1] = v20;
        }
        if ( a7 )
        {
          v24 = a[1];
          *a7 = v21;
          a7[1] = v24;
          a7[2] = v19;
          a7[3].m128i_i64[0] = v18;
          a7[3].m128i_i32[2] = v17;
        }
        if ( a6 )
          *a6 = a[0].m128i_i32[0];
        if ( v16 )
        {
          if ( (a[3].m128i_i8[7] & 1) != 0 )
          {
            v26 = 0LL;
            if ( (unsigned int)GreGetTextExtentW(
                                 v12,
                                 L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
                                 0x34u,
                                 (struct tagSIZE *)&v26,
                                 1) )
              v20 = (int)(((int)((unsigned __int64)(1321528399LL * v26.x) >> 32) >> 3)
                        + 1
                        + ((unsigned int)((unsigned __int64)(1321528399LL * v26.x) >> 32) >> 31))
                  / 2;
          }
        }
        if ( a5 )
          *a5 = v20;
        GreSelectFont(*(HDC *)(gpDispInfo + 64LL));
      }
    }
  }
  return v10;
}
