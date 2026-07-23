/*
 * XREFs of ObpSetSiloDeviceMap @ 0x14072D4A8
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14072D298 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14008FC70 (PsGetEffectiveServerSilo.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     ObpSetDeviceMap @ 0x1406C7C1C (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObpSetSiloDeviceMap(__int64 a1, void *a2)
{
  void *HostSilo; // rax
  __int64 v5; // rbx
  PEPROCESS v6; // rdx

  HostSilo = (void *)PsGetHostSilo();
  v5 = (__int64)HostSilo;
  if ( (void *)a1 == HostSilo )
  {
    v6 = PsInitialSystemProcess;
  }
  else
  {
    HostSilo = (void *)PsGetEffectiveServerSilo(a1);
    v6 = 0LL;
  }
  return ObpSetDeviceMap(HostSilo, (__int64)v6, a2, 0, (a1 != v5) + 3, 0LL);
}
