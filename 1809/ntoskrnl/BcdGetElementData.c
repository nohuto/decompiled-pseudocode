/*
 * XREFs of BcdGetElementData @ 0x1408F22A4
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140320794 (WheaPersistOfflinedPage.c)
 *     BiResolveLocateDevice @ 0x1408F2480 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x1407147F0 (BcdGetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdGetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, PULONG BufferSize)
{
  return BcdGetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
