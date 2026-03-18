/*
 * XREFs of MiGetVmPartition @ 0x1402B4480
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x1408594AC (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140859BB0 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x14085DEA0 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14043A748 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
