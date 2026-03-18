/*
 * XREFs of Controller_GetQpcValueForFrameMicroFrameBoundary @ 0x1C000E818
 * Callers:
 *     Controller_TranslateFrameNumberToQpcValue @ 0x1C00112D8 (Controller_TranslateFrameNumberToQpcValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Controller_GetQpcValueForFrameMicroFrameBoundary(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        char a6,
        __int64 a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        _DWORD *a12)
{
  signed int LowPart; // eax
  char v16; // r9
  __int64 v17; // rdx
  double v18; // xmm1_8
  double v19; // xmm0_8
  __int64 v20; // rdx
  double v21; // xmm0_8
  double v22; // xmm1_8
  union _LARGE_INTEGER v24; // [rsp+30h] [rbp+8h] BYREF

  v24.QuadPart = 0LL;
  LowPart = KeQueryPerformanceCounter(&v24).LowPart;
  v16 = a6;
  if ( a6 )
  {
    v17 = (unsigned int)(a5 + 8 * (a4 - a8) - a9);
    if ( a12 )
      *a12 = 1;
  }
  else
  {
    v17 = (unsigned int)(a3 + 8 * (a2 - a4) - a5);
    if ( a12 )
      *a12 = 125;
  }
  if ( a10 && a11 )
  {
    v18 = (double)(int)a11;
    if ( a11 < 0 )
      v18 = v18 + 1.844674407370955e19;
    v19 = (double)(int)a10 / v18 * (double)(int)v17;
  }
  else
  {
    v20 = v24.QuadPart * v17;
    v21 = (double)(125 * (int)v20);
    if ( 125 * v20 < 0 )
      v21 = v21 + 1.844674407370955e19;
    v19 = v21 / 1000000.0;
  }
  if ( v16 )
    v22 = (double)(int)a7 + v19;
  else
    v22 = (double)LowPart - v19;
  return (unsigned int)(int)v22;
}
