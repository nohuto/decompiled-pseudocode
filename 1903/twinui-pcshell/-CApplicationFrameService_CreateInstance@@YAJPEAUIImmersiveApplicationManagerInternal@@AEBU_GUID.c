/*
 * XREFs of ?CApplicationFrameService_CreateInstance@@YAJPEAUIImmersiveApplicationManagerInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18013BEF4
 * Callers:
 *     ?_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ @ 0x18011ECC4 (-_InitializeIAMSubcomponents@CApplicationManager@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??4?$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@@@Z @ 0x180056494 (--4-$ComPtr@UIImmersiveMonitorManager@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitorManager@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008C940 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CApplicationFrameService@@QEAA@XZ @ 0x18013B328 (--0CApplicationFrameService@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCWRLObjectWithGITSite@@@Details@23@U?$ChainInterfaces@UIApplicationFrameServiceTestability@@UIApplicationFrameService@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationFrameEventHandler@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18013C004 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18013C004.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameService@@@WRL@Microsoft@@IEAAKXZ @ 0x18013C98C (-InternalRelease@-$ComPtr@VCApplicationFrameService@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CApplicationFrameService_CreateInstance(
        struct IImmersiveApplicationManagerInternal *a1,
        const struct _GUID *a2,
        CApplicationFrameService **a3)
{
  void *v5; // rax
  int CanCastTo; // ebx
  __int64 v7; // rcx
  CApplicationFrameService *v8; // rcx
  CApplicationFrameService *v10; // [rsp+20h] [rbp-18h] BYREF
  CApplicationFrameService *v11; // [rsp+48h] [rbp+10h] BYREF
  void *v12; // [rsp+58h] [rbp+20h] BYREF

  v11 = 0LL;
  Microsoft::WRL::ComPtr<CApplicationFrameService>::InternalRelease(&v11);
  v11 = 0LL;
  v5 = operator new(0xE8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v5;
  if ( v5 )
  {
    v10 = CApplicationFrameService::CApplicationFrameService((CApplicationFrameService *)v5);
    Microsoft::WRL::ComPtr<IImmersiveMonitorManager>::operator=((__int64 *)v10 + 21, (__int64)a1);
    if ( v10 )
      _InterlockedIncrement((volatile signed __int32 *)v10 + 23);
    v11 = v10;
    Microsoft::WRL::ComPtr<CApplicationFrameService>::InternalRelease(&v10);
    *a3 = 0LL;
    if ( InlineIsEqualGUID(&GUID_88b25c81_171b_48b0_91d6_c75846bcf035, &GUID_00000000_0000_0000_c000_000000000046) )
    {
      v8 = v11;
      *a3 = v11;
      (*(void (__fastcall **)(CApplicationFrameService *))(*(_QWORD *)v8 + 8LL))(v8);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,Microsoft::WRL::ChainInterfaces<IApplicationFrameServiceTestability,IApplicationFrameService,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationFrameEventHandler,Microsoft::WRL::FtmBase>::CanCastTo(
                    v11,
                    v7,
                    a3);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(CApplicationFrameService *))(*(_QWORD *)*a3 + 8LL))(*a3);
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v12);
    CanCastTo = -2147024882;
  }
  Microsoft::WRL::ComPtr<CApplicationFrameService>::InternalRelease(&v11);
  return (unsigned int)CanCastTo;
}
