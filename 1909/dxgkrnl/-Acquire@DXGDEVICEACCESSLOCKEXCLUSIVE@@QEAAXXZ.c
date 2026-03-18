/*
 * XREFs of ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007110
 * Callers:
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F426C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F8F00 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01257A0 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0125A44 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012629C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C01264D4 (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C02474F4 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C0249948 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298C20 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

void __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  struct _KEVENT *v2; // rbx
  __int64 v3; // rbx
  struct _KEVENT *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rcx
  char v7; // si

  v2 = *(struct _KEVENT **)(*(_QWORD *)this + 16LL);
  if ( *(_DWORD *)(*(_QWORD *)this + 328LL) == 2 )
  {
    if ( KeReadStateEvent(v2 + 4) )
      goto LABEL_3;
    v4 = v2 + 4;
  }
  else
  {
    if ( KeReadStateEvent(v2 + 3) )
      goto LABEL_3;
    v4 = v2 + 3;
  }
  KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
LABEL_3:
  v3 = *(_QWORD *)this;
  KeEnterCriticalRegion();
  if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 104), 0) )
  {
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 96LL));
    v6 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
    if ( *(_DWORD *)(v6 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v6, 0xFFFFFFFFLL);
      v7 = 1;
    }
    else
    {
      v7 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v6, &EventBlockThread, v5, 40LL);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 104), 1u);
    if ( v7 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)this + 2) = 1;
}
