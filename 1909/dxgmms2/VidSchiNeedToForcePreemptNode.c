/*
 * XREFs of VidSchiNeedToForcePreemptNode @ 0x1C00143E4
 * Callers:
 *     VidSchiCheckHwProgress @ 0x1C007B3F0 (VidSchiCheckHwProgress.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C00088B0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C000AD10 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiIncrementContextReference @ 0x1C0010520 (VidSchiIncrementContextReference.c)
 */

char __fastcall VidSchiNeedToForcePreemptNode(__int64 a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-28h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 1648), &LockHandle);
  if ( *(_DWORD *)(a1 + 2856) && !*(_DWORD *)(a1 + 2864) )
  {
    v5 = *(_QWORD *)(a1 + 96);
    if ( v5 == *(_QWORD *)(a1 + 136) )
    {
      v7 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
      *(_QWORD *)(a1 + 232) = v7;
      VidSchiIncrementContextReference(v7, v4);
      v3 = 1;
      VidSchiProfilePerformanceTick(1LL, v1, a1, v8, v7, 0LL, 0LL, -18LL);
    }
    else if ( v5 == *(_QWORD *)(a1 + 144) )
    {
      v9 = *(_QWORD *)(a1 + 8LL * *(unsigned int *)(a1 + 1552) + 1560);
      if ( v9 )
        VidSchiUpdateLastCompletedPresentTimestamp(v9, 0LL, 1);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v3;
}
