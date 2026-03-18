/*
 * XREFs of ObpSetSiloDeviceMap @ 0x14074F7F8
 * Callers:
 *     ObpCreateDosDevicesDirectory @ 0x14074F5C4 (ObpCreateDosDevicesDirectory.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     PsGetEffectiveServerSilo @ 0x1400E5F40 (PsGetEffectiveServerSilo.c)
 *     ObpSetDeviceMap @ 0x1406EA410 (ObpSetDeviceMap.c)
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
