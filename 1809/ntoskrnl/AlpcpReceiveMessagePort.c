/*
 * XREFs of AlpcpReceiveMessagePort @ 0x1406339A0
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x140614E70 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReceiveMessage @ 0x1406332D0 (AlpcpReceiveMessage.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     AlpcpWaitForSingleObject @ 0x140120494 (AlpcpWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x140619428 (AlpcpReferenceBlob.c)
 *     AlpcpQueryHeadLargeQueue @ 0x140634190 (AlpcpQueryHeadLargeQueue.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x1406A5DE4 (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     AlpcpLogReceiveMessage @ 0x14084CBC0 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogWaitForNewMessage @ 0x14084CCE4 (AlpcpLogWaitForNewMessage.c)
 */

__int64 __fastcall AlpcpReceiveMessagePort(_QWORD *a1, unsigned __int8 a2, __int64 a3, ULONG_PTR *a4, int a5)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rsi
  volatile signed __int64 *v8; // rbp
  int v9; // r12d
  int v10; // eax
  volatile signed __int64 *v11; // r14
  ULONG_PTR HeadLargeQueue; // rdi
  _KLOCK_ENTRY *v13; // rax
  signed __int64 BugCheckParameter4; // rax
  int v15; // eax
  __int64 result; // rax
  _QWORD **v17; // rcx
  __int64 v18; // rax
  unsigned int v19; // edx
  int v20; // ecx
  volatile signed __int64 *v21; // rdi
  struct _LIST_ENTRY *v22; // rdx
  _KTIMER *p_Timer; // rcx
  __int64 v24; // r8
  unsigned int v25; // r14d
  unsigned int v26; // edi
  __int64 v27; // rcx
  ULONG_PTR v28; // rdi
  _KTIMER *v29; // rax
  __int64 v30; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // r8
  struct _KTHREAD *v33; // [rsp+90h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  v33 = CurrentThread;
  v8 = (volatile signed __int64 *)(*a1 + 352LL);
  do
  {
LABEL_2:
    ExAcquirePushLockSharedEx(v6 + 352, 0LL);
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = *(_DWORD *)(v6 + 416);
        if ( (v10 & 0x40) != 0 )
        {
          v26 = -1073740032;
          goto LABEL_56;
        }
        if ( (v10 & 0x10) != 0 )
        {
          v26 = -1073741759;
          goto LABEL_56;
        }
        v11 = (volatile signed __int64 *)(v6 + 136);
        ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
        HeadLargeQueue = AlpcpQueryHeadLargeQueue(v6);
        if ( !HeadLargeQueue )
        {
          HeadLargeQueue = *(_QWORD *)(v6 + 144);
          if ( HeadLargeQueue == v6 + 144 || !HeadLargeQueue )
            break;
        }
        v13 = (_KLOCK_ENTRY *)KeAbPreAcquire(HeadLargeQueue - 16, 0LL, 1);
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(HeadLargeQueue - 16), 0LL) )
        {
          if ( v13 )
            v13->AcquiredByte |= 1u;
          *(_BYTE *)(HeadLargeQueue - 32) |= 1u;
          BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HeadLargeQueue - 24), 0x10000uLL)
                             + 0x10000;
          if ( BugCheckParameter4 <= 0 )
            KeBugCheckEx(0x18u, 0LL, HeadLargeQueue, 0x27uLL, BugCheckParameter4);
