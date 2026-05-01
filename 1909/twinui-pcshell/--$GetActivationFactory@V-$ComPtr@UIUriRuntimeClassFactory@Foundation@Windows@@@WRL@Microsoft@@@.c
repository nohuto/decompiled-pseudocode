/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIUriRuntimeClassFactory@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801CA47C
 * Callers:
 *     ShellFeedsAvailabilityHelpers::GetEnablementCheckURL @ 0x1800C7174 (ShellFeedsAvailabilityHelpers--GetEnablementCheckURL.c)
 *     _anonymous_namespace_::CreateUri @ 0x1801CB9A0 (_anonymous_namespace_--CreateUri.c)
 *     ?OpenWindowsSearch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801CFC10 (-OpenWindowsSearch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundatio.c)
 *     ?ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z @ 0x180361FC8 (-ParseFlagsFromUriPath@AllUpViewUriHandler@@AEAAJPEBGPEAW4ALL_UP_VIEW_FLAGS@@@Z.c)
 *     ?ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z @ 0x180429974 (-ConvertMsAppXUriToMsResourceUri@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@PEAPEAG@Z.c)
 *     ?TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z @ 0x18042D7C0 (-TryFallbackToFilePath@Common@ShellMRTHelper@@YAJPEAUHSTRING__@@00PEAPEAU3@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IUriRuntimeClassFactory>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_44a9796f_723e_4fdf_a218_033e75b0c084, a2);
}
