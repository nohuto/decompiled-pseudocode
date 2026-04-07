/*
 * XREFs of ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x180090A0C
 * Callers:
 *     ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18003FE30 (-GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z.c)
 * Callees:
 *     ?NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z @ 0x1800014C8 (-NcAdornmentInfoQuery@CTopLevelWindow@@QEAAJPEAUNCADORNMENT_INFO@@@Z.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x1800166DC (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CWindowList::GetNcAdornmentInfoAttribute(CWindowList *this, HWND a2, struct NCADORNMENT_INFO *a3)
{
  int SyncedWindowDataByHwnd; // eax
  unsigned int v5; // ebx
  CTopLevelWindow *v6; // rcx
  char v7; // dl
  struct CWindowData *v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, a2, &v9);
  v5 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd >= 0 )
  {
    if ( v9 )
    {
      v6 = (CTopLevelWindow *)*((_QWORD *)v9 + 50);
      if ( v6 && (v7 = *((_BYTE *)v9 + 604), (v7 & 8) != 0) && (v7 & 1) != 0 )
      {
        return (unsigned int)CTopLevelWindow::NcAdornmentInfoQuery(v6, a3);
      }
      else
      {
        *(_QWORD *)((char *)a3 + 4) = 0LL;
        *(_QWORD *)((char *)a3 + 12) = 0LL;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, SyncedWindowDataByHwnd, 0x127Cu);
  }
  return v5;
}
