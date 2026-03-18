/*
 * XREFs of DpiMiracastSendSyncUserModeRequest @ 0x1C02A55AC
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C004C510 (DpiMiracastInterfaceChange.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C004E698 (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C001D9D0 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     McTemplateK0pqtqq @ 0x1C00357F8 (McTemplateK0pqtqq.c)
 *     DxgkIsAdapterCoreSyncAcquired @ 0x1C01F69D4 (DxgkIsAdapterCoreSyncAcquired.c)
 */

__int64 __fastcall DpiMiracastSendSyncUserModeRequest(
        __int64 a1,
        ULONG a2,
        __int64 a3,
        __int64 a4,
        PVOID a5,
        ULONG a6,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rdi
  struct _FILE_OBJECT *v19; // rsi
  struct _DEVICE_OBJECT *v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  const GUID *v23; // r8
  __int64 v24; // rax
  PIRP v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  NTSTATUS v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // rcx
  const GUID *v37; // r8
  __int64 v38; // rax
  PVOID OutputBuffer; // [rsp+20h] [rbp-68h]
  __int64 OutputBufferLength; // [rsp+28h] [rbp-60h]
  __int64 InternalDeviceIoControl; // [rsp+30h] [rbp-58h]
  PKEVENT v42; // [rsp+38h] [rbp-50h]
  struct _KEVENT Event; // [rsp+50h] [rbp-38h] BYREF

  if ( IsMiniportListMutexOwnedByCurrentThread() || *(struct _KTHREAD **)(a1 + 88) == KeGetCurrentThread() )
  {
    v38 = WdLogNewEntry5_WdError(v10, v9, v11);
    LODWORD(v18) = -1073741790;
    *(_QWORD *)(v38 + 24) = -1073741790LL;
    WdLogEvent5_WdError(v38);
  }
  else
  {
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 32);
    *(_QWORD *)(a1 + 88) = KeGetCurrentThread();
    v12 = *(_QWORD *)(a1 + 432);
    if ( v12
      && ((v13 = *(_QWORD *)(v12 + 64), ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v13 + 168)))
       || DxgkIsAdapterCoreSyncAcquired(*(DXGADAPTER **)(v13 + 3896), 1LL, v16)) )
    {
      v17 = WdLogNewEntry5_WdError(v15, v14, v16);
      LODWORD(v18) = -1073741790;
      *(_QWORD *)(v17 + 24) = -1073741790LL;
      WdLogEvent5_WdError(v17);
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
    }
    else
    {
      v19 = *(struct _FILE_OBJECT **)(a1 + 176);
      v20 = *(struct _DEVICE_OBJECT **)(a1 + 184);
      if ( v19 )
        ObfReferenceObject(*(PVOID *)(a1 + 176));
      *(_QWORD *)(a1 + 88) = 0LL;
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 32);
      if ( !v19 )
      {
        v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
        *(_QWORD *)(v24 + 24) = a1;
        WdLogEvent5_WdWarning(v24);
        return 3221226166LL;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
        McTemplateK0pqtqq(v22, &EventEnterMiracastSendUserModeRequest, v23, *(_QWORD *)(a1 + 96), 1, 0, a6, 0);
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v26 = IoBuildDeviceIoControlRequest(a2, v20, 0LL, 0, a5, a6, 0, &Event, IoStatusBlock);
      if ( v26 )
      {
        v26->Tail.Overlay.CurrentStackLocation[-1].FileObject = v19;
        v26->IoStatus.Status = -1073741637;
        LODWORD(v18) = IofCallDriver(v20, v26);
        if ( (_DWORD)v18 == 259 )
        {
          v31 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
          v18 = v31;
          if ( v31 )
          {
            v35 = WdLogNewEntry5_WdError(v33, v32, v34);
            *(_QWORD *)(v35 + 24) = v18;
            WdLogEvent5_WdError(v35);
          }
          else
          {
            LODWORD(v18) = IoStatusBlock->Status;
          }
        }
      }
      else
      {
        LODWORD(v18) = -1073741801;
        v30 = WdLogNewEntry5_WdLowResource(v27, 0LL, v28, v29);
        *(_QWORD *)(v30 + 24) = -1073741801LL;
        WdLogEvent5_WdLowResource(v30);
      }
      ObfDereferenceObject(v19);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v42) = v18;
        LODWORD(InternalDeviceIoControl) = IoStatusBlock->Information;
        LODWORD(OutputBufferLength) = 0;
        LODWORD(OutputBuffer) = 1;
        McTemplateK0pqtqq(
          v36,
          &EventLeaveMiracastSendUserModeRequest,
          v37,
          *(_QWORD *)(a1 + 96),
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          v42);
      }
    }
  }
  return (unsigned int)v18;
}
