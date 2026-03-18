/*
 * XREFs of AddToDeferredUserCritThreadUnlockList @ 0x1C0102CC4
 * Callers:
 *     HMUnlockObjectInternal @ 0x1C0026F70 (HMUnlockObjectInternal.c)
 *     ThreadUnlockWorker1 @ 0x1C002A380 (ThreadUnlockWorker1.c)
 *     HMUnlockObjectWorker @ 0x1C002FFA0 (HMUnlockObjectWorker.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C008B990 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     IS_USERCRIT_NOTOWNED_ATALL @ 0x1C008B9C4 (IS_USERCRIT_NOTOWNED_ATALL.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagKERNELHANDLETABLEENTRY *__fastcall AddToDeferredUserCritThreadUnlockList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct tagKERNELHANDLETABLEENTRY *result; // rax

  if ( !(unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() && !(unsigned int)IS_USERCRIT_NOTOWNED_ATALL() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( *(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  result = gpducstulHead;
  if ( gpducstulHead )
    *(_QWORD *)(a1 + 16) = gpducstulHead;
  gpducstulHead = (struct tagKERNELHANDLETABLEENTRY *)a1;
  return result;
}
