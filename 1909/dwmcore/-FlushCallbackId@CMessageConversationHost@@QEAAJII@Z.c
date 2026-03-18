/*
 * XREFs of ?FlushCallbackId@CMessageConversationHost@@QEAAJII@Z @ 0x1800BD0E8
 * Callers:
 *     ?ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATIONRESOURCE_SETCALLBACKID@@@Z @ 0x1800BCFE8 (-ProcessSetCallbackId@CNotificationResource@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_NOTIFICATION.c)
 *     ?DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1800C7D90 (-DetachFromChannel@CAnimation@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID@@@Z @ 0x1801CD15C (-ProcessSetCallbackId@CAnimation@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATION_SETCALLBACKID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMessageConversationHost::FlushCallbackId(CMessageConversationHost *this, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(**((_QWORD **)this + 4) + 80LL))(
             *((_QWORD *)this + 4),
             a2,
             a3,
             0LL);
  if ( (_DWORD)result == -2018375675 )
    return 0LL;
  return result;
}
