/*
 * XREFs of ??1FullScreenPositioner@@UEAA@XZ @ 0x18018AD64
 * Callers:
 *     ??_GFullScreenPositioner@@UEAAPEAXI@Z @ 0x18018B1CC (--_GFullScreenPositioner@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180065FF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$deque@UpositioningOperationInfo@@V?$allocator@UpositioningOperationInfo@@@std@@@std@@IEAAXXZ @ 0x18018E4B8 (-_Tidy@-$deque@UpositioningOperationInfo@@V-$allocator@UpositioningOperationInfo@@@std@@@std@@IE.c)
 */

void __fastcall FullScreenPositioner::~FullScreenPositioner(FullScreenPositioner *this)
{
  void *v2; // rcx
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  void *v5; // rcx
  volatile int *v6; // rdx

  v2 = (void *)*((_QWORD *)this + 49);
  if ( v2 )
  {
    v3 = 0LL;
    if ( *((_QWORD *)this + 50) )
    {
      do
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(*((_QWORD *)this + 49) + 8 * v3++));
      while ( v3 < *((_QWORD *)this + 50) );
      v2 = (void *)*((_QWORD *)this + 49);
    }
    CoTaskMemFree(v2);
    *((_QWORD *)this + 49) = 0LL;
  }
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  v4 = *((_QWORD *)this + 47);
  if ( v4 )
  {
    *((_QWORD *)this + 47) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  std::deque<positioningOperationInfo>::_Tidy((char *)this + 304);
  std::_Deallocate<16,0>(*((void **)this + 38), (const struct std::nothrow_t *)0x10);
  *((_QWORD *)this + 38) = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 37);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 34);
  v5 = (void *)*((_QWORD *)this + 31);
  if ( v5 )
  {
    std::_Deallocate<16,0>(
      v5,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 33) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 31) = 0LL;
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 30);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 28);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 27);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<IFullScreenPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,IApplicationViewChangeListener,ITabletModeChangeListener,IFullScreenPositionerNotificationService,IFullScreenPositionerTestHandler,ITransitionStateChangeHandler,IPrivilegedOperationsConsumer>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithSite,Microsoft::WRL::ChainInterfaces<IFullScreenPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::ChainInterfaces<IApplicationViewStatePositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,ITabbingAwarePositioner,IShellPositionerViewHandoff,IImmersiveMonitorNotification,IActiveZBandNotificationForMonitor,IApplicationViewChangeListener,ITabletModeChangeListener,IFullScreenPositionerNotificationService,IFullScreenPositionerTestHandler,ITransitionStateChangeHandler,IPrivilegedOperationsConsumer>(
    (__int64 *)this,
    v6);
}
