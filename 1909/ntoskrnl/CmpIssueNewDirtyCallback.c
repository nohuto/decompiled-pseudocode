/*
 * XREFs of CmpIssueNewDirtyCallback @ 0x1406EBF34
 * Callers:
 *     HvpMarkDirty @ 0x1405D58F0 (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1406EBEC4 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     PoIssueCoalescingNotification @ 0x1402F6CC0 (PoIssueCoalescingNotification.c)
 */

void CmpIssueNewDirtyCallback()
{
  if ( (CmpHoldLazyFlush & 8) != 0 )
  {
    if ( CmpCoalescingCallbackActive )
      PoIssueCoalescingNotification(CmpCoalescingRegistration, 0);
  }
}
