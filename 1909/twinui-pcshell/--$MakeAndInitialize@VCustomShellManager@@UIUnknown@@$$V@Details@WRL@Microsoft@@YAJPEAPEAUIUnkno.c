/*
 * XREFs of ??$MakeAndInitialize@VCustomShellManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801811D0
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VCustomShellManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180181600 (-CreateInstance@-$SimpleClassFactory@VCustomShellManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18008F3A4 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UICustomShellManager@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x1801812E0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponent_ea_1801812E0.c)
 *     ??1?$ComPtr@VSurfaceHubPositioner@@@WRL@Microsoft@@QEAA@XZ @ 0x18018146C (--1-$ComPtr@VSurfaceHubPositioner@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UICustomShellManager@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18018150C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18018150C.c)
 *     ?RuntimeClassInitialize@CustomShellManager@@QEAAJXZ @ 0x1801818B8 (-RuntimeClassInitialize@CustomShellManager@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CustomShellManager,IUnknown,>(CustomShellManager **a1)
{
  void *v2; // rax
  CustomShellManager *v3; // rbx
  int CanCastTo; // edi
  __int64 v5; // rdx
  void *v7; // [rsp+30h] [rbp+8h] BYREF
  CustomShellManager *v8; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x98uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v2;
  v3 = (CustomShellManager *)v2;
  if ( v2 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CImmersiveShellComponentWithGITSite,ICustomShellManager,Microsoft::WRL::FtmBase>(v2);
    v7 = 0LL;
    *(_QWORD *)v3 = &CustomShellManager::`vftable';
    v8 = v3;
    *((_QWORD *)v3 + 5) = &CustomShellManager::`vftable'{for `IImmersiveShellComponent'};
    *((_QWORD *)v3 + 6) = &CustomShellManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IServiceProvider>'};
    *((_QWORD *)v3 + 13) = &CustomShellManager::`vftable'{for `ICustomShellManager'};
    *((_QWORD *)v3 + 14) = &CustomShellManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    CanCastTo = CustomShellManager::RuntimeClassInitialize(v3);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046) )
      {
        *a1 = v3;
        (*(void (__fastcall **)(CustomShellManager *))(*(_QWORD *)v3 + 8LL))(v3);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,ICustomShellManager,Microsoft::WRL::FtmBase>::CanCastTo(
                      v3,
                      v5,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(CustomShellManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    Microsoft::WRL::ComPtr<SurfaceHubPositioner>::~ComPtr<SurfaceHubPositioner>(&v8);
  }
  else
  {
    CanCastTo = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v7);
  return (unsigned int)CanCastTo;
}
