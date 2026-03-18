/*
 * XREFs of TtmiWriteEventToSingleQueue @ 0x1408BFC14
 * Callers:
 *     TtmpPublishDeviceEvent @ 0x1408BB634 (TtmpPublishDeviceEvent.c)
 *     TtmiWriteEnumerationEventsToQueue @ 0x1408BDB30 (TtmiWriteEnumerationEventsToQueue.c)
 *     TtmiWriteEventToAllQueues @ 0x1408BDBCC (TtmiWriteEventToAllQueues.c)
 *     TtmpWriteDisplayRequiredPowerRequestUpdatedEvent @ 0x1408BECB8 (TtmpWriteDisplayRequiredPowerRequestUpdatedEvent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 *     TtmiLogQueueEnqueueEvent @ 0x1408C1FB0 (TtmiLogQueueEnqueueEvent.c)
 */

__int64 __fastcall TtmiWriteEventToSingleQueue(__int64 a1, _OWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // ebx
  _QWORD *PoolWithTag; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  _QWORD *v11; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  v5 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v5 = -1073740032;
LABEL_3:
    TtmiLogError("TtmiWriteEventToSingleQueue");
    goto LABEL_11;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x230uLL, 0x716D7454u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v5 = -1073741670;
    goto LABEL_3;
  }
  memset(PoolWithTag, 0, 0x230uLL);
  v8 = 4LL;
  v9 = v7 + 2;
  do
  {
    *v9 = *a2;
    v9[1] = a2[1];
    v9[2] = a2[2];
    v9[3] = a2[3];
    v9[4] = a2[4];
    v9[5] = a2[5];
    v9[6] = a2[6];
    v9 += 8;
    v10 = a2[7];
    a2 += 8;
    *(v9 - 1) = v10;
    --v8;
  }
  while ( v8 );
  *v9 = *a2;
  v9[1] = a2[1];
  TtmiLogQueueEnqueueEvent(a1, v7 + 2, 128LL);
  v11 = *(_QWORD **)(a1 + 160);
  if ( *v11 != a1 + 152 )
    __fastfail(3u);
  v7[1] = v11;
  *v7 = a1 + 152;
  *v11 = v7;
  *(_QWORD *)(a1 + 160) = v7;
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
LABEL_11:
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v5;
}
