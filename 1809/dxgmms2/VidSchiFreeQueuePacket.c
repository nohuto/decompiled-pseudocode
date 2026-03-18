/*
 * XREFs of VidSchiFreeQueuePacket @ 0x1C0012140
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiCreateContextInternal @ 0x1C0011938 (VidSchiCreateContextInternal.c)
 *     VidSchiUnwaitWaitQueuePacket @ 0x1C0011F58 (VidSchiUnwaitWaitQueuePacket.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00C7C90 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     VidSchiInterlockedInsertTailList @ 0x1C0003990 (VidSchiInterlockedInsertTailList.c)
 */

void __fastcall VidSchiFreeQueuePacket(__int64 a1, __int64 a2)
{
  __int64 v4; // r15
  __int64 v5; // rax
  KSPIN_LOCK *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD **v11; // rsi
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE v17; // [rsp+38h] [rbp-50h] BYREF
  struct _KLOCK_QUEUE_HANDLE v18; // [rsp+50h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( !*(_DWORD *)(a2 + 48) && (*(_QWORD *)(a2 + 616) || *(_QWORD *)(a2 + 264)) )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
    v15[3] = 281LL;
    v15[4] = 2560LL;
    v15[5] = a2;
    v15[6] = *(_QWORD *)(a2 + 616);
    v15[7] = *(_QWORD *)(a2 + 264);
    WdLogEvent5_WdCriticalError(v15);
    __debugbreak();
    JUMPOUT(0x1C0022212LL);
  }
  v5 = WdLogNewEntry5_WdEvent(a1, a2);
  *(_QWORD *)(v5 + 24) = a2;
  *(_QWORD *)(v5 + 32) = a1;
  WdLogEvent5_WdEvent(v5);
  *(_QWORD *)(a2 + 56) = MEMORY[0xFFFFF78000000320];
  v6 = (KSPIN_LOCK *)(v4 + 1656);
  *(_DWORD *)(a2 + 52) = 0;
  v7 = a2 + 8;
  KeAcquireInStackQueuedSpinLock(v6, &LockHandle);
  v8 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) != v7 )
    goto LABEL_25;
  v9 = *(_QWORD **)(a2 + 16);
  if ( *v9 != v7 )
    goto LABEL_25;
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  if ( a1 != -768 )
    --*(_DWORD *)(a1 + 768);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( (*(_DWORD *)(a2 + 64) & 0x40) != 0 )
  {
    VidSchiInterlockedInsertTailList(v6, a1 + 728, (_QWORD *)(a2 + 8), (_DWORD *)(a1 + 744));
    goto LABEL_11;
  }
  KeAcquireInStackQueuedSpinLock(v6, &v17);
  v10 = *(_QWORD **)(a1 + 712);
  if ( *v10 != a1 + 704 )
LABEL_25:
    __fastfail(3u);
  *(_QWORD *)v7 = a1 + 704;
  *(_QWORD *)(a2 + 16) = v10;
  *v10 = v7;
  *(_QWORD *)(a1 + 712) = v7;
  if ( a1 != -720 )
    ++*(_DWORD *)(a1 + 720);
  KeReleaseInStackQueuedSpinLock(&v17);
LABEL_11:
  if ( (*(_DWORD *)(a2 + 64) & 0x40) == 0 )
  {
    v11 = (_QWORD **)(a1 + 704);
    while ( 1 )
    {
      v12 = 0LL;
      KeAcquireInStackQueuedSpinLock(v6, &v18);
      v13 = *v11;
      if ( *v11 != v11 && *(_DWORD *)(a1 + 720) > 0x10u )
      {
        v12 = *v11;
        if ( (_QWORD **)v13[1] != v11 )
          goto LABEL_25;
        v14 = (_QWORD *)*v13;
        if ( (_QWORD *)v14[1] != v12 )
          goto LABEL_25;
        *v11 = v14;
        v14[1] = v11;
        --*(_DWORD *)(a1 + 720);
      }
      KeReleaseInStackQueuedSpinLock(&v18);
      if ( !v12 )
        return;
      ExFreePoolWithTag(v12 - 1, 0);
    }
  }
}
