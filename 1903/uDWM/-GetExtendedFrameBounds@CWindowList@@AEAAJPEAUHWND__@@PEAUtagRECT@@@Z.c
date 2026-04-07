/*
 * XREFs of ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18003FFE0
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18003FF70 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001606C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?GetCurrentStyle@CTopLevelWindow@@SA?AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z @ 0x18001D7A0 (-GetCurrentStyle@CTopLevelWindow@@SA-AW4NCAREA_FLAGS@@PEBVCWindowData@@_N@Z.c)
 *     ?GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z @ 0x18001EDD0 (-GetOutsideMargins@CTopLevelWindow@@QEAAXPEAU_MARGINS@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z @ 0x18008D014 (-CalculateOutsideMargins@CTopLevelWindow@@SAXPEAVCWindowData@@IPEAU_MARGINS@@@Z.c)
 */

__int64 __fastcall CWindowList::GetExtendedFrameBounds(CWindowList *this, HWND a2, struct tagRECT *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // esi
  struct CWindowData *v6; // rdi
  struct tagRECT v7; // xmm0
  CTopLevelWindow *v8; // rcx
  unsigned int CurrentStyle; // eax
  void *v11; // [rsp+28h] [rbp-20h]
  struct _MARGINS v12; // [rsp+30h] [rbp-18h] BYREF
  struct CWindowData *v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v13);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x12F1u, v11);
  }
  else
  {
    v6 = v13;
    if ( v13 )
    {
      v7 = (struct tagRECT)*((_OWORD *)v13 + 3);
      *(_QWORD *)&v12.cxLeftWidth = 0LL;
      *a3 = v7;
      v8 = (CTopLevelWindow *)*((_QWORD *)v6 + 50);
      *(_QWORD *)&v12.cyTopHeight = 0LL;
      if ( v8 )
      {
        CTopLevelWindow::GetOutsideMargins(v8, &v12);
      }
      else
      {
        CurrentStyle = CTopLevelWindow::GetCurrentStyle((__int64)v6);
        CTopLevelWindow::CalculateOutsideMargins(v6, CurrentStyle, &v12);
      }
      a3->left += v12.cxLeftWidth;
      a3->top += v12.cyTopHeight;
      a3->right -= v12.cxRightWidth;
      a3->bottom -= v12.cyBottomHeight;
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return v5;
}
