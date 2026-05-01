/*
 * XREFs of ?InternalRelease@?$ComPtr@VVirtualDesktopItemCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1802EA538
 * Callers:
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1802DF0C8 (--$MakeAndInitialize@VXamlAllUpViewHost@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknow.c)
 *     ??$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHost@@@Z @ 0x1802DF1C4 (--$MakeAndInitialize@VXamlAllUpViewHost@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVXamlAllUpViewHo.c)
 *     ??$MakeAndInitializeOrThrow@VXamlAllUpViewHost@@$$V@wil@@YA?AV?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@XZ @ 0x1802DF284 (--$MakeAndInitializeOrThrow@VXamlAllUpViewHost@@$$V@wil@@YA-AV-$ComPtr@VXamlAllUpViewHost@@@WRL@.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_MonitorFrame_________lambda_3729ee5694c21d370e67b314ad1382e5___ @ 0x1802E0710 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_M.c)
 *     ??1?$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ @ 0x1802E322C (--1-$ComPtr@VXamlAllUpViewHost@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _lambda_e7233f2d7fbbc8c446f08901eacadde9_::__lambda_e7233f2d7fbbc8c446f08901eacadde9_ @ 0x1802E3284 (_lambda_e7233f2d7fbbc8c446f08901eacadde9_--__lambda_e7233f2d7fbbc8c446f08901eacadde9_.c)
 *     ?AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ @ 0x1802E5DBC (-AnimateDismissFrames@XamlAllUpViewHost@@AEAAXXZ.c)
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1802E6C3C (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?XamlAllUpViewHost_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802EFF08 (-XamlAllUpViewHost_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Details@WRL@Microsoft@@YAJPEAPEAVVirtualDesktopItemCollection@@AEAPEAUIVirtualDesktopItemFactory@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopNotificationService@@@Z @ 0x180373BC0 (--$MakeAndInitialize@VVirtualDesktopItemCollection@@V1@AEAPEAUIVirtualDesktopItemFactory@@AEAPEA.c)
 *     ?VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@AEBU_GUID@@PEAPEAX@Z @ 0x180374404 (-VirtualDesktopItemCollection_CreateInstance@@YAJPEAUIVirtualDesktopItemFactory@@PEAUIVirtualDes.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableObjectArray@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802EC760 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObs_ea_1802EC760.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<VirtualDesktopItemCollection>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableObjectArray,VirtualDesktopNotificationBase<IVirtualDesktopNotification>>::Release(v1);
  }
  return result;
}
