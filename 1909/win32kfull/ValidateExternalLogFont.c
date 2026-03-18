/*
 * XREFs of ValidateExternalLogFont @ 0x1C013E248
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z @ 0x1C0116EC0 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXHPEAH@Z.c)
 *     ?GetLogFontFromUserProfile@@YA?AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z @ 0x1C013E09C (-GetLogFontFromUserProfile@@YA-AUtagLOGFONTW@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     GreCreateFontIndirectW @ 0x1C0090888 (GreCreateFontIndirectW.c)
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     _GetTextMetricsW @ 0x1C0107DCC (_GetTextMetricsW.c)
 *     GreSelectFont @ 0x1C012B530 (GreSelectFont.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     GreTextInitialized @ 0x1C0166B18 (GreTextInitialized.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall ValidateExternalLogFont(__int64 a1)
{
  unsigned int v1; // ebx
  HDC v2; // rsi
  __int64 FontIndirectW; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r15d
  int v10; // edi
  __int64 DPIServerInfo; // rax
  __int128 v12; // xmm0
  __int64 v13; // xmm1_8
  __m128i v14; // xmm2
  __int64 v15; // rax
  _OWORD v17[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v18; // [rsp+A8h] [rbp+38h] BYREF

  v1 = 0;
  v2 = *(HDC *)(gpDispInfo + 64LL);
  FontIndirectW = GreCreateFontIndirectW(a1, 0);
  if ( FontIndirectW )
  {
    GreSelectFont(v2);
    memset(v17, 0, 0x3CuLL);
    v9 = GreTextInitialized(v5, v4);
    if ( v9 && (unsigned int)GetTextMetricsW(v2, (__int64)v17) )
    {
      v10 = DWORD1(v17[1]);
    }
    else
    {
      DPIServerInfo = GetDPIServerInfo(v7, v6, v8);
      v12 = *(_OWORD *)(DPIServerInfo + 40);
      v13 = *(_QWORD *)(DPIServerInfo + 88);
      v14 = _mm_srli_si128(*(__m128i *)(DPIServerInfo + 56), 4);
      v15 = HIDWORD(*(_QWORD *)(DPIServerInfo + 56));
      v10 = _mm_cvtsi128_si32(v14);
      v17[0] = v12;
      if ( !(_DWORD)v15 )
        v10 = 8;
      *(_QWORD *)&v17[3] = v13;
    }
    if ( v9 )
    {
      if ( (BYTE7(v17[3]) & 1) != 0 )
      {
        v18 = 0LL;
        if ( (unsigned int)GreGetTextExtentW(
                             v2,
                             L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
                             0x34u,
                             (struct tagSIZE *)&v18,
                             1) )
          v10 = (int)(((int)((unsigned __int64)(1321528399LL * v18.x) >> 32) >> 3)
                    + 1
                    + ((unsigned int)((unsigned __int64)(1321528399LL * v18.x) >> 32) >> 31))
              / 2;
      }
    }
    if ( SLODWORD(v17[0]) > 0 && v10 > 0 && SLODWORD(v17[0]) < 0x7FFF && v10 < 0x7FFF )
      v1 = 1;
    GreSelectFont(v2);
    GreDeleteObject(FontIndirectW);
  }
  return v1;
}
