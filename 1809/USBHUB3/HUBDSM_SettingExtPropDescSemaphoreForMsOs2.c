/*
 * XREFs of HUBDSM_SettingExtPropDescSemaphoreForMsOs2 @ 0x1C001F3B0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_SetExtPropDescSemaphoreInRegistry @ 0x1C0072660 (HUBMISC_SetExtPropDescSemaphoreInRegistry.c)
 */

__int64 __fastcall HUBDSM_SettingExtPropDescSemaphoreForMsOs2(__int64 a1)
{
  return HUBMISC_SetExtPropDescSemaphoreInRegistry(*(_QWORD *)(a1 + 960));
}
