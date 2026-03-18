/*
 * XREFs of ?TPAAPShouldAllowNow@@YAHKHH@Z @ 0x1C01A0D44
 * Callers:
 *     EditionLegacyTouchPadMouseAllowTap @ 0x1C01A1490 (EditionLegacyTouchPadMouseAllowTap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TPAAPShouldAllowNow()
{
  unsigned int v0; // ebx
  int v1; // ebp
  int v2; // edi
  LARGE_INTEGER v3; // rax
  __int64 v4; // r9
  signed __int64 v5; // r10
  LARGE_INTEGER v6; // r11
  __int64 v7; // rcx
  unsigned int v8; // esi
  signed __int64 v9; // rax
  union _LARGE_INTEGER v10; // rcx
  __int64 v11; // r8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+20h] BYREF

  v0 = 0;
  v1 = 0;
  v2 = 4;
  v3 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v4 = 0LL;
  v5 = 0LL;
  v6 = v3;
  v7 = (int)gTouchPadParameters[2];
  if ( (_DWORD)v7 )
  {
    v1 = 1;
    v8 = *((_DWORD *)gAapState + v7);
    v4 = _InterlockedCompareExchange64(&gAapState[12], 0LL, 0LL);
    v9 = _InterlockedCompareExchange64(&gAapState[13], 0LL, 0LL);
    v10 = PerformanceFrequency;
    v5 = v9;
    if ( v4 > 0 )
    {
      if ( v9 <= v4 )
      {
        v11 = 1000 * (v6.QuadPart - v4) / PerformanceFrequency.QuadPart;
        v8 = gAapState[5];
      }
      else
      {
        v11 = 1000 * (v6.QuadPart - v9) / PerformanceFrequency.QuadPart;
      }
      if ( v11 < v8 )
        v0 = 1;
    }
  }
  else
  {
    v10 = PerformanceFrequency;
    v2 = 0;
  }
  EtwTraceTouchPadAAP(
    1000 * v4 / v10.QuadPart,
    (unsigned int)(1000 * v5 / v10.QuadPart),
    1000 * v6.QuadPart / v10.QuadPart,
    v0,
    v2);
  if ( v1 )
  {
    WinSqmIncrementDWORD(0LL, 11611LL, 1LL);
    if ( v0 )
      WinSqmIncrementDWORD(0LL, 11610LL, 1LL);
  }
  return v0 ^ 1;
}
