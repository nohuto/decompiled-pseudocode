/*
 * XREFs of ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x18012994C
 * Callers:
 *     ?Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x18012F2AC (-Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x18012F830 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?GetHostId@CWinRTApplicationView@@UEAAJPEA_K@Z @ 0x18017C1B0 (-GetHostId@CWinRTApplicationView@@UEAAJPEA_K@Z.c)
 *     ?IsEqualByHostId@CWinRTApplicationView@@UEAAJ_KPEAH@Z @ 0x18017CC20 (-IsEqualByHostId@CWinRTApplicationView@@UEAAJ_KPEAH@Z.c)
 *     ?SetFocusToTitleBar@CWinRTApplicationView@@UEAAJXZ @ 0x18017CDB0 (-SetFocusToTitleBar@CWinRTApplicationView@@UEAAJXZ.c)
 *     ?SetForceActiveWindowAppearance@CWinRTApplicationView@@UEAAJH@Z @ 0x18017CE40 (-SetForceActiveWindowAppearance@CWinRTApplicationView@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v4(v2, &GUID_2faff0c1_f38f_43dc_b5f8_8d00829024a1, a2);
}
