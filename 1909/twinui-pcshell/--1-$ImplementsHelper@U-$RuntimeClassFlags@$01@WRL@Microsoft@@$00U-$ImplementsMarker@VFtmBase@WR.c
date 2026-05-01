/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18006B280
 * Callers:
 *     ??1CActivatedEventArgsBase@@MEAA@XZ @ 0x18006B20C (--1CActivatedEventArgsBase@@MEAA@XZ.c)
 *     _CApplicationManager::_AttemptPendingActivationTracking_::_1_::dtor$1 @ 0x18013AAF5 (_CApplicationManager--_AttemptPendingActivationTracking_--_1_--dtor$1.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801F35E8 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_1801F35E8.c)
 *     ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x1801F3634 (--_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___::_scalar_deleting_destructor_ @ 0x1803628C0 (CMultitaskingViewTaskCallback__lambda_67538760065010fe4b5675fda0abb48b___--_scalar_deleting_dest.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180362960 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCal.c)
 *     CMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf___::_scalar_deleting_destructor_ @ 0x180363150 (CMultitaskingViewTaskCallback__lambda_a07bbd685e96231049fd04a75b23a5bf___--_scalar_deleting_dest.c)
 *     ??_EMultitaskingViewGestureState@@UEAAPEAXI@Z @ 0x180363920 (--_EMultitaskingViewGestureState@@UEAAPEAXI@Z.c)
 *     ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x180363960 (--_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z.c)
 *     CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___::_scalar_deleting_destructor_ @ 0x1803643D0 (CMultitaskingViewTaskCallback__lambda_e6f893affb6bf575c6b684d40d6f796c___--_scalar_deleting_dest.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x180365D2C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$Runtime.c)
 *     CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___::_scalar_deleting_destructor_ @ 0x180367A20 (CMultitaskingViewTaskCallback__lambda_cce109df49c6adc2bc0ad171c00602d8___--_scalar_deleting_dest.c)
 *     ??_EAppLayoutCache@@UEAAPEAXI@Z @ 0x1803D7F70 (--_EAppLayoutCache@@UEAAPEAXI@Z.c)
 *     ??1TabletModeCoverWindow@@UEAA@XZ @ 0x1803E798C (--1TabletModeCoverWindow@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803E7A30 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VFtmBase@23@U.c)
 *     ??1CGITCookieObject@@UEAA@XZ @ 0x1804331CC (--1CGITCookieObject@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGITCookieObject@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180433270 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIGITCookieObject@@VFtmBase@23@@WRL@M.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18043C0E0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIAppLayoutInternal@@U-$C.c)
 *     ??_ECAppLayout@@UEAAPEAXI@Z @ 0x18043C120 (--_ECAppLayout@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 24));
}
