/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1402E9580
 * Callers:
 *     PsStartSiloMonitor @ 0x140755710 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x14088BAA0 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x14088BCDC (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14088BD84 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14088BE8C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 1104LL;
}
