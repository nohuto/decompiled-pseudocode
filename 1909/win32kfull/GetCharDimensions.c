/*
 * XREFs of GetCharDimensions @ 0x1C0142DC8
 * Callers:
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x1C01649B4 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 * Callees:
 *     GreGetTextExtentW @ 0x1C00F77A4 (GreGetTextExtentW.c)
 *     _GetTextMetricsW @ 0x1C0107DCC (_GetTextMetricsW.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     GreTextInitialized @ 0x1C0166B18 (GreTextInitialized.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall GetCharDimensions(HDC a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // r14d
  int v12; // ecx
  __int64 v13; // xmm2_8
  __int128 v14; // xmm4
  unsigned int v15; // esi
  __int128 v16; // xmm3
  __int64 DPIServerInfo; // rax
  __int64 v18; // xmm0_8
  __int128 v19; // xmm0
  _OWORD v21[4]; // [rsp+30h] [rbp-40h] BYREF
  struct _POINTL v22; // [rsp+98h] [rbp+28h] BYREF

  memset(v21, 0, 0x3CuLL);
  v11 = GreTextInitialized(v7, v6);
  if ( v11 && (unsigned int)GetTextMetricsW(a1, (__int64)v21) )
  {
    v12 = DWORD2(v21[3]);
    v13 = *(_QWORD *)&v21[3];
    v14 = v21[2];
    v15 = DWORD1(v21[1]);
    v16 = v21[0];
  }
  else
  {
    DPIServerInfo = GetDPIServerInfo(v9, v8, v10);
    v12 = *(_DWORD *)(DPIServerInfo + 96);
    v18 = *(_QWORD *)(DPIServerInfo + 88);
    v16 = *(_OWORD *)(DPIServerInfo + 40);
    v14 = *(_OWORD *)(DPIServerInfo + 72);
    v21[1] = *(_OWORD *)(DPIServerInfo + 56);
    *(_QWORD *)&v21[3] = v18;
    v13 = v18;
    v15 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v21[1], 4));
    v21[0] = v16;
    if ( !DWORD1(v21[1]) )
      v15 = 8;
    DWORD1(v21[1]) = v15;
  }
  if ( a2 )
  {
    v19 = v21[1];
    *(_OWORD *)a2 = v16;
    *(_OWORD *)(a2 + 16) = v19;
    *(_OWORD *)(a2 + 32) = v14;
    *(_QWORD *)(a2 + 48) = v13;
    *(_DWORD *)(a2 + 56) = v12;
  }
  if ( a3 )
    *a3 = v21[0];
  if ( v11
    && (BYTE7(v21[3]) & 1) != 0
    && (v22 = 0LL,
        (unsigned int)GreGetTextExtentW(
                        a1,
                        L"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ",
                        0x34u,
                        (struct tagSIZE *)&v22,
                        1)) )
  {
    return (unsigned int)((int)(((int)((unsigned __int64)(1321528399LL * v22.x) >> 32) >> 3)
                              + 1
                              + ((unsigned int)((unsigned __int64)(1321528399LL * v22.x) >> 32) >> 31))
                        / 2);
  }
  else
  {
    return v15;
  }
}
