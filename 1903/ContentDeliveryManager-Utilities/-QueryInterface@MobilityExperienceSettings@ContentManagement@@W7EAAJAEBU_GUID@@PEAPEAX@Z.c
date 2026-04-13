/*
 * XREFs of ?QueryInterface@MobilityExperienceSettings@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E3D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::MobilityExperienceSettings::QueryInterface(
           (ContentManagement::MobilityExperienceSettings *)(a1 - 8),
           a2,
           a3);
}
