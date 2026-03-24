/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1402E9680
 * Callers:
 *     PsStartSiloMonitor @ 0x1407556F0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x14088BA80 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x14088BCBC (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14088BD64 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14088BE6C (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 1104LL;
}
