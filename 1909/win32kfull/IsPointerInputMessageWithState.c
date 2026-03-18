/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C002AC4C
 * Callers:
 *     PostInputMessage @ 0x1C002A06C (PostInputMessage.c)
 *     UnlinkSendListSms @ 0x1C002A88C (UnlinkSendListSms.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01CD4AC (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F1408 (xxxRetrievePointerInputMessage.c)
 *     _QuerySendMessage @ 0x1C020CD18 (_QuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C002ADA0 (IsPointerInputMessage.c)
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
