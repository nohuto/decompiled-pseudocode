/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C00247DC
 * Callers:
 *     PostInputMessage @ 0x1C0023BFC (PostInputMessage.c)
 *     UnlinkSendListSms @ 0x1C002441C (UnlinkSendListSms.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01CD63C (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F1588 (xxxRetrievePointerInputMessage.c)
 *     _QuerySendMessage @ 0x1C020CFC8 (_QuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0024930 (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(__int64 a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // edx

  v1 = IsPointerInputMessage(a1);
  v3 = 0;
  if ( v1 )
    return v2 != 595;
  return v3;
}
