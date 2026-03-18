/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01DDE74
 * Callers:
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     GetDPIServerInfo @ 0x1C00AB9F8 (GetDPIServerInfo.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01DE224 (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01DE318 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01DF048 (_GetNextQueueWindow.c)
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
  int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned int DpiForSystem; // eax
  __int64 v22; // r8
  int DpiDependentMetric; // eax
  __int64 v24; // rcx
  int v25; // edi
  INT v26; // eax
  int v27; // edx
  __int64 PrevTaskIndex; // r8
  char *v29; // rdx
  int v30; // ebp
  int v31; // eax
  bool v32; // zf
  int v33; // r14d
  __int64 v34; // rcx
  int v35; // r12d
  int v36; // eax
  int v37; // r13d
  int v38; // r9d
  __int64 v39; // rdx
  _DWORD *DPIServerInfo; // rbx
  __m128i *MonitorRect; // rax
  int v42; // edi
  int v43; // r14d
  __int64 v44; // r9
  unsigned __int64 v45; // xmm0_8
  int v46; // r10d
  int v47; // r8d
  int v48; // eax
  int v49; // r11d
  __int64 v50; // rdx
  int v51; // [rsp+20h] [rbp-58h] BYREF
  int v52; // [rsp+24h] [rbp-54h]
  __m128i v53[5]; // [rsp+28h] [rbp-50h] BYREF
  HWND *v55; // [rsp+98h] [rbp+20h] BYREF

  v3 = 0;
  v7 = 0LL;
  v8 = *(_QWORD *)(gptiCurrent + 464LL);
  v9 = *(_QWORD *)(GetDispInfo(a1, a2) + 96);
  *a1 = 0LL;
  v53[0].m128i_i64[0] = v9;
  v10 = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(v8 + 24) + 88LL), 2, 0LL);
  v14 = v10;
  if ( !v10 )
  {
LABEL_28:
    LOBYTE(v3) = GetKeyState(0x10u, v11, v12, v13) < 0;
    return (struct tagWND *)GetNextQueueWindow(a2, v3, 0LL);
  }
  v16 = _RemoveNonTaskWindows(v10, a2, &v51, &v55);
  if ( v16 < 2 )
  {
    if ( v16 != 1
      || (LOBYTE(v15) = 1, v17 = HMValidateHandleNoSecure(*((_QWORD *)v14 + 4), v15), (v7 = v17) != 0)
      && (*(_BYTE *)(*(_QWORD *)(v17 + 40) + 23LL) & 7) == 1
      && a2 == (struct tagWND *)v17 )
    {
      v7 = *(_QWORD *)(v8 + 168);
    }
LABEL_9:
    FreeHwndList(v14);
    if ( v7 )
      return (struct tagWND *)v7;
    goto LABEL_28;
  }
  v18 = Win32AllocPoolWithQuota(120LL, 1818325845LL);
  v19 = v18;
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 8) = gptiCurrent;
  *(_QWORD *)(v18 + 16) = v14;
  *(_QWORD *)(v18 + 24) = v55;
  *(_DWORD *)(v18 + 40) = v16;
  *(_DWORD *)(v18 + 44) = v16;
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem, v22);
  v24 = *(_QWORD *)(gptiCurrent + 424LL);
  v25 = DpiDependentMetric;
  LODWORD(v55) = DpiDependentMetric;
  v26 = EngMulDiv(11, *(unsigned __int16 *)(v24 + 284), 96);
  v27 = v51;
  *(_DWORD *)(v19 + 112) = v25;
  v52 = v25 + v26;
  *(_DWORD *)(v19 + 116) = v25 + v26;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v19, v27, 1, a3 == 0);
  v29 = (char *)v14 + 8 * PrevTaskIndex + 32;
  v30 = v16;
  *(_QWORD *)(v19 + 32) = v29;
  if ( gnFastAltTabColumns < v16 )
    v30 = gnFastAltTabColumns;
  v31 = v16 / v30;
  v32 = v16 == v30 * (v16 / v30);
  v33 = v16 % v30;
  v34 = !v32;
  v35 = v34 + v31;
  if ( (int)v34 + v31 <= gnFastAltTabRows )
  {
    v36 = 0;
  }
  else
  {
    v35 = gnFastAltTabRows;
    v33 = v30;
    *(_DWORD *)(v19 + 44) = v30 * gnFastAltTabRows;
    v36 = 1;
  }
  *(_DWORD *)(v19 + 48) = v36;
  v37 = v30;
  *(_DWORD *)(v19 + 56) = v30;
  if ( v33 )
    v37 = v33;
  *(_DWORD *)(v19 + 60) = v35;
  *(_DWORD *)(v19 + 64) = v37;
  if ( (int)PrevTaskIndex < v30 * v35 )
  {
    v38 = (int)PrevTaskIndex / v30;
    v34 = (unsigned int)(v30 * ((int)PrevTaskIndex / v30));
    v39 = (unsigned int)((int)PrevTaskIndex % v30);
  }
  else
  {
    v38 = (v35 >> 2) + 1;
    v39 = (unsigned int)((v30 >> 2) + 1);
    v3 = PrevTaskIndex - v30 * v38 - v39;
  }
  *(_DWORD *)(v19 + 52) = v3;
  *(_DWORD *)(v19 + 72) = v38;
  *(_DWORD *)(v19 + 68) = v39;
  DPIServerInfo = (_DWORD *)GetDPIServerInfo(v34, v39);
  MonitorRect = GetMonitorRect(v53, v53[0].m128i_i64[0]);
  v42 = DPIServerInfo[1];
  v43 = v52;
  v44 = MonitorRect->m128i_i64[0];
  v45 = _mm_srli_si128(*MonitorRect, 8).m128i_u64[0];
  v46 = v45 - *(_OWORD *)MonitorRect;
  if ( v46 >= (int)v55 / 2 + DPIServerInfo[4] + v52 * gnFastAltTabColumns + 6 * v42 )
    v46 = (int)v55 / 2 + DPIServerInfo[4] + v52 * gnFastAltTabColumns + 6 * v42;
  v47 = DPIServerInfo[5];
  *(_DWORD *)(v19 + 76) = v46;
  v48 = v43 * v35 + (_DWORD)v55 + v47 / 2;
  v49 = HIDWORD(v45) - HIDWORD(v44);
  if ( v35 != 1 )
    v37 = v30;
  v50 = (unsigned int)((int)v55 >> 1);
  *(_DWORD *)(v19 + 88) = v50;
  LOBYTE(v50) = 1;
  *(_DWORD *)(v19 + 84) = (v46 + -4 * v42 - v43 * v37) >> 1;
  if ( v49 >= v48 + 2 * v47 )
    v49 = v48 + 2 * v47;
  *(_DWORD *)(v19 + 80) = v49;
  *(_QWORD *)v19 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v19;
  *a1 = (struct tagSwitchWndInfo *)v19;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v19 + 32), v50);
}
