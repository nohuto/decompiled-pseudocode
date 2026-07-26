/*
 * XREFs of PdcPortClose @ 0x1C0109968
 * Callers:
 *     PdcTaskClientUnregister @ 0x1C010989C (PdcTaskClientUnregister.c)
 * Callees:
 *     PdcpPortReleaseResources @ 0x1C0109B0C (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortClose(struct _EX_RUNDOWN_REF *P)
{
  ExWaitForRundownProtectionRelease(P + 1);
  ExRundownCompleted(P + 1);
  return PdcpPortReleaseResources(P);
}
