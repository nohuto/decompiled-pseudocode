/*
 * XREFs of ??1?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00U?$ImplementsMarker@VFtmBase@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180062770
 * Callers:
 *     ??1CActivatedEventArgsBase@@MEAA@XZ @ 0x1800626FC (--1CActivatedEventArgsBase@@MEAA@XZ.c)
 *     _CApplicationManager::_AttemptPendingActivationTracking_::_1_::dtor$1 @ 0x1800F6377 (_CApplicationManager--_AttemptPendingActivationTracking_--_1_--dtor$1.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponentWithGITSite@@UIAppLayoutCacheInternal@@UIAppLayoutCache@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18018D5AC (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCImmersiveShellComponen_ea_18018D5AC.c)
 *     ??_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z @ 0x18018D5F8 (--_ERemoteLauncherForegroundHandler@@UEAAPEAXI@Z.c)
 *     ??_E?$CMultitaskingViewTaskCallback@V_lambda_9d128d93ab32f25580f43de7f914180a_@@@@UEAAPEAXI@Z @ 0x1802E2790 (--_E-$CMultitaskingViewTaskCallback@V_lambda_9d128d93ab32f25580f43de7f914180a_@@@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCallback@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802E2830 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIMultitaskingViewTaskCal.c)
 *     ??_G?$CMultitaskingViewTaskCallback@V_lambda_a07bbd685e96231049fd04a75b23a5bf_@@@@UEAAPEAXI@Z @ 0x1802E3020 (--_G-$CMultitaskingViewTaskCallback@V_lambda_a07bbd685e96231049fd04a75b23a5bf_@@@@UEAAPEAXI@Z.c)
 *     ??_EMultitaskingViewGestureState@@UEAAPEAXI@Z @ 0x1802E37F0 (--_EMultitaskingViewGestureState@@UEAAPEAXI@Z.c)
 *     ??_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z @ 0x1802E3830 (--_EMultitaskingViewVisibilityService@@UEAAPEAXI@Z.c)
 *     ??_G?$CMultitaskingViewTaskCallback@V_lambda_e6f893affb6bf575c6b684d40d6f796c_@@@@UEAAPEAXI@Z @ 0x1802E42A0 (--_G-$CMultitaskingViewTaskCallback@V_lambda_e6f893affb6bf575c6b684d40d6f796c_@@@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIApplicationViewIconLoader@@VFtmBase@23@@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1802E5BFC (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U-$Implements@U-$Runtime.c)
 *     ??_G?$CMultitaskingViewTaskCallback@V_lambda_029a20c939beb4174ee85d77404827fb_@@@@UEAAPEAXI@Z @ 0x1802E7910 (--_G-$CMultitaskingViewTaskCallback@V_lambda_029a20c939beb4174ee85d77404827fb_@@@@UEAAPEAXI@Z.c)
 *     ??_EAppLayoutCache@@UEAAPEAXI@Z @ 0x180352B40 (--_EAppLayoutCache@@UEAAPEAXI@Z.c)
 *     ??1TabletModeCoverWindow@@UEAA@XZ @ 0x1803623EC (--1TabletModeCoverWindow@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VFtmBase@23@UITabletModeCoverWindow@@UITabletModeChrome@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180362490 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VCWRLObjectWithGITSite@@VFtmBase@23@U.c)
 *     ??1CGITCookieObject@@UEAA@XZ @ 0x1803B16DC (--1CGITCookieObject@@UEAA@XZ.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIGITCookieObject@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803B1770 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIGITCookieObject@@VFtmBase@23@@WRL@M.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIAppLayoutInternal@@U?$ChainInterfaces@UIAppLayoutBuilder@@UIAppLayout@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803BA070 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@VFtmBase@23@UIAppLayoutInternal@@U-$C.c)
 *     ??_ECAppLayout@@UEAAPEAXI@Z @ 0x1803BA0B0 (--_ECAppLayout@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>(
        __int64 a1)
{
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 24));
}
