/*
 * XREFs of ?Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0007044
 * Callers:
 *     ?DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z @ 0x1C00F3D3C (-DxgkDestroySynchronizationObjectImpl@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@H@Z.c)
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C00F47D0 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C012015C (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0122E20 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C01230C4 (-DestroyAllContexts@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?NotifyProcessThaw@DXGDEVICE@@QEAAXXZ @ 0x1C013F73C (-NotifyProcessThaw@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1C0246E74 (-DestroyAllHwQueues@DXGCONTEXT@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 *     ?SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z @ 0x1C02492C8 (-SubmitSignalSyncObjectsToHwQueue@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_KPEAVDXGPROCESS@@_N4@Z.c)
 *     NtDxgkUpdateTrackedWorkload @ 0x1C0298810 (NtDxgkUpdateTrackedWorkload.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007320 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023700 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01EC944 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01EFA3C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

void __fastcall DXGDEVICEACCESSLOCKEXCLUSIVE::Acquire(DXGDEVICEACCESSLOCKEXCLUSIVE *this)
{
  struct _KEVENT *v2; // rbx
  __int64 v3; // rbx
  struct _KEVENT *v4; // rcx
  __int64 v5; // rcx
  char v6; // si

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
    v5 = *(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL);
    if ( *(_DWORD *)(v5 + 136) == 1 )
    {
      DXGADAPTER::WakeUpAdapter(v5, 0xFFFFFFFFLL);
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0q(v5, &EventBlockThread);
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v3 + 104), 1u);
    if ( v6 )
      DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v3 + 16) + 16LL));
    ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v3 + 16) + 16LL) + 96LL, 0LL);
    KeLeaveCriticalRegion();
  }
  *((_DWORD *)this + 2) = 1;
}
