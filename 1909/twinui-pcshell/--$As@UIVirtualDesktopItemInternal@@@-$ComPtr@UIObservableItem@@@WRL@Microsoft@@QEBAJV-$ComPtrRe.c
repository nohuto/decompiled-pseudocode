/*
 * XREFs of ??$As@UIVirtualDesktopItemInternal@@@?$ComPtr@UIObservableItem@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopItemInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x180373B7C
 * Callers:
 *     ?CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z @ 0x180373F30 (-CurrentVirtualDesktopChanged@VirtualDesktopItemCollection@@UEAAJPEAUIVirtualDesktop@@0@Z.c)
 *     ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x18037468C (-_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IObservableItem>::As<IVirtualDesktopItemInternal>(_QWORD *a1, __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_9bdd4180_28ad_4e83_8414_eec3e7207b6d,
           a2);
}
