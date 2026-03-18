/*
 * XREFs of PopBcdClose @ 0x1408B60BC
 * Callers:
 *     PopAllocateHiberContext @ 0x1407287C8 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x140759AFC (PoInitHiberServices.c)
 * Callees:
 *     BcdCloseStore @ 0x14073DA4C (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}
