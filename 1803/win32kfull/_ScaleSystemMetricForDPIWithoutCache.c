/*
 * XREFs of _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50
 * Callers:
 *     GetWindowBordersForDpiWithCompatFlags2 @ 0x1C0022430 (GetWindowBordersForDpiWithCompatFlags2.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C0039270 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     _AdjustWindowRectExForDpi @ 0x1C00731D4 (_AdjustWindowRectExForDpi.c)
 *     ?GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z @ 0x1C0073370 (-GetWindowFrameMetricForDpiWithCompatFlags2@@YAHHIK@Z.c)
 *     ?GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z @ 0x1C0073410 (-GetResizeBorderWidthForDpiWithAppCompat2@@YAHIK@Z.c)
 *     FindNCHit @ 0x1C01013E8 (FindNCHit.c)
 *     _EnsureDpiDepSysMetCacheForPlateau @ 0x1C0197CD0 (_EnsureDpiDepSysMetCacheForPlateau.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 * Callees:
 *     GetDPIMETRICSForDpi @ 0x1C0013D64 (GetDPIMETRICSForDpi.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GetDPIServerInfoForDpi @ 0x1C0053A58 (GetDPIServerInfoForDpi.c)
 *     _ScaleSystemMetricForDPIWithoutCache @ 0x1C0197D50 (_ScaleSystemMetricForDPIWithoutCache.c)
 */

