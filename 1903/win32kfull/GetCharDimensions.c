/*
 * XREFs of GetCharDimensions @ 0x1C0142018
 * Callers:
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C01639E4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 * Callees:
 *     _GetTextMetricsW @ 0x1C003E0A8 (_GetTextMetricsW.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GreGetTextExtentW @ 0x1C011DC04 (GreGetTextExtentW.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall GetCharDimensions(HDC a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r14d
  int v9; // ecx
  __int64 v10; // xmm2_8
  __int128 v11; // xmm4
  unsigned int v12; // esi
  __int128 v13; // xmm3
  __int64 DPIServerInfo; // rax
  __int64 v15; // xmm0_8
  __int128 v16; // xmm0
  _OWORD v18[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v19; // [rsp+98h] [rbp+28h] BYREF

  memset(v18, 0, 0x3CuLL);
  v8 = GreTextInitialized(v7, v6);
  if ( v8 && (unsigned int)GetTextMetricsW(a1, (__int64)v18) )
  {
    v9 = DWORD2(v18[3]);
    v10 = *(_QWORD *)&v18[3];
    v11 = v18[2];
    v12 = DWORD1(v18[1]);
    v13 = v18[0];
  }
  else
  {
    DPIServerInfo = GetDPIServerInfo();
    v9 = *(_DWORD *)(DPIServerInfo + 96);
    v15 = *(_QWORD *)(DPIServerInfo + 88);
    v13 = *(_OWORD *)(DPIServerInfo + 40);
    v11 = *(_OWORD *)(DPIServerInfo + 72);
    v18[1] = *(_OWORD *)(DPIServerInfo + 56);
    *(_QWORD *)&v18[3] = v15;
    v10 = v15;
    v12 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v18[1], 4));
    v18[0] = v13;
    if ( !DWORD1(v18[1]) )
      v12 = 8;
    DWORD1(v18[1]) = v12;
  }
  if ( a2 )
  {
    v16 = v18[1];
    *(_OWORD *)a2 = v13;
    *(_OWORD *)(a2 + 16) = v16;
    *(_OWORD *)(a2 + 32) = v11;
    *(_QWORD *)(a2 + 48) = v10;
    *(_DWORD *)(a2 + 56) = v9;
  }
  if ( a3 )
    *a3 = v18[0];
  if ( v8
    && (BYTE7(v18[3]) & 1) != 0
    && (v19 = 0LL,
        (unsigned int)GreGetTextExtentW(
                        a1,
                        L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
                        0x34u,
                        (struct tagSIZE *)&v19,
                        1)) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v19.x) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v19.x) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v12;
  }
}
