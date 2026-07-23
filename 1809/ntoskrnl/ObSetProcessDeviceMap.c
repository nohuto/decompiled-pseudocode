/*
 * XREFs of ObSetProcessDeviceMap @ 0x140865090
 * Callers:
 *     NtSetInformationProcess @ 0x140672E00 (NtSetInformationProcess.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     ObpSetDeviceMap @ 0x1406C7C1C (ObpSetDeviceMap.c)
 */

NTSTATUS __fastcall ObSetProcessDeviceMap(__int64 a1, void *a2, KPROCESSOR_MODE a3)
{
  void *ProcessServerSilo; // rax

  ProcessServerSilo = (void *)PsGetProcessServerSilo(a1);
  return ObpSetDeviceMap(ProcessServerSilo, a1, a2, a3, 2, 0LL);
}
