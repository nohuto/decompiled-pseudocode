/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0
 * Callers:
 *     _AdjustWindowRectExForDpi @ 0x1C0033330 (_AdjustWindowRectExForDpi.c)
 *     xxxCalcClientRect @ 0x1C003358C (xxxCalcClientRect.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0033F60 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0033FA4 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0049C90 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C01CCB20 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDPIMETRICSForDpi @ 0x1C012A5CC (GetDPIMETRICSForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C012AF80 (GetDPIServerInfoForDpi.c)
 *     GetCursorSizeFromIndex @ 0x1C013CAA4 (GetCursorSizeFromIndex.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C01CCBA0 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // r14d
  __int64 v7; // rax
  INT v8; // edi
  __int64 v9; // rcx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // eax
  __int64 v15; // rcx
  int v16; // edi
  __int64 DPIMETRICSForDpi; // rax
  INT DpiDependentMetric; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // edi
  int v25; // ebx
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // eax

  v4 = a2;
  v5 = a1;
  if ( (unsigned int)a1 <= 0x1D )
  {
    v6 = 0;
    if ( (int)a2 > 0 )
    {
      if ( (int)a1 <= 16 )
      {
        if ( (_DWORD)a1 != 16 )
        {
          if ( (_DWORD)a1 == 2 )
          {
            v9 = 13LL;
          }
          else
          {
            if ( (int)a1 <= 6 )
              goto LABEL_29;
            if ( (int)a1 <= 8 )
            {
              if ( (unsigned int)a2 >= 0x90 )
              {
                if ( (unsigned int)a2 >= 0xC0 )
                {
                  if ( (unsigned int)a2 >= 0x120 )
                    v6 = 4 - ((unsigned int)a2 < 0x180);
                  else
                    v6 = 2;
                }
                else
                {
                  v6 = 1;
                }
              }
              return (unsigned int)GetCursorSizeFromIndex(v6);
            }
            if ( (_DWORD)a1 != 9 )
            {
              if ( (_DWORD)a1 == 14 || (_DWORD)a1 == 15 )
              {
                v7 = Get96DpiServerInfo(a1, a2, a3);
                return (unsigned int)(EngMulDiv(*(_DWORD *)(v7 + 4), v4, 96) + 3);
              }
LABEL_29:
              DpiDependentMetric = GetDpiDependentMetric(a1, 0x60u);
              v8 = EngMulDiv(DpiDependentMetric, v4, 96);
              if ( v5 > 19 )
              {
                v25 = v5 - 23;
                if ( v25 )
                {
                  v26 = v25 - 1;
                  if ( !v26 )
                  {
                    if ( v8 > *(_DWORD *)(GetDPIMETRICSForDpi() + 44) + 2 )
                      return (unsigned int)v8;
                    v24 = *(_DWORD *)(GetDPIMETRICSForDpi() + 44);
                    return (unsigned int)(v24 + 2);
                  }
                  v27 = v26 - 1;
                  if ( v27 )
                  {
                    v28 = v27 - 1;
                    if ( v28 )
                    {
                      if ( v28 == 3 )
                      {
                        v29 = 100;
                        if ( v8 < 100 )
                          v29 = v8;
                        if ( v29 <= 0 )
                        {
                          return 0;
                        }
                        else if ( v8 >= 100 )
                        {
                          return 100;
                        }
                      }
                    }
                    else if ( v8 <= *(_DWORD *)(GetDPIMETRICSForDpi() + 28) )
                    {
                      return *(unsigned int *)(GetDPIMETRICSForDpi() + 28);
                    }
                    return (unsigned int)v8;
                  }
                }
              }
              else
              {
                if ( v5 == 19 )
                {
                  if ( v8 > (int)ScaleSystemMetricForDPIWithoutCache(6LL, v4) )
                    return (unsigned int)v8;
                  v21 = 6LL;
                  return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v21, v4);
                }
                if ( v5 > 1 )
                {
                  if ( v5 <= 2 )
                    return (unsigned int)v8;
                  if ( v5 > 4 )
                  {
                    if ( v5 <= 9 )
                      return (unsigned int)v8;
                    if ( v5 > 12 )
                    {
                      if ( v5 != 13 )
                      {
                        if ( v5 != 18 || v8 > (int)ScaleSystemMetricForDPIWithoutCache(5LL, v4) )
                          return (unsigned int)v8;
                        v21 = 5LL;
                        return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v21, v4);
                      }
                      if ( v8 > *(_DWORD *)(GetDPIServerInfoForDpi(v4, v19, v20) + 20) + 2 )
                        return (unsigned int)v8;
                      v24 = *(_DWORD *)(GetDPIServerInfoForDpi(v4, v22, v23) + 20);
                      return (unsigned int)(v24 + 2);
                    }
                  }
                }
              }
              if ( v8 <= 8 )
                return 8;
              return (unsigned int)v8;
            }
            v9 = 26LL;
          }
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v9, a2) + 1);
        }
        v11 = 2 * *(_DWORD *)(GetDPIServerInfoForDpi((unsigned int)a2, a2, a3) + 16);
        v12 = ScaleSystemMetricForDPIWithoutCache(29LL, v4) + v11;
        v13 = 2 * (v12 + ScaleSystemMetricForDPIWithoutCache(14LL, v4));
        v14 = ScaleSystemMetricForDPIWithoutCache(12LL, v4);
        v15 = 13LL;
        v16 = v14 + 4 + v13 + 2 * v14;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v15, v4) + v16);
      }
      switch ( (_DWORD)a1 )
      {
        case 0x11:
          v37 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
          v38 = ScaleSystemMetricForDPIWithoutCache(15LL, v4);
          v15 = 2LL;
          v16 = 2 * (v38 + v37);
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v15, v4) + v16);
        case 0x14:
          v35 = ScaleSystemMetricForDPIWithoutCache(12LL, a2) - 2;
          v36 = ScaleSystemMetricForDPIWithoutCache(5LL, v4);
          v32 = v4;
          if ( v35 < v36 / 2 )
          {
            v33 = 12LL;
            return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v33, v32) - 2);
          }
          v34 = 5LL;
          break;
        case 0x15:
          v30 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) - 2;
          v31 = ScaleSystemMetricForDPIWithoutCache(6LL, v4);
          v32 = v4;
          if ( v30 < v31 / 2 )
          {
            v33 = 13LL;
            return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v33, v32) - 2);
          }
          v34 = 6LL;
          break;
        case 0x16:
          v9 = 24LL;
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v9, a2) + 1);
        default:
          if ( (unsigned int)(a1 - 27) <= 1 )
          {
            DPIMETRICSForDpi = GetDPIMETRICSForDpi();
            return (unsigned int)(((*(_DWORD *)(DPIMETRICSForDpi + 20) + *(_DWORD *)(DPIMETRICSForDpi + 12) + 1) & 0xFFFE)
                                - 1);
          }
          goto LABEL_29;
      }
      return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v34, v32) / 2);
    }
  }
  UserSetLastError(87LL, a2, a3, a4);
  return 0LL;
}
