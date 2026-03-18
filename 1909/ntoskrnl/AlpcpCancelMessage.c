/*
 * XREFs of AlpcpCancelMessage @ 0x14065B22C
 * Callers:
 *     AlpcpReceiveMessage @ 0x1405DF870 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0F10 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E1710 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140659D10 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14065AE5C (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x14065B72C (AlpcpDispatchReplyToPort.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushQueue @ 0x14065DC34 (AlpcpFlushQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406E168C (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x1406EEF00 (NtAlpcCancelMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x140014320 (KeReleaseSemaphoreEx.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140107F50 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x140658D40 (PsReleaseProcessWakeCounter.c)
 *     AlpcpTransferQuotaMessage @ 0x14065B6CC (AlpcpTransferQuotaMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x14065B9A8 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x14065BA34 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14065BAE8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406C2EFC (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1406EB44C (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpRemoveMessagePort @ 0x1406EEB88 (AlpcpRemoveMessagePort.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // ebp
  __int64 v5; // r14
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // ebp
  BOOL v12; // r15d
  __int64 *v13; // r12
  ULONG_PTR v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r12d
  _DISPATCHER_HEADER *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  int v24; // ebp
  __int64 *v25; // r14
  volatile signed __int64 *v26; // rbp
  __int64 *v27; // r14
  signed __int32 v28[8]; // [rsp+0h] [rbp-78h] BYREF
  int v29; // [rsp+80h] [rbp+8h]
  __int64 v30; // [rsp+88h] [rbp+10h]
  int v31; // [rsp+90h] [rbp+18h]

  v31 = a3;
  v3 = *(_DWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a2 + 16);
  v30 = v5;
  v7 = v3 & 7;
  v8 = v3 & 0x80;
  v29 = v7;
  v9 = 0LL;
  v10 = 0LL;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v24 = v3 & 0x78;
    v12 = v24 == 8;
    if ( !v8 )
    {
      v25 = *(__int64 **)(a2 + 184);
      if ( !v25 )
        goto LABEL_10;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v25 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v24 == 8 )
        {
          v9 = v25[2];
          v10 = v9;
        }
        else
        {
          v9 = *v25;
          v10 = v25[1];
        }
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v25 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v25 - 2);
      KeAbPostRelease((ULONG_PTR)(v25 - 2));
      v12 = v24 == 8;
LABEL_9:
      LOBYTE(a3) = v31;
      v7 = v29;
LABEL_10:
      v5 = v30;
    }
  }
  else
  {
    v11 = v3 & 0x78;
    v12 = 0;
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      LOBYTE(v12) = v11 == 16;
      if ( v8 )
        goto LABEL_11;
      v13 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 16 )
        {
          v9 = *v13;
          v10 = v13[1];
        }
        else
        {
          v9 = a1;
          v10 = a1;
        }
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v13 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v13 - 2);
      v14 = (ULONG_PTR)(v13 - 2);
      goto LABEL_8;
    }
    LOBYTE(v12) = v11 == 8;
    if ( !v8 )
    {
      v27 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v27 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 8 )
        {
          v9 = v27[2];
          v10 = v9;
        }
        else
        {
          v9 = *v27;
          v10 = v27[1];
        }
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v27 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v27 - 2);
      v14 = (ULONG_PTR)(v27 - 2);
LABEL_8:
      KeAbPostRelease(v14);
      goto LABEL_9;
    }
  }
LABEL_11:
  if ( !v12 )
  {
    if ( v5 && (v7 != 3 || (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    {
      v15 = 0LL;
      v16 = 0;
    }
    else
    {
      v16 = 1073741870;
      v15 = 1LL;
    }
    if ( (a3 & 1) != 0 && (_DWORD)v15 )
      goto LABEL_28;
LABEL_16:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v15);
    *(_DWORD *)(a2 + 40) |= 0x8200u;
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    _InterlockedOr(v28, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v18 = *(_QWORD *)(a2 + 208);
    if ( v18 )
    {
      PsReleaseProcessWakeCounter(v18, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v19 = *(_QWORD *)(a2 + 216);
    if ( v19 )
    {
      PsReleaseProcessWakeCounter(v19, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v20 = *(_QWORD *)(a2 + 32);
    if ( v20 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v20 + 1776), 0LL) == a2 )
      {
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_WORD *)(a2 - 30) -= 2;
        KeReleaseSemaphoreEx(v20 + 1624, 1, 1, v17, 2);
      }
    }
    else if ( v9 && v10 )
    {
      if ( !v12 && (v31 & 2) == 0 )
      {
LABEL_27:
        v22 = *(_DWORD *)(a2 + 40);
        if ( (v22 & 0x2000) != 0 && (v22 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2);
        goto LABEL_28;
      }
      ExAcquirePushLockSharedEx(v9 + 352, 0LL);
      if ( (*(_DWORD *)(v9 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v9 + 352));
        KeAbPostRelease(v9 + 352);
      }
      else
      {
        *(_QWORD *)(a2 + 64) = v9;
        *(_QWORD *)(a2 + 56) = v10;
        ++*(_WORD *)(a2 - 30);
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v10 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v10 + 56);
        AlpcpInsertMessageCanceledQueue(v9, a2);
        AlpcpSignalPortAndUnlock(v9);
      }
      v5 = v30;
    }
    if ( v12 && (v31 & 0x10000) != 0 && v5 )
    {
      v21 = *(_DWORD *)(a2 + 40) & 7;
      if ( v21 == 3 )
      {
        AlpcpRemoveMessageFromPendingQueue(a2);
      }
      else
      {
        if ( v21 == 4 )
        {
          v26 = (volatile signed __int64 *)(v5 + 200);
          ExAcquirePushLockExclusiveEx(v5 + 200, 0LL);
          --*(_DWORD *)(v5 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v26 = (volatile signed __int64 *)(v5 + 136);
          ExAcquirePushLockExclusiveEx(v5 + 136, 0LL);
          AlpcpRemoveMessagePort(v5, a2);
        }
        if ( (_InterlockedExchangeAdd64(v26, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v26);
        KeAbPostRelease((ULONG_PTR)v26);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_27;
  }
  if ( !v5 || v7 != 3 || (v15 = 1LL, (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    v15 = 0LL;
  v16 = 259;
  if ( (a3 & 1) == 0 || (_DWORD)v15 )
    goto LABEL_16;
LABEL_28:
  *(_DWORD *)(a2 + 40) &= ~0x8000u;
  AlpcpUnlockMessage(a2);
  if ( v9 )
    ObfDereferenceObject((PVOID)v9);
  if ( v10 )
    ObfDereferenceObject((PVOID)v10);
  return v16;
}
