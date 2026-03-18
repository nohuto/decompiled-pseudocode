/*
 * XREFs of PopNotifyShutdownListener @ 0x1405ADE9C
 * Callers:
 *     PopSaveHiberContext @ 0x140599640 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x1405ADF04 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  __int64 result; // rax

  if ( PopShutdownNotificationCallback )
    return (*((__int64 (__fastcall **)(_QWORD))PopShutdownNotificationCallback + 1))(*((_QWORD *)PopShutdownNotificationCallback
                                                                                     + 2));
  return result;
}
