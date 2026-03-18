/*
 * XREFs of ?AcquireDeviceLockForAllDevices@DXGPROCESS@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C025D780
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00D35C0 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IW4_DXGKETW_.c)
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C020B630 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?GetCurrent@ITERATOR@?$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ @ 0x1C0006B3C (-GetCurrent@ITERATOR@-$DXGNODELIST@VDXGPROCESS@@VDXGDEVICE@@@@QEBAPEAVDXGDEVICE@@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C01ECF74 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01F006C (-WakeUpAdapter@DXGADAPTER@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

void __fastcall DXGPROCESS::AcquireDeviceLockForAllDevices(struct _KTHREAD **this, struct DXGADAPTER *a2)
{
  __int64 v4; // rax
  struct _KTHREAD *v5; // rdi
  __int64 Current; // rax
  __int64 v7; // rbx
  const GUID *v8; // r8
  __int64 v9; // rcx
  char v10; // si
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[21] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 2849LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = this[31];
  v11[0] = this + 31;
  while ( 1 )
  {
    v11[1] = v5;
    Current = DXGNODELIST<DXGPROCESS,DXGDEVICE>::ITERATOR::GetCurrent(v11);
    v7 = Current;
    if ( !Current )
      break;
    if ( *(struct DXGADAPTER **)(*(_QWORD *)(Current + 16) + 16LL) == a2
      && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(Current + 104), 0) )
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 96LL));
      v9 = *(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL);
      if ( *(_DWORD *)(v9 + 136) == 1 )
      {
        DXGADAPTER::WakeUpAdapter(v9, 0xFFFFFFFF, v8);
        v10 = 1;
      }
      else
      {
        v10 = 0;
      }
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v9, &EventBlockThread, v8, 40);
      ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v7 + 104), 1u);
      if ( v10 )
        DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v7 + 16) + 16LL));
      ExReleasePushLockSharedEx(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 16LL) + 96LL, 0LL);
      KeLeaveCriticalRegion();
    }
    v5 = *(struct _KTHREAD **)v5;
  }
}
