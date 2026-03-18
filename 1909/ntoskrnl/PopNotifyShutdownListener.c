/*
 * XREFs of PopNotifyShutdownListener @ 0x1405ADE7C
 * Callers:
 *     PopSaveHiberContext @ 0x140599620 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1405ADEE4 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
