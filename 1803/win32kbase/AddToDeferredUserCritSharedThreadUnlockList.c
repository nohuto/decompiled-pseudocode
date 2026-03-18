/*
 * XREFs of AddToDeferredUserCritSharedThreadUnlockList @ 0x1C00B0EC8
 * Callers:
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C0037470 (HMUnlockObjectInternal.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C003AF80 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall AddToDeferredUserCritSharedThreadUnlockList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  if ( !(unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  if ( *(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  result = gpducstulHead;
  if ( gpducstulHead )
    *(_QWORD *)(a1 + 16) = gpducstulHead;
  gpducstulHead = a1;
  return result;
}
