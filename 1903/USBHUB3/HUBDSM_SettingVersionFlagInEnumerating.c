/*
 * XREFs of HUBDSM_SettingVersionFlagInEnumerating @ 0x1C001DC80
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_SetDeviceVersionFlag @ 0x1C002C53C (HUBMISC_SetDeviceVersionFlag.c)
 */

__int64 __fastcall HUBDSM_SettingVersionFlagInEnumerating(__int64 a1)
{
  HUBMISC_SetDeviceVersionFlag(*(_QWORD *)(a1 + 960));
  return 4077LL;
}
