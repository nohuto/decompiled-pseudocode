/*
 * XREFs of PspGetServerSiloStatePointer @ 0x140306710
 * Callers:
 *     PsStartSiloMonitor @ 0x14077E230 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9830 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x1408C9A18 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1408C9AC0 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1408C9BC8 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 1088LL;
}
