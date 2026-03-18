/*
 * XREFs of GetScreenRectForDpiContext @ 0x1C0093BA8
 * Callers:
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     GetMaxTrackSizeForWindow @ 0x1C0093AB4 (GetMaxTrackSizeForWindow.c)
 *     GetScreenRectForWindow @ 0x1C0259DF0 (GetScreenRectForWindow.c)
 * Callees:
 *     GetScreenRectForDpi @ 0x1C0093C20 (GetScreenRectForDpi.c)
 *     GetMonitorRectForDpiContext @ 0x1C0095B68 (GetMonitorRectForDpiContext.c)
 */

_OWORD *__fastcall GetScreenRectForDpiContext(_OWORD *a1, unsigned int a2)
{
  __int128 *ScreenRectForDpi; // rax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  __int64 DispInfo; // rax
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  __m128i *MonitorRectForDpiContext; // rax
  __m128i v15; // xmm0
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // xmm0_8
  unsigned __int64 v18; // rax
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-10h] BYREF

  if ( (a2 & 0xF) != 2 || (a2 & 0x20000000) == 0 )
  {
    ScreenRectForDpi = (__int128 *)GetScreenRectForDpi(v20, (a2 >> 8) & 0x1FF);
LABEL_4:
    v5 = *ScreenRectForDpi;
    goto LABEL_5;
  }
  DispInfo = GetDispInfo();
  if ( **(_DWORD **)DispInfo == 1 )
  {
    v8 = GetDispInfo();
    ScreenRectForDpi = (__int128 *)GetMonitorRectForDpiContext(&v19, *(_QWORD *)(v8 + 96), a2);
    goto LABEL_4;
  }
  v9 = *(_QWORD *)(DispInfo + 104);
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
        MonitorRectForDpiContext = (__m128i *)GetMonitorRectForDpiContext(v20, v9, a2);
        v15 = *MonitorRectForDpiContext;
        v16 = MonitorRectForDpiContext->m128i_i64[0];
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
  v5 = v19;
LABEL_5:
  result = a1;
  *a1 = v5;
  return result;
}
