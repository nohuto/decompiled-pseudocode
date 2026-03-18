/*
 * XREFs of DxgNotifyDpcCB @ 0x1C0013910
 * Callers:
 *     <none>
 * Callees:
 *     DpSynchronizeExecution @ 0x1C0013A40 (DpSynchronizeExecution.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0046DD0 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C004BE20 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C004C1FC (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C004D050 (DpiMiracastStopMiracastSessionAsync.c)
 */

void __fastcall DxgNotifyDpcCB(__int64 a1, struct DXGADAPTER *a2, __int64 a3)
{
  volatile signed __int32 *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r9d
  __int64 v16; // rax
  struct MIRACAST_CHUNK *v17; // rax
  struct _KEVENT *v18; // rcx
  __int64 v19; // rax
  _QWORD v20[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v21; // [rsp+40h] [rbp-9h] BYREF
  __int64 v22; // [rsp+48h] [rbp-1h]
  __int64 v23; // [rsp+50h] [rbp+7h]
  _QWORD v24[2]; // [rsp+58h] [rbp+Fh] BYREF
  int v25; // [rsp+68h] [rbp+1Fh]
  int v26; // [rsp+6Ch] [rbp+23h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+27h] BYREF
  char v28; // [rsp+B0h] [rbp+67h] BYREF

  if ( KeGetCurrentIrql() != 2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v9 + 24) = 81LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v4 = *(volatile signed __int32 **)(a1 + 64);
  if ( (_InterlockedCompareExchange(v4 + 982, 0, 0) & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( v5 && *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 2 )
    {
      a2 = *(struct DXGADAPTER **)(v5 + 3896);
      if ( a2 )
      {
        v6 = *((_QWORD *)a2 + 320);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v6 + 520) + 8LL) + 16LL))(a1);
        }
        else
        {
          v4 = *(volatile signed __int32 **)(*((_QWORD *)a2 + 319) + 368LL);
          if ( v4 )
            DXGDODPRESENT::NotifyDpc((DXGDODPRESENT *)v4, a2);
        }
      }
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v4, a2, a3);
      *(_QWORD *)(v10 + 24) = a1;
      WdLogEvent5_WdError(v10);
    }
  }
  v7 = *(_QWORD *)(a1 + 64);
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( v7 && *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v8 = *(_QWORD *)(v7 + 3232);
    if ( v8 )
    {
      v21 = v7;
      v22 = *(_QWORD *)(v8 + 488);
      DpSynchronizeExecution(
        a1,
        (unsigned int)MiracastProcessPendingDPCChunks,
        (unsigned int)&v21,
        *(_DWORD *)(v7 + 3908),
        (__int64)&v28);
      if ( BYTE1(v23) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v8);
      }
      else
      {
        if ( (_BYTE)v23 )
          *(_BYTE *)(v8 + 588) = 1;
        if ( HIDWORD(v23) < 0x14 && *(_DWORD *)(v7 + 3252) + 5 < 40 )
        {
          v26 = *(_DWORD *)(v7 + 3216);
          v25 = 0;
          v24[1] = v24;
          v24[0] = v24;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v24, 5u) )
          {
            v15 = *(_DWORD *)(v7 + 3908);
            v20[0] = v24;
            v20[1] = *(_QWORD *)(v7 + 3256);
            DpSynchronizeExecution(a1, (unsigned int)DpiMiracastMoveChunkList, (unsigned int)v20, v15, (__int64)&v28);
            *(_DWORD *)(v7 + 3252) += 5;
          }
          else
          {
            v16 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
            *(_QWORD *)(v16 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v16);
          }
          while ( 1 )
          {
            v17 = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v24);
            if ( !v17 )
              break;
            ExFreePoolWithTag(v17, 0);
          }
        }
        if ( BYTE2(v23) || (_BYTE)v23 )
        {
          v18 = *(struct _KEVENT **)(v8 + 496);
          if ( v18 )
            KeSetEvent(v18, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v4, a2, a3);
    *(_QWORD *)(v19 + 24) = v7;
    *(_QWORD *)(v19 + 32) = -1073741585LL;
    WdLogEvent5_WdError(v19);
  }
}
