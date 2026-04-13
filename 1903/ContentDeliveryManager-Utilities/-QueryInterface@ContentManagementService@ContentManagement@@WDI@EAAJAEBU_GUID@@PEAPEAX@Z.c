/*
 * XREFs of ?QueryInterface@ContentManagementService@ContentManagement@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180023760
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentManagementService::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::ContentManagementService::QueryInterface(
           (ContentManagement::ContentManagementService *)(a1 - 56),
           a2,
           a3);
}
