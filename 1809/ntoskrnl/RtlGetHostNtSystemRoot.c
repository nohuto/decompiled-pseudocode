/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x1407641D8
 * Callers:
 *     IoConfigureCrashDump @ 0x1401884AC (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x1409B4EDC (InitBootProcessor.c)
 * Callees:
 *     PsGetHostSilo @ 0x140091C70 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x14009238C (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 HostSilo; // rax

  HostSilo = PsGetHostSilo();
  return (char *)PsGetServerSiloGlobals(HostSilo) + 1064;
}
