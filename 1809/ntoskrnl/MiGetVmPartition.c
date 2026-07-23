/*
 * XREFs of MiGetVmPartition @ 0x1402B4770
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x14085A6EC (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x14085ADF0 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x14085F0E0 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
