/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C000E874
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004A20 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C000E690 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchiCreateContextInternal @ 0x1C000FB7C (VidSchiCreateContextInternal.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00CA9E0 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0004910 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiInterlockedRemoveEntryList @ 0x1C000E9D0 (VidSchiInterlockedRemoveEntryList.c)
 *     VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified @ 0x1C000EA48 (VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified.c)
 */

__int64 __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rax
  _QWORD *v6; // r14
  KSPIN_LOCK *v7; // r15
  __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 result; // rax
  _QWORD *v11; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) && (*(_QWORD *)(a2 + 616) || *(_QWORD *)(a2 + 264)) )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v11[3] = 281LL;
    v11[4] = 2560LL;
    v11[5] = a2;
    v11[6] = *(_QWORD *)(a2 + 616);
    v11[7] = *(_QWORD *)(a2 + 264);
    WdLogEvent5_WdCriticalError(v11);
    __debugbreak();
LABEL_15:
    __fastfail(3u);
  }
  v5 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = a1;
  WdLogEvent5_WdEvent(v5);
  v6 = (_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v7 = (KSPIN_LOCK *)(v4 + 1656);
  *(_DWORD *)(a2 + 52) = 0;
  VidSchiInterlockedRemoveEntryList(v7, a2 + 8, a1 + 768);
  v8 = a1 + 704;
  if ( (*(_DWORD *)(a2 + 64) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v7, a1 + 728, (_QWORD *)(a2 + 8), (_DWORD *)(a1 + 744));
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(v7, &LockHandle);
    v9 = *(_QWORD **)(a1 + 712);
    if ( *v9 != v8 )
      goto LABEL_15;
    *v6 = v8;
    *(_QWORD *)(a2 + 16) = v9;
    *v9 = v6;
    *(_QWORD *)(a1 + 712) = v6;
    if ( a1 != -720 )
      ++*(_DWORD *)(a1 + 720);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  result = *(unsigned int *)(a2 + 64);
  if ( (result & 0x40) == 0 )
  {
    while ( 1 )
    {
      result = VidSchiInterlockedRemoveHeadListIfExistAndMoreThanSpecified(v7, a1 + 704, a1 + 720);
      if ( !result )
        break;
      ExFreePoolWithTag((PVOID)(result - 8), 0);
    }
  }
  return result;
}
