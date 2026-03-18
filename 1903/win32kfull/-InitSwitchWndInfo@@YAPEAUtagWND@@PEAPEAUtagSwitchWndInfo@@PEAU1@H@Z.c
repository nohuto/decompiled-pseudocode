/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01F3D8C
 * Callers:
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     GetDPIServerInfo @ 0x1C0091344 (GetDPIServerInfo.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01F413C (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01F4228 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01F4F44 (_GetNextQueueWindow.c)
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
  __int64 v17; // r9
  int v18; // r14d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rsi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v29; // rcx
  int v30; // edi
  INT v31; // eax
  int v32; // edx
  __int64 PrevTaskIndex; // r8
  char *v34; // rdx
  int DeferredContext; // ebp
  int v36; // eax
  bool v37; // zf
  int v38; // r14d
  int DeferredContext_high; // r12d
  int v40; // eax
  int v41; // r13d
  int v42; // r9d
  int v43; // edx
  _DWORD *DPIServerInfo; // rbx
  __m128i *MonitorRect; // rax
  int v46; // edi
  int v47; // r14d
  unsigned __int64 v48; // r9
  unsigned __int64 v49; // xmm0_8
  int v50; // r10d
  __int64 v51; // r8
  __int64 v52; // kr00_8
  __int64 v53; // r9
  int v54; // eax
  int v55; // r11d
  __int64 v56; // rdx
  int v57; // [rsp+20h] [rbp-58h] BYREF
  int v58; // [rsp+24h] [rbp-54h]
  __int128 v59[5]; // [rsp+28h] [rbp-50h] BYREF
  HWND *v61; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 456LL);
  v9 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  *a1 = 0LL;
  *(_QWORD *)&v59[0] = v9;
  v10 = (struct tagBWL *)BuildHwndList(*(struct tagWND **)(*(_QWORD *)(v8 + 24) + 112LL));
  v14 = v10;
  if ( !v10 )
  {
LABEL_28:
    LOBYTE(v3) = GetKeyState(0x10u, v11, v12, v13) < 0;
    return (struct tagWND *)GetNextQueueWindow(a2, v3, 0LL);
  }
  v18 = _RemoveNonTaskWindows(v10, a2, &v57, &v61);
  if ( v18 < 2 )
  {
    if ( v18 != 1
      || (LOBYTE(v15) = 1, v19 = HMValidateHandleNoSecure(*((_QWORD *)v14 + 4), v15, v16, v17), (v7 = v19) != 0)
      && (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 23LL) & 7) == 1
      && a2 == (struct tagWND *)v19 )
    {
      v7 = *(_QWORD *)(v8 + 168);
    }
LABEL_9:
    FreeHwndList(v14);
    if ( v7 )
      return (struct tagWND *)v7;
    goto LABEL_28;
  }
  v20 = Win32AllocPoolWithQuota(120LL, 1818325845LL);
  v25 = v20;
  if ( !v20 )
    goto LABEL_9;
  *(_QWORD *)(v20 + 8) = gptiCurrent;
  *(_QWORD *)(v20 + 16) = v14;
  *(_QWORD *)(v20 + 24) = v61;
  *(_DWORD *)(v20 + 40) = v18;
  *(_DWORD *)(v20 + 44) = v18;
  DpiForSystem = GetDpiForSystem(v22, v21, v23, v24);
  DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
  v29 = *(_QWORD *)(gptiCurrent + 416LL);
  v30 = DpiDependentMetric;
  LODWORD(v61) = DpiDependentMetric;
  v31 = EngMulDiv(11, *(unsigned __int16 *)(v29 + 284), 96);
  v32 = v57;
  *(_DWORD *)(v25 + 112) = v30;
  v58 = v30 + v31;
  *(_DWORD *)(v25 + 116) = v30 + v31;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v25, v32, 1, a3 == 0);
  v34 = (char *)v14 + 8 * PrevTaskIndex + 32;
  DeferredContext = v18;
  *(_QWORD *)(v25 + 32) = v34;
  if ( SLODWORD(WPP_MAIN_CB.Dpc.DeferredContext) < v18 )
    DeferredContext = (int)WPP_MAIN_CB.Dpc.DeferredContext;
  v36 = v18 / DeferredContext;
  v37 = v18 == DeferredContext * (v18 / DeferredContext);
  v38 = v18 % DeferredContext;
  DeferredContext_high = !v37 + v36;
  if ( DeferredContext_high <= SHIDWORD(WPP_MAIN_CB.Dpc.DeferredContext) )
  {
    v40 = 0;
  }
  else
  {
    DeferredContext_high = HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext);
    v38 = DeferredContext;
    *(_DWORD *)(v25 + 44) = DeferredContext * HIDWORD(WPP_MAIN_CB.Dpc.DeferredContext);
    v40 = 1;
  }
  *(_DWORD *)(v25 + 48) = v40;
  v41 = DeferredContext;
  *(_DWORD *)(v25 + 56) = DeferredContext;
  if ( v38 )
    v41 = v38;
  *(_DWORD *)(v25 + 60) = DeferredContext_high;
  *(_DWORD *)(v25 + 64) = v41;
  if ( (int)PrevTaskIndex < DeferredContext * DeferredContext_high )
  {
    v42 = (int)PrevTaskIndex / DeferredContext;
    v43 = (int)PrevTaskIndex % DeferredContext;
  }
  else
  {
    v42 = (DeferredContext_high >> 2) + 1;
    v43 = (DeferredContext >> 2) + 1;
    v3 = PrevTaskIndex - DeferredContext * v42 - v43;
  }
  *(_DWORD *)(v25 + 52) = v3;
  *(_DWORD *)(v25 + 72) = v42;
  *(_DWORD *)(v25 + 68) = v43;
  DPIServerInfo = (_DWORD *)GetDPIServerInfo();
  MonitorRect = (__m128i *)GetMonitorRect(v59, *(__int64 *)&v59[0]);
  v46 = DPIServerInfo[1];
  v47 = v58;
  v48 = MonitorRect->m128i_i64[0];
  v49 = _mm_srli_si128(*MonitorRect, 8).m128i_u64[0];
  v50 = v49 - *(_OWORD *)MonitorRect;
  if ( v50 >= (int)v61 / 2 + DPIServerInfo[4] + v58 * LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) + 6 * v46 )
    v50 = (int)v61 / 2 + DPIServerInfo[4] + v58 * LODWORD(WPP_MAIN_CB.Dpc.DeferredContext) + 6 * v46;
  v51 = (unsigned int)DPIServerInfo[5];
  v52 = (int)DPIServerInfo[5];
  *(_DWORD *)(v25 + 76) = v50;
  v53 = HIDWORD(v48);
  v54 = v47 * DeferredContext_high + (_DWORD)v61 + v52 / 2;
  v55 = HIDWORD(v49) - v53;
  if ( DeferredContext_high != 1 )
    v41 = DeferredContext;
  v56 = (unsigned int)((int)v61 >> 1);
  *(_DWORD *)(v25 + 88) = v56;
  LOBYTE(v56) = 1;
  *(_DWORD *)(v25 + 84) = (v50 + -4 * v46 - v47 * v41) >> 1;
  if ( v55 >= v54 + 2 * (int)v51 )
    v55 = v54 + 2 * v51;
  *(_DWORD *)(v25 + 80) = v55;
  *(_QWORD *)v25 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v25;
  *a1 = (struct tagSwitchWndInfo *)v25;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v25 + 32), v56, v51, v53);
}
