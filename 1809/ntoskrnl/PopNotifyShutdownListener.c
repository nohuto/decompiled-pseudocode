/*
 * XREFs of PopNotifyShutdownListener @ 0x14057EFB4
 * Callers:
 *     PopSaveHiberContext @ 0x14056B060 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x14057F014 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
