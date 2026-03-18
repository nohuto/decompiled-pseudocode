/*
 * XREFs of PspGetServerSiloStatePointer @ 0x140306C60
 * Callers:
 *     PsStartSiloMonitor @ 0x14077B960 (PsStartSiloMonitor.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9F50 (PsUnregisterSiloMonitor.c)
 *     PspMarkServerSiloAsTerminating @ 0x1408CA138 (PspMarkServerSiloAsTerminating.c)
 *     PspNotifyServerSiloCreation @ 0x1408CA1E0 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1408CA2E8 (PspNotifyServerSiloTermination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetServerSiloStatePointer(__int64 a1)
{
  return *(_QWORD *)(a1 + 1256) + 1088LL;
}
