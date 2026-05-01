/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIContextIdentifierStatics@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18000B730
 * Callers:
 *     ?GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z @ 0x18000B1B8 (-GetUserInputContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserInputContext@1234@@Z.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x18000B684 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     ?SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800F3F40 (-SubscribeToServices@CApplicationManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x1800FE488 (-RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x1801044B8 (-RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z.c)
 *     ?GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionOptions@1234@PEAW4UserDisplayContext@1234@@Z @ 0x1801B39C4 (-GetWindowDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAUHWND__@@W4ContextInspectionO.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::IContextIdentifierStatics>>(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_b80ca0d2_a583_4e8b_84c6_fac647a1d771, a2);
}
