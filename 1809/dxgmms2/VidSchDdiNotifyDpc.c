/*
 * XREFs of VidSchDdiNotifyDpc @ 0x1C00033B0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0005960 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcVSyncCookie @ 0x1C000AEB0 (VidSchiProcessDpcVSyncCookie.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C0012BF0 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiProcessDpcSystemRequest @ 0x1C001306C (VidSchiProcessDpcSystemRequest.c)
 *     McTemplateK0q @ 0x1C0019440 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     ?ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z @ 0x1C0025974 (-ApertureCorruptionCheck@VIDMM_GLOBAL@@QEAAJE@Z.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002EA14 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00337B8 (-VidSchiAsyncReCreateSchedulingLog@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C0037E50 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0037EB0 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0038778 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0038814 (VidSchiProcessSuspendContextCompletedDpc.c)
 */

__int64 __fastcall VidSchDdiNotifyDpc(__int64 a1)
{
  __int64 DxgAdapter; // rax
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // r14
  union _SLIST_HEADER *v6; // rbp
  PSLIST_ENTRY v7; // rax
  _QWORD *v8; // rbx
  _QWORD *p_Next; // rcx
  _QWORD *v10; // r15
  int v11; // edx
  unsigned int v12; // ecx
  struct _SLIST_ENTRY *v13; // rsi
  signed __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // r12
  int v18; // ecx
  struct _SLIST_ENTRY **v19; // rax
  __int64 result; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  void (__fastcall *v23)(KSPIN_LOCK); // rax
  void (__fastcall *v24)(KSPIN_LOCK); // rax
  struct _SLIST_ENTRY *Next; // rdi
  int v26; // [rsp+20h] [rbp-88h] BYREF
  __int64 v27; // [rsp+28h] [rbp-80h]
  char v28; // [rsp+30h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE v29; // [rsp+38h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v30; // [rsp+50h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-40h] BYREF
  KSPIN_LOCK *v32; // [rsp+B8h] [rbp+10h]

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C004D010 & 2) != 0 )
  {
    v28 = 1;
    v26 = 5043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(a1, &EventProfilerEnter);
  }
  else
  {
    v28 = 0;
  }
  DxgCoreInterface[73]((__int64)&v26, 5043LL);
  if ( (DpiGetSchedulerCallbackState(a1) & 1) != 0 )
  {
    DxgAdapter = DpiGetDxgAdapter(a1);
    v3 = DxgAdapter;
    v4 = DxgAdapter ? *(_QWORD *)(*(_QWORD *)(DxgAdapter + 2528) + 528LL) : 0LL;
    if ( v4 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v4 + 1672), &LockHandle);
      v5 = *(_QWORD *)(v3 + 2528);
      v6 = *(union _SLIST_HEADER **)(v5 + 528);
      v7 = ExpInterlockedFlushSList(v6 + 106);
      v8 = 0LL;
      if ( v7 )
      {
        do
        {
          p_Next = &v7->Next;
          v10 = v8;
          v7 = v7->Next;
          *p_Next = v8;
          v8 = p_Next;
        }
        while ( v7 );
        v11 = 1160;
        while ( 1 )
        {
          v12 = *((_DWORD *)v8 - 4);
          v13 = (struct _SLIST_ENTRY *)(v8 - 2);
          v8 = v10;
          if ( ((v12 - 1) & 0xFFFFFFF6) == 0 && v12 != 10 )
          {
            v14 = (signed __int64)&v13[-1];
            _InterlockedExchange((volatile __int32 *)&v13[2].Next[6].Next[30], 1);
            if ( (VIDMM_GLOBAL::_Config & 0x10) != 0 )
              VIDMM_GLOBAL::ApertureCorruptionCheck(*(VIDMM_GLOBAL **)(v5 + 552), 1u);
            v15 = *(_QWORD *)(v14 + 48);
            v16 = *(_QWORD *)(v15 + 96);
            v17 = *(unsigned int *)(v16 + 1408);
            v32 = *(KSPIN_LOCK **)(*(_QWORD *)(v15 + 104) + 32LL);
            if ( v14 != _InterlockedCompareExchange64((volatile signed __int64 *)(8 * v17 + v16 + 1416), 0LL, v14) )
            {
              v22 = WdLogNewEntry5_WdAssertion(8 * v17, 0LL);
              *(_QWORD *)(v22 + 24) = v32;
              *(_QWORD *)(v22 + 32) = v14;
              WdLogEvent5_WdAssertion(v22);
            }
            _InterlockedExchange((volatile __int32 *)(v16 + 1408), ((_BYTE)v17 + 1) & 0xF);
            *(_DWORD *)(v16 + 496) = ((unsigned __int8)*(_DWORD *)(v16 + 496) + 1) & 0xF;
            KeAcquireInStackQueuedSpinLockAtDpcLevel(v32 + 206, &v29);
            v18 = *(_DWORD *)(v14 + 92);
            if ( (v18 & 0x400) != 0 )
            {
              v18 &= ~0x400u;
              *(_DWORD *)(v14 + 92) = v18;
              if ( *(_DWORD *)(v16 + 11192) != -1 )
              {
                v23 = (void (__fastcall *)(KSPIN_LOCK))v32[308];
                if ( v23 )
                {
                  v23(v32[312]);
                  v18 = *(_DWORD *)(v14 + 92);
                }
              }
            }
            if ( (v18 & 0x800) != 0 )
            {
              if ( *(_DWORD *)(v32[*(unsigned int *)(*(_QWORD *)(v14 + 56) + 396LL) + 322] + 33272) != -1 )
              {
                v24 = (void (__fastcall *)(KSPIN_LOCK))v32[306];
                if ( v24 )
                {
                  v24(v32[312]);
                  v18 = *(_DWORD *)(v14 + 92);
                }
              }
              *(_DWORD *)(v14 + 92) = v18 & 0xFFFFF7FF;
            }
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&v29);
            if ( *(_DWORD *)(v14 + 88) == 3 )
            {
              VidSchiProcessDpcSystemRequest(&v13[-1]);
            }
            else if ( *(_DWORD *)(v14 + 72) == 10 || *(_DWORD *)(v14 + 72) == 18 )
            {
              VidSchiProcessDpcCompletedPacket((struct _VIDSCH_DMA_PACKET *)&v13[-1]);
            }
            else if ( *(_DWORD *)(v14 + 72) == 11 )
            {
              VidSchiProcessDpcPreemptedPacket(&v13[-1]);
            }
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v16 + 24) + 1656LL), &v30);
            v19 = *(struct _SLIST_ENTRY ***)(v16 + 11208);
            if ( *v19 != (struct _SLIST_ENTRY *)(v16 + 11200) )
              __fastfail(3u);
            v13->Next = (struct _SLIST_ENTRY *)(v16 + 11200);
            *((_QWORD *)&v13->Next + 1) = v19;
            *v19 = v13;
            *(_QWORD *)(v16 + 11208) = v13;
            KeReleaseInStackQueuedSpinLock(&v30);
            goto LABEL_23;
          }
          if ( v12 == 11 )
            break;
          switch ( v12 )
          {
            case 0xFu:
              Next = v13[2].Next;
              ExpInterlockedPushEntrySList((PSLIST_HEADER)&Next[373], v13);
              if ( bTracingEnabled )
                VidSchiAsyncReCreateSchedulingLog((struct _VIDSCH_NODE *)Next);
              goto LABEL_23;
            case 0x10u:
              VidSchiProcessGpuEngineTimeoutDpc(v13);
              goto LABEL_23;
            case 0xCu:
              VidSchiProcessHwQueuePageFaultedDpc(v13);
              goto LABEL_23;
            case 0x11u:
              VidSchiProcessSuspendContextCompletedDpc(v13);
              goto LABEL_23;
          }
          if ( v12 <= 0xA && _bittest(&v11, v12) )
          {
            VidSchiProcessDpcVSyncCookie((struct _VIDSCH_VSYNC_COOKIE *)&v13[-1]);
            ExpInterlockedPushEntrySList(
              (PSLIST_HEADER)(*(&v6[161].Alignment + *((unsigned int *)&v13[4].Next + 2)) + 33632),
              v13);
LABEL_23:
            v11 = 1160;
            goto LABEL_24;
          }
          if ( v12 == 14 )
          {
            VidSchiProcessPeriodicNotificationCookie(v6, &v13[-1]);
            goto LABEL_23;
          }
LABEL_24:
          if ( !v10 )
            goto LABEL_25;
          v10 = (_QWORD *)*v10;
        }
        VidSchiProcessMonitoredFenceSignaledDpc(v13);
        goto LABEL_23;
      }
LABEL_25:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    }
  }
  result = ((__int64 (__fastcall *)(int *))DxgCoreInterface[74])(&v26);
  if ( v28 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      return McTemplateK0q(v21, &EventProfilerExit);
  }
  return result;
}
