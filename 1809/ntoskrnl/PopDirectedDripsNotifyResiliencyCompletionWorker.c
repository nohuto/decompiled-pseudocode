/*
 * XREFs of PopDirectedDripsNotifyResiliencyCompletionWorker @ 0x1402D6C50
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PopPdcCompleteResiliencyCallback @ 0x140870250 (PopPdcCompleteResiliencyCallback.c)
 */

__int64 __fastcall PopDirectedDripsNotifyResiliencyCompletionWorker(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  unsigned int v3; // esi
  __int64 result; // rax
  __int64 v5; // rcx

  v1 = (volatile signed __int64 *)(a1 + 312);
  v3 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 312, 0LL);
  if ( *(_BYTE *)(a1 + 328) )
  {
    v3 = *(_DWORD *)(a1 + 324);
    *(_DWORD *)(a1 + 324) = 0;
    *(_BYTE *)(a1 + 328) = 0;
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 368), 0);
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  result = KeAbPostRelease((ULONG_PTR)v1);
  if ( v3 )
    return PopPdcCompleteResiliencyCallback(v5, v3);
  return result;
}
