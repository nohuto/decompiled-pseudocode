/*
 * XREFs of BgkResumeFinished @ 0x14059D98C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x14072B814 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x14098E1D4 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14098E3E0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !Address )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  Address = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_140467D68 = 0;
  return result;
}
