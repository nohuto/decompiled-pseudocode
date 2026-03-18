/*
 * XREFs of InternalGetRealClientRect @ 0x1C00F3E30
 * Callers:
 *     SetTiledRect @ 0x1C003813C (SetTiledRect.c)
 *     ParkIcon @ 0x1C0066FAC (ParkIcon.c)
 *     xxxArrangeIconicWindows @ 0x1C0135280 (xxxArrangeIconicWindows.c)
 * Callees:
 *     GetMonitorWorkRectForDpi @ 0x1C0035AB4 (GetMonitorWorkRectForDpi.c)
 *     GetRect @ 0x1C0038BE0 (GetRect.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetMonitorRectForDpi @ 0x1C00737A0 (GetMonitorRectForDpi.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall InternalGetRealClientRect(__int64 a1, int *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rsi
  char v7; // bp
  __int64 v9; // rcx
  unsigned __int16 v10; // di
  __int128 *MonitorRectForDpi; // rax
  __int128 v12; // xmm0
  __int64 result; // rax
  __int64 v14; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-48h] BYREF
  __int128 v19; // [rsp+40h] [rbp-38h] BYREF

  v6 = a4;
  v7 = a3;
  v9 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x3FFF;
  if ( (_DWORD)v9 == 669 )
  {
    v10 = 0;
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo(v9, a2, a3, 0LL) + 96);
    if ( !a5 )
      v10 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9, (__int64)a2) >> 8) & 0x1FF;
    if ( (v7 & 4) != 0 )
      MonitorRectForDpi = (__int128 *)GetMonitorRectForDpi(&v17, v6, v10);
    else
      MonitorRectForDpi = GetMonitorWorkRectForDpi(&v18, v6, v10);
    v12 = *MonitorRectForDpi;
    result = (__int64)&v19;
    v19 = v12;
    *(_OWORD *)a2 = v12;
  }
  else
  {
    result = GetRect(a1, a2, 17);
    if ( (v7 & 1) != 0 )
    {
      v14 = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(v14 + 16) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem();
        result = GetDpiDependentMetric(1LL, DpiForSystem);
        a2[3] += result;
        v14 = *(_QWORD *)(a1 + 40);
      }
      if ( (*(_BYTE *)(v14 + 16) & 2) != 0 )
      {
        v16 = GetDpiForSystem();
        result = GetDpiDependentMetric(0LL, v16);
        a2[2] += result;
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
        a2[3] -= result;
        return result;
      }
      if ( (int)result <= 3 )
      {
        result = *(unsigned int *)(gpsi + 2088LL);
        a2[1] += result;
        return result;
      }
      switch ( (_DWORD)result )
      {
        case 4:
          goto LABEL_26;
        case 5:
LABEL_25:
          result = *(unsigned int *)(gpsi + 2084LL);
          a2[2] -= result;
          return result;
        case 6:
LABEL_26:
          result = *(unsigned int *)(gpsi + 2084LL);
          *a2 += result;
          return result;
        case 7:
          goto LABEL_25;
      }
    }
  }
  return result;
}
