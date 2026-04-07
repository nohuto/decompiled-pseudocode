/*
 * XREFs of ??0CProjectedShadowSceneInstance@CProjectedShadowScene@@QEAA@XZ @ 0x1800B41F4
 * Callers:
 *     ?Initialize@CProjectedShadowScene@@QEAAJ_K@Z @ 0x1800B4BDC (-Initialize@CProjectedShadowScene@@QEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

CProjectedShadowScene::CProjectedShadowSceneInstance *__fastcall CProjectedShadowScene::CProjectedShadowSceneInstance::CProjectedShadowSceneInstance(
        CProjectedShadowScene::CProjectedShadowSceneInstance *this)
{
  CProjectedShadowScene::CProjectedShadowSceneInstance *result; // rax

  *(_QWORD *)this = &CProjectedShadowScene::CProjectedShadowSceneInstance::`vftable';
  *((_DWORD *)this + 2) = 1;
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 16),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 11) = 0LL;
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
