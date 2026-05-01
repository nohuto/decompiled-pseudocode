/*
 * XREFs of ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800E88EC
 * Callers:
 *     ?Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1800ECBCC (-Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1800ED220 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?GetHostId@CWinRTApplicationView@@UEAAJPEA_K@Z @ 0x1801334D0 (-GetHostId@CWinRTApplicationView@@UEAAJPEA_K@Z.c)
 *     ?IsEqualByHostId@CWinRTApplicationView@@UEAAJ_KPEAH@Z @ 0x180133F80 (-IsEqualByHostId@CWinRTApplicationView@@UEAAJ_KPEAH@Z.c)
 *     ?SetFocusToTitleBar@CWinRTApplicationView@@UEAAJXZ @ 0x180134110 (-SetFocusToTitleBar@CWinRTApplicationView@@UEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CWinRTApplicationView@@UEAAJH@Z @ 0x1801341A0 (-SetForceActiveWindowAppearance@CWinRTApplicationView@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1,
           a2);
}
