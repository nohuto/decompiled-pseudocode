/*
 * XREFs of AlpcpCancelMessage @ 0x1406476D0
 * Callers:
 *     AlpcpReceiveMessage @ 0x1405DF070 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x1405E0800 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1405E1020 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpReceiveLegacyMessage @ 0x140645CD0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140647304 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x140647BC8 (AlpcpDispatchReplyToPort.c)
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 *     AlpcpFlushQueue @ 0x140649FC4 (AlpcpFlushQueue.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406DFF58 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x1406EDB90 (NtAlpcCancelMessage.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ObReferenceObjectSafe @ 0x140104560 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     PsReleaseProcessWakeCounter @ 0x1406451F0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpTransferQuotaMessage @ 0x140647B68 (AlpcpTransferQuotaMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140647E44 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x140647ED0 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140647F84 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406C3D9C (AlpcpSignalPortAndUnlock.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1406EA25C (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpRemoveMessagePort @ 0x1406ED688 (AlpcpRemoveMessagePort.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // ebp
  int v6; // ecx
  ULONG_PTR v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rsi
  int v11; // ebp
  BOOL v12; // r12d
  __int64 *v13; // r15
  ULONG_PTR v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r15d
  _DISPATCHER_HEADER *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  __int64 *v24; // r14
  volatile signed __int64 *v25; // rbp
  signed __int32 v26[8]; // [rsp+0h] [rbp-88h] BYREF
  int v28; // [rsp+98h] [rbp+10h]
  int v29; // [rsp+A0h] [rbp+18h]
  __int64 v30; // [rsp+A8h] [rbp+20h]

  v29 = a3;
  v3 = *(_DWORD *)(a2 + 40);
  v6 = v3 & 7;
  v7 = (unsigned __int8)v3 & 0x80;
  v8 = 0LL;
  v9 = *(_QWORD *)(a2 + 16);
  v10 = 0LL;
  v30 = v9;
  v28 = v6;
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 1 )
  {
    v11 = v3 & 0x78;
    v12 = v11 == 8;
    if ( !(_DWORD)v7 )
    {
      v24 = *(__int64 **)(a2 + 184);
      if ( !v24 )
        goto LABEL_9;
      goto LABEL_34;
    }
  }
  else
  {
    v11 = v3 & 0x78;
    v12 = 0;
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      LOBYTE(v12) = v11 == 16;
      if ( (_DWORD)v7 )
        goto LABEL_10;
      v13 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), v7);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 16 )
        {
          v8 = *v13;
          v10 = v13[1];
        }
        else
        {
          v8 = a1;
          v10 = a1;
        }
        if ( v8 )
          v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v13 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v13 - 2);
      v14 = (ULONG_PTR)(v13 - 2);
      goto LABEL_8;
    }
    LOBYTE(v12) = v11 == 8;
    if ( !(_DWORD)v7 )
    {
      v24 = *(__int64 **)(a1 + 16);
LABEL_34:
      ExAcquirePushLockSharedEx((ULONG_PTR)(v24 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 8 )
        {
          v8 = v24[2];
          v10 = v8;
        }
        else
        {
          v8 = *v24;
          v10 = v24[1];
        }
        if ( v8 )
          v8 &= -(__int64)(ObReferenceObjectSafe(v8) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v24 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v24 - 2);
      v14 = (ULONG_PTR)(v24 - 2);
LABEL_8:
      KeAbPostRelease(v14);
      LOBYTE(a3) = v29;
      v6 = v28;
LABEL_9:
      v9 = v30;
    }
  }
LABEL_10:
  if ( !v12 )
  {
    if ( v9 && (v6 != 3 || (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
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
      goto LABEL_27;
LABEL_15:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v15);
    *(_DWORD *)(a2 + 40) |= 0x8200u;
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    _InterlockedOr(v26, 0);
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
    else if ( v8 && v10 )
    {
      if ( !v12 && (v29 & 2) == 0 )
      {
LABEL_26:
        v22 = *(_DWORD *)(a2 + 40);
        if ( (v22 & 0x2000) != 0 && (v22 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2);
        goto LABEL_27;
      }
      ExAcquirePushLockSharedEx(v8 + 352, 0LL);
      if ( (*(_DWORD *)(v8 + 416) & 0x40) != 0 )
      {
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 352), 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
        KeAbPostRelease(v8 + 352);
      }
      else
      {
        *(_QWORD *)(a2 + 64) = v8;
        *(_QWORD *)(a2 + 56) = v10;
        ++*(_WORD *)(a2 - 30);
        *(_DWORD *)(a2 + 72) = _InterlockedIncrement((volatile signed __int32 *)(v10 + 400));
        *(_QWORD *)(a2 + 128) = *(_QWORD *)(v10 + 56);
        AlpcpInsertMessageCanceledQueue(v8, a2);
        AlpcpSignalPortAndUnlock(v8);
      }
      v9 = v30;
    }
    if ( v12 && (v29 & 0x10000) != 0 && v9 )
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
          v25 = (volatile signed __int64 *)(a1 + 200);
          ExAcquirePushLockExclusiveEx(a1 + 200, 0LL);
          --*(_DWORD *)(a1 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v25 = (volatile signed __int64 *)(v9 + 136);
          ExAcquirePushLockExclusiveEx(v9 + 136, 0LL);
          AlpcpRemoveMessagePort(v9, a2);
        }
        if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v25);
        KeAbPostRelease((ULONG_PTR)v25);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_26;
  }
  if ( !v9 || v6 != 3 || (v15 = 1LL, (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    v15 = 0LL;
  v16 = 259;
  if ( (a3 & 1) == 0 || (_DWORD)v15 )
    goto LABEL_15;
LABEL_27:
  *(_DWORD *)(a2 + 40) &= ~0x8000u;
  AlpcpUnlockMessage(a2);
  if ( v8 )
    ObfDereferenceObject((PVOID)v8);
  if ( v10 )
    ObfDereferenceObject((PVOID)v10);
  return v16;
}
