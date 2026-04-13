/*
 * XREFs of ?QueryInterface@ContentManagementService@ContentManagement@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800232F0
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
           (ContentManagement::ContentManagementService *)(a1 - 72),
           a2,
           a3);
}
