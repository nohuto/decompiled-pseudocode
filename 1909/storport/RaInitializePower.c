/*
 * XREFs of RaInitializePower @ 0x1C001AE34
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C001148C (RaidPowerPassToMiniPort.c)
 *     RaidAdapterCompleteInitialization @ 0x1C001AC2C (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     StorAllocateContiguousIoResources @ 0x1C000651C (StorAllocateContiguousIoResources.c)
 */

__int64 __fastcall RaInitializePower(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 4640) = 0;
  result = StorAllocateContiguousIoResources(((*(_DWORD *)(a1 + 444) + 7) & 0xFFFFFFF8) + 1088, a2, a1);
  *(_QWORD *)(a1 + 4632) = result;
  return result;
}
