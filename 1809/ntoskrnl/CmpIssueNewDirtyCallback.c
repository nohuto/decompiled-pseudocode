/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1406CAFC4
 * Callers:
 *     HvpMarkDirty @ 0x1405FAD2C (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1406CAF54 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x1402DB650 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
