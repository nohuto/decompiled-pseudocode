/*
 * XREFs of VidSchIsSyncObjectSignaled @ 0x1C0032F70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsSyncObjectSignaled(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 v4; // rax
  unsigned __int64 v6; // rdx
  char v7; // al
  unsigned __int64 v8; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( a1 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 8) + 1648LL), &LockHandle);
    if ( *(_DWORD *)(a1 + 44) == 2 )
    {
      if ( *(_BYTE *)(a1 + 27) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 40LL);
        v7 = *(_BYTE *)(a1 + 27);
      }
      else
      {
        v6 = *(_QWORD *)(a1 + 64);
        v7 = 0;
      }
      if ( v7 )
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 208) + 32LL);
      else
        v8 = *(_QWORD *)(a1 + 72);
      if ( v6 <= v8 )
        v2 = 1;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return v2;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v4);
    return 0;
  }
}
