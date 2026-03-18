/*
 * XREFs of GetScreenRectForDpi @ 0x1C0034948
 * Callers:
 *     GetScreenRectForDpiContext @ 0x1C00348D0 (GetScreenRectForDpiContext.c)
 *     GetScreenRect @ 0x1C01082C4 (GetScreenRect.c)
 *     xxxSoundSentry @ 0x1C015BAE0 (xxxSoundSentry.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C012EBC8 (GetMonitorRectForDpi.c)
 */

_OWORD *__fastcall GetScreenRectForDpi(_OWORD *a1, unsigned __int16 a2)
{
  __int64 *v4; // rax
  __int64 v5; // rcx
  __int128 v6; // xmm0
  _OWORD *result; // rax
  __int64 DispInfo; // rax
  __int64 v9; // rdi
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  __m128i *MonitorRectForDpi; // rax
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // rax
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  char v20[16]; // [rsp+30h] [rbp-10h] BYREF

  v4 = (__int64 *)((__int64 (*)(void))GetDispInfo)();
  v5 = *v4;
  if ( a2 )
  {
    if ( *(_DWORD *)v5 == 1 )
    {
      DispInfo = GetDispInfo(v5, 0LL);
      v6 = *(_OWORD *)GetMonitorRectForDpi(&v19, *(_QWORD *)(DispInfo + 96), a2);
    }
    else
    {
      v9 = v4[13];
      v19 = 0uLL;
      if ( v9 )
      {
        v10 = HIDWORD(v19);
        v11 = 0;
        v12 = DWORD1(v19);
        v13 = 0;
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v9 + 40) + 24LL) & 1) != 0 )
          {
            MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v20, v9, a2);
            v15 = *MonitorRectForDpi;
            v16 = MonitorRectForDpi->m128i_i64[0];
            v17 = _mm_srli_si128(v15, 8).m128i_u64[0];
            if ( v13 >= (int)v16 )
              v13 = v16;
            v18 = HIDWORD(v16);
            LODWORD(v19) = v13;
            if ( v12 >= (int)v18 )
              v12 = v18;
            DWORD1(v19) = v12;
            if ( v11 <= (int)v17 )
              v11 = v17;
            DWORD2(v19) = v11;
            if ( v10 <= SHIDWORD(v17) )
              v10 = HIDWORD(v17);
            HIDWORD(v19) = v10;
          }
          v9 = *(_QWORD *)(v9 + 56);
        }
        while ( v9 );
      }
      v6 = v19;
    }
  }
  else
  {
    v6 = *(_OWORD *)(v5 + 24);
  }
  result = a1;
  *a1 = v6;
  return result;
}
