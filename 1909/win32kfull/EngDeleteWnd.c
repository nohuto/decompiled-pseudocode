/*
 * XREFs of EngDeleteWnd @ 0x1C0283EE0
 * Callers:
 *     <none>
 * Callees:
 *     UserAssociateHwnd @ 0x1C01EA01C (UserAssociateHwnd.c)
 *     GreDeleteWnd @ 0x1C0283FC0 (GreDeleteWnd.c)
 */

void __stdcall EngDeleteWnd(WNDOBJ *pwo)
{
  __int64 v2; // rcx

  if ( (unsigned int)UserIsUserCritSecIn() )
  {
    v2 = *(_QWORD *)&pwo[3].coClient.rclBounds.top;
    if ( v2 )
      UserAssociateHwnd(v2, 0LL);
    GreDeleteWnd((EWNDOBJ *)pwo);
  }
}
