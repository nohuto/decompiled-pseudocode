/*
 * XREFs of ?GetUnmetTabRequirements@CWindowList@@QEAAJPEAUHWND__@@PEAW4DWM_TAB_WINDOW_REQUIREMENTS@@@Z @ 0x180024130
 * Callers:
 *     ?ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z @ 0x18000DE60 (-ProcessSyncDwmMessage@CWindowList@@UEAAJW4DWMCMD@@PEAXI_NKPEBU_REMOTE_PORT_VIEW@@PEAJPEAI@Z.c)
 *     ?IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z @ 0x1800240E4 (-IsWindowTabEligible@@YA_NPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x180023254 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800242F0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180024354 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabCategoryBC@@@wil@@CAX_NW4Reportin.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x1800245C0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z @ 0x180024718 (-IsWindowSetToDefaultMargins@@YA_NPEBVCWindowData@@@Z.c)
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowList::GetUnmetTabRequirements(
        CWindowList *this,
        HWND a2,
        enum DWM_TAB_WINDOW_REQUIREMENTS *a3)
{
  HWND v3; // rbx
  LONG WindowLongW; // edi
  char v6; // si
  const struct CWindowData *WindowDataByHwnd; // rax
  __int64 v8; // rcx
  unsigned int PropW; // eax
  unsigned int v10; // eax
  int v13; // [rsp+30h] [rbp-40h] BYREF
  int v14; // [rsp+38h] [rbp-38h] BYREF
  int *v15; // [rsp+40h] [rbp-30h]
  int v16; // [rsp+48h] [rbp-28h]
  struct tagRECT rc; // [rsp+50h] [rbp-20h] BYREF

  v3 = a2;
  *(_DWORD *)a3 = 0;
  LOBYTE(a2) = 3;
  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService(this, a2);
  *(_DWORD *)a3 |= 1u;
  if ( v3 )
  {
    WindowLongW = GetWindowLongW(v3, -16);
    v6 = GetWindowLongW(v3, -20);
    if ( (WindowLongW & 0x20000000) == 0 )
    {
      *(_QWORD *)&rc.left = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(this, v3);
      if ( WindowDataByHwnd && !IsWindowSetToDefaultMargins(WindowDataByHwnd) )
        *(_DWORD *)a3 |= 0x20u;
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&rc);
    }
    if ( (WindowLongW & 0xCF0000) != 0xCF0000 || (WindowLongW & 0xC0000000) != 0 || (v6 & 0x88) != 0 )
      *(_DWORD *)a3 |= 4u;
    if ( GetParent(v3) || GetWindow(v3, 4u) )
      *(_DWORD *)a3 |= 2u;
    if ( GetWindowRgnBox(v3, &rc) )
      *(_DWORD *)a3 |= 8u;
    v13 = 0;
    v15 = &v13;
    v14 = 1;
    v16 = 4;
    if ( (unsigned int)GetWindowCompositionAttribute(v3, &v14) && !v13 )
      *(_DWORD *)a3 |= 0x10u;
    wil::Feature<__WilFeatureTraits_Feature_TabCategoryBC>::ReportUsageToService(v8);
    PropW = (unsigned int)GetPropW(v3, L"TabbingAppCompatPolicy");
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
    v10 = (unsigned int)GetPropW(v3, L"TabbingDisabled");
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        *(_DWORD *)a3 &= ~0x200u;
      }
      else if ( v10 == 2 )
      {
        *(_DWORD *)a3 |= 0x40u;
      }
    }
  }
  return 0LL;
}
