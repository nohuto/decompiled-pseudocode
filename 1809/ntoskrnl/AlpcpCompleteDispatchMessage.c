/*
 * XREFs of AlpcpCompleteDispatchMessage @ 0x1406366C0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x140614B5C (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1406151D8 (AlpcpDispatchCloseMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140616EDC (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchNewMessage @ 0x140636360 (AlpcpDispatchNewMessage.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExNotifyCallback @ 0x14008E480 (ExNotifyCallback.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsGetProcessInheritedFromUniqueProcessId @ 0x1400ABF80 (PsGetProcessInheritedFromUniqueProcessId.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400D3920 (AlpcpQueueIoCompletionPort.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PsChargeProcessWakeCounter @ 0x140589720 (PsChargeProcessWakeCounter.c)
 *     AlpcpReadMessageData @ 0x140615164 (AlpcpReadMessageData.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140618B88 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcpDestroyBlob @ 0x140619CB0 (AlpcpDestroyBlob.c)
 *     AlpcpExposeAttributes @ 0x1406341B0 (AlpcpExposeAttributes.c)
 *     AlpcpCaptureMessageDataSafe @ 0x1406371F0 (AlpcpCaptureMessageDataSafe.c)
 *     PspChargeProcessWakeCounter @ 0x140637C90 (PspChargeProcessWakeCounter.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14069CE44 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpInsertMessageDirectQueue @ 0x1406A8DC4 (AlpcpInsertMessageDirectQueue.c)
 *     AlpcpAllocateCompletionBuffer @ 0x1406D5A1C (AlpcpAllocateCompletionBuffer.c)
 *     AlpcpInsertCompletionListEntry @ 0x1406D5BD0 (AlpcpInsertCompletionListEntry.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1406D5CE0 (AlpcpGetDataFromUserVaSafe.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14084B7F8 (AlpcpEnterStateChangeEventMessageLog.c)
 *     AlpcpFreeBitmap @ 0x14084C4A0 (AlpcpFreeBitmap.c)
 *     AlpcpLogReceiveMessage @ 0x14084CBC0 (AlpcpLogReceiveMessage.c)
 *     AlpcpLogSendMessage @ 0x14084CC24 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x14084CDE0 (AlpcpLogWaitForReply.c)
 */

