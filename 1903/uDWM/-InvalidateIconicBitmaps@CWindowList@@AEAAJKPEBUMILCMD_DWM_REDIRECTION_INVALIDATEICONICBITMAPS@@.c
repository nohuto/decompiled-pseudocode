/*
 * XREFs of ?InvalidateIconicBitmaps@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS@@@Z @ 0x1800038EC
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800061C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 * Callees:
 *     ?InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z @ 0x1800039A0 (-InvalidateBitmaps@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001450C (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18001606C (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0p @ 0x18008E3E8 (McTemplateU0p.c)
 */

__int64 __fastcall CWindowList::InvalidateIconicBitmaps(
        CWindowList *this,
        unsigned int a2,
        const struct MILCMD_DWM_REDIRECTION_INVALIDATEICONICBITMAPS *a3)
{
  __int64 v6; // rcx
  HWND v7; // rsi
  int SyncedWindowDataByHwnd; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  struct CWindowData *v11; // rdi
  void *v13; // [rsp+28h] [rbp-20h]
  CWindowData *v14; // [rsp+60h] [rbp+18h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+68h] [rbp+20h] BYREF

  v15 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v7 = *(HWND *)((char *)a3 + 4);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0p(v6, &UdwmProcessInvalidateIconicBitmaps_Start, *(_QWORD *)((char *)a3 + 4));
  v14 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(this, v7, &v14);
  v10 = SyncedWindowDataByHwnd;
  if ( SyncedWindowDataByHwnd < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowDataByHwnd, 0x1163u, v13);
  }
  else
  {
    v11 = v14;
    if ( v14 && !CWindowData::IsImmersiveWindow(v14) )
      v10 = CIconicBitmapRegistry::InvalidateBitmaps(
              *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 37),
              v11,
              a2);
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0p(v9, &UdwmProcessInvalidateIconicBitmaps_Stop, v7);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v15);
  return v10;
}
