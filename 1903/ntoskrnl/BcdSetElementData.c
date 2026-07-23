/*
 * XREFs of BcdSetElementData @ 0x14092EC80
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140340BBC (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B681C (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14092FC10 (BiBindEfiBootManager.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 */

NTSTATUS __cdecl BcdSetElementData(HANDLE BcdObjectHandle, ULONG BcdElement, PVOID Buffer, ULONG BufferSize)
{
  return BcdSetElementDataWithFlags(BcdObjectHandle, BcdElement, (BCD_FLAGS)Buffer, Buffer, BufferSize);
}
