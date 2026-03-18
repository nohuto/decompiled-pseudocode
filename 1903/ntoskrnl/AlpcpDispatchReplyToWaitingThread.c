/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x1405E1230
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x1406488A4 (AlpcpDispatchMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405E2E80 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpDestroyBlob @ 0x1405E4880 (AlpcpDestroyBlob.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x140645AB4 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885AD8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x140886EF0 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408870D8 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1)
{
  ULONG_PTR v1; // rdi
  int v2; // r12d
  signed __int32 *v4; // r13
  __int64 v5; // rbp
  int v6; // ecx
  int v7; // esi
  struct _KTHREAD *CurrentThread; // r8
  __int16 v9; // dx
  __int16 v10; // dx
  unsigned int v11; // ecx
  int v12; // eax
  int v13; // r12d
  __int64 v14; // r13
  volatile signed __int64 *v15; // r13
  unsigned int v16; // esi
  char v17; // cl
  int v18; // r15d
  signed __int64 BugCheckParameter4; // rcx
  _DISPATCHER_HEADER *v20; // r9
  __int64 v22; // rsi
  __int64 v23; // rax
  bool v24; // zf
  char v25; // [rsp+90h] [rbp+8h]
  __int16 v26; // [rsp+98h] [rbp+10h]
  __int64 v27; // [rsp+A0h] [rbp+18h]
  struct _KTHREAD *v28; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(signed __int32 **)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v6 = *(_DWORD *)(v1 + 40);
  v27 = *(_QWORD *)(v1 + 32);
  v7 = *(_DWORD *)(v5 + 416) >> 1;
  v25 = v2;
  v26 = v6;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *(_QWORD *)(v5 + 272) )
  {
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
  else
  {
    *(_QWORD *)(v1 + 24) = 0LL;
    *(_QWORD *)(v1 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v5 + 352, 0LL);
      *(_DWORD *)(v5 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 352));
      KeAbPostRelease(v5 + 352);
      v6 = *(_DWORD *)(v1 + 40);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v1 + 242) = *(_WORD *)(a1 + 52);
    v28 = CurrentThread;
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v9 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v9;
    *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v2 & 0x10000) != 0 )
    {
      v10 = v9 & 0xDFFF;
      v11 = v6 | 0x200;
    }
    else
    {
      v10 = v9 | 0x2000;
      v11 = v6 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v1 + 40) = v11;
    *(_WORD *)(v1 + 244) = v10;
    if ( (_bittest(v4 + 104, 0xDu) & _bittest((const signed __int32 *)(v1 + 40), 9u)) != 0 )
    {
      AlpcpSetOwnerPortMessage(v1, v4, 0LL);
    }
    else
    {
      ObfReferenceObject(v4);
      *(_DWORD *)(v1 + 40) |= 0x1000u;
      *(_QWORD *)(v1 + 24) = v4;
    }
    v12 = *(_DWORD *)(v1 + 40);
    v13 = v2 & 0x20000;
    if ( v13 )
    {
      _InterlockedExchange64((volatile __int64 *)&v28[1].Teb, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
      v12 = *(_DWORD *)(v1 + 40);
    }
    v14 = *(_QWORD *)(v1 + 16);
    *(_DWORD *)(v1 + 40) = v12 | 0x100;
    if ( v14 )
    {
      ExAcquirePushLockExclusiveEx(v14 + 176, 0LL);
      --*(_DWORD *)(v14 + 456);
      *(_DWORD *)(v1 + 40) &= 0xFFFFFFF8;
      v15 = (volatile signed __int64 *)(v14 + 176);
      *(_QWORD *)(v1 + 16) = 0LL;
      **(_QWORD **)(v1 + 8) = *(_QWORD *)v1;
      *(_QWORD *)(*(_QWORD *)v1 + 8LL) = *(_QWORD *)(v1 + 8);
      if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v15);
      KeAbPostRelease((ULONG_PTR)v15);
      --*(_WORD *)(v1 - 30);
    }
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v16 = *(_DWORD *)(v1 + 40) & 0xFFFFFF87 | (8 * (v7 & 3));
    *(_DWORD *)(v1 + 40) = v16;
    if ( ((v16 >> 3) & 0xF) == 1 )
    {
      v22 = *(_QWORD *)(v5 + 16);
      ExAcquirePushLockSharedEx(v22 - 16, 0LL);
      v23 = *(_QWORD *)(v22 + 8);
      if ( v23 )
        v23 = *(_QWORD *)(v23 + 56);
      *(_QWORD *)(v1 + 120) = v23;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v22 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v22 - 16));
      KeAbPostRelease(v22 - 16);
    }
    else
    {
      *(_QWORD *)(v1 + 120) = *(_QWORD *)(v5 + 56);
    }
    if ( *(_QWORD *)(v1 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v1);
      *(_QWORD *)(v1 + 176) = 0LL;
    }
    ExAcquirePushLockSharedEx(v5 + 352, 0LL);
    if ( *(_QWORD *)(v1 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    KeAbPostRelease(v5 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v1);
    if ( v13 )
    {
      v24 = AlpcpLogEnabled == 0;
      *(_QWORD *)(v1 + 32) = v28;
      *(_QWORD *)(a1 + 24) = v27;
      if ( !v24 )
        AlpcpLogWaitForReply(v1);
      AlpcpUnlockMessage(v1);
    }
    else
    {
      *(_QWORD *)(v1 + 32) = 0LL;
      --*(_WORD *)(v1 - 30);
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterStateChangeEventMessageLog(v1);
      v17 = *(_BYTE *)(v1 - 32);
      if ( (v17 & 1) != 0
        && (v18 = 0x10000 - *(__int16 *)(v1 - 30), *(_BYTE *)(v1 - 32) = v17 & 0xFE, *(_WORD *)(v1 - 30) = 0, v18 > 0)
        && (BugCheckParameter4 = -v18 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 24), -v18),
            BugCheckParameter4 <= 0) )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v1, 0x28uLL, BugCheckParameter4);
        AlpcpDestroyBlob(v1, 1LL);
      }
      else
      {
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v1 - 16));
        KeAbPostRelease(v1 - 16);
      }
      if ( (v25 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v27;
      else
        KeReleaseSemaphoreEx(v27 + 1624, 1, 1, v20, 2);
    }
    if ( (v26 & 0x1000) != 0 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
}
