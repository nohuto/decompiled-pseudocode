/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C0023E14
 * Callers:
 *     PostInputMessage @ 0x1C0019B84 (PostInputMessage.c)
 *     UnlinkSendListSms @ 0x1C00222EC (UnlinkSendListSms.c)
 *     IsPointerInputHookCall @ 0x1C0023D9C (IsPointerInputHookCall.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01985D8 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01B8C08 (xxxRetrievePointerInputMessage.c)
 *     _QuerySendMessage @ 0x1C01D1788 (_QuerySendMessage.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0023E34 (IsPointerInputMessage.c)
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
