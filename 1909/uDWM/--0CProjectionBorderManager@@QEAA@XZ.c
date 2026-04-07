/*
 * XREFs of ??0CProjectionBorderManager@@QEAA@XZ @ 0x180044A28
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x180043F80 (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     <none>
 */

CProjectionBorderManager *__fastcall CProjectionBorderManager::CProjectionBorderManager(CProjectionBorderManager *this)
{
  *(_QWORD *)this = &CProjectionBorderManager::`vftable';
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_DWORD *)this + 104) = 0;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = 0;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 6,
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 7,
    CGenericTableMap<_LARGE_INTEGER,CProjectionBorderManager::CAPTURE_DISPLAY_MAP_ENTRY>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  return this;
}
