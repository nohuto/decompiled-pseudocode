/*
 * XREFs of GetConfigurationFlag @ 0x1800DEA54
 * Callers:
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x1800DF040 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18002A59C (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 */

bool __fastcall GetConfigurationFlag(wchar_t *a1)
{
  return (unsigned int)RegistryHelpers::GetDwordWithDefault(
                         (RegistryHelpers *)a1,
                         (const WCHAR *)&stru_180185DC0,
                         a1,
                         0LL) == 1;
}
