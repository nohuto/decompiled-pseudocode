/*
 * XREFs of ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180119378
 * Callers:
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180070E50 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     __lambda_b9d7157becc689d5daa625d695c4b8bd_::operator()_::_1_::dtor$0 @ 0x1800AC970 (__lambda_b9d7157becc689d5daa625d695c4b8bd_--operator()_--_1_--dtor$0.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$1 @ 0x18019A4D4 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$2 @ 0x18019A4E0 (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$2 @ 0x180382CF7 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$3 @ 0x180382D03 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$3.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$4 @ 0x180382D0F (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  CoTaskMemFree(v2);
}
