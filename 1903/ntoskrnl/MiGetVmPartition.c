/*
 * XREFs of MiGetVmPartition @ 0x1402C9C74
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x140893384 (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140893AC4 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x14089AD30 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
