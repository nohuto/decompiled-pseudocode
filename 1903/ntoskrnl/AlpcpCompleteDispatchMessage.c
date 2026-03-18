/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x1405E2410
 * Callers:
 *     AlpcpDispatchNewMessage @ 0x1405E20D0 (AlpcpDispatchNewMessage.c)
 *     AlpcpDispatchConnectionRequest @ 0x140645950 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x140646040 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140647BC8 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ExNotifyCallback @ 0x1400FA670 (ExNotifyCallback.c)
 *     AlpcpQueueIoCompletionPort @ 0x14011C408 (AlpcpQueueIoCompletionPort.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     AlpcpExposeAttributes @ 0x1405DF780 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1405E2E80 (AlpcpCaptureMessageDataSafe.c)
 *     AlpcpDestroyBlob @ 0x1405E4880 (AlpcpDestroyBlob.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14064514C (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpReadMessageData @ 0x140645FCC (AlpcpReadMessageData.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14064ACD4 (AlpcpExposeViewAttributeInSenderContext.c)
 *     PsChargeProcessWakeCounter @ 0x14069E180 (PsChargeProcessWakeCounter.c)
 *     AlpcpAllocateCompletionBuffer @ 0x1406BDE64 (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpInsertCompletionListEntry @ 0x1406C52AC (AlpcpInsertCompletionListEntry.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406CB4E8 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpInsertMessageDirectQueue @ 0x1406CB538 (AlpcpInsertMessageDirectQueue.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x140885AD8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpFreeBitmap @ 0x1408866F8 (AlpcpFreeBitmap.c)
 *     AlpcpLogReceiveMessage @ 0x140886E78 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x140886EF0 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x1408870D8 (AlpcpLogWaitForReply.c)
 */

char __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // r15
  ULONG_PTR v3; // rsi
  int v4; // ecx
  int v5; // r13d
  __int64 v6; // rbx
  __int64 v7; // r9
  int v8; // r12d
  int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  BOOL v12; // ebp
  void *v13; // rbx
  _QWORD *v14; // rbp
  __int64 v15; // r13
  int v16; // eax
  char v17; // cl
  int v18; // ebp
  signed __int64 v19; // rcx
  char result; // al
  _DISPATCHER_HEADER *v21; // r9
  unsigned int v22; // edx
  int v23; // ecx
  int v24; // edx
  unsigned int v25; // r10d
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // rdx
  unsigned int v29; // r9d
  unsigned int CompletionBuffer; // eax
  __int64 v31; // r8
  __int64 v32; // rdx
  int v33; // r8d
  int inserted; // eax
  _QWORD *v35; // rbp
  unsigned int v36; // edx
  int v37; // ecx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  _DISPATCHER_HEADER *v40; // r9
  void *v41; // rsi
  __int16 v42; // r8
  unsigned int v43; // edx
  int v44; // ecx
  unsigned __int64 v45; // rcx
  __int64 v46; // rcx
  __int16 v47; // cx
  __int16 v48; // ax
  __int16 v49; // dx
  __int16 v50; // dx
  _DWORD *BugCheckParameter4; // [rsp+20h] [rbp-88h]
  unsigned int v52; // [rsp+30h] [rbp-78h]
  unsigned int v53; // [rsp+34h] [rbp-74h]
  int v54; // [rsp+38h] [rbp-70h]
  int v55; // [rsp+3Ch] [rbp-6Ch]
  __int64 v56; // [rsp+40h] [rbp-68h]
  __int64 v57; // [rsp+48h] [rbp-60h]
  char v58; // [rsp+B0h] [rbp+8h]
  char v59; // [rsp+B8h] [rbp+10h]
  unsigned int v60; // [rsp+C0h] [rbp+18h]
  int v61; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v59 = 0;
  v5 = v4 & 4;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1LL;
  v8 = v4 & 0x20000;
  v56 = v6;
  v9 = v4 & 0x800000;
  v55 = v5;
  v10 = *(unsigned int *)(*(_QWORD *)a1 + 256LL);
  if ( (v10 & 0x400000) != 0 )
    v11 = 2;
  else
    v11 = (v10 & 0x200000) != 0;
  v12 = v8 || v9;
  if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v13 = 0LL;
    if ( (*(_QWORD *)(v1 + 24) & 1) == 0 )
      v13 = *(void **)(v1 + 24);
    if ( v13 )
    {
      if ( v12 || v11 || (AlpcpWakePolicyDefault & 1) == 0 )
        *(_QWORD *)(v3 + 208) = PsChargeProcessWakeCounter(v13);
      if ( KeHeteroSystem
        && v12
        && ((*((_DWORD *)&KeGetCurrentThread()->0 + 1) & 3) == 0
         || (*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0x380) == 0x180
         || (KeGetCurrentThread()->ThreadFlags2 & 3) == 3) )
      {
        *(_QWORD *)(v3 + 216) = PsChargeProcessWakeCounter(v13);
      }
    }
    v6 = v56;
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1);
    ++*(_WORD *)(v3 - 30);
    AlpcpInsertMessageDirectQueue(v1, v3, v10, v7);
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(v3 + 160);
    *(_DWORD *)(v3 + 40) &= ~0x8000u;
    *(_QWORD *)(v3 + 160) = 0LL;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v6 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v6 - 16));
    KeAbPostRelease(v6 - 16);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( !v8 && !v5 )
    {
      v45 = *(_QWORD *)(a1 + 40);
      if ( v45 >= 4 )
      {
        result = KeSetEvent((PRKEVENT)(v45 & 0xFFFFFFFFFFFFFFFCuLL), 0, 0);
        v46 = *(_QWORD *)(a1 + 40);
        if ( (v46 & 2) != 0 )
          result = ObfDereferenceObject((PVOID)(v46 & 0xFFFFFFFFFFFFFFFCuLL));
      }
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v14 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v14 == v14 )
      goto LABEL_15;
    ExAcquirePushLockExclusiveEx(v1 + 224, 0LL);
    if ( (_QWORD *)*v14 == v14 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
      KeAbPostRelease(v1 + 224);
LABEL_15:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v58 = 1;
        v54 = 0;
      }
      else
      {
        v58 = 0;
        v54 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
      }
      v15 = *(_QWORD *)(v1 + 360);
      if ( v15 && (*(_DWORD *)(v1 + 416) & 0x10000) != 0 )
      {
        v22 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
        if ( !*(_QWORD *)(v3 + 144) )
          v22 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
        v23 = v22 | 0x10000000;
        if ( !*(_QWORD *)(v3 + 152) )
          v23 = v22;
        if ( *(_QWORD *)(v3 + 168) )
          v23 |= 0x2000000u;
        v24 = *(_DWORD *)(v15 + 148);
        if ( (~v24 & v23) == 0 && ((*(unsigned __int16 *)(v3 + 244) & 0xFFFF00FF) != 5 || (v24 & 0x20000000) != 0) )
        {
          v25 = *(unsigned __int16 *)(v3 + 242);
          v26 = *(_DWORD *)(v1 + 416) & 0x800;
          v52 = (unsigned __int16)v25;
          if ( v24 )
          {
            v27 = 8;
            if ( v26 )
              v27 = 4;
            v28 = (unsigned int)(v27 - 1) & (v3 + 240 + *(unsigned __int16 *)(v3 + 242));
            v29 = v28 ? v27 - v28 : 0;
            v60 = v29;
            v25 += v29 + *(_DWORD *)(v15 + 152);
            v52 = v25;
          }
          else
          {
            v60 = 0;
          }
          v61 = 0;
          if ( v26 )
          {
            v25 -= 16;
            v61 = 0x80000000;
            v52 = v25;
          }
          CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v25);
          v53 = CompletionBuffer;
          if ( CompletionBuffer != -1 )
          {
            v31 = *(_QWORD *)(v15 + 120) + CompletionBuffer;
            v57 = v31;
            if ( v61 )
            {
              v47 = *(_WORD *)(v3 + 240);
              v48 = 0;
              *(_WORD *)v31 = v47;
              *(_WORD *)(v31 + 2) = v47 + 24;
              v49 = *(_WORD *)(v3 + 246);
              if ( v49 )
                v48 = v49 - 16;
              *(_WORD *)(v31 + 6) = v48;
              v50 = *(_WORD *)(v3 + 244) | 0x1000;
              *(_WORD *)(v31 + 4) = v50;
              *(_DWORD *)(v31 + 8) = *(_DWORD *)(v3 + 248);
              *(_DWORD *)(v31 + 12) = *(_DWORD *)(v3 + 256);
              *(_DWORD *)(v31 + 16) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(v31 + 20) = *(_DWORD *)(v3 + 272);
              *(_DWORD *)(v31 + 20) = *(_DWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v31 + 4) = v50 & 0xC00F;
              v32 = v31 + 24;
            }
            else
            {
              *(_OWORD *)v31 = *(_OWORD *)(v3 + 240);
              *(_OWORD *)(v31 + 16) = *(_OWORD *)(v3 + 256);
              *(_QWORD *)(v31 + 32) = *(_QWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v31 + 4) &= 0xC00Fu;
              v32 = v31 + 40;
            }
            if ( *(_QWORD *)(v3 + 176) )
              AlpcpGetDataFromUserVaSafe(v3, v32);
            else
              AlpcpReadMessageData(v3, v32);
            v33 = *(_DWORD *)(v15 + 148);
            if ( v33 )
            {
              BugCheckParameter4 = (_DWORD *)(v57 + *(unsigned __int16 *)(v57 + 2) + v60);
              *BugCheckParameter4 = v33;
              BugCheckParameter4[1] = 0;
              AlpcpExposeAttributes(v1, v61, v3, *(_DWORD *)(v15 + 148), (__int64)BugCheckParameter4);
            }
            inserted = AlpcpInsertCompletionListEntry(v1, v53);
            if ( inserted )
            {
              v59 = 1;
              *(_DWORD *)(*(_QWORD *)(v15 + 80) + 72LL) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(*(_QWORD *)(v15 + 80) + 76LL) = *(_DWORD *)(v3 + 272);
              if ( v58
                && (inserted & 2) == 0
                && HIWORD(*(_QWORD *)(*(_QWORD *)(v15 + 80) + 64LL))
                 + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL) >= *(unsigned int *)(v15 + 144) )
              {
                v58 = 0;
              }
              if ( (*(_DWORD *)(v3 + 40) & 0x200) != 0 )
              {
                v42 = *(_WORD *)(v3 + 244);
                v43 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
                if ( !*(_QWORD *)(v3 + 144) )
                  v43 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                v44 = v43 | 0x10000000;
                if ( !*(_QWORD *)(v3 + 152) )
                  v44 = v43;
                if ( v44 )
                {
                  *(_WORD *)(v3 + 244) = v42 | 0x2000;
                  ++*(_WORD *)(v3 - 30);
                  AlpcpInsertMessagePendingQueue(v1, v3);
                }
                else
                {
                  *(_WORD *)(v3 + 244) = v42 & 0xDFFF;
                }
              }
              else
              {
                *(_WORD *)(v3 + 244) |= 0x2000u;
                ++*(_WORD *)(v3 - 30);
                AlpcpInsertMessagePendingQueue(v1, v3);
              }
LABEL_25:
              if ( AlpcpLogEnabled )
                AlpcpLogSendMessage(v3);
              if ( v59 && AlpcpLogEnabled )
                AlpcpLogReceiveMessage(v3);
              if ( v8 && AlpcpLogEnabled )
                AlpcpLogWaitForReply(v3);
              *(_DWORD *)(v3 + 40) &= ~0x8000u;
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v3);
              v17 = *(_BYTE *)(v3 - 32);
              if ( (v17 & 1) != 0
                && (v18 = 0x10000 - *(__int16 *)(v3 - 30),
                    *(_BYTE *)(v3 - 32) = v17 & 0xFE,
                    *(_WORD *)(v3 - 30) = 0,
                    v18 > 0)
                && (v19 = -v18 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v18), v19 <= 0) )
              {
                if ( v19 )
                  KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v19);
                AlpcpDestroyBlob(v3, 1LL);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
                KeAbPostRelease(v3 - 16);
              }
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v56 - 16), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v56 - 16));
              result = KeAbPostRelease(v56 - 16);
              if ( v54 )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                result = KeAbPostRelease(v1 + 352);
                if ( v8 || v55 )
                {
                  *(_BYTE *)(a1 + 58) = 0;
                  return result;
                }
                KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1, 1, v21, 0);
              }
              else
              {
                if ( v58 )
                {
                  if ( v8 || v55 )
                  {
                    *(_BYTE *)(a1 + 58) = 1;
                    *(_BYTE *)(a1 + 59) = v59;
                  }
                  else
                  {
                    AlpcpQueueIoCompletionPort((__int64 *)v1, v59, 1, 0);
                    result = ObfDereferenceObject((PVOID)v1);
                    *(_QWORD *)(a1 + 32) = 0LL;
                  }
                  return result;
                }
                v41 = *(void **)(v1 + 368);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                KeAbPostRelease(v1 + 352);
                if ( v41 )
                  ExNotifyCallback(v41, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
              }
              result = ObfDereferenceObject((PVOID)v1);
              *(_QWORD *)(a1 + 32) = 0LL;
              return result;
            }
            AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v53 >> 6, (v52 + 63) >> 6);
          }
        }
      }
      if ( *(_QWORD *)(v3 + 176) )
      {
        AlpcpCaptureMessageDataSafe(v3);
        *(_QWORD *)(v3 + 176) = 0LL;
      }
      if ( *(_QWORD *)(v3 + 144) )
        AlpcpExposeViewAttributeInSenderContext((PVOID)v1);
      ++*(_WORD *)(v3 - 30);
      ExAcquirePushLockExclusiveEx(v1 + 136, 0LL);
      v16 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v16 & 0xFFFFFF81 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 1;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 152);
      *(_QWORD *)v3 = v1 + 144;
      **(_QWORD **)(v1 + 152) = v3;
      *(_QWORD *)(v1 + 152) = v3;
      ++*(_DWORD *)(v1 + 448);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 136));
      KeAbPostRelease(v1 + 136);
      goto LABEL_25;
    }
    v35 = (_QWORD *)*v14;
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1);
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
      goto LABEL_129;
    v36 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v3 + 144) )
      v36 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
    v37 = v36 | 0x10000000;
    if ( !*(_QWORD *)(v3 + 152) )
      v37 = v36;
    if ( (v37 & *(_DWORD *)(v35 - 1)) != 0 )
    {
LABEL_129:
      *(_WORD *)(v3 + 244) |= 0x2000u;
      ++*(_WORD *)(v3 - 30);
      AlpcpInsertMessagePendingQueue(v1, v3);
    }
    else
    {
      *(_WORD *)(v3 + 244) &= ~0x2000u;
    }
    *(v35 - 1) = v3;
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x2000u;
    if ( AlpcpLogEnabled )
      AlpcpLogSendMessage(v3);
    v38 = *v35;
    if ( *(_QWORD **)(*v35 + 8LL) != v35 || (v39 = (_QWORD *)v35[1], (_QWORD *)*v39 != v35) )
      __fastfail(3u);
    *v39 = v38;
    *(_QWORD *)(v38 + 8) = v39;
    *v35 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x8000u;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v56 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v56 - 16));
    KeAbPostRelease(v56 - 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
    KeAbPostRelease(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v8 || v5 )
    {
      result = (char)v35;
      *(_QWORD *)(a1 + 24) = v35 - 224;
    }
    else
    {
      return KeReleaseSemaphoreEx((__int64)(v35 - 21), 1, 1, v40, 2);
    }
  }
  return result;
}
