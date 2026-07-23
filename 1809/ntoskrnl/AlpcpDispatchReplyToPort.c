/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x140616EDC
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
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1406171D4 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x140617260 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x140617294 (AlpcpReferenceReplyTargetPorts.c)
 *     AlpcpCompleteDispatchMessage @ 0x1406366C0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406371B0 (AlpcpSetOwnerPortMessage.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // r12
  __int64 v4; // r15
  volatile signed __int32 **v5; // r14
  signed __int64 *v6; // rbx
  ULONG_PTR v7; // rcx
  volatile signed __int32 *v8; // rbp
  volatile signed __int32 *v9; // r13
  int v10; // r12d
  struct _KTHREAD *CurrentThread; // rbx
  __int16 v13; // cx
  int v14; // eax
  __int16 v15; // cx
  unsigned int v16; // eax
  signed __int32 v17[22]; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+60h] [rbp+8h]
  __int64 v19; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v18 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(v2 + 24);
  v19 = v3;
  if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) == 1 )
  {
    v5 = *(volatile signed __int32 ***)(v3 + 16);
    v6 = (signed __int64 *)(v5 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
    v8 = *v5;
    v9 = *v5;
    if ( v3 == v4 )
      goto LABEL_7;
  }
  else
  {
    v5 = *(volatile signed __int32 ***)(v4 + 16);
    v6 = (signed __int64 *)(v5 - 2);
    v7 = (ULONG_PTR)(v5 - 2);
    if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) == 2 )
    {
      ExAcquirePushLockSharedEx(v7, 0LL);
      v8 = v5[2];
      v9 = v8;
      goto LABEL_7;
    }
    ExAcquirePushLockSharedEx(v7, 0LL);
    v8 = *v5;
  }
  v9 = v5[1];
LABEL_7:
  if ( (*(_DWORD *)(v3 + 416) & 0x20) != 0 && (*(_DWORD *)(v3 + 256) & 0x1000) == 0
    || (*(_DWORD *)(v4 + 416) & 0x20) != 0 && (*(_DWORD *)(v4 + 256) & 0x1000) == 0 )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v10 = -1073741769;
LABEL_22:
    AlpcpCancelMessage(v19, v2, 0x10000);
    return (unsigned int)v10;
  }
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) <= *((_QWORD *)v8 + 34) )
  {
    v10 = AlpcpReferenceReplyTargetPorts((PVOID)v8, (PVOID)v9);
    if ( v10 < 0 )
    {
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      goto LABEL_22;
    }
    *(_QWORD *)(v2 + 200) = 0LL;
    if ( *(_WORD *)(a1 + 54) == 11 )
    {
      ExAcquirePushLockExclusiveEx(v4 + 352, 0LL);
      *(_DWORD *)(v4 + 416) &= ~8u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v4 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 352));
      KeAbPostRelease(v4 + 352);
    }
    CurrentThread = KeGetCurrentThread();
    *(_WORD *)(v2 + 242) = *(_WORD *)(a1 + 52);
    *(_WORD *)(v2 + 240) = *(_WORD *)(a1 + 52) - 40;
    v13 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v2 + 244) = v13;
    *(_WORD *)(v2 + 246) = *(_WORD *)(a1 + 56);
    v14 = *(_DWORD *)(v2 + 40);
    *(_OWORD *)(v2 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v18 & 0x10000) != 0 )
    {
      v15 = v13 & 0xDFFF;
      v16 = v14 | 0x200;
    }
    else
    {
      v15 = v13 | 0x2000;
      v16 = v14 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v2 + 40) = v16;
    *(_WORD *)(v2 + 244) = v15;
    *(_DWORD *)(v2 + 40) |= 0x8000u;
    _InterlockedOr(v17, 0);
    AlpcpClearOwnerPortMessage(v2);
    AlpcpSetOwnerPortMessage(v2, v19);
    *(_DWORD *)(v2 + 44) = _InterlockedIncrement(v9 + 100);
    *(_QWORD *)(v2 + 120) = *((_QWORD *)v9 + 7);
    ObfDereferenceObject((PVOID)v9);
    if ( *(_QWORD *)(v2 + 16) )
      AlpcpRemoveMessageFromPendingQueue(v2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 88), 0LL);
    if ( (v18 & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) &= ~0x100u;
      *(_QWORD *)(v2 + 32) = CurrentThread;
      *(_WORD *)(v2 - 30) += 2;
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v2);
    }
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 16) = v5;
    if ( *(_QWORD *)(v2 + 160) )
      *(_DWORD *)(a1 + 48) |= 8u;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
  else
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    AlpcpUnlockMessage(v2);
    return 3221225507LL;
  }
}
