/*
 * XREFs of ??$As@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180113574
 * Callers:
 *     ?ReconnectTitleBar@CApplicationFrameWrapper@@UEAAJXZ @ 0x180115BF0 (-ReconnectTitleBar@CApplicationFrameWrapper@@UEAAJXZ.c)
 *     ?RecreateTitleBar@CApplicationFrameWrapper@@UEAAJXZ @ 0x180115C80 (-RecreateTitleBar@CApplicationFrameWrapper@@UEAAJXZ.c)
 *     ?SetFocusToTitleBar@CApplicationFrameWrapper@@UEAAJXZ @ 0x180115DB0 (-SetFocusToTitleBar@CApplicationFrameWrapper@@UEAAJXZ.c)
 *     ?get_TabGroupId@CApplicationFrameWrapper@@UEAAJPEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180117BD0 (-get_TabGroupId@CApplicationFrameWrapper@@UEAAJPEAUShellTabGroupId@Tabs@ComposableShell@Internal.c)
 *     ?put_TabGroupId@CApplicationFrameWrapper@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x180117C80 (-put_TabGroupId@CApplicationFrameWrapper@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Wi.c)
 *     ?SetFocusToTitleBar@CImmersiveApp@@UEAAJXZ @ 0x18011FE60 (-SetFocusToTitleBar@CImmersiveApp@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationFrameProxy>::As<Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_d751e640_0304_4e43_8934_4d5dd7b9712e,
           a2);
}
