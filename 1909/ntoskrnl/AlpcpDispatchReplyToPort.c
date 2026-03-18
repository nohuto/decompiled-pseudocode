/*
 * XREFs of AlpcpDispatchReplyToPort @ 0x14065B72C
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpDispatchMessage @ 0x14065C514 (AlpcpDispatchMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405E2BE0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406598F0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpCancelMessage @ 0x14065B22C (AlpcpCancelMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14065B9A8 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x14065BA34 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReferenceReplyTargetPorts @ 0x14065BA68 (AlpcpReferenceReplyTargetPorts.c)
 */

__int64 __fastcall AlpcpDispatchReplyToPort(__int64 a1)
{
  ULONG_PTR v2; // rbx
  __int64 v3; // r15
  __int64 v4; // r13
  volatile signed __int32 **v5; // r14
  signed __int64 *v6; // rdi
  ULONG_PTR v7; // rcx
  volatile signed __int32 *v8; // rbp
  volatile signed __int32 *v9; // r12
  struct _KTHREAD *CurrentThread; // rdi
  __int16 v11; // cx
  int v12; // eax
  __int16 v13; // cx
  unsigned int v14; // eax
  unsigned int v16; // edi
  signed __int32 v17[22]; // [rsp+0h] [rbp-58h] BYREF
  int v18; // [rsp+60h] [rbp+8h]
  int v19; // [rsp+68h] [rbp+10h]

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)a1;
  v19 = *(_DWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  v4 = *(_QWORD *)(v2 + 24);
  if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) != 1 )
  {
    v5 = *(volatile signed __int32 ***)(v4 + 16);
    v6 = (signed __int64 *)(v5 - 2);
    v7 = (ULONG_PTR)(v5 - 2);
    if ( ((*(_DWORD *)(v4 + 416) >> 1) & 3) == 2 )
    {
      ExAcquirePushLockSharedEx(v7, 0LL);
      v8 = v5[2];
      v9 = v8;
      goto LABEL_4;
    }
    ExAcquirePushLockSharedEx(v7, 0LL);
    v8 = *v5;
    goto LABEL_24;
  }
  v5 = *(volatile signed __int32 ***)(v3 + 16);
  v6 = (signed __int64 *)(v5 - 2);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v5 - 2), 0LL);
  v8 = *v5;
  v9 = *v5;
  if ( v3 != v4 )
LABEL_24:
    v9 = v5[1];
LABEL_4:
  if ( (*(_DWORD *)(v3 + 416) & 0x20) != 0 && (*(_DWORD *)(v3 + 256) & 0x1000) == 0
    || (*(_DWORD *)(v4 + 416) & 0x20) != 0 && (*(_DWORD *)(v4 + 256) & 0x1000) == 0 )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v16 = -1073741769;
LABEL_40:
    AlpcpCancelMessage(v3, v2, 0x10000);
    return v16;
  }
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 52) > *((_QWORD *)v8 + 34) )
  {
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    AlpcpUnlockMessage(v2);
    return 3221225507LL;
  }
  else
  {
    v18 = AlpcpReferenceReplyTargetPorts((PVOID)v8, (PVOID)v9);
    if ( v18 < 0 )
    {
      if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      v16 = v18;
      goto LABEL_40;
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
    v11 = *(_WORD *)(a1 + 54);
    *(_WORD *)(v2 + 244) = v11;
    *(_WORD *)(v2 + 246) = *(_WORD *)(a1 + 56);
    v12 = *(_DWORD *)(v2 + 40);
    *(_OWORD *)(v2 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    if ( (v19 & 0x10000) != 0 )
    {
      v13 = v11 & 0xDFFF;
      v14 = v12 | 0x200;
    }
    else
    {
      v13 = v11 | 0x2000;
      v14 = v12 & 0xFFFFFDFF;
    }
    *(_DWORD *)(v2 + 40) = v14;
    *(_WORD *)(v2 + 244) = v13;
    *(_DWORD *)(v2 + 40) |= 0x8000u;
    _InterlockedOr(v17, 0);
    AlpcpClearOwnerPortMessage(v2);
    if ( (*(_DWORD *)(v3 + 416) & 0x2000) != 0 && (*(_DWORD *)(v2 + 40) & 0x200) != 0 )
    {
      AlpcpSetOwnerPortMessage(v2, (void *)v3, 0);
    }
    else
    {
      ObfReferenceObject((PVOID)v3);
      *(_DWORD *)(v2 + 40) |= 0x1000u;
      *(_QWORD *)(v2 + 24) = v3;
    }
    *(_DWORD *)(v2 + 44) = _InterlockedIncrement(v9 + 100);
    *(_QWORD *)(v2 + 120) = *((_QWORD *)v9 + 7);
    ObfDereferenceObject((PVOID)v9);
    if ( *(_QWORD *)(v2 + 16) )
      AlpcpRemoveMessageFromPendingQueue(v2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v8 + 88), 0LL);
    if ( (v19 & 0x20000) != 0 )
    {
      *(_DWORD *)(v2 + 40) &= ~0x100u;
      *(_QWORD *)(v2 + 32) = CurrentThread;
      *(_WORD *)(v2 - 30) += 2;
      _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v2);
    }
    *(_QWORD *)(a1 + 32) = v8;
    *(_QWORD *)(a1 + 16) = v5;
    if ( (*(_BYTE *)(v2 + 160) & 1) != 0 )
      *(_DWORD *)(a1 + 48) |= 8u;
    AlpcpCompleteDispatchMessage(a1);
    return 0LL;
  }
}
