/*
 * XREFs of ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801531E8
 * Callers:
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x180204264 (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x180204B78 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ?PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ @ 0x180206F70 (-PurloinForeground@HolographicForegroundAssistant@@UEAAJXZ.c)
 *     ?RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z @ 0x18021B3D0 (-RuntimeClassInitialize@ApplicationViewBackedViewHostItem@@QEAAJPEAUIApplicationView@@@Z.c)
 *     ?_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z @ 0x180360688 (-_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_3e46ed27_6707_4c99_aff4_ad6824b65aa2,
           a2);
}
