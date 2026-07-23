/*
 * XREFs of AlpcpSendLegacySynchronousRequest @ 0x14061B900
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x140634A50 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfReferenceObject @ 0x14004E220 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x140583068 (AlpcpAvailableBufferSize.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpValidateMessage @ 0x1406173AC (AlpcpValidateMessage.c)
 *     AlpcpAllocateMessage @ 0x140617D6C (AlpcpAllocateMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140617E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14061BE2C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpSendMessage @ 0x140635910 (AlpcpSendMessage.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406371B0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14069CE44 (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpCaptureMessageData @ 0x1406A54A8 (AlpcpCaptureMessageData.c)
 *     AlpcpInsertMessageMainQueue @ 0x1406C18B8 (AlpcpInsertMessageMainQueue.c)
 *     AlpcpEnterAllocationEventMessageLog @ 0x14084B6C4 (AlpcpEnterAllocationEventMessageLog.c)
 *     AlpcpLogSendMessage @ 0x14084CC24 (AlpcpLogSendMessage.c)
 *     AlpcpLogWaitForReply @ 0x14084CDE0 (AlpcpLogWaitForReply.c)
 */

__int64 __fastcall AlpcpSendLegacySynchronousRequest(__int64 a1, __int64 a2, __int128 *a3, __int64 a4)
{
  int v7; // ecx
  __int64 result; // rax
  _DWORD *v9; // r14
  int v10; // edi
  signed __int32 v11; // eax
  ULONG_PTR v12; // rcx
  ULONG_PTR v13; // rdi
  unsigned __int64 v14; // rax
  size_t v15; // rdx
  int v16; // r14d
  unsigned __int64 v17; // rax
  size_t v18; // rdx
  __int64 v19; // rcx
  signed __int64 *v20; // r14
  __int64 v21; // r13
  _QWORD *v22; // rax
  signed __int64 *v23; // r14
  __int64 v24; // rax
  struct _KTHREAD *v25; // rcx
  ULONG_PTR v26; // rdi
  _QWORD *v27; // rax
  _QWORD *v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  int v33; // [rsp+20h] [rbp-98h]
  _DWORD *v34; // [rsp+28h] [rbp-90h] BYREF
  _QWORD *v35; // [rsp+30h] [rbp-88h]
  _DWORD *v36; // [rsp+38h] [rbp-80h]
  _QWORD *v37; // [rsp+40h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-70h]
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-68h]
  __int128 v40; // [rsp+58h] [rbp-60h] BYREF
  __int128 v41; // [rsp+68h] [rbp-50h]
  __int64 v42; // [rsp+78h] [rbp-40h]
  char v43; // [rsp+D8h] [rbp+20h]

  v43 = a4;
  v34 = 0LL;
  if ( (_BYTE)a4 )
  {
    AlpcpProbeAndCaptureMessageHeader(a3, &v40, 0LL);
  }
  else
  {
    v40 = *a3;
    v41 = a3[1];
    v42 = *((_QWORD *)a3 + 4);
  }
  if ( DWORD2(v41) )
    return AlpcpSendMessage(a2, a3, 0LL, a4);
  v7 = *(_DWORD *)(a1 + 416);
  if ( (v7 & 0x2000) == 0 || (v7 & 6) != 4 || (v7 & 0x38) != 0 || WORD3(v40) )
    return AlpcpSendMessage(a2, a3, 0LL, a4);
  if ( (unsigned __int64)WORD1(v40) > *(_QWORD *)(a1 + 272) )
    return 3221225519LL;
  result = AlpcpValidateMessage((unsigned __int16 *)&v40, 1);
  if ( (int)result >= 0 )
  {
    v9 = (_DWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
    v34 = v9;
    if ( v9 )
    {
      AlpcpLockForCachedReferenceBlob((ULONG_PTR)v9);
      --*((_WORD *)v9 - 15);
      v10 = v9[66] & 0x7FFFFFFF;
      memset(v9, 0, 0x118uLL);
      v9[66] = v10;
      do
        v11 = _InterlockedIncrement(&AlpcpNextCallbackId);
      while ( !v11 );
      v12 = (ULONG_PTR)v34;
      v34[68] = v11;
      if ( AlpcpMessageLogEnabled )
        AlpcpEnterAllocationEventMessageLog(v12);
    }
    else
    {
      result = AlpcpAllocateMessage((ULONG_PTR *)&v34, 0LL, 0LL);
      if ( (int)result < 0 )
        return result;
    }
    CurrentThread = KeGetCurrentThread();
    v13 = (ULONG_PTR)v34;
    *(_OWORD *)(v34 + 62) = *(_OWORD *)&CurrentThread[1].CycleTime;
    *(_DWORD *)(v13 + 240) = v40;
    *(_WORD *)(v13 + 244) = 8193;
    if ( v43 )
    {
      v14 = AlpcpAvailableBufferSize(v13);
      if ( v15 > v14 )
      {
        v16 = AlpcpCaptureMessageData(v13, v15, (char *)a3 + 40);
        v33 = v16;
      }
      else
      {
        memmove((void *)(v13 + 280), (char *)a3 + 40, v15);
        v16 = 0;
        v33 = 0;
      }
    }
    else
    {
      v17 = AlpcpAvailableBufferSize(v13);
      if ( v18 <= v17 )
      {
        memmove((void *)(v13 + 280), (char *)a3 + 40, v18);
        v33 = 0;
        goto LABEL_26;
      }
      v16 = AlpcpCaptureMessageData(v19, v18, (char *)a3 + 40);
      v33 = v16;
    }
    if ( v16 < 0 )
    {
LABEL_57:
      if ( v13 )
        AlpcpUnlockMessage(v13);
      return (unsigned int)v16;
    }
LABEL_26:
    v37 = *(_QWORD **)(a1 + 16);
    v20 = v37 - 2;
    BugCheckParameter2 = (ULONG_PTR)(v37 - 2);
    ExAcquirePushLockSharedEx((ULONG_PTR)(v37 - 2), 0LL);
    v21 = *(_QWORD *)(a1 + 424);
    v22 = *(_QWORD **)(a1 + 432);
    v35 = v22;
    if ( v21 && v22 )
    {
      v23 = v22 + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(v22 + 44), 0LL);
      if ( (v35[52] & 0x20) != 0 )
        goto LABEL_29;
      *(_QWORD *)(v13 + 120) = v35[7];
      if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      v23 = (signed __int64 *)(v21 + 352);
      ExAcquirePushLockSharedEx(v21 + 352, 0LL);
      if ( (*(_DWORD *)(v21 + 416) & 0x20) != 0 )
      {
LABEL_29:
        v33 = -1073741769;
      }
      else
      {
        v24 = (__int64)v34;
        v36 = v34 - 12;
        *((_WORD *)v36 + 9) += 3;
        v25 = CurrentThread;
        _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, v24);
        v26 = (ULONG_PTR)v34;
        *((_QWORD *)v34 + 4) = v25;
        AlpcpSetOwnerPortMessage(v26, a1);
        v27 = v37;
        *(_QWORD *)(v26 + 184) = v37;
        *(_QWORD *)(v26 + 192) = *v27;
        *(_QWORD *)(a2 + 8) = v26;
        if ( AlpcpLogEnabled )
        {
          AlpcpLogSendMessage(v26);
          if ( AlpcpLogEnabled )
            AlpcpLogWaitForReply(v26);
        }
        v28 = 0LL;
        v35 = 0LL;
        if ( *(_QWORD *)(v21 + 232) != v21 + 232 )
        {
          ExAcquirePushLockExclusiveEx(v21 + 224, 0LL);
          v29 = *(_QWORD **)(v21 + 232);
          v37 = v29;
          if ( v29 != (_QWORD *)(v21 + 232) )
          {
            v35 = v29 - 222;
            AlpcpInsertMessagePendingQueue(v21, v26);
            ++*((_WORD *)v36 + 9);
            *(_DWORD *)(v26 + 40) |= 0x2000u;
            v35[221] = v26;
            v30 = v37;
            v31 = *v37;
            v32 = (_QWORD *)v37[1];
            if ( *(_QWORD **)(*v37 + 8LL) != v37 || (_QWORD *)*v32 != v37 )
              __fastfail(3u);
            *v32 = v31;
            *(_QWORD *)(v31 + 8) = v32;
            *v30 = 0LL;
          }
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 224), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v21 + 224));
          KeAbPostRelease(v21 + 224);
          v26 = (ULONG_PTR)v34;
          v28 = v35;
        }
        *(_QWORD *)(a2 + 32) = 0LL;
        *(_QWORD *)(a2 + 24) = 0LL;
        *(_QWORD *)(a2 + 40) = 0LL;
        if ( v28 )
        {
          *(_QWORD *)(a2 + 24) = v28;
        }
        else
        {
          AlpcpInsertMessageMainQueue(v21, v26);
          if ( (*(_DWORD *)(v21 + 416) & 0x200) != 0 )
          {
            ObfReferenceObject((PVOID)v21);
            *(_QWORD *)(a2 + 32) = v21;
            *(_BYTE *)(a2 + 58) = 0;
          }
        }
        AlpcpUnlockMessage(v26);
      }
      if ( _InterlockedCompareExchange64(v23, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v23);
      KeAbPostRelease((ULONG_PTR)v23);
      v20 = (signed __int64 *)BugCheckParameter2;
    }
    else
    {
      v33 = -1073741769;
    }
    if ( _InterlockedCompareExchange64(v20, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v20);
    KeAbPostRelease((ULONG_PTR)v20);
    v13 = (ULONG_PTR)v34;
    v16 = v33;
    if ( v33 >= 0 )
      return (unsigned int)v16;
    goto LABEL_57;
  }
  return result;
}
