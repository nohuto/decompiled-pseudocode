/*
 * XREFs of VidSchCreatePeriodicFrameNotification @ 0x1C00326B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018980 (memset.c)
 *     McTemplateK0q @ 0x1C0026600 (McTemplateK0q.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C0031950 (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     McTemplateK0pqxxqpp @ 0x1C003238C (McTemplateK0pqxxqpp.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0032B20 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncAdapter @ 0x1C007DFC0 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncAvailable @ 0x1C00CB470 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchCreatePeriodicFrameNotification(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 v9; // r15
  __int64 v10; // r8
  _QWORD *PoolWithTag; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rdi
  __int64 v14; // rax
  int v15; // ebx
  __int64 v16; // rdx
  PVOID v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // ecx
  int v25; // eax
  const GUID *v26; // r8
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  const GUID *v31; // r8
  __int64 v32; // rbx
  __int64 Timer; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-29h] BYREF
  _QWORD v40[11]; // [rsp+68h] [rbp-11h] BYREF

  v7 = a4;
  memset(v40, 0, 0x28uLL);
  v9 = *(_QWORD *)(a1 + 8 * v7 + 2576);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int8)VidSchIsVSyncAvailable(a1, (unsigned int)v7) )
  {
    LOBYTE(v10) = 1;
    if ( (int)VidSchControlVSyncAdapter(a1, 3LL, v10) >= 0 )
    {
      PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 0x48uLL, 0x62616956u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
      {
        _InterlockedIncrement(&dword_1C004E708);
        v14 = WdLogNewEntry5_WdLowResource(v12);
        *(_QWORD *)(v14 + 24) = 12714LL;
        WdLogEvent5_WdLowResource(v14);
        v15 = -1073741801;
        VidSchControlVSyncAdapter(a1, 3LL, 0LL);
LABEL_34:
        *a6 = 0LL;
        return (unsigned int)v15;
      }
      memset(PoolWithTag, 0, 0x48uLL);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1648), &LockHandle);
      *((_BYTE *)v13 + 25) = *(_BYTE *)(v9 + 70576) + 1;
      v16 = *(_QWORD *)(v9 + 66448);
      if ( v16 )
      {
        v20 = 0LL;
        while ( *(_QWORD *)(v16 + 8 * v20) )
        {
          v20 = (unsigned int)(v20 + 1);
          if ( (unsigned int)v20 >= 8 )
          {
            _InterlockedIncrement(&dword_1C004E708);
            v19 = WdLogNewEntry5_WdLowResource(v20);
            *(_QWORD *)(v19 + 24) = 12760LL;
            goto LABEL_15;
          }
        }
      }
      else
      {
        v17 = ExAllocatePoolWithTag((POOL_TYPE)512, 0x40uLL, 0x62616956u);
        *(_QWORD *)(v9 + 66448) = v17;
        if ( !v17 )
        {
          _InterlockedIncrement(&dword_1C004E708);
          v19 = WdLogNewEntry5_WdLowResource(v18);
          *(_QWORD *)(v19 + 24) = 12734LL;
LABEL_15:
          WdLogEvent5_WdLowResource(v19);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          VidSchControlVSyncAdapter(a1, 3LL, 0LL);
          ExFreePoolWithTag(v13, 0x62616956u);
          v15 = -1073741801;
          goto LABEL_34;
        }
        memset(v17, 0, 0x40uLL);
        LOBYTE(v20) = 0;
      }
      *((_BYTE *)v13 + 24) = v20;
      *(_QWORD *)(*(_QWORD *)(v9 + 66448) + 8LL * (unsigned __int8)*((_DWORD *)v13 + 6)) = v13;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 32));
      *v13 = a2;
      v13[8] = *(_QWORD *)(a1 + 16);
      v13[2] = *(_QWORD *)(a5 + 16);
      v13[6] = a3;
      *((_DWORD *)v13 + 2) = v7;
      if ( *(_DWORD *)(a1 + 216) == 1 )
      {
        v15 = -1073741822;
      }
      else
      {
        v23 = *(_QWORD *)(a1 + 16);
        v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v23 + 2552) + 112LL) + 3968 * v7 + 1068);
        v40[2] = *(_QWORD *)(a5 + 16);
        LODWORD(v40[1]) = v24;
        LODWORD(v40[3]) = *((_DWORD *)v13 + 6);
        v25 = ((__int64 (__fastcall *)(_QWORD, _QWORD *))DxgCoreInterface[65])(*(_QWORD *)(v23 + 2552), v40);
        v15 = v25;
        if ( v25 >= 0 )
        {
          v22 = v40[4];
          v13[4] = v40[4];
          goto LABEL_30;
        }
        if ( (unsigned int)(v25 + 0x3FFFFFFF) > 1 )
        {
LABEL_30:
          *a6 = v13;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
            McTemplateK0pqxxqpp(
              v22,
              &EventCreatePeriodicFrameNotification,
              v26,
              *v13,
              *((_DWORD *)v13 + 2),
              v13[2],
              v13[6],
              *((_DWORD *)v13 + 6),
              v13[4],
              v13[5],
              LockHandle.LockQueue.Next,
              LockHandle.LockQueue.Lock,
              *(_QWORD *)&LockHandle.OldIrql);
          if ( v15 >= 0 )
            return (unsigned int)v15;
          goto LABEL_33;
        }
      }
      v27 = *(_DWORD *)(a1 + 216);
      if ( v27 == 2 )
      {
        v28 = WdLogNewEntry5_WdWarning(v22, v21);
        *(_QWORD *)(v28 + 24) = v15;
        WdLogEvent5_WdWarning(v28);
        v15 = -1073741822;
LABEL_33:
        VidSchDestroyPeriodicFrameNotification(*(PVOID *)(*(_QWORD *)(v9 + 66448)
                                                        + 8LL * (unsigned __int8)*((_DWORD *)v13 + 6)));
        goto LABEL_34;
      }
      if ( v27 != 1 )
      {
        v29 = WdLogNewEntry5_WdWarning(v22, v21);
        *(_QWORD *)(v29 + 24) = v15;
        WdLogEvent5_WdWarning(v29);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v30, &EventPerformanceWarning, v31, 25);
        }
      }
      v32 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(*(_QWORD *)(v9 + 33192), v13[6], v13[2], -1);
      Timer = ExAllocateTimer(VidSchPeriodicMonitoredFenceTimerCallback, v13, 4LL);
      v13[5] = Timer;
      if ( !Timer )
      {
        v36 = WdLogNewEntry5_WdAssertion(v35, v34);
        WdLogEvent5_WdAssertion(v36);
        v15 = -1073741801;
        goto LABEL_33;
      }
      v37 = 0LL;
      if ( v32 <= 0 )
        v37 = v32;
      ExSetTimer(Timer, v37, 0LL, 0LL);
      v15 = 0;
      goto LABEL_30;
    }
  }
  return 3223191558LL;
}
