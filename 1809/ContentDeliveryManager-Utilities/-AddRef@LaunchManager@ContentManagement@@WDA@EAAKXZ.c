/*
 * XREFs of ?AddRef@LaunchManager@ContentManagement@@WDA@EAAKXZ @ 0x18001DED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ContentManagement::LaunchManager::AddRef(__int64 a1)
{
  return ContentManagement::MobilityExperienceSettings::AddRef((ContentManagement::MobilityExperienceSettings *)(a1 - 48));
}
