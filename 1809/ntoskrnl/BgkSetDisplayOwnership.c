/*
 * XREFs of BgkSetDisplayOwnership @ 0x140193FA0
 * Callers:
 *     <none>
 * Callees:
 *     BgkNotifyDisplayOwnershipChange @ 0x14016EAC0 (BgkNotifyDisplayOwnershipChange.c)
 */

__int64 __fastcall BgkSetDisplayOwnership(char a1)
{
  return BgkNotifyDisplayOwnershipChange(a1, 0LL);
}
