/*
 * XREFs of BgkResumeFinished @ 0x14056D684
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EBE0 (BgkNotifyDisplayOwnershipChange.c)
 *     PopFreeHiberContext @ 0x1406E1240 (PopFreeHiberContext.c)
 * Callees:
 *     BgFreeContext @ 0x14094F1D4 (BgFreeContext.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14094F3E0 (BgkpUnlockBgfxCodeSection.c)
 */

__int64 BgkResumeFinished()
{
  __int64 result; // rax

  if ( !Address )
    return BgkpUnlockBgfxCodeSection();
  BgFreeContext();
  Address = 0LL;
  result = BgkpUnlockBgfxCodeSection();
  byte_14043D5C8 = 0;
  return result;
}
