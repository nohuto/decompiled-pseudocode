/*
 * XREFs of AlpcpCancelMessage @ 0x14061690C
 * Callers:
 *     AlpcpReceiveLegacyMessage @ 0x140614E70 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140616538 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x140616EDC (AlpcpDispatchReplyToPort.c)
 *     AlpcpFlushQueue @ 0x14061A4D8 (AlpcpFlushQueue.c)
 *     AlpcpAcceptConnectPort @ 0x14061ACD8 (AlpcpAcceptConnectPort.c)
 *     AlpcpReceiveMessage @ 0x1406332D0 (AlpcpReceiveMessage.c)
 *     AlpcpProcessSynchronousRequest @ 0x140634A50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveSynchronousReply @ 0x1406352B0 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     AlpcpFlushMessagesByRequestor @ 0x1406C00D0 (AlpcpFlushMessagesByRequestor.c)
 *     NtAlpcCancelMessage @ 0x1406CF330 (NtAlpcCancelMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     ObReferenceObjectSafe @ 0x14010C190 (ObReferenceObjectSafe.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpTransferQuotaMessage @ 0x140616E7C (AlpcpTransferQuotaMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1406171D4 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x140617260 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140617314 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     PsReleaseProcessWakeCounter @ 0x14061D390 (PsReleaseProcessWakeCounter.c)
 *     AlpcpInsertMessageCanceledQueue @ 0x1406C968C (AlpcpInsertMessageCanceledQueue.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406CAD9C (AlpcpSignalPortAndUnlock.c)
 *     AlpcpRemoveMessagePort @ 0x1406CCDEC (AlpcpRemoveMessagePort.c)
 */

