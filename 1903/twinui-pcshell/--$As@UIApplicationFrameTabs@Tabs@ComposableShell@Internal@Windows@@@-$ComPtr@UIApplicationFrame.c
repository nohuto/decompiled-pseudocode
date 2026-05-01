/*
 * XREFs of ??$As@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@?$ComPtr@UIApplicationFrameProxy@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18013ACA0
 * Callers:
 *     ?ReconnectTitleBar@CApplicationFrameWrapper@@UEAAJXZ @ 0x18013D320 (-ReconnectTitleBar@CApplicationFrameWrapper@@UEAAJXZ.c)
 *     ?RecreateTitleBar@CApplicationFrameWrapper@@UEAAJXZ @ 0x18013D3B0 (-RecreateTitleBar@CApplicationFrameWrapper@@UEAAJXZ.c)
 *     ?SetFocusToTitleBar@CApplicationFrameWrapper@@UEAAJXZ @ 0x18013D4E0 (-SetFocusToTitleBar@CApplicationFrameWrapper@@UEAAJXZ.c)
 *     ?get_TabGroupId@CApplicationFrameWrapper@@UEAAJPEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18013F430 (-get_TabGroupId@CApplicationFrameWrapper@@UEAAJPEAUShellTabGroupId@Tabs@ComposableShell@Internal.c)
 *     ?put_TabGroupId@CApplicationFrameWrapper@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18013F4E0 (-put_TabGroupId@CApplicationFrameWrapper@@UEAAJUShellTabGroupId@Tabs@ComposableShell@Internal@Wi.c)
 *     ?SetFocusToTitleBar@CImmersiveApp@@UEAAJXZ @ 0x1801494B0 (-SetFocusToTitleBar@CImmersiveApp@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationFrameProxy>::As<Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return v4(v2, &GUID_d751e640_0304_4e43_8934_4d5dd7b9712e, a2);
}
