/*
 * XREFs of BgkSetDisplayOwnership @ 0x14019EDC0
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x140178970 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkSetDisplayOwnership(char a1)
{
  return BgkNotifyDisplayOwnershipChange(a1, 0LL);
}
