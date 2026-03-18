/*
 * XREFs of InternalGetRealClientRect @ 0x1C01112E0
 * Callers:
 *     ParkIcon @ 0x1C0084DD8 (ParkIcon.c)
 *     SetTiledRect @ 0x1C01111A0 (SetTiledRect.c)
 *     xxxArrangeIconicWindows @ 0x1C0159B10 (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C0091AB8 (GetMonitorRectForDpi.c)
 *     GetMonitorWorkRectForDpi @ 0x1C0097130 (GetMonitorWorkRectForDpi.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     GetRect @ 0x1C00CB3EC (GetRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  char v7; // bp
  __int64 v9; // rcx
  unsigned __int16 v10; // di
  __m128i *MonitorRectForDpi; // rax
  __m128i v12; // xmm0
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  __m128i v21; // [rsp+30h] [rbp-48h] BYREF
  __m128i v22; // [rsp+40h] [rbp-38h] BYREF

  v6 = a4;
  v7 = a3;
  v9 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF;
  if ( (_DWORD)v9 == 669 )
  {
    v10 = 0;
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo(v9, a2) + 96);
    if ( !a5 )
      v10 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9, a2, a3, a4) >> 8) & 0x1FF;
    if ( (v7 & 4) != 0 )
      MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(&v20, v6, v10);
    else
      MonitorRectForDpi = GetMonitorWorkRectForDpi(&v21, v6, v10);
    v12 = *MonitorRectForDpi;
    result = (__int64)&v22;
    v22 = v12;
    *(__m128i *)a2 = v12;
  }
  else
  {
    result = GetRect(a1, a2, 17);
    if ( (v7 & 1) != 0 )
    {
      v17 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v17 + 16) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v17, v14, v15, v16);
        result = GetDpiDependentMetric(1LL, DpiForSystem);
        *(_DWORD *)(a2 + 12) += result;
        v17 = *(_QWORD *)(a1 + 40);
      }
      if ( (*(_BYTE *)(v17 + 16) & 2) != 0 )
      {
        v19 = GetDpiForSystem(v17, v14, v15, v16);
        result = GetDpiDependentMetric(0LL, v19);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (v7 & 2) != 0 )
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
