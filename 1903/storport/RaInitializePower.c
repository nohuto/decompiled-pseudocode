/*
 * XREFs of RaInitializePower @ 0x1C001A6B8
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C00112EC (RaidPowerPassToMiniPort.c)
 *     RaidAdapterCompleteInitialization @ 0x1C001A4B0 (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C00064CC (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 4640) = 0;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1088, a2, a1);
  *(_QWORD *)(a1 + 4632) = result;
  return result;
}
