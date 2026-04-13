/*
 * XREFs of ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001F3F0
 * Callers:
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023C80 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023CF0 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023F90 (-QueryInterface@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
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
