/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1406EAC74
 * Callers:
 *     HvpMarkDirty @ 0x1405D5130 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1406EAC04 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x1402F7210 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
