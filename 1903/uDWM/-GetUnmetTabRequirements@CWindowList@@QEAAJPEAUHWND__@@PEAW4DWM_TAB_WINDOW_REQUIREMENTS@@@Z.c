/*
 * XREFs of ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180026A64
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x1800061C0 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z @ 0x180026C24 (-IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011A00 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180013FF0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180022AF4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180023D40 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x180027F10 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowList::GetUnmetTabRequirements(
        CWindowList *this,
        HWND a2,
        enum DWM_TAB_WINDOW_REQUIREMENTS *a3)
{
  LONG WindowLongW; // edi
  char v6; // si
  const struct CWindowData *WindowDataByHwnd; // rax
  unsigned int PropW; // eax
  unsigned int v9; // eax
  int v12; // [rsp+30h] [rbp-40h] BYREF
  int v13; // [rsp+38h] [rbp-38h] BYREF
  int *v14; // [rsp+40h] [rbp-30h]
  int v15; // [rsp+48h] [rbp-28h]
  struct tagRECT rc; // [rsp+50h] [rbp-20h] BYREF

  *(_DWORD *)a3 = 0;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)this, 3u, (__int64)a3);
  *(_DWORD *)a3 |= 1u;
  if ( a2 )
  {
    WindowLongW = GetWindowLongW(a2, -16);
    v6 = GetWindowLongW(a2, -20);
    if ( (WindowLongW & 0x20000000) == 0 )
    {
      *(_QWORD *)&rc.left = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, a2);
      if ( WindowDataByHwnd && !IsWindowSetToDefaultMargins(WindowDataByHwnd) )
        *(_DWORD *)a3 |= 0x20u;
      CGuard<CDwmCS>::~CGuard<CDwmCS>((struct _RTL_CRITICAL_SECTION **)&rc);
    }
    if ( (WindowLongW & 0xCF0000) != 0xCF0000 || (WindowLongW & 0xC0000000) != 0 || (v6 & 0x88) != 0 )
      *(_DWORD *)a3 |= 4u;
    if ( GetParent(a2) || GetWindow(a2, 4u) )
      *(_DWORD *)a3 |= 2u;
    if ( GetWindowRgnBox(a2, &rc) )
      *(_DWORD *)a3 |= 8u;
    v12 = 0;
    v14 = &v12;
    v13 = 1;
    v15 = 4;
    if ( (unsigned int)GetWindowCompositionAttribute(a2, &v13) && !v12 )
      *(_DWORD *)a3 |= 0x10u;
    wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsageToService();
    PropW = (unsigned int)GetPropW(a2, L"TabbingAppCompatPolicy");
    if ( PropW )
    {
      if ( PropW == 1 )
      {
        *(_DWORD *)a3 &= 0xFFFFFFC7;
      }
      else if ( PropW == 2 )
      {
        *(_DWORD *)a3 |= 0x200u;
      }
    }
    v9 = (unsigned int)GetPropW(a2, L"TabbingDisabled");
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        *(_DWORD *)a3 &= ~0x200u;
      }
      else if ( v9 == 2 )
      {
        *(_DWORD *)a3 |= 0x40u;
      }
    }
  }
  return 0LL;
}
