/*
 * XREFs of VidSchQueryLastCompletedPresentIdDWM @ 0x1C0013570
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryLastCompletedPresentIdDWM(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _KLOCK_QUEUE_HANDLE v13; // [rsp+20h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF

  if ( a1 && a3 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = (unsigned int)a2;
    if ( (unsigned int)a2 >= *(_DWORD *)(v5 + 40) )
    {
      v11 = WdLogNewEntry5_WdWarning(a1, a2);
      *(_QWORD *)(v11 + 24) = v6;
      *(_QWORD *)(v11 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v11);
      return 3221225485LL;
    }
    else
    {
      _mm_lfence();
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1648), &LockHandle);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 1656), &v13);
      *(_DWORD *)a3 = *(_DWORD *)(a1 + 4 * v6 + 508);
      *(_DWORD *)(a3 + 4) = *(_DWORD *)(a1 + 8 * v6 + 576);
      *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 8 * v6 + 704);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v13);
      *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(v5 + 8 * v6 + 2576) + 33184LL);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(v5 + 8 * v6 + 2576) + 33192LL);
      v7 = 0;
      v8 = *(int *)(*(_QWORD *)(v5 + 8 * v6 + 2576) + 172LL);
      if ( (int)v8 > -1 )
        v9 = *(_QWORD *)(v5 + 2704) + 136 * v8;
      else
        v9 = 0LL;
      if ( v9 )
        v7 = *(_DWORD *)(v9 + 100);
      *(_DWORD *)(a3 + 32) = v7;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v12 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
}
