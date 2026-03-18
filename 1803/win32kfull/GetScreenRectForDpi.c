/*
 * XREFs of GetScreenRectForDpi @ 0x1C0073584
 * Callers:
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     GetMaxTrackSizeForWindow @ 0x1C0073494 (GetMaxTrackSizeForWindow.c)
 *     GetScreenRect @ 0x1C022B0B4 (GetScreenRect.c)
 *     GetScreenRectForWindow @ 0x1C022B0E8 (GetScreenRectForWindow.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 */

_OWORD *__fastcall GetScreenRectForDpi(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  __int64 *DispInfo; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int128 v10; // xmm0
  _OWORD *result; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  int v14; // r14d
  int v15; // r15d
  int v16; // r12d
  int v17; // r13d
  __m128i *MonitorRectForDpi; // rax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // xmm0_8
  unsigned __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-20h] BYREF
  char v24[16]; // [rsp+30h] [rbp-10h] BYREF

  v4 = a2;
  DispInfo = (__int64 *)GetDispInfo(a1, a2, a3, a4);
  v9 = *DispInfo;
  if ( v4 )
  {
    if ( *(_DWORD *)v9 == 1 )
    {
      v12 = GetDispInfo(v9, 0LL, v7, v8);
      v10 = *(_OWORD *)GetMonitorRectForDpi(&v23, *(_QWORD *)(v12 + 96), v4);
    }
    else
    {
      v13 = DispInfo[13];
      v23 = 0uLL;
      if ( v13 )
      {
        v14 = HIDWORD(v23);
        v15 = 0;
        v16 = DWORD1(v23);
        v17 = 0;
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v13 + 40) + 24LL) & 1) != 0 )
          {
            MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v24, v13, v4);
            v19 = *MonitorRectForDpi;
            v20 = MonitorRectForDpi->m128i_i64[0];
            v21 = _mm_srli_si128(v19, 8).m128i_u64[0];
            if ( v17 >= (int)v20 )
              v17 = v20;
            v22 = HIDWORD(v20);
            LODWORD(v23) = v17;
            if ( v16 >= (int)v22 )
              v16 = v22;
            DWORD1(v23) = v16;
            if ( v15 <= (int)v21 )
              v15 = v21;
            DWORD2(v23) = v15;
            if ( v14 <= SHIDWORD(v21) )
              v14 = HIDWORD(v21);
            HIDWORD(v23) = v14;
          }
          v13 = *(_QWORD *)(v13 + 56);
        }
        while ( v13 );
      }
      v10 = v23;
    }
  }
  else
  {
    v10 = *(_OWORD *)(v9 + 24);
  }
  result = a1;
  *a1 = v10;
  return result;
}
