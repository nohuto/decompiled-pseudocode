/*
 * XREFs of KeInitializeGate @ 0x14013C3C4
 * Callers:
 *     KiInitializeProcessor @ 0x14059FC60 (KiInitializeProcessor.c)
 *     PspSetContextThreadInternal @ 0x1405E5310 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1405E7D40 (PspGetContextThreadInternal.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     MiInitializePartition @ 0x14074FC30 (MiInitializePartition.c)
 *     MmScrubMemory @ 0x14089D464 (MmScrubMemory.c)
 *     PspRundownUmsThreadForApcDelivery @ 0x1408CD50C (PspRundownUmsThreadForApcDelivery.c)
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
