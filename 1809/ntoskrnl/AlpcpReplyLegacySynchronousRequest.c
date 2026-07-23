/*
 * XREFs of AlpcpReplyLegacySynchronousRequest @ 0x140616538
 * Callers:
 *     NtReplyWaitReceivePortEx @ 0x140614CE0 (NtReplyWaitReceivePortEx.c)
 *     NtReplyPort @ 0x1406B4090 (NtReplyPort.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 *     KeReleaseSemaphoreEx @ 0x1400D29F0 (KeReleaseSemaphoreEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     AlpcpAvailableBufferSize @ 0x140583068 (AlpcpAvailableBufferSize.c)
 *     AlpcpCancelMessage @ 0x14061690C (AlpcpCancelMessage.c)
 *     AlpcpUnlockMessage @ 0x140616E4C (AlpcpUnlockMessage.c)
 *     AlpcpRemoveMessageFromPendingQueue @ 0x1406171D4 (AlpcpRemoveMessageFromPendingQueue.c)
 *     AlpcpClearOwnerPortMessage @ 0x140617260 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpValidateMessage @ 0x1406173AC (AlpcpValidateMessage.c)
 *     AlpcpProbeAndCaptureMessageHeader @ 0x14061BE2C (AlpcpProbeAndCaptureMessageHeader.c)
 *     AlpcpSetOwnerPortMessage @ 0x1406371B0 (AlpcpSetOwnerPortMessage.c)
 *     AlpcpLookupMessage @ 0x140637990 (AlpcpLookupMessage.c)
 *     AlpcpCaptureMessageData @ 0x1406A54A8 (AlpcpCaptureMessageData.c)
 *     AlpcpValidateDataInformation @ 0x14084BDF8 (AlpcpValidateDataInformation.c)
 */

