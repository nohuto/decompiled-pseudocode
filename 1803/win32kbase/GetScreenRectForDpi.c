/*
 * XREFs of GetScreenRectForDpi @ 0x1C00577BC
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GetScreenRect @ 0x1C0057788 (GetScreenRect.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C0057E78 (GetMonitorRectForDpi.c)
 */

_OWORD *__fastcall GetScreenRectForDpi(_OWORD *a1, unsigned __int16 a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  _OWORD *result; // rax
  __int64 v7; // rdi
  int v8; // r14d
  int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  __m128i *MonitorRectForDpi; // rax
  __m128i v13; // xmm0
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // xmm0_8
  unsigned __int64 v16; // rax
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  char v18[16]; // [rsp+30h] [rbp-10h] BYREF

  v4 = *(_QWORD *)gpDispInfo;
  if ( a2 )
  {
    if ( *(_DWORD *)v4 == 1 )
    {
      v5 = *(_OWORD *)GetMonitorRectForDpi(&v17, *(_QWORD *)(gpDispInfo + 96), a2);
    }
    else
    {
      v7 = *(_QWORD *)(gpDispInfo + 104);
      v17 = 0uLL;
      if ( v7 )
      {
        v8 = HIDWORD(v17);
        v9 = 0;
        v10 = DWORD1(v17);
        v11 = 0;
        do
        {
          if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 24LL) & 1) != 0 )
          {
            MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v18, v7, a2);
            v13 = *MonitorRectForDpi;
            v14 = MonitorRectForDpi->m128i_i64[0];
            v15 = _mm_srli_si128(v13, 8).m128i_u64[0];
            if ( v11 >= (int)v14 )
              v11 = v14;
            v16 = HIDWORD(v14);
            LODWORD(v17) = v11;
            if ( v10 >= (int)v16 )
              v10 = v16;
            DWORD1(v17) = v10;
            if ( v9 <= (int)v15 )
              v9 = v15;
            DWORD2(v17) = v9;
            if ( v8 <= SHIDWORD(v15) )
              v8 = HIDWORD(v15);
            HIDWORD(v17) = v8;
          }
          v7 = *(_QWORD *)(v7 + 56);
        }
        while ( v7 );
      }
      v5 = v17;
    }
  }
  else
  {
    v5 = *(_OWORD *)(v4 + 24);
  }
  result = a1;
  *a1 = v5;
  return result;
}
