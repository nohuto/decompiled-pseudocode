/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UILayoutSelectionHelpers@SharedStartModel@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UILayoutSelectionHelpers@SharedStartModel@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18013C968
 * Callers:
 *     ?CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ @ 0x18013D8F8 (-CalculateSelectionAttributes@TaskbarLayoutParser@@AEAAJXZ.c)
 *     ?CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ @ 0x1801A097C (-CalculateSelectionAttributes@PWSLayoutParser@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<SharedStartModel::ILayoutSelectionHelpers>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_539fe289_c0e0_4959_9a2f_bd846bc9b2c8, a2);
}
