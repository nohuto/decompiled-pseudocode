/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UITabbingAwarePositioner@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800229CC
 * Callers:
 *     ?QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180022620 (-QueryInterface@HolographicPositioner@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIHolographicPositioner@@UIBasicPositioner@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInternalFullScreenHandler@@UIHolographicViewManager@@UIHolographicViewTransitionNotificationService@@UIHolographicViewHostItemSource@Holographic@Shell@Internal@Windows@@@23@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@U?$CloakedIid@UIShellPositionerViewHandoff@@@23@U?$CloakedIid@UITabbingAwarePositioner@@@23@U?$CloakedIid@UIApplicationViewChangeListener@@@23@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1801FF1CC (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_1801FF1CC.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IHolographicPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInternalFullScreenHandler,IHolographicViewManager,IHolographicViewTransitionNotificationService,Windows::Internal::Shell::Holographic::IHolographicViewHostItemSource>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::CloakedIid<IShellPositionerViewHandoff>,Microsoft::WRL::CloakedIid<ITabbingAwarePositioner>,Microsoft::WRL::CloakedIid<IApplicationViewChangeListener>>>::CanCastTo(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r9
  __int64 v15; // rcx
  _QWORD *v16; // r8
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r10
  __int64 result; // rax
  __int64 v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rcx
  _QWORD *v25; // r8
  __int64 v26; // r9
  __int64 v27; // r10
  _QWORD *v28; // r8
  __int64 v29; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000038_0000_0000_c000_000000000046, a3, a2) )
    goto LABEL_11;
  if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa, v4, v5)
    || (unsigned int)InlineIsEqualGUID(v7, &GUID_28c6e9e1_7ae2_4fd8_9f8f_a33610f81130, v8, v9) )
  {
    *v8 = v10;
    return 0LL;
  }
  if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_c3be436b_5a20_4bff_bc39_12e4e36bd775, v8, v12) )
  {
LABEL_11:
    *v4 = v6;
    return 0LL;
  }
  if ( (unsigned int)InlineIsEqualGUID(v13, &GUID_538317c5_5bad_4847_962d_42da294f5e0a, v4, v14)
    || (unsigned int)InlineIsEqualGUID(v15, &GUID_5090de35_ed23_43be_9714_586c5041026a, v16, v17) )
  {
    *v16 = v18;
  }
  else
  {
    if ( !(unsigned int)InlineIsEqualGUID(v19, &GUID_334a8e75_f9cf_4161_9035_68246f9ea21d, v16, v17) )
    {
      result = 2147500034LL;
      goto LABEL_9;
    }
    *v16 = v20 + 8;
  }
  result = 0LL;
LABEL_9:
  if ( (_DWORD)result != -2147467262 )
    return result;
  if ( (unsigned int)InlineIsEqualGUID(v17, &GUID_ee010e17_919a_4068_868b_675acf787303, v16, v17) )
    goto LABEL_11;
  if ( (unsigned int)InlineIsEqualGUID(v22, &GUID_fa2d975c_fba1_4f1c_ab07_aad66fcf2d12, v4, v23) )
  {
    *v25 = v27;
LABEL_21:
    result = 0LL;
    goto LABEL_24;
  }
  if ( (unsigned int)InlineIsEqualGUID(v24, &GUID_727f9e97_76ee_497b_a942_b6371328485c, v25, v26) )
  {
    *v28 = v29 + 8;
    goto LABEL_21;
  }
  result = 2147500034LL;
LABEL_24:
  if ( (_DWORD)result == -2147467262 )
    return 2147500034LL;
  return result;
}
