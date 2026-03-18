/*
 * XREFs of UnlinkSendListSms @ 0x1C00D4EBC
 * Callers:
 *     xxxReceiveMessage @ 0x1C003156C (xxxReceiveMessage.c)
 *     SendMsgCleanup @ 0x1C00BC690 (SendMsgCleanup.c)
 *     xxxReceiverDied @ 0x1C00BC764 (xxxReceiverDied.c)
 *     SuspendThreadQueue @ 0x1C01167E0 (SuspendThreadQueue.c)
 * Callees:
 *     IsPointerInputMessageWithState @ 0x1C002E56C (IsPointerInputMessageWithState.c)
 *     _FreeTouchInputInfo @ 0x1C01CB7C0 (_FreeTouchInputInfo.c)
 *     _FreeGestureInfo @ 0x1C01FCF30 (_FreeGestureInfo.c)
 */

__int64 __fastcall UnlinkSendListSms(__int64 *a1)
{
  int v2; // ecx
  int v3; // ecx
  __int64 *v4; // rax
  __int64 **v5; // rcx
  __int64 v6; // rcx

  v2 = *((_DWORD *)a1 + 26);
  if ( v2 == 576 )
  {
    FreeTouchInputInfo(a1[12], 0LL);
  }
  else if ( v2 == 281 )
  {
    FreeGestureInfo(a1[12], 0LL);
  }
  if ( (*((_DWORD *)a1 + 21) & 0x200) == 0
    && ((unsigned int)IsPointerInputMessageWithState() || v3 == 528 && *((_WORD *)a1 + 44) == 582) )
  {
    CTouchProcessor::UnreferenceMsgDataExternal(gpTouchProcessor, a1[12], 6LL, a1);
  }
  v4 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (__int64)v5;
  HMAssignmentUnlock(a1 + 14);
  v6 = a1[15];
  if ( v6 )
    Win32FreePool(v6);
  return Win32FreeToPagedLookasideList(SMSLookaside, a1);
}
