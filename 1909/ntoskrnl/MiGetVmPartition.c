/*
 * XREFs of MiGetVmPartition @ 0x1402C99D4
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140892BA4 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1408932E4 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x14089A550 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
