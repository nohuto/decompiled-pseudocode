/*
 * XREFs of PopBcdOpen @ 0x1408B6800
 * Callers:
 *     PopAllocateHiberContext @ 0x140726928 (PopAllocateHiberContext.c)
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     PoInitHiberServices @ 0x14074B26C (PoInitHiberServices.c)
 * Callees:
 *     BcdOpenStore @ 0x14073C588 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(a1, 2u, a1);
}
