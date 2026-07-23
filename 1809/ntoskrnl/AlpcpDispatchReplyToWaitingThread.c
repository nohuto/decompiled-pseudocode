/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x140635550
 * Callers:
 *     AlpcpDispatchMessage @ 0x14061B7E4 (AlpcpDispatchMessage.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140618B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406371B0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406371F0 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpUnlockBlob @ 0x140638060 (AlpcpUnlockBlob.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084B7F8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x14084CC24 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x14084CDE0 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 *a1)
{
  ULONG_PTR v1; // rdi
  int v2; // eax
  __int64 v4; // r13
  __int64 v5; // rsi
  int v6; // ecx
  __int64 v7; // r12
  int v8; // ebp
  struct _KTHREAD *CurrentThread; // r15
  __int16 v11; // dx
  __int16 v12; // dx
  unsigned int v13; // ecx
  signed __int64 v14; // r13
  int v15; // eax
  volatile signed __int64 *v16; // r15
  unsigned int v17; // ebp
  __int64 v18; // rbx
  __int64 v19; // rax
  signed __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // r9
  int v23; // [rsp+80h] [rbp+8h]
  __int16 v24; // [rsp+90h] [rbp+18h]
  struct _KTHREAD *v25; // [rsp+98h] [rbp+20h]

  v1 = a1[1];
  v2 = *((_DWORD *)a1 + 12);
  v4 = *a1;
  a1[4] = 0LL;
  a1[3] = 0LL;
  a1[5] = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v6 = *(_DWORD *)(v1 + 40);
  v7 = *(_QWORD *)(v1 + 32);
  v23 = v2;
  v8 = *(_DWORD *)(v5 + 416) >> 1;
  v24 = v6;
  if ( (unsigned __int64)*((unsigned __int16 *)a1 + 26) <= *(_QWORD *)(v5 + 272) )
  {
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *((_WORD *)a1 + 27) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v5 + 352, 0LL);
      *(_DWORD *)(v5 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
      KeAbPostRelease(v5 + 352);
      v6 = *(_DWORD *)(v1 + 40);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *((_WORD *)a1 + 26);
    v25 = CurrentThread;
    *(_WORD *)(v1 + 240) = *((_WORD *)a1 + 26) - 40;
    v11 = *((_WORD *)a1 + 27);
    *(_WORD *)(v1 + 244) = v11;
    *(_WORD *)(v1 + 246) = *((_WORD *)a1 + 28);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v23 & 0x10000) != 0 )
    {
      v12 = v11 & 0xDFFF;
      v13 = v6 | 0x200;
    }
    else
    {
      v12 = v11 | 0x2000;
      v13 = v6 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v1 + 40) = v13;
    *(_WORD *)(v1 + 244) = v12;
    AlpcpSetOwnerPortMessage(v1, v4);
    if ( (v23 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 40) |= 0x100u;
    v14 = *(_QWORD *)(v1 + 16);
    v15 = *(_DWORD *)(v1 + 40);
    if ( v14 )
    {
      v16 = (volatile signed __int64 *)(v14 + 176);
      ExAcquirePushLockExclusiveEx(v14 + 176, 0LL);
      --*(_DWORD *)(v14 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      v14 = 0LL;
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v16);
      KeAbPostRelease((ULONG_PTR)v16);
      --*(_WORD *)(v1 - 30);
      v15 = *(_DWORD *)(v1 + 40);
      CurrentThread = v25;
    }
    *(_DWORD *)(v1 + 40) = v15 & 0xFFFFFFF8 | 5;
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v17 = *(_DWORD *)(v1 + 40) & 0xFFFFFF87 | (8 * (v8 & 3));
    *(_DWORD *)(v1 + 40) = v17;
    if ( ((v17 >> 3) & 0xF) == 1 )
    {
      v18 = *(_QWORD *)(v5 + 16);
      ExAcquirePushLockSharedEx(v18 - 16, 0LL);
      v19 = *(_QWORD *)(v18 + 8);
      if ( v19 )
        v20 = *(_QWORD *)(v19 + 56);
      else
        v20 = v14;
      *(_QWORD *)(v1 + 120) = v20;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v18 - 16), v14, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v18 - 16));
      KeAbPostRelease(v18 - 16);
    }
    else
    {
      *(_QWORD *)(v1 + 120) = *(_QWORD *)(v5 + 56);
    }
    if ( *(_QWORD *)(v1 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v1);
      *(_QWORD *)(v1 + 176) = v14;
    }
    ExAcquirePushLockSharedEx(v5 + 352, 0LL);
    if ( *(_QWORD *)(v1 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v5, v1);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), v14, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    KeAbPostRelease(v5 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v1);
    if ( (v23 & 0x20000) != 0 )
    {
      v21 = AlpcpLogEnabled == 0;
      *(_QWORD *)(v1 + 32) = CurrentThread;
      a1[3] = v7;
      if ( !v21 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      *(_QWORD *)(v1 + 32) = v14;
      --*(_WORD *)(v1 - 30);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v1);
      AlpcpUnlockBlob(v1);
      if ( (v23 & 4) != 0 )
        a1[3] = v7;
      else
        KeReleaseSemaphoreEx(v7 + 1608, 1LL, 1, v22, 2);
    }
    if ( (v24 & 0x1000) != 0 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
  else
  {
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
}
