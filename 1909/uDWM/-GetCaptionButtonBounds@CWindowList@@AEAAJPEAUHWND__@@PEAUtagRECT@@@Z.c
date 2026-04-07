/*
 * XREFs of ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x1800905B8
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18003FE30 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800166DC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001D6B0 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?HasRenderedBorder@CTopLevelWindow@@SA_NI@Z @ 0x180039540 (-HasRenderedBorder@CTopLevelWindow@@SA_NI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     floor_0 @ 0x18004FACA (floor_0.c)
 */

__int64 __fastcall CWindowList::GetCaptionButtonBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int v4; // ebx
  int SyncedWindowDataByHwnd; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  unsigned int v8; // edi
  struct CWindowData *v9; // rsi
  unsigned int CurrentStyle; // ebp
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // edx
  int v14; // r14d
  int v15; // r12d
  __int64 v16; // rcx
  int SystemMetricsForDpi; // r15d
  float v18; // xmm7_4
  float v19; // xmm6_4
  double v20; // xmm0_8
  int v21; // edx
  LONG v22; // edx
  int v23; // ecx
  LONG v24; // ecx
  struct CWindowData *v26; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v26 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v26);
  v8 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    v9 = v26;
    if ( v26
      && (LOBYTE(v6) = 1,
          CurrentStyle = CTopLevelWindow::GetCurrentStyle((__int64)v26, v6, v7),
          CTopLevelWindow::HasRenderedBorder(CurrentStyle, v11)) )
    {
      v13 = *((_DWORD *)v9 + 24);
      v14 = 0;
      v15 = v13 + 1;
      if ( (CurrentStyle & 0x20) == 0 )
        v15 = v13 - 1;
      v16 = 53LL;
      if ( (CurrentStyle & 2) == 0 )
        v16 = 31LL;
      SystemMetricsForDpi = GetSystemMetricsForDpi(v16, *((unsigned int *)v9 + 81), v12);
      v18 = (float)SystemMetricsForDpi;
      if ( (CurrentStyle & 0x400) != 0 )
        v14 = (int)floor_0((float)(v18 * 2.2272727) + 0.5);
      v19 = v18 * 2.1818182;
      if ( (CurrentStyle & 0x200) != 0 )
        v14 += (int)floor_0(v19 + 0.5);
      if ( (CurrentStyle & 0x100) != 0 )
      {
        if ( (CurrentStyle & 0x800) != 0 )
          v20 = v19;
        else
          v20 = (float)(v18 * 2.2272727);
        v14 += (int)floor_0(v20 + 0.5);
      }
      if ( (CurrentStyle & 0x800) != 0 )
        v14 += (int)floor_0((float)(v18 * 2.2272727) + 0.5);
      a3->top = 0;
      v21 = 0;
      a3->bottom = SystemMetricsForDpi + *((_DWORD *)v9 + 24);
      if ( *((_DWORD *)v9 + 47) - *((_DWORD *)v9 + 45) >= 0 )
        v21 = *((_DWORD *)v9 + 47) - *((_DWORD *)v9 + 45);
      v22 = v21 - v15;
      a3->right = v22;
      a3->left = v22 - v14;
      if ( (CurrentStyle & 0x20000) != 0 && (*((_DWORD *)v9 + 26) & 0x400000) == 0 )
      {
        v23 = 0;
        if ( *((_DWORD *)v9 + 47) - *((_DWORD *)v9 + 45) >= 0 )
          v23 = *((_DWORD *)v9 + 47) - *((_DWORD *)v9 + 45);
        v24 = v23 - v22;
        a3->left = v24;
        if ( v14 >= 0 )
          v4 = v14;
        a3->right = v24 + v4;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x1298u);
  }
  return v8;
}
