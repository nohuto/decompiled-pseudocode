/*
 * XREFs of VidSchiSubmitCommandPacketToQueue @ 0x1C0005810
 * Callers:
 *     VidSchWaitForSingleSyncObject @ 0x1C0003E70 (VidSchWaitForSingleSyncObject.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C0078D90 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     VidSchSubmitCommand @ 0x1C0079B40 (VidSchSubmitCommand.c)
 *     VidSchSubmitGlobalCommand @ 0x1C007CC6C (VidSchSubmitGlobalCommand.c)
 *     VidSchEnqueueCpuEvent @ 0x1C00CAD40 (VidSchEnqueueCpuEvent.c)
 *     VidSchFlushPendingCommand @ 0x1C00CB450 (VidSchFlushPendingCommand.c)
 * Callees:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0005BE0 (VidSchiInsertCommandToSoftwareQueue.c)
 *     VidSchiProfilePerformanceTick @ 0x1C0008AF0 (VidSchiProfilePerformanceTick.c)
 *     ?EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z @ 0x1C007A200 (-EnsureSchedulable@VIDMM_DEVICE@@QEAAX_N@Z.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1C007A450 (VidSchiEnsureVSyncEnabled.c)
 */

void __fastcall VidSchiSubmitCommandPacketToQueue(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v3; // r14
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbx
  int v7; // r9d
  __int64 v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v10; // r15
  int v11; // edi
  __int64 v12; // rax
  VIDMM_DEVICE *v13; // rcx
  int v14; // eax
  __int64 v15; // r12
  __int64 v16; // rax
  KPRIORITY v17; // r12d
  int v18; // ecx
  unsigned int v19; // eax
  KSPIN_LOCK *SpinLock; // [rsp+48h] [rbp-19h]
  struct _KLOCK_QUEUE_HANDLE v22; // [rsp+50h] [rbp-11h] BYREF
  __int16 v23; // [rsp+68h] [rbp+7h]
  __int64 v24; // [rsp+70h] [rbp+Fh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp+17h] BYREF
  __int64 v26; // [rsp+90h] [rbp+2Fh]
  int v27; // [rsp+C8h] [rbp+67h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  v3 = *(_QWORD **)(v1 + 104);
  v4 = *(_QWORD *)(v1 + 96);
  v5 = *(_QWORD *)(v4 + 24);
  VidSchiEnsureVSyncEnabled(a1, v3);
  LOWORD(v26) = 0;
  v24 = v5 + 1648;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1648), &LockHandle);
  LOBYTE(v26) = 1;
  *(_QWORD *)(a1 + 112) = (*(_QWORD *)(v1 + 144))++;
  v6 = MEMORY[0xFFFFF78000000320];
  v3[24] = v6 * KeQueryTimeIncrement();
  if ( !*(_DWORD *)(a1 + 48) )
  {
    *(_QWORD *)(v1 + 176) = *(_QWORD *)(a1 + 112);
    ++v3[162];
  }
  VidSchiProfilePerformanceTick(4, v5, v4, v7, 0LL, a1, 0LL, 0LL);
  v27 = 0;
  VidSchiInsertCommandToSoftwareQueue(a1, &v27);
  if ( (_BYTE)v26 )
  {
    if ( BYTE1(v26) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    LOBYTE(v26) = 0;
  }
  v8 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
  if ( (*(_DWORD *)(v8 + 1936) & 0x20) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread == *(struct _KTHREAD **)(v8 + 152) || CurrentThread == *(struct _KTHREAD **)(v8 + 160) )
    {
      v10 = 1;
      if ( *(_DWORD *)(v1 + 772) )
        goto LABEL_12;
      v11 = 16;
    }
    else
    {
      v10 = 0;
      if ( KeQueryPriorityThread(KeGetCurrentThread()) + 1 >= 31 )
      {
        v11 = 31;
      }
      else
      {
        v11 = KeQueryPriorityThread(KeGetCurrentThread()) + 1;
        if ( v11 <= 16 )
          goto LABEL_12;
      }
    }
    v23 = 0;
    SpinLock = (KSPIN_LOCK *)(v8 + 1864);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 1864), &v22);
    while ( 1 )
    {
      v14 = *(_DWORD *)(v1 + 772);
      LOBYTE(v23) = 1;
      if ( v10 )
      {
        if ( v14 )
          goto LABEL_25;
      }
      else if ( !v14 )
      {
        goto LABEL_25;
      }
      v15 = *(_QWORD *)(*(_QWORD *)(v1 + 96) + 24LL);
      v16 = *(int *)(v1 + 392);
      if ( (_DWORD)v16 != v11 )
      {
        v18 = 0;
        if ( (int)v16 > 16 && (*(_DWORD *)(v15 + 4 * v16 + 1808))-- == 1 )
        {
          v18 = 1;
          *(_DWORD *)(v15 + 1872) &= ~(1 << *(_DWORD *)(v1 + 392));
        }
        if ( v11 > 16 && ++*(_DWORD *)(v15 + 4LL * v11 + 1808) == 1 )
        {
          v18 = 1;
          *(_DWORD *)(v15 + 1872) |= 1 << v11;
        }
        *(_DWORD *)(v1 + 392) = v11;
        if ( v18 )
        {
          v19 = *(_DWORD *)(v15 + 1872);
          if ( v19 )
            *(_DWORD *)(v15 + 204) = RtlFindMostSignificantBit(v19);
          else
            *(_DWORD *)(v15 + 204) = 16;
        }
      }
      v17 = *(_DWORD *)(v15 + 204);
      if ( v17 == KeQueryPriorityThread(*(PKTHREAD *)(v8 + 152)) )
        break;
      if ( (_BYTE)v23 )
      {
        if ( HIBYTE(v23) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
        else
          KeReleaseInStackQueuedSpinLock(&v22);
        LOBYTE(v23) = 0;
      }
      KeSetPriorityThread(*(PKTHREAD *)(v8 + 152), v17);
      if ( HIBYTE(v23) )
        KeAcquireInStackQueuedSpinLockAtDpcLevel(SpinLock, &v22);
      else
        KeAcquireInStackQueuedSpinLock(SpinLock, &v22);
    }
    if ( !(_BYTE)v23 )
      goto LABEL_12;
LABEL_25:
    if ( HIBYTE(v23) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v22);
    else
      KeReleaseInStackQueuedSpinLock(&v22);
  }
LABEL_12:
  if ( v27 )
  {
    *(_QWORD *)(v5 + 1144) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v5 + 1112), 0, 0);
  }
  v12 = v3[1];
  if ( v12 )
  {
    v13 = *(VIDMM_DEVICE **)(v12 + 648);
    if ( v13 )
      VIDMM_DEVICE::EnsureSchedulable(v13, 1);
  }
  if ( (_BYTE)v26 )
  {
    if ( BYTE1(v26) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    else
      KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
