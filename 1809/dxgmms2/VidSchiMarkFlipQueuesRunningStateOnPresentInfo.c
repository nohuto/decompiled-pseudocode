/*
 * XREFs of VidSchiMarkFlipQueuesRunningStateOnPresentInfo @ 0x1C002E33C
 * Callers:
 *     VidSchiResumeFlipQueues @ 0x1C00C71E0 (VidSchiResumeFlipQueues.c)
 *     VidSchiSuspendFlipQueues @ 0x1C00C7820 (VidSchiSuspendFlipQueues.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiMarkFlipQueuesRunningStateOnPresentInfo(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  _QWORD *v9; // rax
  int v10; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
  v8 = *(_DWORD *)(a2 + 66424);
  if ( a3 )
  {
    if ( !v8 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
      v9[7] = a3;
      v9[3] = 281LL;
      v9[4] = 4096LL;
      v9[5] = a1;
      v9[6] = a2;
      v8 = WdLogEvent5_WdCriticalError(v9);
      __debugbreak();
    }
    v10 = v8 - 1;
    *(_DWORD *)(a2 + 66424) = v10;
    if ( !v10 )
      *(_BYTE *)(a2 + 66420) = 1;
  }
  else
  {
    *(_BYTE *)(a2 + 66420) = 0;
    *(_DWORD *)(a2 + 66424) = v8 + 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
