/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3C0C
 * Callers:
 *     xxxNextWindow @ 0x1C01F5018 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 * Callees:
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     GetDPIServerInfo @ 0x1C012C168 (GetDPIServerInfo.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F3FBC (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01F40A8 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F4DC4 (_GetNextQueueWindow.c)
 */

struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  struct tagBWL *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagBWL *v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // r14d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rsi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v27; // rcx
  int v28; // edi
  INT v29; // eax
  int v30; // edx
  __int64 PrevTaskIndex; // r8
  char *v32; // rdx
  int DeferredContext; // ebp
  int v34; // eax
  bool v35; // zf
  int v36; // r14d
  __int64 v37; // rcx
  int DeferredContext_high; // r12d
  int v39; // eax
  int v40; // r13d
  int v41; // r9d
  __int64 v42; // rdx
  _DWORD *DPIServerInfo; // rbx
  __m128i *MonitorRect; // rax
  int v45; // edi
  int v46; // r14d
  __int64 v47; // r9
  unsigned __int64 v48; // xmm0_8
  int v49; // r10d
  __int64 v50; // r8
  __int64 v51; // kr00_8
  int v52; // eax
  int v53; // r11d
  __int64 v54; // rdx
  int v55; // [rsp+20h] [rbp-58h] BYREF
  int v56; // [rsp+24h] [rbp-54h]
  __int128 v57[5]; // [rsp+28h] [rbp-50h] BYREF
  HWND *v59; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 456LL);
  v9 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  *a1 = 0LL;
  *(_QWORD *)&v57[0] = v9;
  v10 = (struct tagBWL *)BuildHwndList(*(struct tagWND **)(*(_QWORD *)(v8 + 24) + 112LL));
  v14 = v10;
  if ( !v10 )
  {
LABEL_28:
    LOBYTE(v3) = GetKeyState(0x10u, v11, v12, v13) < 0;
    return (struct tagWND *)GetNextQueueWindow(a2, v3, 0LL);
  }
  v17 = _RemoveNonTaskWindows(v10, a2, &v55, &v59);
  if ( v17 < 2 )
  {
    if ( v17 != 1
      || (LOBYTE(v15) = 1, v18 = HMValidateHandleNoSecure(*((_QWORD *)v14 + 4), v15, v16), (v7 = v18) != 0)
      && (*(_BYTE *)(*(_QWORD *)(v18 + 40) + 23LL) & 7) == 1
      && a2 == (struct tagWND *)v18 )
    {
      v7 = *(_QWORD *)(v8 + 168);
    }
LABEL_9:
    FreeHwndList(v14);
    if ( v7 )
      return (struct tagWND *)v7;
    goto LABEL_28;
  }
  v19 = Win32AllocPoolWithQuota(120LL, 1818325845LL);
  v23 = v19;
  if ( !v19 )
    goto LABEL_9;
  *(_QWORD *)(v19 + 8) = gptiCurrent;
  *(_QWORD *)(v19 + 16) = v14;
  *(_QWORD *)(v19 + 24) = v59;
  *(_DWORD *)(v19 + 40) = v17;
  *(_DWORD *)(v19 + 44) = v17;
  DpiForSystem = GetDpiForSystem(v21, v20, v22);
  DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
  v27 = *(_QWORD *)(gptiCurrent + 416LL);
  v28 = DpiDependentMetric;
  LODWORD(v59) = DpiDependentMetric;
  v29 = EngMulDiv(11, *(unsigned __int16 *)(v27 + 284), 96);
  v30 = v55;
  *(_DWORD *)(v23 + 112) = v28;
  v56 = v28 + v29;
  *(_DWORD *)(v23 + 116) = v28 + v29;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v23, v30, 1, a3 == 0);
  v32 = (char *)v14 + 8 * PrevTaskIndex + 32;
  DeferredContext = v17;
  *(_QWORD *)(v23 + 32) = v32;
  if ( SLODWORD(WPP_MAIN_CB.Dpc.DeferredContext) < v17 )
    DeferredContext = (int)WPP_MAIN_CB.Dpc.DeferredContext;
  v34 = v17 / DeferredContext;
  v35 = v17 == DeferredContext * (v17 / DeferredContext);
  v36 = v17 % DeferredContext;
  v37 = !v35;
  DeferredContext_high = v37 + v34;
  if ( (int)v37 + v34 <= SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) )
  {
    v39 = 0;
  }
  else
  {
    DeferredContext_high = HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext);
    v36 = DeferredContext;
    *(_DWORD *)(v23 + 44) = DeferredContext * HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext);
    v39 = 1;
  }
  *(_DWORD *)(v23 + 48) = v39;
  v40 = DeferredContext;
  *(_DWORD *)(v23 + 56) = DeferredContext;
  if ( v36 )
    v40 = v36;
  *(_DWORD *)(v23 + 60) = DeferredContext_high;
  *(_DWORD *)(v23 + 64) = v40;
  if ( (int)PrevTaskIndex < DeferredContext * DeferredContext_high )
  {
    v41 = (int)PrevTaskIndex / DeferredContext;
    v37 = (unsigned int)(DeferredContext * ((int)PrevTaskIndex / DeferredContext));
    v42 = (unsigned int)((int)PrevTaskIndex % DeferredContext);
  }
  else
  {
    v41 = (DeferredContext_high >> 2) + 1;
    v42 = (unsigned int)((DeferredContext >> 2) + 1);
    PrevTaskIndex = (unsigned int)(PrevTaskIndex - DeferredContext * v41 - v42);
    v3 = PrevTaskIndex;
  }
  *(_DWORD *)(v23 + 52) = v3;
  *(_DWORD *)(v23 + 72) = v41;
  *(_DWORD *)(v23 + 68) = v42;
  DPIServerInfo = (_DWORD *)GetDPIServerInfo(v37, v42, PrevTaskIndex);
  MonitorRect = (__m128i *)GetMonitorRect(v57, *(__int64 *)&v57[0]);
  v45 = DPIServerInfo[1];
  v46 = v56;
  v47 = MonitorRect->m128i_i64[0];
  v48 = _mm_srli_si128(*MonitorRect, 8).m128i_u64[0];
  v49 = v48 - *(_OWORD *)MonitorRect;
  if ( v49 >= (int)v59 / 2 + DPIServerInfo[4] + v56 * LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) + 6 * v45 )
    v49 = (int)v59 / 2 + DPIServerInfo[4] + v56 * LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) + 6 * v45;
  v50 = (unsigned int)DPIServerInfo[5];
  v51 = (int)DPIServerInfo[5];
  *(_DWORD *)(v23 + 76) = v49;
  v52 = v46 * DeferredContext_high + (_DWORD)v59 + v51 / 2;
  v53 = HIDWORD(v48) - HIDWORD(v47);
  if ( DeferredContext_high != 1 )
    v40 = DeferredContext;
  v54 = (unsigned int)((int)v59 >> 1);
  *(_DWORD *)(v23 + 88) = v54;
  LOBYTE(v54) = 1;
  *(_DWORD *)(v23 + 84) = (v49 + -4 * v45 - v46 * v40) >> 1;
  if ( v53 >= v52 + 2 * (int)v50 )
    v53 = v52 + 2 * v50;
  *(_DWORD *)(v23 + 80) = v53;
  *(_QWORD *)v23 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v23;
  *a1 = (struct tagSwitchWndInfo *)v23;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v23 + 32), v54, v50);
}
