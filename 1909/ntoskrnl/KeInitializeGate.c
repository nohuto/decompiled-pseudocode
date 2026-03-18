/*
 * XREFs of KeInitializeGate @ 0x14013C9B4
 * Callers:
 *     KiInitializeProcessor @ 0x14059FC40 (KiInitializeProcessor.c)
 *     PspSetContextThreadInternal @ 0x1405E5AE0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E8510 (PspGetContextThreadInternal.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x1407506C0 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x14089CC84 (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CCDEC (PspRundownUmsThreadForApcDelivery.c)
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
