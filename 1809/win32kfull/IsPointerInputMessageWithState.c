/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C002E56C
 * Callers:
 *     IsPointerInputHookCall @ 0x1C002E4D0 (IsPointerInputHookCall.c)
 *     PostInputMessage @ 0x1C00D3F4C (PostInputMessage.c)
 *     UnlinkSendListSms @ 0x1C00D4EBC (UnlinkSendListSms.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01B9654 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01DB884 (xxxRetrievePointerInputMessage.c)
 *     _QuerySendMessage @ 0x1C01F6024 (_QuerySendMessage.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002E58C (IsPointerInputMessage.c)
 */

__int64 IsPointerInputMessageWithState()
{
  int v0; // eax
  int v1; // ecx
  unsigned int v2; // edx

  v0 = IsPointerInputMessage();
  v2 = 0;
  if ( v0 )
    return v1 != 595;
  return v2;
}
