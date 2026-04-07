/*
 * XREFs of ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003FEA0
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18003FE30 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800166DC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x1800183E8 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001D6B0 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18008CCB4 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall CWindowList::GetExtendedFrameBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int SyncedWindowDataByHwnd; // eax
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // esi
  struct CWindowData *v8; // rdi
  struct tagRECT v9; // xmm0
  CTopLevelWindow *v10; // rcx
  unsigned int CurrentStyle; // eax
  void *v13; // [rsp+28h] [rbp-20h]
  struct _MARGINS v14; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v15);
  v7 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x12F1u, v13);
  }
  else
  {
    v8 = v15;
    if ( v15 )
    {
      v9 = (struct tagRECT)*((_OWORD *)v15 + 3);
      *(_QWORD *)&v14.cxLeftWidth = 0LL;
      *a3 = v9;
      v10 = (CTopLevelWindow *)*((_QWORD *)v8 + 50);
      *(_QWORD *)&v14.cyTopHeight = 0LL;
      if ( v10 )
      {
        CTopLevelWindow::GetOutsideMargins(v10, &v14);
      }
      else
      {
        LOBYTE(v5) = 1;
        CurrentStyle = CTopLevelWindow::GetCurrentStyle((__int64)v8, v5, v6);
        CTopLevelWindow::CalculateOutsideMargins(v8, CurrentStyle, &v14);
      }
      a3->left += v14.cxLeftWidth;
      a3->top += v14.cyTopHeight;
      a3->right -= v14.cxRightWidth;
      a3->bottom -= v14.cyBottomHeight;
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return v7;
}
