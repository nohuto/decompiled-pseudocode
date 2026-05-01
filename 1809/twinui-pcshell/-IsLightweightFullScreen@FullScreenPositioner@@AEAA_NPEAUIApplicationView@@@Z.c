/*
 * XREFs of ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180141CB0
 * Callers:
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x18005FDE8 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180141178 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180141FF0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$GetAsInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAJ@Z @ 0x18013F46C (--$GetAsInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 *     ??$GetBoolean@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x18013F504 (--$GetBoolean@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_FullScreenLightweightDefault@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801425D0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_FullScreenLightweightDefault@@@wil@@.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1803ACE10 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall FullScreenPositioner::IsLightweightFullScreen(FullScreenPositioner *this, struct IApplicationView *a2)
{
  bool v2; // di
  struct IImmersiveApplication *ApplicationFromView; // rbx
  __int64 v5; // [rsp+30h] [rbp-40h] BYREF
  __int64 v6[3]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v7; // [rsp+50h] [rbp-20h] BYREF
  int v8; // [rsp+60h] [rbp-10h]
  bool v9; // [rsp+90h] [rbp+20h] BYREF
  LONG v10; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v11; // [rsp+A8h] [rbp+38h] BYREF

  v6[1] = -2LL;
  v2 = 0;
  v9 = 0;
  if ( !*((_BYTE *)this + 424) )
  {
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, a2);
    v6[0] = (__int64)ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v6);
    v11 = 0LL;
    if ( ApplicationFromView )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      if ( (*(int (__fastcall **)(struct IImmersiveApplication *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ApplicationFromView
                                                                                            + 48LL))(
             ApplicationFromView,
             0LL,
             &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99,
             &v11) >= 0 )
      {
        v5 = v11;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        v7 = PKEY_ImmersiveApplication_FullScreenSystemOverlayMode;
        v8 = 11;
        if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetAsInt32<_tagpropertykey>((__int64)&v5, &v7, &v10) < 0
          || !v10 )
        {
          v7 = PKEY_ImmersiveApplication_LightweightFullScreenModeAllowed;
          v8 = 13;
          if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetBoolean<_tagpropertykey>((__int64)&v5, &v7, &v9) >= 0 )
          {
            v2 = v9;
          }
          else
          {
            wil::Feature<__WilFeatureTraits_Feature_FullScreenLightweightDefault>::ReportUsageToService();
            v2 = 0;
          }
        }
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v6);
  }
  return v2;
}
