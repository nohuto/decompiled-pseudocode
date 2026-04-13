/*
 * XREFs of ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EEB0
 * Callers:
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023770 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800237D0 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023A30 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::QueryInterface(
        ContentManagement::AppInstallInfoRecordImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IAppInstallInfoRecord>::QueryInterface(
           this,
           a2,
           a3);
}
