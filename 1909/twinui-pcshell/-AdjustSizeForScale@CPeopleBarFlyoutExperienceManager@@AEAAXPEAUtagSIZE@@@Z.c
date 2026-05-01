/*
 * XREFs of ?AdjustSizeForScale@CPeopleBarFlyoutExperienceManager@@AEAAXPEAUtagSIZE@@@Z @ 0x1801ADD9C
 * Callers:
 *     ?GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation@Windows@@PEAUtagRECT@@PEAW4Border@CSingleViewShellExperience@@@Z @ 0x1801AE26C (-GetFlyoutRectForLocationAndBorderFlag@CPeopleBarFlyoutExperienceManager@@AEAAJUPoint@Foundation.c)
 * Callees:
 *     InitDPI @ 0x180428D40 (InitDPI.c)
 */

void __fastcall CPeopleBarFlyoutExperienceManager::AdjustSizeForScale(
        CPeopleBarFlyoutExperienceManager *this,
        struct tagSIZE *a2)
{
  HWND WindowW; // rax
  HANDLE PropW; // rax
  LONG v5; // eax
  int v6; // edx
  LONG cy; // ecx
  CPeopleBarFlyoutExperienceManager *nNumerator; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF

  nNumerator = this;
  InitDPI(this, a2);
  LODWORD(nNumerator) = dword_1805C0C00;
  WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
  if ( WindowW )
  {
    PropW = GetPropW(WindowW, L"TaskbarMonitor");
    GetDpiForMonitor(PropW, 0LL, &nNumerator, &v9);
  }
  v5 = MulDiv(a2->cx, (int)nNumerator, 96);
  v6 = (int)nNumerator;
  cy = a2->cy;
  a2->cx = v5;
  a2->cy = MulDiv(cy, v6, 96);
}
