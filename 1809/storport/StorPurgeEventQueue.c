/*
 * XREFs of StorPurgeEventQueue @ 0x1C003C894
 * Callers:
 *     RaidCompletionDpcRoutine @ 0x1C003A730 (RaidCompletionDpcRoutine.c)
 * Callees:
 *     RaidCompleteMiniportRequestCallback @ 0x1C0045DB8 (RaidCompleteMiniportRequestCallback.c)
 */

__int64 __fastcall StorPurgeEventQueue(_DWORD *a1, __int64 a2, int a3)
{
  unsigned int v3; // edi
  unsigned int i; // esi
  _QWORD *v7; // rbx
  _QWORD *v8; // r15
  int v9; // r9d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0;
  for ( i = 0; i < a1[2]; ++i )
  {
    v7 = &a1[16 * i + 16];
    KeAcquireInStackQueuedSpinLock(v7 + 5, &LockHandle);
    v8 = (_QWORD *)*v7;
    while ( v8 != v7 )
    {
      v9 = (int)v8;
      v8 = (_QWORD *)*v8;
      ++v3;
      RaidCompleteMiniportRequestCallback((_DWORD)v7, a3, *a1, v9, (__int64)StorRemoveEventQueueInternal);
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return v3;
}
