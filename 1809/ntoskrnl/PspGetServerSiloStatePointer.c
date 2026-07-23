/*
 * XREFs of PspGetServerSiloStatePointer @ 0x1402E9870
 * Callers:
 *     PsStartSiloMonitor @ 0x1407568E0 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x14088CCE0 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x14088CF1C (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x14088CFC4 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x14088D0CC (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 1104LL;
}
