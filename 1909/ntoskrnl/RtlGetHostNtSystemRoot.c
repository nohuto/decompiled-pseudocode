/*
 * XREFs of RtlGetHostNtSystemRoot @ 0x140623C90
 * Callers:
 *     IoConfigureCrashDump @ 0x1401938E0 (IoConfigureCrashDump.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400C9B10 (PsGetServerSiloGlobals.c)
 */

char *RtlGetHostNtSystemRoot()
{
  __int64 HostSilo; // rax

  HostSilo = PsGetHostSilo();
  return (char *)PsGetServerSiloGlobals(HostSilo) + 1048;
}
