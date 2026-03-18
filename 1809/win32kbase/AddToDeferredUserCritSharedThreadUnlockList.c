/*
 * XREFs of AddToDeferredUserCritSharedThreadUnlockList @ 0x1C00EB854
 * Callers:
 *     ThreadUnlock1 @ 0x1C00250E0 (ThreadUnlock1.c)
 *     HMUnlockObjectInternal @ 0x1C002FDB0 (HMUnlockObjectInternal.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C00324A0 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall AddToDeferredUserCritSharedThreadUnlockList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax

  if ( !(unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( *(_QWORD *)(a1 + 16) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  result = gpducstulHead;
  if ( gpducstulHead )
    *(_QWORD *)(a1 + 16) = gpducstulHead;
  gpducstulHead = a1;
  return result;
}
