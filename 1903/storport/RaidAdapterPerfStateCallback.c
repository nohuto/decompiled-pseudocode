/*
 * XREFs of RaidAdapterPerfStateCallback @ 0x1C003F4F0
 * Callers:
 *     <none>
 * Callees:
 *     RaCallMiniportAdapterControl @ 0x1C0015B98 (RaCallMiniportAdapterControl.c)
 */

__int64 __fastcall RaidAdapterPerfStateCallback(__int64 a1)
{
  return RaCallMiniportAdapterControl(a1 + 296);
}
