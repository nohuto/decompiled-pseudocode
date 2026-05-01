/*
 * XREFs of ??$As@UIDismissAnimationController@@@?$ComPtr@UIMultitaskingViewController@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDismissAnimationController@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802EEB0C
 * Callers:
 *     ?AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z @ 0x1802EF400 (-AnimateDismissView@CSnapAssistViewHost@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x1802EF750 (-CurrentVirtualDesktopChanged@CSnapAssistViewHost@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?DismissAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z @ 0x1802EF7B0 (-DismissAnimationFinished@CSnapAssistViewHost@@UEAAXPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IMultitaskingViewController>::As<IDismissAnimationController>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_08e65fbb_4eca_43c9_8c6f_c9f5aa03ba5e,
           a2);
}
