/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1406CAFA4
 * Callers:
 *     HvpMarkDirty @ 0x1405FAD2C (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1406CAF34 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x1402DB750 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
