/*
 * XREFs of MiGetVmPartition @ 0x1402B4580
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x14085948C (MiCopyPagesIntoEnclave.c)
 *     MiCreateHardwareEnclave @ 0x140859B90 (MiCreateHardwareEnclave.c)
 *     MiBuildNewCloneDescriptor @ 0x14085DE80 (MiBuildNewCloneDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetVmPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14043A748 + 8LL * *(unsigned __int16 *)(a1 + 174));
}
