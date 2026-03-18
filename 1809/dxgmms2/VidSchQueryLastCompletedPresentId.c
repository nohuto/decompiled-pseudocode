/*
 * XREFs of VidSchQueryLastCompletedPresentId @ 0x1C0032900
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryLastCompletedPresentId(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = (unsigned int)a2;
  if ( a1 && a3 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( (unsigned int)a2 < *(_DWORD *)(v6 + 40) )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1656), &LockHandle);
      *(_DWORD *)a3 = *(_DWORD *)(a1 + 4 * v3 + 508);
      v8 = *(_DWORD *)(a1 + 8 * v3 + 576);
      *(_DWORD *)(a3 + 8) = v8;
      *(_DWORD *)(a3 + 4) = v8;
      *(_QWORD *)(a3 + 16) = *(_QWORD *)(a1 + 8 * v3 + 704);
      *(_QWORD *)(a3 + 24) = *(_QWORD *)(a1 + 8 * v3 + 832);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    v7 = WdLogNewEntry5_WdWarning(v6, a2);
    *(_QWORD *)(v7 + 24) = v3;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v7);
  }
  else
  {
    v10 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v10 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v10);
  }
  return 3221225485LL;
}
