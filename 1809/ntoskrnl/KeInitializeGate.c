/*
 * XREFs of KeInitializeGate @ 0x14013A374
 * Callers:
 *     KiInitializeProcessor @ 0x14057302C (KiInitializeProcessor.c)
 *     PspSetContextThreadInternal @ 0x140620A30 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140620C00 (PspGetContextThreadInternal.c)
 *     NtSetInformationProcess @ 0x140671C40 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x14072AB28 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x14085FCC4 (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x14088F14C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeInitializeGate(__int64 a1)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 4) = 0;
  result = a1 + 8;
  *(_WORD *)a1 = 263;
  *(_BYTE *)(a1 + 2) = 6;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  return result;
}
