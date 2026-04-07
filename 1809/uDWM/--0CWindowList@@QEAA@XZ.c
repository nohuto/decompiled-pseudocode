/*
 * XREFs of ??0CWindowList@@QEAA@XZ @ 0x18003CAE0
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z @ 0x18003CFEC (-Initialize@CDesktopManager@@AEAAJPEBUStartupInfo@@PEAUCompositionInfo@@@Z.c)
 * Callees:
 *     ??0?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x18003CC00 (--0-$CGenericSet@PEAVCWindowData@@@@QEAA@XZ.c)
 */

CWindowList *__fastcall CWindowList::CWindowList(CWindowList *this)
{
  CWindowList *result; // rax

  *(_QWORD *)this = &CWindowList::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 8),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_DWORD *)this + 68) = 0;
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 280);
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_DWORD *)this + 94) = 0;
  *((_QWORD *)this + 48) = 0LL;
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 392);
  *((_QWORD *)this + 58) = 0LL;
  result = this;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_DWORD *)this + 140) = 0;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_WORD *)this + 300) = 0;
  *((_BYTE *)this + 602) = 0;
  return result;
}
