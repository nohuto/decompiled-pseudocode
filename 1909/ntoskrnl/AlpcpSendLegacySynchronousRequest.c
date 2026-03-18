/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x14065A7F0
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1405E0F10 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x1405B0AF4 (AlpcpAvailableBufferSize.c)
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E5210 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x140658C9C (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406598F0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14065AD68 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpValidateMessage @ 0x14065BB84 (AlpcpValidateMessage.c)
 *     AlpcpAllocateMessage @ 0x14065E418 (AlpcpAllocateMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpCaptureMessageData @ 0x1406C6A28 (AlpcpCaptureMessageData.c)
 *     AlpcpInsertMessageMainQueue @ 0x1406E5090 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x140885144 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x14088671C (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x140886904 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  __int64 result; // rax
  _DWORD *v12; // r14
  int v13; // edi
  signed __int32 v14; // eax
  ULONG_PTR v15; // rcx
  ULONG_PTR v16; // rdi
  unsigned __int64 v17; // rax
  size_t v18; // rdx
  int v19; // r14d
  unsigned __int64 v20; // rax
  size_t v21; // rdx
  __int64 v22; // rcx
  signed __int64 *v23; // r14
  __int64 v24; // r13
  __int64 v25; // rax
  volatile signed __int64 *v26; // r14
  bool v27; // zf
  signed __int64 v28; // rax
  ULONG_PTR v29; // rax
  struct _KTHREAD *v30; // rcx
  ULONG_PTR v31; // rdi
  _QWORD *v32; // rax
  _QWORD *v33; // rcx
  _QWORD *v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // rcx
  signed __int64 v38; // rbx
  signed __int64 v39; // rax
  int v40; // [rsp+20h] [rbp-C8h]
  ULONG_PTR v41; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD *v42; // [rsp+30h] [rbp-B8h]
  _QWORD *v43; // [rsp+38h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-A8h]
  _BYTE v45[40]; // [rsp+48h] [rbp-A0h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp-78h]
  ULONG_PTR v47; // [rsp+78h] [rbp-70h]
  signed __int64 v48; // [rsp+80h] [rbp-68h]
  signed __int64 v49; // [rsp+88h] [rbp-60h]
  signed __int64 v50; // [rsp+90h] [rbp-58h]
  signed __int64 v51; // [rsp+98h] [rbp-50h]

  memset(v45, 0, sizeof(v45));
  v41 = 0LL;
  if ( a4 )
  {
    AlpcpProbeAndCaptureMessageHeader(a3, v45, 0LL);
  }
  else
  {
    *(_OWORD *)v45 = *(_OWORD *)a3;
    *(_OWORD *)&v45[16] = *(_OWORD *)(a3 + 16);
    *(_QWORD *)&v45[32] = *(_QWORD *)(a3 + 32);
  }
  if ( *(_DWORD *)&v45[24] )
    return AlpcpSendMessage(a2, (__m256i *)a3, 0LL, a4);
  v10 = *(_DWORD *)(a1 + 416);
  if ( (v10 & 0x2000) == 0 || (v10 & 6) != 4 || (v10 & 0x38) != 0 || *(_WORD *)&v45[6] )
    return AlpcpSendMessage(a2, (__m256i *)a3, 0LL, a4);
  if ( (unsigned __int64)*(unsigned __int16 *)&v45[2] > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  LOBYTE(v8) = 1;
  result = AlpcpValidateMessage(v45, v8, v9);
  if ( (int)result >= 0 )
  {
    v12 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
    v41 = (ULONG_PTR)v12;
    if ( v12 )
    {
      AlpcpLockForCachedReferenceBlob((ULONG_PTR)v12);
      --*((_WORD *)v12 - 15);
      v13 = v12[66] & 0x7FFFFFFF;
      memset(v12, 0, 0x118uLL);
      v12[66] = v13;
      do
        v14 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v14 );
      v15 = v41;
      *(_DWORD *)(v41 + 272) = v14;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterAllocationEventMessageLog(v15);
    }
    else
    {
      result = AlpcpAllocateMessage(&v41, 0LL, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    CurrentThread = KeGetCurrentThread();
    v16 = v41;
    *(_OWORD *)(v41 + 248) = *(_OWORD *)&CurrentThread[1].CycleTime;
    *(_DWORD *)(v16 + 240) = *(_DWORD *)v45;
    *(_WORD *)(v16 + 244) = 8193;
    if ( a4 )
    {
      v17 = AlpcpAvailableBufferSize(v16);
      if ( v18 > v17 )
      {
        v19 = AlpcpCaptureMessageData(v16, v18, a3 + 40);
        v40 = v19;
      }
      else
      {
        memmove((void *)(v16 + 280), (const void *)(a3 + 40), v18);
        v19 = 0;
        v40 = 0;
      }
    }
    else
    {
      v20 = AlpcpAvailableBufferSize(v16);
      if ( v21 <= v20 )
      {
        memmove((void *)(v16 + 280), (const void *)(a3 + 40), v21);
        v40 = 0;
        goto LABEL_26;
      }
      v19 = AlpcpCaptureMessageData(v22, v21, a3 + 40);
      v40 = v19;
    }
    if ( v19 < 0 )
    {
LABEL_60:
      if ( v16 )
        AlpcpUnlockMessage(v16);
      return (unsigned int)v19;
    }
LABEL_26:
    v43 = *(_QWORD **)(a1 + 16);
    v23 = v43 - 2;
    BugCheckParameter2 = (ULONG_PTR)(v43 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v43 - 2), 0LL);
    v24 = *(_QWORD *)(a1 + 424);
    v25 = *(_QWORD *)(a1 + 432);
    v42 = (_QWORD *)v25;
    if ( v24 && v25 )
    {
      v26 = (volatile signed __int64 *)(v25 + 352);
      ExAcquirePushLockSharedEx(v25 + 352, 0LL);
      if ( (v42[52] & 0x20) != 0 )
      {
        v40 = -1073741769;
        v28 = _InterlockedCompareExchange64(v26, 0LL, 17LL);
        v27 = v28 == 17;
        v48 = v28;
      }
      else
      {
        *(_QWORD *)(v16 + 120) = v42[7];
        v49 = _InterlockedCompareExchange64(v26, 0LL, 17LL);
        if ( v49 != 17 )
          ExfReleasePushLockShared((signed __int64 *)v26);
        KeAbPostRelease((ULONG_PTR)v26);
        v26 = (volatile signed __int64 *)(v24 + 352);
        ExAcquirePushLockSharedEx(v24 + 352, 0LL);
        if ( (*(_DWORD *)(v24 + 416) & 0x20) != 0 )
        {
          v40 = -1073741769;
        }
        else
        {
          v29 = v41;
          v47 = v41 - 48;
          *(_WORD *)(v47 + 18) += 3;
          v30 = CurrentThread;
          _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v29);
          v31 = v41;
          *(_QWORD *)(v41 + 32) = v30;
          AlpcpSetOwnerPortMessage(v31, (void *)a1, 0);
          v32 = v43;
          *(_QWORD *)(v31 + 184) = v43;
          *(_QWORD *)(v31 + 192) = *v32;
          *(_QWORD *)(a2 + 8) = v31;
          if ( AlpcpLogEnabled )
          {
            AlpcpLogSendMessage(v31);
            if ( AlpcpLogEnabled )
              AlpcpLogWaitForReply(v31);
          }
          v33 = 0LL;
          v42 = 0LL;
          if ( *(_QWORD *)(v24 + 232) != v24 + 232 )
          {
            ExAcquirePushLockExclusiveEx(v24 + 224, 0LL);
            v34 = *(_QWORD **)(v24 + 232);
            v43 = v34;
            if ( v34 != (_QWORD *)(v24 + 232) )
            {
              v42 = v34 - 224;
              v42[223] = v31;
              ++*(_WORD *)(v47 + 18);
              *(_DWORD *)(v31 + 40) |= 0x2000u;
              AlpcpInsertMessagePendingQueue(v24, v31);
              v35 = v43;
              v36 = *v43;
              v37 = (_QWORD *)v43[1];
              if ( *(_QWORD **)(*v43 + 8LL) != v43 || (_QWORD *)*v37 != v43 )
                __fastfail(3u);
              *v37 = v36;
              *(_QWORD *)(v36 + 8) = v37;
              *v35 = 0LL;
            }
            v38 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 224), 0xFFFFFFFFFFFFFFFFuLL);
            v50 = v38;
            if ( (v38 & 2) != 0 && (v38 & 4) == 0 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v24 + 224));
            KeAbPostRelease(v24 + 224);
            v31 = v41;
            v33 = v42;
          }
          *(_QWORD *)(a2 + 32) = 0LL;
          *(_QWORD *)(a2 + 24) = 0LL;
          *(_QWORD *)(a2 + 40) = 0LL;
          if ( v33 )
          {
            *(_QWORD *)(a2 + 24) = v33;
          }
          else
          {
            AlpcpInsertMessageMainQueue(v24, v31);
            if ( (*(_DWORD *)(v24 + 416) & 0x200) != 0 )
            {
              ObfReferenceObject((PVOID)v24);
              *(_QWORD *)(a2 + 32) = v24;
              *(_BYTE *)(a2 + 58) = 0;
            }
          }
          AlpcpUnlockMessage(v31);
        }
        v39 = _InterlockedCompareExchange64(v26, 0LL, 17LL);
        v27 = v39 == 17;
        v51 = v39;
      }
      if ( !v27 )
        ExfReleasePushLockShared((signed __int64 *)v26);
      KeAbPostRelease((ULONG_PTR)v26);
      v23 = (signed __int64 *)BugCheckParameter2;
    }
    else
    {
      v40 = -1073741769;
    }
    if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v23);
    KeAbPostRelease((ULONG_PTR)v23);
    v16 = v41;
    v19 = v40;
    if ( v40 >= 0 )
      return (unsigned int)v19;
    goto LABEL_60;
  }
  return result;
}
