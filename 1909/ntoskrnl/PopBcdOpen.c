/*
 * XREFs of PopBcdOpen @ 0x1408B60D0
 * Callers:
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x14073E488 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(a1, 2u, a1);
}
