/*
 * XREFs of LogicalToPhysicalDPIPoint @ 0x1C0058030
 * Callers:
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C00391F0 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x1C0057690 (TransformPointBetweenCoordinateSpaces.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall LogicalToPhysicalDPIPoint(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // r12d
  __m128i v11; // xmm0
  unsigned __int16 v12; // bx
  unsigned __int64 v13; // r8
  int v14; // esi
  int v15; // ecx
  __int64 v16; // r10
  unsigned __int64 v17; // rdi
  int v18; // esi
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // r9
  signed __int64 v25; // r11
  unsigned __int64 v26; // rdx
  __int32 v27; // esi
  signed __int64 v28; // r8
  unsigned __int64 v29; // rdx
  __int32 v30; // edi
  unsigned __int64 v31; // r8
  __int64 v32; // rbx
  int v33; // eax
  signed int v34; // ecx
  signed int v35; // r9d
  signed __int64 v36; // r11
  unsigned __int64 v37; // rdx
  int v38; // eax
  signed int v39; // r10d
  signed int v40; // eax
  signed __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 result; // rax

  CurrentThreadDpiAwarenessContext = a3;
  v7 = a1;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || (int)Is_MonitorFromPointSupported() < 0 )
  {
    *(_QWORD *)v7 = *(_QWORD *)a2;
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
    v12 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    if ( v12 )
    {
      v13 = *(unsigned __int16 *)(v9 + 66);
      v14 = 1;
      v15 = _mm_cvtsi128_si32(v11);
      if ( v15 < 0 )
      {
        v14 = -1;
        v15 = -v15;
      }
      if ( *(_WORD *)(v9 + 66)
        && ((v16 = (v13 >> 1) + v12 * (__int64)v15, *(_WORD *)(v9 + 66) != 96LL)
          ? (v17 = v16 / *(unsigned __int16 *)(v9 + 66))
          : (v17 = v16 / 96),
            v17 <= 0x7FFFFFFF) )
      {
        if ( v14 <= 0 )
          LODWORD(v17) = -(int)v17;
      }
      else
      {
        LODWORD(v17) = 0x80000000;
        if ( v14 > 0 )
          LODWORD(v17) = 0x7FFFFFFF;
      }
      v18 = 1;
      v19 = HIDWORD(v11.m128i_i64[0]);
      if ( v11.m128i_i32[1] < 0 )
      {
        v18 = -1;
        LODWORD(v19) = -v11.m128i_i32[1];
      }
      if ( *(_WORD *)(v9 + 66)
        && ((v20 = *(unsigned __int16 *)(v9 + 66), v21 = (v13 >> 1) + v12 * (__int64)(int)v19, v20 != 96)
          ? (v23 = v21 / v20)
          : (v22 = (__int64)((unsigned __int128)(v21 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 4,
             v23 = (v22 >> 63) + v22),
            v23 <= 0x7FFFFFFF) )
      {
        if ( v18 <= 0 )
          LODWORD(v23) = -(int)v23;
      }
      else
      {
        LODWORD(v23) = 0x80000000;
        if ( v18 > 0 )
          LODWORD(v23) = 0x7FFFFFFF;
      }
      v24 = *(unsigned __int16 *)(v9 + 64);
      if ( !*(_WORD *)(v9 + 64)
        || ((v25 = v24 >> 1, *(_WORD *)(v9 + 64) != 96LL)
          ? (v26 = v25 / *(unsigned __int16 *)(v9 + 64))
          : (v26 = v25 / 96),
            v26 > 0x7FFFFFFF) )
      {
        LODWORD(v26) = 0x7FFFFFFF;
      }
      v27 = v17 + v26;
      if ( !*(_WORD *)(v9 + 64)
        || ((v28 = v24 >> 1, *(_WORD *)(v9 + 64) != 96LL)
          ? (v29 = v28 / *(unsigned __int16 *)(v9 + 64))
          : (v29 = v28 / 96),
            v29 > 0x7FFFFFFF) )
      {
        LODWORD(v29) = 0x7FFFFFFF;
      }
      v7 = a1;
      v30 = v23 + v29;
    }
    else
    {
      v30 = v11.m128i_i32[1];
      v27 = v11.m128i_i32[0];
    }
    v31 = v12;
    v32 = *(unsigned __int16 *)(v9 + 64);
    v33 = *(_DWORD *)a2 - v27;
    v34 = abs32(v33);
    v35 = ((v33 >> 31) & 0xFFFFFFFE) + 1;
    if ( (_DWORD)v31
      && ((v36 = ((unsigned __int64)(unsigned int)v31 >> 1) + *(unsigned __int16 *)(v9 + 64) * (__int64)v34,
           (int)v31 != 96LL)
        ? (v37 = v36 / (int)v31)
        : (v37 = v36 / 96),
          v37 <= 0x7FFFFFFF) )
    {
      if ( v35 <= 0 )
        LODWORD(v37) = -(int)v37;
    }
    else
    {
      LODWORD(v37) = 0x80000000;
      if ( v35 > 0 )
        LODWORD(v37) = 0x7FFFFFFF;
    }
    *(_DWORD *)v7 = v11.m128i_i32[0] + v37;
    v38 = *(_DWORD *)(a2 + 4) - v30;
    v39 = ((v38 >> 31) & 0xFFFFFFFE) + 1;
    v40 = abs32(v38);
    if ( (_DWORD)v31
      && ((v41 = (v31 >> 1) + v40 * v32, (int)v31 != 96LL) ? (v42 = v41 / (int)v31) : (v42 = v41 / 96), v42 <= 0x7FFFFFFF) )
    {
      v10 = v42;
      if ( v39 <= 0 )
        v10 = -(int)v42;
    }
    else if ( v39 > 0 )
    {
      v10 = 0x7FFFFFFF;
    }
    result = 1LL;
    *(_DWORD *)(v7 + 4) = v10 + v11.m128i_i32[1];
  }
  return result;
}
