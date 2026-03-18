/*
 * XREFs of VidSchiCompletePendingCommandInNodeHwQueue @ 0x1C0039794
 * Callers:
 *     VidSchiSendToExecutionQueue @ 0x1C0005150 (VidSchiSendToExecutionQueue.c)
 *     VidSchiResetEngine @ 0x1C002F188 (VidSchiResetEngine.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003957C (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1C0007960 (VidSchiProfilePerformanceTick.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002D5AC (VidSchDdiNotifyDpcWorker.c)
 *     VidSchWaitForCompletionEvent @ 0x1C0066B38 (VidSchWaitForCompletionEvent.c)
 */

void __fastcall VidSchiCompletePendingCommandInNodeHwQueue(__int64 a1, int a2, char a3)
{
  __int64 v4; // rsi
  int v6; // eax
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rcx
  _DWORD v20[20]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v21[2]; // [rsp+98h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-60h] BYREF
  _DWORD v23[40]; // [rsp+C8h] [rbp-40h] BYREF
  char v24; // [rsp+178h] [rbp+70h] BYREF

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)(a1 + 2856) )
  {
    if ( a3 && *(_DWORD *)(a1 + 2856) > 1u )
    {
      memset(v23, 0, sizeof(v23));
      v6 = *(unsigned __int16 *)(a1 + 4);
      v23[4] = 0;
      v23[8] |= 0x40u;
      v23[12] = v6;
      v23[5] = 1;
      *(_QWORD *)(a1 + 280) = MEMORY[0xFFFFF78000000320];
      KeResetEvent((PRKEVENT)(a1 + 240));
      while ( *(_DWORD *)(a1 + 2856) > 1u )
      {
        VidSchiProfilePerformanceTick(16LL, v4, 0LL, v7, 0LL, 0LL, 0LL, 0LL);
        VidSchWaitForCompletionEvent(v4, v23, 0xFFFFFFFFLL);
        VidSchiProfilePerformanceTick(17LL, v4, 0LL, v8, 0LL, 0LL, 0LL, 0LL);
      }
    }
    if ( *(_DWORD *)(a1 + 2856) )
    {
      v24 = 0;
      memset(v20, 0, sizeof(v20));
      v9 = *(unsigned __int16 *)(a1 + 4);
      v10 = *(_QWORD *)(a1 + 24) + 616LL;
      if ( *(_DWORD *)(a1 + 2864) )
      {
        v20[2] = *(_DWORD *)(a1 + 160);
        v20[0] = 2;
        v20[3] = a2;
        v11 = *(_QWORD *)v10;
        if ( (unsigned int)v9 < *(_DWORD *)(v10 + 72) )
          v11 += 8 * v9;
        v20[4] = *(unsigned __int16 *)(*(_QWORD *)v11 + 8LL);
        v12 = *(_QWORD *)v10;
        if ( (unsigned int)v9 < *(_DWORD *)(v10 + 72) )
          v12 += 8 * v9;
        v13 = *(unsigned __int16 *)(*(_QWORD *)v12 + 6LL);
        v20[5] = v13;
        v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v13, v10);
        v14[3] = v20[3];
        v14[4] = v20[2];
        v14[5] = v20[4];
        v14[6] = v20[5];
      }
      else
      {
        v20[0] = 1;
        v20[2] = a2;
        v15 = *(_QWORD *)v10;
        if ( (unsigned int)v9 < *(_DWORD *)(v10 + 72) )
          v15 += 8 * v9;
        v20[3] = *(unsigned __int16 *)(*(_QWORD *)v15 + 8LL);
        v16 = *(_QWORD *)v10;
        if ( (unsigned int)v9 < *(_DWORD *)(v10 + 72) )
          v16 += 8 * v9;
        v17 = *(unsigned __int16 *)(*(_QWORD *)v16 + 6LL);
        v20[4] = v17;
        v14 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v10);
        v14[3] = v20[2];
        v14[4] = v20[3];
        v14[5] = v20[4];
      }
      WdLogEvent5_WdEvent(v14);
      v18 = *(unsigned int *)(v4 + 32);
      v19 = *(_QWORD *)(v4 + 24);
      v21[0] = *(_QWORD *)(v4 + 8);
      v21[1] = v20;
      DpSynchronizeExecution(v19, VidSchiCallNotifyInterruptAtISR, v21, v18, &v24);
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1672), &LockHandle);
  VidSchDdiNotifyDpcWorker(*(_QWORD *)(v4 + 8), 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
