/*
 * XREFs of InternalGetRealClientRect @ 0x1C010EABC
 * Callers:
 *     SetTiledRect @ 0x1C001F7E4 (SetTiledRect.c)
 *     ParkIcon @ 0x1C00B8DA8 (ParkIcon.c)
 *     xxxArrangeIconicWindows @ 0x1C0153AD0 (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C001CCF4 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1C001D140 (GetMonitorWorkRectForDpi.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetRect @ 0x1C0021568 (GetRect.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  __int64 v9; // rcx
  unsigned __int16 v10; // di
  __m128i *MonitorRectForDpi; // rax
  __m128i v12; // xmm0
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v16; // r8
  unsigned int v17; // eax
  __int64 v18; // r8
  __m128i v19; // [rsp+20h] [rbp-58h] BYREF
  __m128i v20; // [rsp+30h] [rbp-48h] BYREF
  __m128i v21; // [rsp+40h] [rbp-38h] BYREF

  v6 = a4;
  v9 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v9 == 669 )
  {
    v10 = 0;
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo(v9, a2) + 96);
    if ( !a5 )
      v10 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9, a2) >> 8) & 0x1FF;
    if ( (a3 & 4) != 0 )
      MonitorRectForDpi = GetMonitorRectForDpi(&v19, v6, v10);
    else
      MonitorRectForDpi = GetMonitorWorkRectForDpi(&v20, v6, v10);
    v12 = *MonitorRectForDpi;
    result = (__int64)&v21;
    v21 = v12;
    *(__m128i *)a2 = v12;
  }
  else
  {
    result = GetRect(a1, a2, 17);
    if ( (a3 & 1) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v14 + 16) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem();
        result = GetDpiDependentMetric(1LL, DpiForSystem, v16);
        *(_DWORD *)(a2 + 12) += result;
        v14 = *(_QWORD *)(a1 + 40);
      }
      if ( (*(_BYTE *)(v14 + 16) & 2) != 0 )
      {
        v17 = GetDpiForSystem();
        result = GetDpiDependentMetric(0LL, v17, v18);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (a3 & 2) != 0 )
  {
    result = *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7;
    if ( *(int *)(gpsi + 2120LL) >= 0 )
    {
      if ( (int)result <= 1 )
      {
        result = *(unsigned int *)(gpsi + 2088LL);
        *(_DWORD *)(a2 + 12) -= result;
        return result;
      }
      if ( (int)result <= 3 )
      {
        result = *(unsigned int *)(gpsi + 2088LL);
        *(_DWORD *)(a2 + 4) += result;
        return result;
      }
      switch ( (_DWORD)result )
      {
        case 4:
          goto LABEL_26;
        case 5:
LABEL_25:
          result = *(unsigned int *)(gpsi + 2084LL);
          *(_DWORD *)(a2 + 8) -= result;
          return result;
        case 6:
LABEL_26:
          result = *(unsigned int *)(gpsi + 2084LL);
          *(_DWORD *)a2 += result;
          return result;
        case 7:
          goto LABEL_25;
      }
    }
  }
  return result;
}
