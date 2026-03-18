/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C0039BF0
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0038EF0 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // r14d
  __m128i v11; // xmm0
  unsigned __int16 v12; // bx
  unsigned __int64 v13; // r8
  int v14; // r10d
  int v15; // eax
  signed __int64 v16; // r11
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r11
  int v19; // edi
  unsigned __int64 v20; // rax
  signed __int64 v21; // r10
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rax
  __int32 v25; // ebp
  __int64 v26; // r8
  signed __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int32 v29; // edi
  int v30; // eax
  unsigned __int64 v31; // r8
  unsigned __int16 v32; // bx
  __int32 v33; // ecx
  signed int v34; // r9d
  signed __int64 v35; // r11
  unsigned __int64 v36; // rdx
  int v37; // eax
  __int32 v38; // edx
  signed int v39; // r10d
  __int64 v40; // rdx
  unsigned __int64 v41; // rax
  __int64 result; // rax
  unsigned __int64 v43; // [rsp+20h] [rbp-38h]

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *(_QWORD *)a1 = *(_QWORD *)a2;
    return 0LL;
  }
  else
  {
    if ( !a4 || (v8 = *a4) == 0 )
      v8 = _MonitorFromPoint(*(_QWORD *)a2, 2LL, CurrentThreadDpiAwarenessContext);
    if ( a4 )
      *a4 = v8;
    v9 = *(_QWORD *)(v8 + 40);
    v10 = 0x80000000;
    v11 = *(__m128i *)(v9 + 28);
    HIDWORD(v43) = v11.m128i_i32[1];
    v12 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    if ( v12 )
    {
      v13 = *(unsigned __int16 *)(v9 + 66);
      v14 = 1;
      v15 = _mm_cvtsi128_si32(v11);
      LODWORD(v43) = v15;
      if ( v15 < 0 )
      {
        v14 = -1;
        v15 = -v15;
      }
      if ( *(_WORD *)(v9 + 66)
        && ((v16 = (v13 >> 1) + v15 * (unsigned __int64)v12, *(_WORD *)(v9 + 66) != 96LL)
          ? (v18 = v16 / *(unsigned __int16 *)(v9 + 66))
          : (v17 = (__int64)((unsigned __int128)(v16 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4,
             v18 = (v17 >> 63) + v17),
            v18 <= 0x7FFFFFFF) )
      {
        if ( v14 <= 0 )
          LODWORD(v18) = -(int)v18;
      }
      else
      {
        LODWORD(v18) = 0x80000000;
        if ( v14 > 0 )
          LODWORD(v18) = 0x7FFFFFFF;
      }
      v19 = 1;
      v20 = HIDWORD(v43);
      if ( v11.m128i_i32[1] < 0 )
      {
        v19 = -1;
        LODWORD(v20) = -v11.m128i_i32[1];
      }
      if ( *(_WORD *)(v9 + 66)
        && ((v21 = (v13 >> 1) + (int)v20 * (unsigned __int64)v12, *(_WORD *)(v9 + 66) != 96LL)
          ? (v23 = v21 / *(unsigned __int16 *)(v9 + 66))
          : (v22 = (__int64)((unsigned __int128)(v21 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4,
             v23 = (v22 >> 63) + v22),
            v23 <= 0x7FFFFFFF) )
      {
        if ( v19 <= 0 )
          LODWORD(v23) = -(int)v23;
      }
      else
      {
        LODWORD(v23) = 0x80000000;
        if ( v19 > 0 )
          LODWORD(v23) = 0x7FFFFFFF;
      }
      if ( !*(_WORD *)(v9 + 64)
        || (v24 = ((unsigned __int64)*(unsigned __int16 *)(v9 + 64) >> 1) / *(unsigned __int16 *)(v9 + 64),
            v24 > 0x7FFFFFFF) )
      {
        LODWORD(v24) = 0x7FFFFFFF;
      }
      v25 = v18 + v24;
      if ( !*(_WORD *)(v9 + 64)
        || ((v26 = *(unsigned __int16 *)(v9 + 64), v27 = (unsigned __int64)v26 >> 1, v26 != 96)
          ? (v28 = v27 / v26)
          : (v28 = v27 / 96),
            v28 > 0x7FFFFFFF) )
      {
        LODWORD(v28) = 0x7FFFFFFF;
      }
      v29 = v23 + v28;
    }
    else
    {
      v29 = v11.m128i_i32[1];
      v25 = v11.m128i_i32[0];
    }
    v30 = *(_DWORD *)a2 - v25;
    v31 = v12;
    v32 = *(_WORD *)(v9 + 64);
    v33 = v25 - *(_DWORD *)a2;
    v34 = (v30 >> 31) & 0xFFFFFFFE;
    if ( v30 >= 0 )
      v33 = *(_DWORD *)a2 - v25;
    if ( (_DWORD)v31
      && ((v35 = ((unsigned __int64)(unsigned int)v31 >> 1) + v33 * (unsigned __int64)v32, (int)v31 != 96LL)
        ? (v36 = v35 / (int)v31)
        : (v36 = v35 / 96),
          v36 <= 0x7FFFFFFF) )
    {
      if ( v34 <= -1 )
        LODWORD(v36) = -(int)v36;
    }
    else
    {
      LODWORD(v36) = 0x80000000;
      if ( v34 > -1 )
        LODWORD(v36) = 0x7FFFFFFF;
    }
    *(_DWORD *)a1 = v11.m128i_i32[0] + v36;
    v37 = *(_DWORD *)(a2 + 4) - v29;
    v38 = v29 - *(_DWORD *)(a2 + 4);
    v39 = (v37 >> 31) & 0xFFFFFFFE;
    if ( v37 >= 0 )
      v38 = *(_DWORD *)(a2 + 4) - v29;
    if ( (_DWORD)v31
      && ((v40 = (v31 >> 1) + v32 * (__int64)v38, (int)v31 != 96LL) ? (v41 = v40 / (int)v31) : (v41 = v40 / 96),
          v41 <= 0x7FFFFFFF) )
    {
      v10 = v41;
      if ( v39 <= -1 )
        v10 = -(int)v41;
    }
    else if ( v39 > -1 )
    {
      v10 = 0x7FFFFFFF;
    }
    result = 1LL;
    *(_DWORD *)(a1 + 4) = v10 + v11.m128i_i32[1];
  }
  return result;
}
