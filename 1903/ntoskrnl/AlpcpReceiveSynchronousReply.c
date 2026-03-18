/*
 * XREFs of AlpcpReceiveSynchronousReply @ 0x1405E1020
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1405E0800 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpProcessConnectionRequest @ 0x1406454D8 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveLegacyConnectionReply @ 0x1406CCF2C (AlpcpReceiveLegacyConnectionReply.c)
 * Callees:
 *     AlpcpSignalAndWait @ 0x14000CB90 (AlpcpSignalAndWait.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     AlpcpWaitForSingleObject @ 0x140121C78 (AlpcpWaitForSingleObject.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     AlpcpUnlockMessage @ 0x1405E4A40 (AlpcpUnlockMessage.c)
 *     AlpcpInsertMessagePendingQueue @ 0x14064514C (AlpcpInsertMessagePendingQueue.c)
 *     AlpcpCancelMessage @ 0x1406476D0 (AlpcpCancelMessage.c)
 *     AlpcpLogReceiveMessage @ 0x140886E78 (AlpcpLogReceiveMessage.c)
 */

__int64 __fastcall AlpcpReceiveSynchronousReply(
        __int64 *a1,
        KPROCESSOR_MODE a2,
        ULONG_PTR *a3,
        int a4,
        PLARGE_INTEGER a5)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // r13
  unsigned int v9; // edi
  ULONG_PTR v10; // rbx
  signed __int64 BugCheckParameter4; // rax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // ecx
  volatile signed __int64 *v18; // rbp
  int v19; // ecx

  CurrentThread = KeGetCurrentThread();
  v8 = *a1;
  v9 = AlpcpSignalAndWait((__int64)a1, &CurrentThread[1].KernelStack, WrLpcReply, a2, a5, 1);
  v10 = _InterlockedExchange64((volatile __int64 *)&CurrentThread[1].Teb, 0LL);
  if ( v10 )
  {
    ExAcquirePushLockExclusiveEx(v10 - 16, 0LL);
    *(_BYTE *)(v10 - 32) |= 1u;
    BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 - 24), 0x10000uLL) + 0x10000;
    if ( BugCheckParameter4 <= 0 )
      KeBugCheckEx(0x18u, 0LL, v10, 0x26uLL, BugCheckParameter4);
    v12 = *(_DWORD *)(v10 + 40);
    if ( (v12 & 0x800) != 0 )
      *(_DWORD *)(v10 + 40) = v12 & 0xFFFFF7FF;
    --*(_WORD *)(v10 - 30);
    if ( v9 )
    {
      if ( *(struct _KTHREAD **)(v10 + 32) == CurrentThread )
      {
        *(_QWORD *)(v10 + 32) = 0LL;
        --*(_WORD *)(v10 - 30);
        if ( (*(_DWORD *)(v10 + 40) & 0x80u) != 0 )
          AlpcpUnlockMessage(v10);
        else
          AlpcpCancelMessage(v8, v10, 0LL);
        return v9;
      }
      AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
      v9 = 0;
    }
    v13 = *(_DWORD *)(v10 + 40);
    if ( (v13 & 0x80u) != 0 )
    {
      AlpcpUnlockMessage(v10);
      return 3221227265LL;
    }
    else
    {
      if ( (v13 & 0x200) != 0 )
      {
        v14 = 0;
        if ( *(_QWORD *)(v10 + 136) )
          v14 = 0x80000000;
        v15 = v14 | 0x40000000;
        if ( !*(_QWORD *)(v10 + 144) )
          v15 = v14;
        v16 = v15 | 0x10000000;
        if ( !*(_QWORD *)(v10 + 152) )
          v16 = v15;
        if ( (v16 & a4) == 0 )
        {
          *(_WORD *)(v10 + 244) &= ~0x2000u;
LABEL_16:
          if ( AlpcpLogEnabled )
            AlpcpLogReceiveMessage(v10);
          *a3 = v10;
          return v9;
        }
      }
      v18 = (volatile signed __int64 *)(v8 + 352);
      *(_WORD *)(v10 + 244) |= 0x2000u;
      ExAcquirePushLockSharedEx(v8 + 352, 0LL);
      v19 = *(_DWORD *)(v8 + 416);
      if ( (v19 & 0x40) == 0 )
      {
        if ( (*(_DWORD *)(v8 + 256) & 0x1000) == 0 || (v19 & 0x20) == 0 || !*(_QWORD *)(v10 + 32) )
        {
          ++*(_WORD *)(v10 - 30);
          AlpcpInsertMessagePendingQueue(v8, v10);
        }
        if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
        KeAbPostRelease(v8 + 352);
        goto LABEL_16;
      }
      if ( _InterlockedCompareExchange64(v18, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v8 + 352));
      KeAbPostRelease(v8 + 352);
      AlpcpCancelMessage(v8, v10, 0LL);
      return 3221227264LL;
    }
  }
  else
  {
    if ( v9 )
      AlpcpWaitForSingleObject(&CurrentThread[1].KernelStack, WrLpcReply, 0, 0, 0LL);
    return 3221227265LL;
  }
}
