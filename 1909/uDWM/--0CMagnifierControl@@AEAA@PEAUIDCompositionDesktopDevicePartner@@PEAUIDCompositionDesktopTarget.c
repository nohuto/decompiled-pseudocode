/*
 * XREFs of ??0CMagnifierControl@@AEAA@PEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@2@Z @ 0x1800453E8
 * Callers:
 *     ?Create@CMagnifierControl@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTargetPartner@@PEAVCVisual@@2PEAPEAV1@@Z @ 0x1800450F4 (-Create@CMagnifierControl@@SAJPEAUIDCompositionDesktopDevicePartner@@PEAUIDCompositionDesktopTar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

CMagnifierControl *__fastcall CMagnifierControl::CMagnifierControl(
        CMagnifierControl *this,
        struct IDCompositionDesktopDevicePartner *a2,
        struct IDCompositionDesktopTargetPartner *a3,
        struct CVisual *a4,
        struct CVisual *a5)
{
  *(_QWORD *)this = &CMagnifierControl::`vftable'{for `CBaseObject'};
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 2) = &CMagnifierControl::`vftable'{for `ISoftwareCursorChangeListener'};
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 1,
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_BYTE *)this + 144) = 0;
  *(_QWORD *)((char *)this + 148) = 0LL;
  *(_QWORD *)((char *)this + 156) = 0LL;
  *((_QWORD *)this + 21) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 3) = a4;
  if ( a4 )
    _InterlockedIncrement((volatile signed __int32 *)a4 + 2);
  *((_QWORD *)this + 5) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IDCompositionDesktopTargetPartner *))(*(_QWORD *)a3 + 8LL))(a3);
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IDCompositionDesktopDevicePartner *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 7) = a5;
  if ( a5 )
    _InterlockedIncrement((volatile signed __int32 *)a5 + 2);
  return this;
}
