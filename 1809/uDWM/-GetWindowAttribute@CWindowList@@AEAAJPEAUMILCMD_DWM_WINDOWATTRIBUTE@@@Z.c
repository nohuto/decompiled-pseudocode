/*
 * XREFs of ?GetWindowAttribute@CWindowList@@AEAAJPEAUMILCMD_DWM_WINDOWATTRIBUTE@@@Z @ 0x18008AC9C
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18008A508 (-GetCaptionButtonBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z @ 0x18008A7C8 (-GetExtendedFrameBounds@CWindowList@@AEAAJPEAUHWND__@@PEAUtagRECT@@@Z.c)
 *     ?GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z @ 0x18008A9C4 (-GetNcAdornmentInfoAttribute@CWindowList@@AEAAJPEAUHWND__@@PEAUNCADORNMENT_INFO@@@Z.c)
 */

__int64 __fastcall CWindowList::GetWindowAttribute(CWindowList *this, struct MILCMD_DWM_WINDOWATTRIBUTE *a2)
{
  unsigned int v4; // edi
  HWND v5; // rdx
  unsigned int CaptionButtonBounds; // eax
  struct _RTL_CRITICAL_SECTION *v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v4 = -2147024872;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  switch ( *((_DWORD *)a2 + 4) )
  {
    case 5:
      if ( *((_DWORD *)a2 + 5) != 16 )
        goto LABEL_12;
      CaptionButtonBounds = CWindowList::GetCaptionButtonBounds(this, v5, (struct tagRECT *)((char *)a2 + 24));
      goto LABEL_11;
    case 8:
      if ( *((_DWORD *)a2 + 5) != 16 )
        goto LABEL_12;
      CaptionButtonBounds = CWindowList::GetExtendedFrameBounds(this, v5, (struct tagRECT *)((char *)a2 + 24));
      goto LABEL_11;
    case 0xC:
      if ( *((_DWORD *)a2 + 5) != 20 )
        goto LABEL_12;
      CaptionButtonBounds = CWindowList::GetNcAdornmentInfoAttribute(
                              this,
                              v5,
                              (struct MILCMD_DWM_WINDOWATTRIBUTE *)((char *)a2 + 24));
LABEL_11:
      v4 = CaptionButtonBounds;
      goto LABEL_12;
  }
  v4 = -2147024809;
LABEL_12:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v8);
  return v4;
}