__int64 __fastcall AlpcpCancelMessage(__int64 a1, ULONG_PTR a2, int a3)
{
  int v3; // ebp
  __int64 v5; // r15
  int v7; // edx
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // ebp
  BOOL v12; // r14d
  __int64 *v13; // r15
  ULONG_PTR v14; // rcx
  __int64 *v15; // r12
  int v16; // ebp
  __int64 *v17; // r15
  __int64 v18; // rdx
  unsigned int v19; // r12d
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // eax
  volatile signed __int64 *v25; // rbp
  int v26; // eax
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
  if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) != 1 )
  {
    v11 = v3 & 0x78;
    v12 = 0;
    if ( ((*(_DWORD *)(a1 + 416) >> 1) & 3) == 2 )
    {
      LOBYTE(v12) = v11 == 16;
      if ( v8 )
        goto LABEL_44;
      v15 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v15 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 16 )
        {
          v9 = *v15;
          v10 = v15[1];
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
      if ( _InterlockedCompareExchange64(v15 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v15 - 2);
      v14 = (ULONG_PTR)(v15 - 2);
    }
    else
    {
      LOBYTE(v12) = v11 == 8;
      if ( v8 )
        goto LABEL_44;
      v13 = *(__int64 **)(a1 + 16);
      ExAcquirePushLockSharedEx((ULONG_PTR)(v13 - 2), 0LL);
      if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
      {
        if ( v11 == 8 )
        {
          v9 = v13[2];
          v10 = v9;
        }
        else
        {
          v9 = *v13;
          v10 = v13[1];
        }
        if ( v9 )
          v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
        if ( v10 )
          v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
      }
      if ( _InterlockedCompareExchange64(v13 - 2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v13 - 2);
      v14 = (ULONG_PTR)(v13 - 2);
    }
    KeAbPostRelease(v14);
    goto LABEL_42;
  }
  v16 = v3 & 0x78;
  v12 = v16 == 8;
  if ( !v8 && v5 )
  {
    v17 = *(__int64 **)(a2 + 184);
    if ( !v17 )
    {
LABEL_43:
      v5 = v30;
      goto LABEL_44;
    }
    ExAcquirePushLockSharedEx((ULONG_PTR)(v17 - 2), 0LL);
    if ( (*(_DWORD *)(a2 + 40) & 0x200) == 0 )
    {
      if ( v16 == 8 )
      {
        v9 = v17[2];
        v10 = v9;
      }
      else
      {
        v9 = *v17;
        v10 = v17[1];
      }
      if ( v9 )
        v9 &= -(__int64)(ObReferenceObjectSafe(v9) != 0);
      if ( v10 )
        v10 &= -(__int64)(ObReferenceObjectSafe(v10) != 0);
    }
    if ( _InterlockedCompareExchange64(v17 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v17 - 2);
    KeAbPostRelease((ULONG_PTR)(v17 - 2));
    v12 = v16 == 8;
LABEL_42:
    LOBYTE(a3) = v31;
    v7 = v29;
    goto LABEL_43;
  }
LABEL_44:
  if ( !v12 )
  {
    if ( v5 && (v7 != 3 || (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    {
      v18 = 0LL;
      v19 = 0;
    }
    else
    {
      v19 = 1073741870;
      v18 = 1LL;
    }
    if ( (a3 & 1) != 0 && (_DWORD)v18 )
      goto LABEL_90;
LABEL_59:
    *(_DWORD *)(a2 + 40) |= 0x80u;
    *(_BYTE *)(a2 + 244) = 0;
    *(_WORD *)(a2 + 244) |= 0xCu;
    *(_DWORD *)(a2 + 240) = 2621440;
    AlpcpReleaseMessageAttributesOnCancel(a2, v18);
    *(_DWORD *)(a2 + 40) |= 0x8200u;
    *(_WORD *)(a2 + 244) &= ~0x2000u;
    _InterlockedOr(v28, 0);
    AlpcpClearOwnerPortMessage(a2);
    AlpcpTransferQuotaMessage(a2);
    v21 = *(_QWORD *)(a2 + 208);
    if ( v21 )
    {
      PsReleaseProcessWakeCounter(v21, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 208) = 0LL;
    }
    v22 = *(_QWORD *)(a2 + 216);
    if ( v22 )
    {
      PsReleaseProcessWakeCounter(v22, *(unsigned int *)(a2 + 264));
      *(_QWORD *)(a2 + 216) = 0LL;
    }
    v23 = *(_QWORD *)(a2 + 32);
    if ( v23 )
    {
      if ( _InterlockedExchange64((volatile __int64 *)(v23 + 1760), 0LL) == a2 )
      {
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_WORD *)(a2 - 30) -= 2;
        KeReleaseSemaphoreEx(v23 + 1608, 1LL, 1, v20, 2);
      }
    }
    else if ( v9 && v10 )
    {
      if ( !v12 && (v31 & 2) == 0 )
      {
LABEL_87:
        v26 = *(_DWORD *)(a2 + 40);
        if ( (v26 & 0x2000) != 0 && (v26 & 7) == 3 )
          AlpcpRemoveMessageFromPendingQueue(a2);
        goto LABEL_90;
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
      v24 = *(_DWORD *)(a2 + 40) & 7;
      if ( v24 == 3 )
      {
        AlpcpRemoveMessageFromPendingQueue(a2);
      }
      else
      {
        if ( v24 == 4 )
        {
          v25 = (volatile signed __int64 *)(v5 + 200);
          ExAcquirePushLockExclusiveEx(v5 + 200, 0LL);
          --*(_DWORD *)(v5 + 460);
          *(_DWORD *)(a2 + 40) &= 0xFFFFFFF8;
          *(_QWORD *)(a2 + 16) = 0LL;
          **(_QWORD **)(a2 + 8) = *(_QWORD *)a2;
          *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)(a2 + 8);
        }
        else
        {
          v25 = (volatile signed __int64 *)(v5 + 136);
          ExAcquirePushLockExclusiveEx(v5 + 136, 0LL);
          AlpcpRemoveMessagePort(v5, a2);
        }
        if ( (_InterlockedExchangeAdd64(v25, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock(v25);
        KeAbPostRelease((ULONG_PTR)v25);
        --*(_WORD *)(a2 - 30);
      }
    }
    goto LABEL_87;
  }
  if ( !v5 || v7 != 3 || (v18 = 1LL, (*(_DWORD *)(a2 + 40) & 0x2000) != 0) )
    v18 = 0LL;
  v19 = 259;
  if ( (a3 & 1) == 0 || (_DWORD)v18 )
    goto LABEL_59;
LABEL_90:
  *(_DWORD *)(a2 + 40) &= ~0x8000u;
  AlpcpUnlockMessage(a2);
  if ( v9 )
    ObfDereferenceObject((PVOID)v9);
  if ( v10 )
    ObfDereferenceObject((PVOID)v10);
  return v19;
}
