/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1406EFC5C
 * Callers:
 *     IoConfigureCrashDump @ 0x140193100 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 HostSilo; // rax

  HostSilo = PsGetHostSilo();
  return (char *)PsGetServerSiloGlobals(HostSilo) + 1048;
}
