/*
 * XREFs of PopBcdClose @ 0x1408B67EC
 * Callers:
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 * Callees:
 *     BcdCloseStore @ 0x14073BB4C (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}
