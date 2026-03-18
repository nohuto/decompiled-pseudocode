/*
 * XREFs of DxgNotifyDpcCB @ 0x1C0013CC0
 * Callers:
 *     <none>
 * Callees:
 *     DpSynchronizeExecution @ 0x1C0013DF0 (DpSynchronizeExecution.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0040180 (-NotifyDpc@DXGDODPRESENT@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z @ 0x1C0045358 (-AllocateNewChunks@MIRACAST_CHUNK_LIST@@QEAAEK@Z.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C004573C (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 *     DpiMiracastStopMiracastSessionAsync @ 0x1C0046580 (DpiMiracastStopMiracastSessionAsync.c)
 */

void __fastcall DxgNotifyDpcCB(__int64 a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 v3; // rax
  struct DXGADAPTER *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // rax
  struct MIRACAST_CHUNK *v12; // rax
  struct _KEVENT *v13; // rcx
  __int64 v14; // rax
  _QWORD v15[2]; // [rsp+30h] [rbp-19h] BYREF
  __int64 v16; // [rsp+40h] [rbp-9h] BYREF
  __int64 v17; // [rsp+48h] [rbp-1h]
  __int64 v18; // [rsp+50h] [rbp+7h]
  _QWORD v19[2]; // [rsp+58h] [rbp+Fh] BYREF
  int v20; // [rsp+68h] [rbp+1Fh]
  int v21; // [rsp+6Ch] [rbp+23h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp+27h] BYREF
  char v23; // [rsp+B0h] [rbp+67h] BYREF

  if ( KeGetCurrentIrql() != 2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(a1);
    *(_QWORD *)(v8 + 24) = 81LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v2 = *(volatile signed __int32 **)(a1 + 64);
  if ( (_InterlockedCompareExchange(v2 + 956, 0, 0) & 1) != 0 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    if ( v3 && *(_DWORD *)(v3 + 16) == 1953656900 && *(_DWORD *)(v3 + 20) == 2 )
    {
      v4 = *(struct DXGADAPTER **)(v3 + 3792);
      if ( v4 )
      {
        v5 = *((_QWORD *)v4 + 316);
        if ( v5 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v5 + 520) + 8LL) + 16LL))(a1);
        }
        else
        {
          v2 = *(volatile signed __int32 **)(*((_QWORD *)v4 + 315) + 264LL);
          if ( v2 )
            DXGDODPRESENT::NotifyDpc((DXGDODPRESENT *)v2, v4);
        }
      }
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v2);
      *(_QWORD *)(v9 + 24) = a1;
      WdLogEvent5_WdError(v9);
    }
  }
  v6 = *(_QWORD *)(a1 + 64);
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( v6 && *(_DWORD *)(v6 + 16) == 1953656900 && *(_DWORD *)(v6 + 20) == 2 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C008EB30, &LockHandle);
    v7 = *(_QWORD *)(v6 + 3160);
    if ( v7 )
    {
      v16 = v6;
      v17 = *(_QWORD *)(v7 + 488);
      DpSynchronizeExecution(
        a1,
        (unsigned int)MiracastProcessPendingDPCChunks,
        (unsigned int)&v16,
        *(_DWORD *)(v6 + 3804),
        (__int64)&v23);
      if ( BYTE1(v18) )
      {
        DpiMiracastStopMiracastSessionAsync((PVOID)v7);
      }
      else
      {
        if ( (_BYTE)v18 )
          *(_BYTE *)(v7 + 588) = 1;
        if ( HIDWORD(v18) < 0x14 && *(_DWORD *)(v6 + 3180) + 5 < 40 )
        {
          v21 = *(_DWORD *)(v6 + 3144);
          v20 = 0;
          v19[1] = v19;
          v19[0] = v19;
          if ( MIRACAST_CHUNK_LIST::AllocateNewChunks((MIRACAST_CHUNK_LIST *)v19, 5u) )
          {
            v10 = *(_DWORD *)(v6 + 3804);
            v15[0] = v19;
            v15[1] = *(_QWORD *)(v6 + 3184);
            DpSynchronizeExecution(a1, (unsigned int)DpiMiracastMoveChunkList, (unsigned int)v15, v10, (__int64)&v23);
            *(_DWORD *)(v6 + 3180) += 5;
          }
          else
          {
            v11 = WdLogNewEntry5_WdLowResource();
            *(_QWORD *)(v11 + 24) = -1073741801LL;
            WdLogEvent5_WdLowResource(v11);
          }
          while ( 1 )
          {
            v12 = MIRACAST_CHUNK_LIST::RemoveHead((MIRACAST_CHUNK_LIST *)v19);
            if ( !v12 )
              break;
            ExFreePoolWithTag(v12, 0);
          }
        }
        if ( BYTE2(v18) || (_BYTE)v18 )
        {
          v13 = *(struct _KEVENT **)(v7 + 496);
          if ( v13 )
            KeSetEvent(v13, 1, 0);
        }
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v14 + 24) = v6;
    *(_QWORD *)(v14 + 32) = -1073741585LL;
    WdLogEvent5_WdError(v14);
  }
}