__int64 __fastcall ScaleSystemMetricForDPIWithoutCache(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  int v5; // ebx
  __int64 v6; // rax
  INT v7; // edi
  __int64 v8; // rcx
  int v9; // ebx
  int v10; // edi
  int v11; // edi
  int v12; // eax
  __int64 v13; // rcx
  int v14; // edi
  __int64 DPIMETRICSForDpi; // rax
  INT DpiDependentMetric; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // edi
  int v26; // ebx
  int v27; // ebx
  int v28; // ebx
  int v29; // ebx
  int v30; // eax
  unsigned int v31; // edi
  int v32; // ebx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  int v36; // ebx
  int v37; // eax
  int v38; // ebx
  int v39; // eax

  v4 = a2;
  v5 = a1;
  if ( (unsigned int)a1 <= 0x1D && (int)a2 > 0 )
  {
    if ( (int)a1 <= 16 )
    {
      if ( (_DWORD)a1 != 16 )
      {
        if ( (_DWORD)a1 == 2 )
        {
          v8 = 13LL;
        }
        else
        {
          if ( (int)a1 <= 6 )
            goto LABEL_29;
          if ( (int)a1 <= 8 )
          {
            if ( (unsigned __int16)a2 >= 0x90u )
            {
              if ( (unsigned __int16)a2 >= 0xC0u )
              {
                if ( (unsigned __int16)a2 >= 0x120u )
                  return (unsigned int)((unsigned __int16)a2 < 0x180u ? 96 : 128);
                else
                  return 64;
              }
              else
              {
                return 48;
              }
            }
            else
            {
              return 32;
            }
          }
          if ( (_DWORD)a1 != 9 )
          {
            if ( (_DWORD)a1 == 14 || (_DWORD)a1 == 15 )
            {
              v6 = Get96DpiServerInfo(a1, a2, a3, a4);
              return (unsigned int)(EngMulDiv(*(_DWORD *)(v6 + 4), v4, 96) + 3);
            }
LABEL_29:
            DpiDependentMetric = GetDpiDependentMetric(a1, 0x60u);
            v7 = EngMulDiv(DpiDependentMetric, v4, 96);
            if ( v5 > 19 )
            {
              v26 = v5 - 23;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( !v27 )
                {
                  if ( v7 > *(_DWORD *)(GetDPIMETRICSForDpi() + 44) + 2 )
                    return (unsigned int)v7;
                  v25 = *(_DWORD *)(GetDPIMETRICSForDpi() + 44);
                  return (unsigned int)(v25 + 2);
                }
                v28 = v27 - 1;
                if ( v28 )
                {
                  v29 = v28 - 1;
                  if ( v29 )
                  {
                    if ( v29 == 3 )
                    {
                      v30 = 100;
                      if ( v7 < 100 )
                        v30 = v7;
                      if ( v30 <= 0 )
                      {
                        return 0;
                      }
                      else if ( v7 >= 100 )
                      {
                        return 100;
                      }
                    }
                  }
                  else if ( v7 <= *(_DWORD *)(GetDPIMETRICSForDpi() + 28) )
                  {
                    return *(unsigned int *)(GetDPIMETRICSForDpi() + 28);
                  }
                  return (unsigned int)v7;
                }
              }
            }
            else
            {
              if ( v5 == 19 )
              {
                v20 = 6;
LABEL_39:
                if ( v7 > (int)ScaleSystemMetricForDPIWithoutCache(v20, v4) )
                  return (unsigned int)v7;
                return (unsigned int)ScaleSystemMetricForDPIWithoutCache(v20, v4);
              }
              if ( v5 > 1 )
              {
                if ( v5 <= 2 )
                  return (unsigned int)v7;
                if ( v5 > 4 )
                {
                  if ( v5 <= 9 )
                    return (unsigned int)v7;
                  if ( v5 > 12 )
                  {
                    if ( v5 != 13 )
                    {
                      if ( v5 != 18 )
                        return (unsigned int)v7;
                      v20 = 5;
                      goto LABEL_39;
                    }
                    if ( v7 > *(_DWORD *)(GetDPIServerInfoForDpi(v4, v17, v18, v19) + 20) + 2 )
                      return (unsigned int)v7;
                    v25 = *(_DWORD *)(GetDPIServerInfoForDpi(v4, v22, v23, v24) + 20);
                    return (unsigned int)(v25 + 2);
                  }
                }
              }
            }
            if ( v7 <= 8 )
              return 8;
            return (unsigned int)v7;
          }
          v8 = 26LL;
        }
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v8, a2) + 1);
      }
      v9 = 2 * *(_DWORD *)(GetDPIServerInfoForDpi((unsigned int)a2, a2, a3, a4) + 16);
      v10 = ScaleSystemMetricForDPIWithoutCache(29LL, v4) + v9;
      v11 = 2 * (ScaleSystemMetricForDPIWithoutCache(14LL, v4) + v10);
      v12 = ScaleSystemMetricForDPIWithoutCache(12LL, v4);
      v13 = 13LL;
      v14 = v12 + 4 + v11 + 2 * v12;
      return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v13, v4) + v14);
    }
    switch ( (_DWORD)a1 )
    {
      case 0x11:
        v38 = ScaleSystemMetricForDPIWithoutCache(29LL, a2);
        v39 = ScaleSystemMetricForDPIWithoutCache(15LL, v4);
        v13 = 2LL;
        v14 = 2 * (v39 + v38);
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v13, v4) + v14);
      case 0x14:
        v31 = 5;
        v36 = ScaleSystemMetricForDPIWithoutCache(12LL, a2) - 2;
        v37 = ScaleSystemMetricForDPIWithoutCache(5LL, v4);
        v34 = v4;
        if ( v36 < v37 / 2 )
        {
          v35 = 12LL;
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v35, v34) - 2);
        }
        break;
      case 0x15:
        v31 = 6;
        v32 = ScaleSystemMetricForDPIWithoutCache(13LL, a2) - 2;
        v33 = ScaleSystemMetricForDPIWithoutCache(6LL, v4);
        v34 = v4;
        if ( v32 < v33 / 2 )
        {
          v35 = 13LL;
          return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v35, v34) - 2);
        }
        break;
      case 0x16:
        v8 = 24LL;
        return (unsigned int)(ScaleSystemMetricForDPIWithoutCache(v8, a2) + 1);
      default:
        if ( (unsigned int)(a1 - 27) <= 1 )
        {
          DPIMETRICSForDpi = GetDPIMETRICSForDpi();
          return (unsigned int)(((*(_DWORD *)(DPIMETRICSForDpi + 20) + *(_DWORD *)(DPIMETRICSForDpi + 12) + 1) & 0xFFFE)
                              - 1);
        }
        goto LABEL_29;
    }
    return (unsigned int)((int)ScaleSystemMetricForDPIWithoutCache(v31, v34) / 2);
  }
  UserSetLastError(87LL, a2);
  return 0LL;
}
