/*
 * XREFs of PfSnPowerBoostWorker @ 0x14071ED70
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     PfSnPowerBoostUpdate @ 0x1406EC18C (PfSnPowerBoostUpdate.c)
 */

void __fastcall PfSnPowerBoostWorker(PEX_RUNDOWN_REF RunRef)
{
  PfSnPowerBoostUpdate(0);
  ExReleaseRundownProtection_0(RunRef);
}
