/*
 * XREFs of ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x1800510A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x180051388 (-Trace@AtmosCheck@@AEAAXPEBDJ@Z.c)
 */

void __fastcall AtmosCheck::StaticClientAtmosCheckEventFired(AtmosCheck *a1)
{
  const GUID *v2; // r8
  const GUID *v3; // r9

  AtmosCheck::Trace(a1, "Global\\Client_Atmos_Check_Event is signaled", 0);
  *((_DWORD *)a1 + 46) = 8;
  AtmosCheck::PerformLicenseCheck(a1, 1, v2, v3);
}