LABEL_12:
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 7) == 1 )
            --*(_DWORD *)(v6 + 448);
          else
            --*(_DWORD *)(v6 + 452);
          *(_DWORD *)(HeadLargeQueue + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(HeadLargeQueue + 16) = 0LL;
          **(_QWORD **)(HeadLargeQueue + 8) = *(_QWORD *)HeadLargeQueue;
          *(_QWORD *)(*(_QWORD *)HeadLargeQueue + 8LL) = *(_QWORD *)(HeadLargeQueue + 8);
          if ( (*(_DWORD *)(HeadLargeQueue + 40) & 0x200) == 0 )
            goto LABEL_15;
          v19 = (*(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 144) )
            v19 = *(_QWORD *)(HeadLargeQueue + 136) != 0LL ? 0x80000000 : 0;
          v20 = v19 | 0x10000000;
          if ( !*(_QWORD *)(HeadLargeQueue + 152) )
            v20 = v19;
          if ( (v20 & a5) != 0 )
          {
LABEL_15:
            *(_WORD *)(HeadLargeQueue + 244) |= 0x2000u;
            ExAcquirePushLockExclusiveEx(v6 + 176, 0LL);
            v15 = *(_DWORD *)(HeadLargeQueue + 40);
            *(_QWORD *)(HeadLargeQueue + 16) = v6;
            *(_DWORD *)(HeadLargeQueue + 40) = v15 & 0xFFFFFF83 | (4 * (*(_DWORD *)(v6 + 416) & 6)) | 3;
            *(_QWORD *)(HeadLargeQueue + 8) = *(_QWORD *)(v6 + 192);
            *(_QWORD *)HeadLargeQueue = v6 + 184;
            **(_QWORD **)(v6 + 192) = HeadLargeQueue;
            *(_QWORD *)(v6 + 192) = HeadLargeQueue;
            ++*(_DWORD *)(v6 + 456);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 176), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 176));
            KeAbPostRelease(v6 + 176);
          }
          else
          {
            *(_WORD *)(HeadLargeQueue + 244) &= ~0x2000u;
            --*(_WORD *)(HeadLargeQueue - 30);
          }
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( v9 )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          goto LABEL_24;
        }
        if ( v13 )
          KeAbPostReleaseEx(HeadLargeQueue - 16, v13);
        if ( !*(_QWORD *)(HeadLargeQueue + 96) )
        {
          AlpcpReferenceBlob(HeadLargeQueue);
          if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
          KeAbPostRelease(v6 + 136);
          if ( v9 )
          {
            if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
          }
          else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          {
            ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
          --*(_WORD *)(HeadLargeQueue - 30);
          ExAcquirePushLockSharedEx(v6 + 352, 0LL);
          v9 = 0;
          if ( (*(_DWORD *)(v6 + 416) & 0x50) != 0 )
          {
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
              goto LABEL_86;
          }
          else
          {
            ExAcquirePushLockExclusiveEx(v6 + 136, 0LL);
            if ( !AlpcpQueryHeadLargeQueue(v6) )
            {
              v27 = *(_QWORD *)(v6 + 144);
              if ( v27 == v6 + 144 || !v27 )
                v27 = 0LL;
              if ( HeadLargeQueue == v27 )
                goto LABEL_12;
            }
            if ( HeadLargeQueue == AlpcpQueryHeadLargeQueue(v6) )
              goto LABEL_12;
            if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
            KeAbPostRelease(v6 + 136);
            if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
LABEL_86:
              ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
          }
          KeAbPostRelease(v6 + 352);
          AlpcpUnlockMessage(HeadLargeQueue);
          CurrentThread = v33;
          goto LABEL_2;
        }
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( v9 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        ExAcquirePushLockExclusiveEx(v6 + 352, 0LL);
        CurrentThread = v33;
        v9 = 1;
      }
      v17 = *(_QWORD ***)(v6 + 384);
      if ( v17 != (_QWORD **)(v6 + 384) )
      {
        v28 = (ULONG_PTR)(v17 - 10);
        *v17[1] = *v17;
        (*v17)[1] = v17[1];
        --*(_DWORD *)(v6 + 464);
        AlpcpReferenceBlob((ULONG_PTR)(v17 - 10));
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        if ( v9 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        AlpcpLockForCachedReferenceBlob(v28);
        *(_WORD *)(v28 - 30) -= 2;
        *a4 = v28;
        return 0LL;
      }
      v18 = *(_QWORD *)(v6 + 360);
      if ( v18 && (*(_QWORD *)(*(_QWORD *)(v18 + 80) + 64LL) & 0xFFFFFFLL) != 0xFFFFFF )
      {
        if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
        KeAbPostRelease(v6 + 136);
        v26 = 1073741872;
        goto LABEL_56;
      }
      if ( (_InterlockedExchangeAdd64(v11, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 136));
      KeAbPostRelease(v6 + 136);
      if ( *(_QWORD *)(v6 + 32) )
        goto LABEL_55;
      if ( (*(_DWORD *)(v6 + 416) & 0x200) != 0 )
        break;
      if ( *(_QWORD *)(v6 + 368) )
      {
        v26 = 258;
LABEL_56:
        if ( v9 )
        {
          if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        }
        else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        {
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        }
        KeAbPostRelease(v6 + 352);
        return v26;
      }
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0x20) != 0 )
        goto LABEL_55;
      if ( v9 )
      {
        v21 = (volatile signed __int64 *)(v6 + 224);
        LODWORD(CurrentThread[1].RelativeTimerBias) = a5;
        ExAcquirePushLockExclusiveEx(v6 + 224, 0LL);
        v22 = *(struct _LIST_ENTRY **)(v6 + 240);
        p_Timer = &CurrentThread[1].Timer;
        if ( v22->Flink != (struct _LIST_ENTRY *)(v6 + 232) )
          goto LABEL_129;
        *(_QWORD *)&p_Timer->Header.Lock = v6 + 232;
        CurrentThread[1].Timer.Header.WaitListHead.Flink = v22;
        v22->Flink = (struct _LIST_ENTRY *)p_Timer;
        *(_QWORD *)(v6 + 240) = p_Timer;
        if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 224));
        KeAbPostRelease(v6 + 224);
        if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        if ( AlpcpLogEnabled )
          AlpcpLogWaitForNewMessage(v6);
        v25 = AlpcpCompleteDeferSignalRequestAndWait(a1, &CurrentThread[1].KernelStack, v24, a2, a3);
        if ( v25 )
        {
          ExAcquirePushLockExclusiveEx(v6 + 224, 0LL);
          v29 = &v33[1].Timer;
          v30 = *(_QWORD *)&v33[1].Timer.Header.Lock;
          if ( v30 )
          {
            v33[1].RelativeTimerBias = 0LL;
            Flink = v33[1].Timer.Header.WaitListHead.Flink;
            if ( *(_KTIMER **)(v30 + 8) != v29 || (_KTIMER *)Flink->Flink != v29 )
LABEL_129:
              __fastfail(3u);
            Flink->Flink = (struct _LIST_ENTRY *)v30;
            *(_QWORD *)(v30 + 8) = Flink;
            *(_QWORD *)&v29->Header.Lock = 0LL;
            if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v21);
            KeAbPostRelease((ULONG_PTR)v21);
            return v25;
          }
          if ( (_InterlockedExchangeAdd64(v21, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v21);
          KeAbPostRelease((ULONG_PTR)v21);
          AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReceive, 0, 0, 0LL);
          HeadLargeQueue = v33[1].RelativeTimerBias;
          v33[1].RelativeTimerBias = 0LL;
          if ( !HeadLargeQueue )
            return v25;
LABEL_53:
          AlpcpLockForCachedReferenceBlob(HeadLargeQueue);
          --*(_WORD *)(HeadLargeQueue - 30);
          *(_DWORD *)(HeadLargeQueue + 40) &= ~0x2000u;
LABEL_24:
          if ( AlpcpLogEnabled )
            AlpcpLogReceiveMessage(HeadLargeQueue);
          *a4 = HeadLargeQueue;
          return 0LL;
        }
        CurrentThread = v33;
        HeadLargeQueue = v33[1].RelativeTimerBias;
        v33[1].RelativeTimerBias = 0LL;
        if ( HeadLargeQueue )
          goto LABEL_53;
        goto LABEL_2;
      }
      if ( _InterlockedCompareExchange64(v8, 1LL, 17LL) == 17 )
      {
        v9 = 1;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
        KeAbPostRelease(v6 + 352);
        ExAcquirePushLockExclusiveEx(v6 + 352, 0LL);
        v9 = 1;
      }
    }
    if ( (*(_DWORD *)(v6 + 256) & 0x1000) == 0 )
    {
LABEL_55:
      v26 = -1073741823;
      goto LABEL_56;
    }
    if ( v9 )
    {
      if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 352));
    }
    else if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)(v6 + 352));
    }
    KeAbPostRelease(v6 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogWaitForNewMessage(v6);
    result = AlpcpCompleteDeferSignalRequestAndWait(a1, *(_QWORD *)(v6 + 248), v32, a2, a3);
  }
  while ( !(_DWORD)result );
  return result;
}
