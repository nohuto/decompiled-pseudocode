/*
 * XREFs of ?InitSwitchWndInfo@@YAPEAUtagWND@@PEAPEAUtagSwitchWndInfo@@PEAU1@H@Z @ 0x1C01BB370
 * Callers:
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C003BA94 (GetDpiForSystem.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     GetDPIServerInfo @ 0x1C00FB01C (GetDPIServerInfo.c)
 *     ?NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z @ 0x1C01BB70C (-NextPrevTaskIndex@@YAHPEAUtagSwitchWndInfo@@HHH@Z.c)
 *     ?_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z @ 0x1C01BB7F4 (-_RemoveNonTaskWindows@@YAHPEAUtagBWL@@PEAUtagWND@@PEAHPEAPEAPEAUHWND__@@@Z.c)
 *     _GetNextQueueWindow @ 0x1C01BC474 (_GetNextQueueWindow.c)
 */

struct tagWND *__fastcall InitSwitchWndInfo(struct tagSwitchWndInfo **a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // r13d
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  struct tagBWL *v11; // rax
  __int64 v12; // rdx
  struct tagBWL *v13; // rbp
  __int64 v14; // rdx
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // eax
  __int64 v22; // rcx
  int v23; // edi
  INT v24; // eax
  int v25; // edx
  __int64 PrevTaskIndex; // r8
  char *v27; // rdx
  int v28; // ebp
  int v29; // eax
  bool v30; // zf
  int v31; // r14d
  __int64 v32; // rcx
  int v33; // r12d
  int v34; // eax
  int v35; // r13d
  int v36; // r9d
  __int64 v37; // rdx
  _DWORD *DPIServerInfo; // rbx
  __m128i *MonitorRect; // rax
  int v40; // edi
  int v41; // r14d
  __int64 v42; // r9
  unsigned __int64 v43; // xmm0_8
  int v44; // r10d
  int v45; // r8d
  int v46; // eax
  int v47; // r11d
  __int64 v48; // rdx
  int v49; // [rsp+20h] [rbp-58h] BYREF
  int v50; // [rsp+24h] [rbp-54h]
  __int128 v51[5]; // [rsp+28h] [rbp-50h] BYREF
  HWND *v53; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a3;
  v8 = 0LL;
  v9 = *(_QWORD *)(gptiCurrent + 456LL);
  v10 = *(_QWORD *)(GetDispInfo(a1, a2, a3, a4) + 96);
  *a1 = 0LL;
  *(_QWORD *)&v51[0] = v10;
  v11 = BuildHwndList(*(_QWORD **)(*(_QWORD *)(v9 + 24) + 88LL), 2, 0LL);
  v13 = v11;
  if ( !v11 )
  {
LABEL_28:
    LOBYTE(v4) = (GetKeyState(0x10u, v12) & 0x8000u) != 0LL;
    return (struct tagWND *)GetNextQueueWindow(a2, v4, 0LL);
  }
  v15 = _RemoveNonTaskWindows(v11, a2, &v49, &v53);
  if ( v15 < 2 )
  {
    if ( v15 != 1
      || (LOBYTE(v14) = 1, v16 = HMValidateHandleNoSecure(*((_QWORD *)v13 + 4), v14), (v8 = v16) != 0)
      && (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 23LL) & 7) == 1
      && a2 == (struct tagWND *)v16 )
    {
      v8 = *(_QWORD *)(v9 + 168);
    }
LABEL_9:
    FreeHwndList(v13);
    if ( v8 )
      return (struct tagWND *)v8;
    goto LABEL_28;
  }
  v17 = Win32AllocPoolWithQuota(120LL, 1818325845LL);
  v18 = v17;
  if ( !v17 )
    goto LABEL_9;
  *(_QWORD *)(v17 + 8) = gptiCurrent;
  *(_QWORD *)(v17 + 16) = v13;
  *(_QWORD *)(v17 + 24) = v53;
  *(_DWORD *)(v17 + 40) = v15;
  *(_DWORD *)(v17 + 44) = v15;
  DpiForSystem = GetDpiForSystem();
  DpiDependentMetric = GetDpiDependentMetric(5LL, DpiForSystem);
  v22 = *(_QWORD *)(gptiCurrent + 416LL);
  v23 = DpiDependentMetric;
  LODWORD(v53) = DpiDependentMetric;
  v24 = EngMulDiv(11, *(unsigned __int16 *)(v22 + 284), 96);
  v25 = v49;
  *(_DWORD *)(v18 + 112) = v23;
  v50 = v23 + v24;
  *(_DWORD *)(v18 + 116) = v23 + v24;
  PrevTaskIndex = (int)NextPrevTaskIndex((struct tagSwitchWndInfo *)v18, v25, 1, v5 == 0);
  v27 = (char *)v13 + 8 * PrevTaskIndex + 32;
  v28 = v15;
  *(_QWORD *)(v18 + 32) = v27;
  if ( gnFastAltTabColumns < v15 )
    v28 = gnFastAltTabColumns;
  v29 = v15 / v28;
  v30 = v15 == v28 * (v15 / v28);
  v31 = v15 % v28;
  v32 = !v30;
  v33 = v32 + v29;
  if ( (int)v32 + v29 <= gnFastAltTabRows )
  {
    v34 = 0;
  }
  else
  {
    v33 = gnFastAltTabRows;
    v31 = v28;
    *(_DWORD *)(v18 + 44) = v28 * gnFastAltTabRows;
    v34 = 1;
  }
  *(_DWORD *)(v18 + 48) = v34;
  v35 = v28;
  *(_DWORD *)(v18 + 56) = v28;
  if ( v31 )
    v35 = v31;
  *(_DWORD *)(v18 + 60) = v33;
  *(_DWORD *)(v18 + 64) = v35;
  if ( (int)PrevTaskIndex < v28 * v33 )
  {
    v36 = (int)PrevTaskIndex / v28;
    v32 = (unsigned int)(v28 * ((int)PrevTaskIndex / v28));
    v37 = (unsigned int)((int)PrevTaskIndex % v28);
  }
  else
  {
    v36 = (v33 >> 2) + 1;
    v37 = (unsigned int)((v28 >> 2) + 1);
    v4 = PrevTaskIndex - v28 * v36 - v37;
  }
  *(_DWORD *)(v18 + 52) = v4;
  *(_DWORD *)(v18 + 72) = v36;
  *(_DWORD *)(v18 + 68) = v37;
  DPIServerInfo = (_DWORD *)GetDPIServerInfo(v32, v37);
  MonitorRect = (__m128i *)GetMonitorRect(v51, *(__int64 *)&v51[0]);
  v40 = DPIServerInfo[1];
  v41 = v50;
  v42 = MonitorRect->m128i_i64[0];
  v43 = _mm_srli_si128(*MonitorRect, 8).m128i_u64[0];
  v44 = v43 - *(_OWORD *)MonitorRect;
  if ( v44 >= (int)v53 / 2 + DPIServerInfo[4] + v50 * gnFastAltTabColumns + 6 * v40 )
    v44 = (int)v53 / 2 + DPIServerInfo[4] + v50 * gnFastAltTabColumns + 6 * v40;
  v45 = DPIServerInfo[5];
  *(_DWORD *)(v18 + 76) = v44;
  v46 = v41 * v33 + (_DWORD)v53 + v45 / 2;
  v47 = HIDWORD(v43) - HIDWORD(v42);
  if ( v33 != 1 )
    v35 = v28;
  v48 = (unsigned int)((int)v53 >> 1);
  *(_DWORD *)(v18 + 88) = v48;
  LOBYTE(v48) = 1;
  *(_DWORD *)(v18 + 84) = (v44 + -4 * v40 - v41 * v35) >> 1;
  if ( v47 >= v46 + 2 * v45 )
    v47 = v46 + 2 * v45;
  *(_DWORD *)(v18 + 80) = v47;
  *(_QWORD *)v18 = gpswiFirst;
  gpswiFirst = (struct tagSwitchWndInfo *)v18;
  *a1 = (struct tagSwitchWndInfo *)v18;
  return (struct tagWND *)HMValidateHandleNoSecure(**(_QWORD **)(v18 + 32), v48);
}
