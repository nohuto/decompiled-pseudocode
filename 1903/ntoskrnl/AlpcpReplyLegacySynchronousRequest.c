/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x140647304
 * Callers:
 *     NtReplyPort @ 0x140644E30 (NtReplyPort.c)
 *     NtReplyWaitReceivePortEx @ 0x140645B30 (NtReplyWaitReceivePortEx.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1400140F0 (KeReleaseSemaphoreEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     AlpcpAvailableBufferSize @ 0x1405B0AF4 (AlpcpAvailableBufferSize.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x140647008 (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x140647E44 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x140647ED0 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpValidateMessage @ 0x140648020 (AlpcpValidateMessage.c)
 *     AlpcpCaptureMessageData @ 0x1406C86F8 (AlpcpCaptureMessageData.c)
 *     AlpcpValidateDataInformation @ 0x140886110 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 a1, unsigned __int64 a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ebx
  __int64 v12; // r9
  ULONG_PTR v13; // rsi
  int v14; // ecx
  __int64 v15; // rdx
  __int64 v16; // r13
  _QWORD *v17; // rbx
  volatile signed __int64 *v18; // rsi
  bool v19; // bl
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  size_t v22; // rdx
  ULONG_PTR v23; // rbx
  __int64 v24; // r15
  ULONG_PTR v25; // r14
  unsigned int v26; // ecx
  __int64 v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // rbx
  _DISPATCHER_HEADER *v30; // r9
  signed __int32 v32[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+30h] [rbp-68h]
  signed __int64 v34; // [rsp+38h] [rbp-60h]
  _BYTE v35[40]; // [rsp+48h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B8h] [rbp+20h] BYREF

  memset(v35, 0, sizeof(v35));
  v8 = *(_QWORD *)a1;
  if ( a3 )
  {
    AlpcpProbeAndCaptureMessageHeader(a2, (__int64)v35, 0);
    LOBYTE(v9) = 1;
    v11 = AlpcpValidateMessage(v35, v9, v10);
    v33 = v11;
    if ( v11 < 0 )
      return (unsigned int)v11;
    if ( *(_WORD *)&v35[6] )
    {
      v11 = AlpcpValidateDataInformation(a2, v35);
      v33 = v11;
      if ( v11 < 0 )
        return (unsigned int)v11;
    }
  }
  else
  {
    *(_OWORD *)v35 = *(_OWORD *)a2;
    *(_OWORD *)&v35[16] = *(_OWORD *)(a2 + 16);
    *(_DWORD *)&v35[36] = HIDWORD(*(_QWORD *)(a2 + 32));
    *(_DWORD *)&v35[32] = 0;
    LOBYTE(v6) = 1;
    v11 = AlpcpValidateMessage(v35, v6, v7);
    if ( v11 < 0 )
      return (unsigned int)v11;
  }
  v11 = AlpcpLookupMessage(v8, *(unsigned int *)&v35[24], *(int *)&v35[32], v12, &BugCheckParameter2);
  v33 = v11;
  if ( v11 < 0 )
    return (unsigned int)v11;
  v13 = BugCheckParameter2;
  v14 = *(_DWORD *)(BugCheckParameter2 + 40);
  if ( (v14 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v8, BugCheckParameter2, 0x10000LL);
    return (unsigned int)-1073741769;
  }
  if ( (v14 & 0x200) != 0 || !*(_QWORD *)(BugCheckParameter2 + 32) )
    goto LABEL_47;
  v15 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v15 == v8 )
  {
LABEL_27:
    if ( (v14 & 7) == 3 )
    {
      v19 = 1;
      goto LABEL_29;
    }
LABEL_47:
    AlpcpUnlockMessage(v13);
    return (unsigned int)-1073741790;
  }
  if ( v15 )
  {
    if ( (*(_BYTE *)(v8 + 416) & 6) != 6 )
      goto LABEL_47;
    v20 = *(_QWORD **)(v8 + 16);
    if ( !v20 || *v20 != v15 )
      goto LABEL_47;
    goto LABEL_27;
  }
  v16 = *(_QWORD *)(BugCheckParameter2 + 24);
  if ( !v16 )
    goto LABEL_47;
  v17 = *(_QWORD **)(v16 + 16);
  v18 = v17 - 2;
  ExAcquirePushLockSharedEx((ULONG_PTR)(v17 - 2), 0LL);
  if ( ((*(_DWORD *)(v16 + 416) >> 1) & 3) == 2 )
    v19 = *v17 == v8 || v17[1] == v8;
  else
    v19 = v17[2] == v8;
  v34 = _InterlockedCompareExchange64(v18, 0LL, 17LL);
  if ( v34 != 17 )
    ExfReleasePushLockShared((signed __int64 *)v18);
  KeAbPostRelease((ULONG_PTR)v18);
  v13 = BugCheckParameter2;
LABEL_29:
  if ( !v19 )
    goto LABEL_47;
  v21 = AlpcpAvailableBufferSize(v13);
  if ( v22 > v21 )
  {
    v11 = AlpcpCaptureMessageData(v13, v22, a2 + 40);
    v33 = v11;
  }
  else
  {
    memmove((void *)(v13 + 280), (const void *)(a2 + 40), v22);
    v11 = 0;
    v33 = 0;
  }
  if ( v11 >= 0 )
  {
    *(_DWORD *)(v13 + 40) |= 0x8000u;
    _InterlockedOr(v32, 0);
    v23 = BugCheckParameter2;
    v24 = *(_QWORD *)(BugCheckParameter2 + 24);
    AlpcpClearOwnerPortMessage(BugCheckParameter2);
    AlpcpRemoveMessageFromPendingQueue(v23);
    *(_DWORD *)(v23 + 240) = *(_DWORD *)v35;
    *(_WORD *)(v23 + 244) = 2;
    v25 = BugCheckParameter2;
    *(_OWORD *)(BugCheckParameter2 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    *(_DWORD *)(v13 + 40) |= 0x200u;
    v26 = *(_DWORD *)(v13 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v24 + 416) & 6));
    *(_DWORD *)(v13 + 40) = v26;
    if ( ((v26 >> 3) & 0xF) == 1 )
    {
      v27 = *(_QWORD *)(v24 + 16);
      ExAcquirePushLockSharedEx(v27 - 16, 0LL);
      v28 = *(_QWORD *)(v27 + 8);
      if ( v28 )
        *(_QWORD *)(v25 + 120) = *(_QWORD *)(v28 + 56);
      else
        *(_QWORD *)(v25 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v27 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v27 - 16));
      KeAbPostRelease(v27 - 16);
      v25 = BugCheckParameter2;
    }
    else
    {
      *(_QWORD *)(v25 + 120) = *(_QWORD *)(v24 + 56);
    }
    v29 = *(_QWORD *)(v25 + 32);
    *(_QWORD *)(v25 + 32) = 0LL;
    --*(_WORD *)(v25 - 30);
    *(_DWORD *)(v13 + 40) = *(_DWORD *)(v13 + 40) & 0xFFFF7EFF | 0x100;
    AlpcpUnlockMessage(v25);
    if ( (*(_DWORD *)(a1 + 48) & 4) != 0 )
      *(_QWORD *)(a1 + 24) = v29;
    else
      KeReleaseSemaphoreEx(v29 + 1624, 1, 1, v30, 2);
    return v33;
  }
  else
  {
    AlpcpUnlockMessage(v13);
  }
  return (unsigned int)v11;
}
