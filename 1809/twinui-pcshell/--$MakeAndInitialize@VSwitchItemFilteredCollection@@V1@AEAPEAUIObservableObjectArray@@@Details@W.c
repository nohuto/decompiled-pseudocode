/*
 * XREFs of ??$MakeAndInitialize@VSwitchItemFilteredCollection@@V1@AEAPEAUIObservableObjectArray@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItemFilteredCollection@@AEAPEAUIObservableObjectArray@@@Z @ 0x1802F4988
 * Callers:
 *     ?SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@Z @ 0x1802F5C60 (-SwitchItemFilteredCollection_CreateInstance@@YAJPEAUIObservableObjectArray@@AEBU_GUID@@PEAPEAX@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180084460 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCImmersiveShellComponentWithGITSite@@U?$ChainInterfaces@UIDesktopPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIDragDropViewCreationHandler@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@U?$ChainInterfaces@UIApplicationViewStatePositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UITabbingAwarePositioner@@UIShellPositionerViewHandoff@@UIImmersiveMonitorNotification@@UIApplicationViewChangeListener@@UITabletModeChangeListener@@UIPrivilegedOperationsConsumer@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1801013D8 (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1801013D8.c)
 *     ??0SwitchItemFilteredCollection@@QEAA@XZ @ 0x1802F4BE8 (--0SwitchItemFilteredCollection@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ @ 0x1802F4FEC (-InternalRelease@-$ComPtr@VSwitchItemFilteredCollection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RuntimeClassInitialize@SwitchItemFilteredCollection@@QEAAJPEAUIObservableObjectArray@@@Z @ 0x1802F5858 (-RuntimeClassInitialize@SwitchItemFilteredCollection@@QEAAJPEAUIObservableObjectArray@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SwitchItemFilteredCollection,SwitchItemFilteredCollection,IObservableObjectArray * &>(
        __int64 *a1,
        struct IObservableObjectArray **a2)
{
  SwitchItemFilteredCollection *v4; // rax
  int v5; // ebx
  SwitchItemFilteredCollection *v6; // rax
  struct IObservableObjectArray *v7; // rdx
  __int64 v8; // rdi
  volatile int *v9; // rdx
  SwitchItemFilteredCollection *v11; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (SwitchItemFilteredCollection *)operator new(0x138uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = SwitchItemFilteredCollection::SwitchItemFilteredCollection(v4);
    v7 = *a2;
    v8 = (__int64)v6;
    v11 = v6;
    v5 = SwitchItemFilteredCollection::RuntimeClassInitialize(v6, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CImmersiveShellComponentWithGITSite,Microsoft::WRL::ChainInterfaces<IDesktopPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IDragDropViewCreationHandler,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IApplicationViewChangeListener,ITabletModeChangeListener,IPrivilegedOperationsConsumer>::InternalAddRef(
          v8,
          v9);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<SwitchItemFilteredCollection>::InternalRelease(&v11);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
