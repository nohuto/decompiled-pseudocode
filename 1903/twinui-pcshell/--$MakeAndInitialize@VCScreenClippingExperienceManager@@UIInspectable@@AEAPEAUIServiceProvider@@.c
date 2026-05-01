/*
 * XREFs of ??$MakeAndInitialize@VCScreenClippingExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1801AB6AC
 * Callers:
 *     ?GetExperienceManager@ScreenClippingExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAUIInspectable@@@Z @ 0x1801AD2B0 (-GetExperienceManager@ScreenClippingExperienceManagerFactory@@EEAAJPEAUIServiceProvider@@PEAPEAU.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CScreenClippingExperienceManager@@QEAA@XZ @ 0x1801ABBB4 (--0CScreenClippingExperienceManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIScreenClippingExperienceManager@Experience@Shell@Internal@Windows@@UIWeakReferenceSource@@UIClosable@Foundation@8@UIImmersiveMonitorNotification@@UILightDismissNotification@@UIImmersiveSessionIdleNotification@@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801AC84C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@UIScreenClippingExperi.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Storage@Windows@@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@23@U?$CloakedIid@UIMarshal@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801B1F40 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIB_ea_1801B1F40.c)
 *     ?RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1801B2364 (-RuntimeClassInitialize@CScreenClippingExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CScreenClippingExperienceManager,IInspectable,IServiceProvider * &>(
        CScreenClippingExperienceManager **a1,
        struct IServiceProvider **a2)
{
  CScreenClippingExperienceManager *v4; // rax
  int CanCastTo; // edi
  CScreenClippingExperienceManager *v6; // rbx
  _DWORD *v7; // rcx
  __int64 v8; // rdx

  *a1 = 0LL;
  v4 = (CScreenClippingExperienceManager *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = CScreenClippingExperienceManager::CScreenClippingExperienceManager(v4);
    CanCastTo = CScreenClippingExperienceManager::RuntimeClassInitialize(v6, *a2);
    if ( CanCastTo >= 0 )
    {
      *a1 = 0LL;
      if ( InlineIsEqualGUID(&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &GUID_00000000_0000_0000_c000_000000000046)
        || InlineIsEqualGUID(v7, v7) )
      {
        *a1 = v6;
        (*(void (__fastcall **)(CScreenClippingExperienceManager *))(*(_QWORD *)v6 + 8LL))(v6);
        CanCastTo = 0;
      }
      else
      {
        CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Windows::Internal::Shell::Experience::IScreenClippingExperienceManager,IWeakReferenceSource,Windows::Foundation::IClosable,IImmersiveMonitorNotification,ILightDismissNotification,IImmersiveSessionIdleNotification,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::CanCastTo(
                      v6,
                      v8,
                      a1);
        if ( CanCastTo >= 0 )
          (*(void (__fastcall **)(CScreenClippingExperienceManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
      }
    }
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
