/*
 * XREFs of BgkResumeFinished @ 0x14056C684
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAC0 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1406DFFC0 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x14094E1D4 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14094E3E0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !Address )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  Address = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_14043C508 = 0;
  return result;
}
