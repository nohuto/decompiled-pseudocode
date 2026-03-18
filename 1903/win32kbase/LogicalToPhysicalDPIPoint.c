/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C0061760
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C003A220 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003D578 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // edi
  __int64 v9; // rax
  __int64 v10; // r13
  int v11; // eax
  int v12; // r12d
  unsigned __int16 v13; // si
  unsigned int v14; // ebx
  __m128i v15; // xmm0
  unsigned __int16 v16; // bx
  unsigned __int64 v17; // r8
  int v18; // edi
  int v19; // eax
  signed __int64 v20; // r10
  unsigned __int64 v21; // r11
  int v22; // edi
  unsigned __int64 v23; // rax
  __int64 v24; // r9
  signed __int64 v25; // r10
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // rax
  signed __int64 v29; // r11
  unsigned __int64 v30; // rdx
  int v31; // eax
  int v32; // ecx
  signed int v33; // r9d
  signed __int64 v34; // r11
  unsigned __int64 v35; // rdx
  int v36; // eax
  int v37; // r11d
  signed int v38; // r10d
  signed __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 result; // rax
  unsigned __int16 v42; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+30h] [rbp-58h]
  __int128 v44; // [rsp+30h] [rbp-58h]
  __int128 v45; // [rsp+40h] [rbp-48h]

  CurrentThreadDpiAwarenessContext = a3;
  v6 = a2;
  v7 = a1;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v8 = CurrentThreadDpiAwarenessContext & 0xF;
  if ( v8 == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *(_QWORD *)v7 = *(_QWORD *)v6;
    return 0LL;
  }
  if ( !a4 || (v9 = *a4) == 0 )
    v9 = _MonitorFromPoint(*(_QWORD *)v6, 2LL, CurrentThreadDpiAwarenessContext);
  if ( a4 )
    *a4 = v9;
  v10 = *(_QWORD *)(v9 + 40);
  v11 = CurrentThreadDpiAwarenessContext & 0x20000000;
  v12 = 0x80000000;
  v13 = *(_WORD *)(v10 + 64);
  if ( v8 == 2 && v11 )
  {
    v42 = *(_WORD *)(v10 + 68);
    v14 = CurrentThreadDpiAwarenessContext >> 8;
  }
  else
  {
    v14 = CurrentThreadDpiAwarenessContext >> 8;
    v42 = v14 & 0x1FF;
    if ( v8 != 2 )
    {
LABEL_11:
      v15 = *(__m128i *)(v10 + 28);
      v16 = v14 & 0x1FF;
      if ( v16 )
      {
        v17 = *(unsigned __int16 *)(v10 + 66);
        v18 = 1;
        v19 = _mm_cvtsi128_si32(v15);
        if ( v19 < 0 )
        {
          v18 = -1;
          v19 = -v19;
        }
        if ( *(_WORD *)(v10 + 66)
          && ((v20 = (v17 >> 1) + v19 * (unsigned __int64)v16, *(_WORD *)(v10 + 66) != 96LL)
            ? (v21 = v20 / *(unsigned __int16 *)(v10 + 66))
            : (v21 = v20 / 96),
              v21 <= 0x7FFFFFFF) )
        {
          if ( v18 <= 0 )
            LODWORD(v21) = -(int)v21;
        }
        else
        {
          LODWORD(v21) = 0x80000000;
          if ( v18 > 0 )
            LODWORD(v21) = 0x7FFFFFFF;
        }
        v22 = 1;
        v23 = HIDWORD(v15.m128i_i64[0]);
        if ( v15.m128i_i32[1] < 0 )
        {
          v22 = -1;
          LODWORD(v23) = -v15.m128i_i32[1];
        }
        if ( *(_WORD *)(v10 + 66)
          && ((v24 = *(unsigned __int16 *)(v10 + 66), v25 = (v17 >> 1) + (int)v23 * (unsigned __int64)v16, v24 != 96)
            ? (v27 = v25 / v24)
            : (v26 = (__int64)((unsigned __int128)(v25 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4,
               v27 = (v26 >> 63) + v26),
              v27 <= 0x7FFFFFFF) )
        {
          if ( v22 <= 0 )
            LODWORD(v27) = -(int)v27;
        }
        else
        {
          LODWORD(v27) = 0x80000000;
          if ( v22 > 0 )
            LODWORD(v27) = 0x7FFFFFFF;
        }
        if ( !v13 || (v28 = ((unsigned __int64)v13 >> 1) / v13, v28 > 0x7FFFFFFF) )
          LODWORD(v28) = 0x7FFFFFFF;
        LODWORD(v43) = v21 + v28;
        if ( !v13
          || ((v29 = (unsigned __int64)v13 >> 1, v13 != 96LL) ? (v30 = v29 / v13) : (v30 = v29 / 96), v30 > 0x7FFFFFFF) )
        {
          LODWORD(v30) = 0x7FFFFFFF;
        }
        v6 = a2;
        v13 = *(_WORD *)(v10 + 64);
        v7 = a1;
        HIDWORD(v43) = v27 + v30;
        v15.m128i_i64[0] = v43;
      }
      *(_QWORD *)&v44 = v15.m128i_i64[0];
      goto LABEL_36;
    }
  }
  if ( !v11 )
    goto LABEL_11;
  v44 = *(_OWORD *)(v10 + 72);
LABEL_36:
  v31 = *(_DWORD *)v6 - v44;
  v32 = v44 - *(_DWORD *)v6;
  v33 = (v31 >> 31) & 0xFFFFFFFE;
  v45 = *(_OWORD *)(v10 + 28);
  if ( v31 >= 0 )
    v32 = *(_DWORD *)v6 - v44;
  if ( v42
    && ((v34 = ((unsigned __int64)v42 >> 1) + v13 * (__int64)v32, v42 != 96LL) ? (v35 = v34 / v42) : (v35 = v34 / 96),
        v35 <= 0x7FFFFFFF) )
  {
    if ( v33 <= -1 )
      LODWORD(v35) = -(int)v35;
  }
  else
  {
    LODWORD(v35) = 0x80000000;
    if ( v33 > -1 )
      LODWORD(v35) = 0x7FFFFFFF;
  }
  *(_DWORD *)v7 = v45 + v35;
  v36 = *(_DWORD *)(v6 + 4) - DWORD1(v44);
  v37 = DWORD1(v44) - *(_DWORD *)(v6 + 4);
  v38 = (v36 >> 31) & 0xFFFFFFFE;
  if ( v36 >= 0 )
    v37 = *(_DWORD *)(v6 + 4) - DWORD1(v44);
  if ( v42
    && ((v39 = ((unsigned __int64)v42 >> 1) + v37 * (unsigned __int64)v13, v42 != 96LL)
      ? (v40 = v39 / v42)
      : (v40 = v39 / 96),
        v40 <= 0x7FFFFFFF) )
  {
    v12 = v40;
    if ( v38 <= -1 )
      v12 = -(int)v40;
  }
  else if ( v38 > -1 )
  {
    v12 = 0x7FFFFFFF;
  }
  result = 1LL;
  *(_DWORD *)(v7 + 4) = v12 + DWORD1(v45);
  return result;
}
