/*
 * XREFs of ??1Payload@ChainLinkNotifier@?$ChainLink@VObjectWithIamLock@@@Chaining@Shell@Internal@Windows@@QEAA@XZ @ 0x180160E20
 * Callers:
 *     _SystemTray::TrayInfoTipDisplayInfo::InitProperties_::_1_::dtor$1 @ 0x18035E057 (_SystemTray--TrayInfoTipDisplayInfo--InitProperties_--_1_--dtor$1.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Internal::Shell::Chaining::ChainLink<ObjectWithIamLock>::ChainLinkNotifier::Payload::~Payload(
        __int64 *a1)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1 + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