int __fastcall AlpcpCompleteDispatchMessage(__int64 a1)
{
  __int64 v1; // rbp
  ULONG_PTR v3; // rdi
  int v4; // ecx
  int v5; // r12d
  __int64 v6; // rbx
  __int64 v7; // r9
  int v8; // r15d
  int v9; // ecx
  __int64 v10; // r8
  int v11; // edx
  BOOL v12; // r13d
  void *v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // r13
  int v17; // eax
  char v18; // cl
  int v19; // esi
  signed __int64 v20; // rcx
  int result; // eax
  __int64 v22; // r9
  unsigned int v23; // r8d
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // r10d
  int v27; // r9d
  int v28; // r8d
  __int64 v29; // rdx
  unsigned int v30; // r8d
  unsigned int CompletionBuffer; // eax
  __int64 v32; // r8
  char *v33; // rdx
  int v34; // r8d
  int inserted; // eax
  _QWORD *v36; // r13
  _QWORD *v37; // rsi
  unsigned int v38; // edx
  int v39; // ecx
  bool v40; // zf
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // r9
  void *v44; // rdi
  __int16 v45; // r8
  unsigned int v46; // edx
  int v47; // ecx
  __int64 v48; // rcx
  int v49; // eax
  __int16 v50; // dx
  __int16 v51; // ax
  __int16 v52; // ax
  _DWORD *BugCheckParameter4; // [rsp+20h] [rbp-98h]
  unsigned int v54; // [rsp+40h] [rbp-78h]
  unsigned int v55; // [rsp+44h] [rbp-74h]
  unsigned int v56; // [rsp+48h] [rbp-70h]
  int v57; // [rsp+4Ch] [rbp-6Ch]
  __int64 v58; // [rsp+50h] [rbp-68h]
  __int64 v59; // [rsp+58h] [rbp-60h]
  char v60; // [rsp+C0h] [rbp+8h]
  char v61; // [rsp+C8h] [rbp+10h]
  unsigned int v62; // [rsp+D0h] [rbp+18h]
  int v63; // [rsp+D8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_DWORD *)(a1 + 48);
  v61 = 0;
  v5 = v4 & 4;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = 1LL;
  v8 = v4 & 0x20000;
  v58 = v6;
  v9 = v4 & 0x800000;
  v10 = *(unsigned int *)(*(_QWORD *)a1 + 256LL);
  if ( (v10 & 0x400000) != 0 )
    v11 = 2;
  else
    v11 = (v10 & 0x200000) != 0;
  v12 = v8 || v9;
  if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
  {
    v13 = *(void **)(v1 + 24);
    if ( ((unsigned __int8)v13 & 1) == 0 && v13 )
    {
      if ( v12 || v11 || (AlpcpWakePolicyDefault & 1) == 0 )
      {
        if ( PsGetProcessInheritedFromUniqueProcessId(*(_QWORD *)(v1 + 24)) )
          v14 = PspChargeProcessWakeCounter(v13, 1, 1, 0LL);
        else
          v14 = 0LL;
        *(_QWORD *)(v3 + 208) = v14;
      }
      if ( KeHeteroSystem
        && v12
        && ((*((_DWORD *)&KeGetCurrentThread()->0 + 1) & 3) == 0
         || (*(_DWORD *)&KeGetCurrentThread()->Process->0 & 0x380) == 0x180
         || (KeGetCurrentThread()->ThreadFlags2 & 3) == 3) )
      {
        *(_QWORD *)(v3 + 216) = PsChargeProcessWakeCounter(v13);
      }
    }
    v6 = v58;
  }
  if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
  {
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1, v3);
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
      result = KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFFEuLL), 0, 0);
      v48 = *(_QWORD *)(a1 + 40);
      if ( (v48 & 1) != 0 )
        result = ObfDereferenceObject((PVOID)(v48 & 0xFFFFFFFFFFFFFFFEuLL));
      *(_QWORD *)(a1 + 40) = 0LL;
    }
  }
  else
  {
    v15 = (_QWORD *)(v1 + 232);
    if ( (_QWORD *)*v15 == v15 )
      goto LABEL_16;
    ExAcquirePushLockExclusiveEx(v1 + 224, 0LL);
    v36 = (_QWORD *)*v15;
    if ( (_QWORD *)*v15 == v15 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
      KeAbPostRelease(v1 + 224);
LABEL_16:
      if ( *(_QWORD *)(v1 + 32) )
      {
        v60 = 1;
        v57 = 0;
      }
      else
      {
        v60 = 0;
        v57 = (*(_DWORD *)(v1 + 416) >> 9) & 1;
      }
      v16 = *(_QWORD *)(v1 + 360);
      if ( v16 && (*(_DWORD *)(v1 + 416) & 0x10000) != 0 )
      {
        v23 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
        if ( !*(_QWORD *)(v3 + 144) )
          v23 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
        v24 = v23 | 0x10000000;
        if ( !*(_QWORD *)(v3 + 152) )
          v24 = v23;
        if ( *(_QWORD *)(v3 + 168) )
          v24 |= 0x2000000u;
        v25 = *(_DWORD *)(v16 + 148);
        if ( (~v25 & v24) == 0 && ((*(unsigned __int16 *)(v3 + 244) & 0xFFFF00FF) != 5 || (v25 & 0x20000000) != 0) )
        {
          v26 = *(unsigned __int16 *)(v3 + 242);
          v27 = *(_DWORD *)(v1 + 416) & 0x800;
          v54 = (unsigned __int16)v26;
          if ( v25 )
          {
            v28 = 8;
            if ( v27 )
              v28 = 4;
            v29 = (unsigned int)(v28 - 1) & (v3 + 240 + *(unsigned __int16 *)(v3 + 242));
            v30 = v29 ? v28 - v29 : 0;
            v62 = v30;
            v26 += v30 + *(_DWORD *)(v16 + 152);
            v54 = v26;
          }
          else
          {
            v62 = 0;
          }
          v63 = 0;
          if ( v27 )
          {
            v26 -= 16;
            v63 = 0x80000000;
            v54 = v26;
          }
          CompletionBuffer = AlpcpAllocateCompletionBuffer(v1, v26);
          v56 = CompletionBuffer;
          if ( CompletionBuffer != -1 )
          {
            v32 = *(_QWORD *)(v16 + 120) + CompletionBuffer;
            v59 = v32;
            if ( v63 )
            {
              *(_WORD *)v32 = *(_WORD *)(v3 + 240);
              v49 = *(unsigned __int16 *)(v3 + 240) + 24;
              *(_WORD *)(v32 + 2) = v49;
              v50 = *(_WORD *)(v3 + 246);
              v55 = v49;
              v51 = 0;
              if ( v50 )
                v51 = v50 - 16;
              *(_WORD *)(v32 + 6) = v51;
              v52 = *(_WORD *)(v3 + 244) | 0x1000;
              *(_WORD *)(v32 + 4) = v52;
              *(_DWORD *)(v32 + 8) = *(_DWORD *)(v3 + 248);
              *(_DWORD *)(v32 + 12) = *(_DWORD *)(v3 + 256);
              *(_DWORD *)(v32 + 16) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(v32 + 20) = *(_DWORD *)(v3 + 272);
              *(_DWORD *)(v32 + 20) = *(_DWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v32 + 4) = v52 & 0xC00F;
              v33 = (char *)(v32 + 24);
            }
            else
            {
              *(_OWORD *)v32 = *(_OWORD *)(v3 + 240);
              *(_OWORD *)(v32 + 16) = *(_OWORD *)(v3 + 256);
              *(_QWORD *)(v32 + 32) = *(_QWORD *)(v3 + 272);
              if ( (*(_DWORD *)(v1 + 256) & 0x1000) != 0 )
                *(_WORD *)(v32 + 4) &= 0xC00Fu;
              v33 = (char *)(v32 + 40);
              v55 = *(unsigned __int16 *)(v3 + 242);
            }
            if ( *(_QWORD *)(v3 + 176) )
              AlpcpGetDataFromUserVaSafe(v3, v33);
            else
              AlpcpReadMessageData(v3, v33);
            v34 = *(_DWORD *)(v16 + 148);
            if ( v34 )
            {
              BugCheckParameter4 = (_DWORD *)(v59 + v55 + v62);
              *BugCheckParameter4 = v34;
              BugCheckParameter4[1] = 0;
              AlpcpExposeAttributes(v1, v63, v3, *(_DWORD *)(v16 + 148), (__int64)BugCheckParameter4);
            }
            inserted = AlpcpInsertCompletionListEntry(v1, v56);
            if ( inserted )
            {
              v61 = 1;
              *(_DWORD *)(*(_QWORD *)(v16 + 80) + 72LL) = *(_DWORD *)(v3 + 264);
              *(_DWORD *)(*(_QWORD *)(v16 + 80) + 76LL) = *(_DWORD *)(v3 + 272);
              if ( v60
                && (inserted & 2) == 0
                && HIWORD(*(_QWORD *)(*(_QWORD *)(v16 + 80) + 64LL))
                 + (unsigned __int64)*(unsigned int *)(*(_QWORD *)(v1 + 48) + 12LL) >= *(unsigned int *)(v16 + 144) )
              {
                v60 = 0;
              }
              if ( (*(_DWORD *)(v3 + 40) & 0x200) != 0 )
              {
                v45 = *(_WORD *)(v3 + 244);
                v46 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
                if ( !*(_QWORD *)(v3 + 144) )
                  v46 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
                v47 = v46 | 0x10000000;
                if ( !*(_QWORD *)(v3 + 152) )
                  v47 = v46;
                if ( v47 )
                {
                  *(_WORD *)(v3 + 244) = v45 | 0x2000;
                  ++*(_WORD *)(v3 - 30);
                  AlpcpInsertMessagePendingQueue(v1, v3);
                }
                else
                {
                  *(_WORD *)(v3 + 244) = v45 & 0xDFFF;
                }
              }
              else
              {
                *(_WORD *)(v3 + 244) |= 0x2000u;
                ++*(_WORD *)(v3 - 30);
                AlpcpInsertMessagePendingQueue(v1, v3);
              }
LABEL_26:
              if ( AlpcpLogEnabled )
                AlpcpLogSendMessage(v3);
              if ( v61 && AlpcpLogEnabled )
                AlpcpLogReceiveMessage(v3);
              if ( v8 && AlpcpLogEnabled )
                AlpcpLogWaitForReply(v3);
              *(_DWORD *)(v3 + 40) &= ~0x8000u;
              if ( AlpcpMessageLogEnabled )
                AlpcpEnterStateChangeEventMessageLog(v3);
              v18 = *(_BYTE *)(v3 - 32);
              if ( (v18 & 1) != 0
                && (v19 = 0x10000 - *(__int16 *)(v3 - 30),
                    *(_BYTE *)(v3 - 32) = v18 & 0xFE,
                    *(_WORD *)(v3 - 30) = 0,
                    v19 > 0)
                && (v20 = -v19 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 24), -v19), v20 <= 0) )
              {
                if ( v20 )
                  KeBugCheckEx(0x18u, 0LL, v3, 0x28uLL, v20);
                AlpcpDestroyBlob(v3, 1);
              }
              else
              {
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v3 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v3 - 16));
                KeAbPostRelease(v3 - 16);
              }
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v58 - 16), 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)(v58 - 16));
              result = KeAbPostRelease(v58 - 16);
              if ( v57 )
              {
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                result = KeAbPostRelease(v1 + 352);
                if ( v8 || v5 )
                {
                  *(_BYTE *)(a1 + 58) = 0;
                  return result;
                }
                KeReleaseSemaphoreEx(*(_QWORD *)(v1 + 248), 1LL, 1, v22, 0);
              }
              else
              {
                if ( v60 )
                {
                  if ( v8 || v5 )
                  {
                    *(_BYTE *)(a1 + 58) = 1;
                    *(_BYTE *)(a1 + 59) = v61;
                  }
                  else
                  {
                    AlpcpQueueIoCompletionPort((_QWORD *)v1, v61, 1, 0);
                    result = ObfDereferenceObject((PVOID)v1);
                    *(_QWORD *)(a1 + 32) = 0LL;
                  }
                  return result;
                }
                v44 = *(void **)(v1 + 368);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
                KeAbPostRelease(v1 + 352);
                if ( v44 )
                  ExNotifyCallback(v44, *(PVOID *)(v1 + 376), (PVOID)*(unsigned int *)(a1 + 48));
              }
              result = ObfDereferenceObject((PVOID)v1);
              *(_QWORD *)(a1 + 32) = 0LL;
              return result;
            }
            AlpcpFreeBitmap(*(_QWORD *)(*(_QWORD *)(v1 + 360) + 104LL), 0LL, v56 >> 6, (v54 + 63) >> 6);
          }
        }
      }
      if ( *(_QWORD *)(v3 + 176) )
      {
        AlpcpCaptureMessageDataSafe(v3);
        *(_QWORD *)(v3 + 176) = 0LL;
      }
      if ( *(_QWORD *)(v3 + 144) )
        AlpcpExposeViewAttributeInSenderContext((PVOID)v1, v3);
      ++*(_WORD *)(v3 - 30);
      ExAcquirePushLockExclusiveEx(v1 + 136, 0LL);
      v17 = *(_DWORD *)(v3 + 40);
      *(_QWORD *)(v3 + 16) = v1;
      *(_DWORD *)(v3 + 40) = v17 & 0xFFFFFF81 | (4 * (*(_DWORD *)(v1 + 416) & 6)) | 1;
      *(_QWORD *)(v3 + 8) = *(_QWORD *)(v1 + 152);
      *(_QWORD *)v3 = v1 + 144;
      **(_QWORD **)(v1 + 152) = v3;
      *(_QWORD *)(v1 + 152) = v3;
      ++*(_DWORD *)(v1 + 448);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 136), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 136));
      KeAbPostRelease(v1 + 136);
      goto LABEL_26;
    }
    v37 = v36 - 222;
    if ( *(_QWORD *)(v3 + 176) )
    {
      AlpcpCaptureMessageDataSafe(v3);
      *(_QWORD *)(v3 + 176) = 0LL;
    }
    if ( *(_QWORD *)(v3 + 144) )
      AlpcpExposeViewAttributeInSenderContext((PVOID)v1, v3);
    if ( (*(_DWORD *)(v3 + 40) & 0x200) == 0 )
      goto LABEL_132;
    v38 = (*(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0) | 0x40000000;
    if ( !*(_QWORD *)(v3 + 144) )
      v38 = *(_QWORD *)(v3 + 136) != 0LL ? 0x80000000 : 0;
    v39 = v38 | 0x10000000;
    if ( !*(_QWORD *)(v3 + 152) )
      v39 = v38;
    if ( (v39 & (_DWORD)v37[221]) != 0 )
    {
LABEL_132:
      *(_WORD *)(v3 + 244) |= 0x2000u;
      ++*(_WORD *)(v3 - 30);
      AlpcpInsertMessagePendingQueue(v1, v3);
    }
    else
    {
      *(_WORD *)(v3 + 244) &= ~0x2000u;
    }
    ++*(_WORD *)(v3 - 30);
    *(_DWORD *)(v3 + 40) |= 0x2000u;
    v40 = AlpcpLogEnabled == 0;
    v37[221] = v3;
    if ( !v40 )
      AlpcpLogSendMessage(v3);
    v41 = *v36;
    if ( *(_QWORD **)(*v36 + 8LL) != v36 || (v42 = (_QWORD *)v36[1], (_QWORD *)*v42 != v36) )
      __fastfail(3u);
    *v42 = v41;
    *(_QWORD *)(v41 + 8) = v42;
    *v36 = 0LL;
    *(_DWORD *)(v3 + 40) &= ~0x8000u;
    AlpcpUnlockMessage(v3);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v58 - 16), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v58 - 16));
    KeAbPostRelease(v58 - 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v1 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v1 + 224));
    KeAbPostRelease(v1 + 224);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v1 + 352));
    KeAbPostRelease(v1 + 352);
    result = ObfDereferenceObject((PVOID)v1);
    *(_QWORD *)(a1 + 32) = 0LL;
    if ( v8 || v5 )
      *(_QWORD *)(a1 + 24) = v37;
    else
      return KeReleaseSemaphoreEx((__int64)(v37 + 201), 1LL, 1, v43, 2);
  }
  return result;
}
