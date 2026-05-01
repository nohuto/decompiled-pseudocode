/*
 * XREFs of ??$GetActivationFactory@V?$ComPtr@UIOneSettingsPayloadStatics@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIOneSettingsPayloadStatics@OneSettings@Flighting@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1801C1868
 * Callers:
 *     _lambda_921a5a526b2b3e27a0030faf56813293_::operator() @ 0x1801C57B8 (_lambda_921a5a526b2b3e27a0030faf56813293_--operator().c)
 *     ?PackageMeetsMinVersion@CortanaStoreAppHelper@@YAJPEAUIPackage@ApplicationModel@Windows@@PEA_N@Z @ 0x1801C7A1C (-PackageMeetsMinVersion@CortanaStoreAppHelper@@YAJPEAUIPackage@ApplicationModel@Windows@@PEA_N@Z.c)
 *     ?UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ @ 0x1801CBF3C (-UpdateReplaceDecision@CortanaStoreAppHelper@@YAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Internal::Flighting::OneSettings::IOneSettingsPayloadStatics>>(
        __int64 a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return RoGetActivationFactory(a1, &GUID_d70cd0ed_0f1b_4bec_9bec_c230dc7996b0, a2);
}