__int64 __fastcall AlpcpReplyLegacySynchronousRequest(__int64 *a1, __int128 *a2, char a3)
{
  __int128 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  int v6; // ebx
  ULONG_PTR v7; // rsi
  int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r13
  _QWORD *v11; // rbx
  signed __int64 *v12; // rsi
  bool v13; // bl
  _QWORD *v14; // rax
  unsigned __int64 v15; // rax
  size_t v16; // rdx
  ULONG_PTR v17; // rbx
  __int64 v18; // r13
  ULONG_PTR v19; // r14
  unsigned int v20; // ecx
  __int64 v21; // rbx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // r9
  signed __int32 v26[8]; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v27; // [rsp+30h] [rbp-68h]
  __int64 v28; // [rsp+38h] [rbp-60h]
  __int128 v29; // [rsp+48h] [rbp-50h] BYREF
  __int128 v30; // [rsp+58h] [rbp-40h]
  unsigned int v31; // [rsp+68h] [rbp-30h]
  int v32; // [rsp+6Ch] [rbp-2Ch]
  ULONG_PTR v34; // [rsp+B8h] [rbp+20h] BYREF

  v3 = a2;
  v4 = *a1;
  v28 = *a1;
  if ( a3 )
  {
    AlpcpProbeAndCaptureMessageHeader(a2, &v29, 0LL);
    LOBYTE(v5) = 1;
    v6 = AlpcpValidateMessage(&v29, v5);
    v27 = v6;
    if ( v6 < 0 )
      return (unsigned int)v6;
    if ( WORD3(v29) )
    {
      v6 = AlpcpValidateDataInformation(v3, &v29);
      v27 = v6;
      if ( v6 < 0 )
        return (unsigned int)v6;
    }
  }
  else
  {
    v29 = *a2;
    v30 = a2[1];
    v32 = HIDWORD(*((_QWORD *)a2 + 4));
    v31 = 0;
    LOBYTE(a2) = 1;
    v6 = AlpcpValidateMessage(&v29, a2);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  v6 = AlpcpLookupMessage(v4, DWORD2(v30), v31, &v34);
  v27 = v6;
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = v34;
  v8 = *(_DWORD *)(v34 + 40);
  if ( (v8 & 0x80u) != 0 )
  {
    AlpcpCancelMessage(v4, v34, 0x10000LL);
    return (unsigned int)-1073741769;
  }
  if ( (v8 & 0x200) != 0 || !*(_QWORD *)(v34 + 32) )
    goto LABEL_48;
  v9 = *(_QWORD *)(v34 + 16);
  if ( v9 != v4 )
  {
    if ( (v8 & 7) == 0 )
    {
      v10 = *(_QWORD *)(v34 + 24);
      if ( v10 )
      {
        v11 = *(_QWORD **)(v10 + 16);
        v12 = v11 - 2;
        ExAcquirePushLockSharedEx((ULONG_PTR)(v11 - 2), 0LL);
        if ( ((*(_DWORD *)(v10 + 416) >> 1) & 3) == 2 )
          v13 = *v11 == v4 || v11[1] == v4;
        else
          v13 = v11[2] == v4;
        if ( _InterlockedCompareExchange64(v12, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v12);
        KeAbPostRelease((ULONG_PTR)v12);
        v7 = v34;
        goto LABEL_30;
      }
LABEL_48:
      AlpcpUnlockMessage(v7);
      return (unsigned int)-1073741790;
    }
    if ( (*(_BYTE *)(v4 + 416) & 6) != 6 )
      goto LABEL_48;
    v14 = *(_QWORD **)(v4 + 16);
    if ( !v14 || *v14 != v9 )
      goto LABEL_48;
  }
  if ( (*(_DWORD *)(v34 + 40) & 7) != 3 || (v8 & 0x2000) != 0 )
    goto LABEL_48;
  v13 = 1;
LABEL_30:
  if ( !v13 )
    goto LABEL_48;
  v15 = AlpcpAvailableBufferSize(v7);
  if ( v16 > v15 )
  {
    v6 = AlpcpCaptureMessageData(v7, v16, (char *)v3 + 40);
    v27 = v6;
  }
  else
  {
    memmove((void *)(v7 + 280), (char *)v3 + 40, v16);
    v6 = 0;
    v27 = 0;
  }
  if ( v6 >= 0 )
  {
    *(_DWORD *)(v7 + 40) |= 0x8000u;
    _InterlockedOr(v26, 0);
    v17 = v34;
    v18 = *(_QWORD *)(v34 + 24);
    AlpcpRemoveMessageFromPendingQueue(v34);
    *(_DWORD *)(v17 + 240) = v29;
    *(_WORD *)(v17 + 244) = 2;
    v19 = v34;
    *(_OWORD *)(v34 + 248) = *(_OWORD *)&KeGetCurrentThread()[1].CycleTime;
    *(_DWORD *)(v7 + 40) |= 0x200u;
    v20 = *(_DWORD *)(v7 + 40) & 0xFFFFFF87 | (4 * (*(_DWORD *)(v18 + 416) & 6));
    *(_DWORD *)(v7 + 40) = v20;
    if ( ((v20 >> 3) & 0xF) == 1 )
    {
      v21 = *(_QWORD *)(v18 + 16);
      ExAcquirePushLockSharedEx(v21 - 16, 0LL);
      v22 = *(_QWORD *)(v21 + 8);
      if ( v22 )
        *(_QWORD *)(v19 + 120) = *(_QWORD *)(v22 + 56);
      else
        *(_QWORD *)(v19 + 120) = 0LL;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v21 - 16), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v21 - 16));
      KeAbPostRelease(v21 - 16);
      v19 = v34;
    }
    else
    {
      *(_QWORD *)(v19 + 120) = *(_QWORD *)(v18 + 56);
    }
    v23 = *(_QWORD *)(v19 + 32);
    *(_QWORD *)(v19 + 32) = 0LL;
    --*(_WORD *)(v19 - 30);
    *(_DWORD *)(v7 + 40) = *(_DWORD *)(v7 + 40) & 0xFFFF7EF8 | 0x105;
    AlpcpClearOwnerPortMessage(v19);
    AlpcpSetOwnerPortMessage(v19, v4);
    AlpcpUnlockMessage(v19);
    if ( (a1[6] & 4) != 0 )
      a1[3] = v23;
    else
      KeReleaseSemaphoreEx(v23 + 1608, 1LL, 1, v24, 2);
    return v27;
  }
  else
  {
    AlpcpUnlockMessage(v7);
  }
  return (unsigned int)v6;
}
