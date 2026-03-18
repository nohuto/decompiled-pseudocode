/*
 * XREFs of AlpcpDispatchReplyToWaitingThread @ 0x1405E19B0
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x14065C514 (AlpcpDispatchMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405E3650 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpDestroyBlob @ 0x1405E5050 (AlpcpDestroyBlob.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406598F0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14065E96C (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885278 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x14088671C (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140886904 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpDispatchReplyToWaitingThread(__int64 a1)
{
  ULONG_PTR v1; // rsi
  int v2; // eax
  _DWORD *v4; // r13
  __int64 v5; // rbp
  int v6; // ecx
  int v7; // edi
  struct _KTHREAD *CurrentThread; // r15
  __int16 v10; // dx
  __int16 v11; // dx
  unsigned int v12; // ecx
  int v13; // eax
  signed __int64 v14; // r13
  int v15; // eax
  volatile signed __int64 *v16; // r15
  unsigned int v17; // edi
  __int64 v18; // rdi
  __int64 v19; // rax
  signed __int64 v20; // rax
  bool v21; // zf
  char v22; // cl
  int v23; // r12d
  signed __int64 BugCheckParameter4; // rcx
  _DISPATCHER_HEADER *v25; // r9
  struct _KTHREAD *v26; // [rsp+30h] [rbp-58h]
  int v27; // [rsp+90h] [rbp+8h]
  __int16 v28; // [rsp+A0h] [rbp+18h]
  __int64 v29; // [rsp+A8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 48);
  v4 = *(_DWORD **)a1;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v5 = *(_QWORD *)(v1 + 24);
  v6 = *(_DWORD *)(v1 + 40);
  v27 = v2;
  v29 = *(_QWORD *)(v1 + 32);
  v7 = *(_DWORD *)(v5 + 416) >> 1;
  v28 = v6;
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) <= *(_QWORD *)(v5 + 272) )
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
    v26 = CurrentThread;
    *(_WORD *)(v1 + 240) = *(_WORD *)(a1 + 52) - 40;
    v10 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v1 + 244) = v10;
    *(_WORD *)(v1 + 246) = *(_WORD *)(a1 + 56);
    *(_OWORD *)(v1 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v27 & 0x10000) != 0 )
    {
      v11 = v10 & 0xDFFF;
      v12 = v6 | 0x200;
    }
    else
    {
      v11 = v10 | 0x2000;
      v12 = v6 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v1 + 40) = v12;
    *(_WORD *)(v1 + 244) = v11;
    if ( (v4[104] & 0x2000) != 0 && (v12 & 0x200) != 0 )
    {
      AlpcpSetOwnerPortMessage(v1, v4, 0LL);
    }
    else
    {
      ObfReferenceObject(v4);
      *(_DWORD *)(v1 + 40) |= 0x1000u;
      *(_QWORD *)(v1 + 24) = v4;
    }
    v13 = *(_DWORD *)(v1 + 40);
    if ( (v27 & 0x20000) != 0 )
    {
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v1);
      *(_DWORD *)(v1 + 40) |= 0x800u;
      ++*(_WORD *)(v1 - 30);
      v13 = *(_DWORD *)(v1 + 40);
    }
    v14 = *(_QWORD *)(v1 + 16);
    v15 = v13 | 0x100;
    *(_DWORD *)(v1 + 40) = v15;
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
    }
    *(_DWORD *)(v1 + 40) = v15 & 0xFFFFFFF8 | 5;
    *(_DWORD *)(v1 + 44) = _InterlockedIncrement((volatile signed __int32 *)(v5 + 400));
    v17 = *(_DWORD *)(v1 + 40) & 0xFFFFFF87 | (8 * (v7 & 3));
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
      AlpcpExposeViewAttributeInSenderContext((PVOID)v5);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 352), v14, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v5 + 352));
    KeAbPostRelease(v5 + 352);
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v1);
    if ( (v27 & 0x20000) != 0 )
    {
      v21 = AlpcpLogEnabled == 0;
      *(_QWORD *)(v1 + 32) = v26;
      *(_QWORD *)(a1 + 24) = v29;
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
      v22 = *(_BYTE *)(v1 - 32);
      if ( (v22 & 1) != 0
        && (v23 = 0x10000 - *(__int16 *)(v1 - 30), *(_BYTE *)(v1 - 32) = v22 & 0xFE, *(_WORD *)(v1 - 30) = v14, v23 > 0)
        && (BugCheckParameter4 = -v23 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v1 - 24), -v23),
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
      if ( (v27 & 4) != 0 )
        *(_QWORD *)(a1 + 24) = v29;
      else
        KeReleaseSemaphoreEx(v29 + 1624, 1, 1, v25, 2);
    }
    if ( (v28 & 0x1000) != 0 )
      ObfDereferenceObject((PVOID)v5);
    return 0LL;
  }
  else
  {
    AlpcpUnlockMessage(v1);
    return 3221225507LL;
  }
}
