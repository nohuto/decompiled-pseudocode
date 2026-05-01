/*
 * XREFs of ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180141298
 * Callers:
 *     ?MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z @ 0x180074BC0 (-MarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAXK2K@Z.c)
 *     __lambda_b9d7157becc689d5daa625d695c4b8bd_::operator()_::_1_::dtor$0 @ 0x1800C4530 (__lambda_b9d7157becc689d5daa625d695c4b8bd_--operator()_--_1_--dtor$0.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E105C (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$1 @ 0x1801E137E (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$1.c)
 *     _PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk_::_1_::dtor$2 @ 0x1801E138A (_PenWorkspace--Discover--RecentAppsCache--LoadDataFromDisk_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$2 @ 0x1803E8B93 (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$2.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$3 @ 0x1803E8B9F (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$3.c)
 *     _VirtualDesktopPersistence::RestoreVirtualDesktopState_::_1_::dtor$4 @ 0x1803E8BAB (_VirtualDesktopPersistence--RestoreVirtualDesktopState_--_1_--dtor$4.c)
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
