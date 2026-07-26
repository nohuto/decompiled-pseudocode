/*
 * XREFs of ?ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ @ 0x1C0144608
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     NdisAllocateRWLock @ 0x1C0026240 (NdisAllocateRWLock.c)
 *     NdisAllocateNetBufferListPool @ 0x1C0029450 (NdisAllocateNetBufferListPool.c)
 *     NdisInitializeTimer @ 0x1C002FB50 (NdisInitializeTimer.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0031B94 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ @ 0x1C0147FA0 (-ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ.c)
 */

__int64 ndisInitializePeriodicReceives(void)
{
  unsigned int ProcessorNumberFromIndex; // edi
  PVOID PoolWithTag; // rax
  unsigned int v2; // ebx
  PVOID v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int i; // esi
  char *v7; // rbx
  PVOID v8; // rax
  __int64 v9; // rbx
  ULONG j; // esi
  unsigned __int64 v11; // rbx
  SIZE_T v12; // rax
  SIZE_T v13; // rax
  struct _NET_BUFFER_LIST_POOL_PARAMETERS Parameters; // [rsp+40h] [rbp-28h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+70h] [rbp+8h] BYREF

  ProcNumber = 0;
  *(_QWORD *)&Parameters.Header.Type = 0LL;
  *(_QWORD *)&Parameters.PoolTag = 0LL;
  ProcessorNumberFromIndex = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 32LL * ndisMaxNumberOfProcessors, 0x2020444Eu);
  ndisPerCpuPoisonPills = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_15;
  v2 = ndisMaxNumberOfProcessors;
  memset(PoolWithTag, 0, 32LL * ndisMaxNumberOfProcessors);
  v3 = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * v2, 0x2020444Eu);
  WPP_MAIN_CB.Dpc.DeferredContext = v3;
  if ( !v3 )
    goto LABEL_15;
  v4 = ndisMaxNumberOfProcessors;
  memset(v3, 0, 8LL * ndisMaxNumberOfProcessors);
  WPP_MAIN_CB.Dpc.DeferredRoutine = (void (__fastcall *)(_KDPC *, void *, void *, void *))ExAllocatePoolWithTag(
                                                                                            NonPagedPoolNx,
                                                                                            v4 << 6,
                                                                                            0x2020444Eu);
  if ( !WPP_MAIN_CB.Dpc.DeferredRoutine )
    goto LABEL_15;
  v5 = ndisMaxNumberOfProcessors;
  for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
  {
    v7 = (char *)WPP_MAIN_CB.Dpc.DeferredRoutine + 64 * (unsigned __int64)i;
    *((_QWORD *)v7 + 1) = v7;
    *(_QWORD *)v7 = v7;
    KeInitializeSpinLock((PKSPIN_LOCK)v7 + 2);
    *((_DWORD *)v7 + 6) = 0;
    KeInitializeSemaphore((PRKSEMAPHORE)v7 + 1, 0, 0x7FFFFFFF);
    v5 = ndisMaxNumberOfProcessors;
  }
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v5, 0x2020444Eu);
  WPP_MAIN_CB.Dpc.ProcessorHistory = (unsigned __int64)v8;
  if ( !v8 )
    goto LABEL_15;
  v9 = ndisMaxNumberOfProcessors;
  memset(v8, 0, 4LL * ndisMaxNumberOfProcessors);
  WPP_MAIN_CB.Dpc.DpcListEntry.Next = (_SINGLE_LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, v9 << 7, 0x2020444Eu);
  if ( !WPP_MAIN_CB.Dpc.DpcListEntry.Next )
    goto LABEL_15;
  for ( j = 0; j < ndisNumberOfActiveProcessorsAtBoot; ++j )
  {
    v11 = (unsigned __int64)j << 7;
    ProcessorNumberFromIndex = KeGetProcessorNumberFromIndex(j, &ProcNumber);
    NdisInitializeTimer(
      (PNDIS_TIMER)((char *)WPP_MAIN_CB.Dpc.DpcListEntry.Next + v11),
      (PNDIS_TIMER_FUNCTION)ndisPeriodicReceivesTimer,
      0LL);
    KeSetTargetProcessorDpcEx((PKDPC)((char *)&WPP_MAIN_CB.Dpc.DpcListEntry.Next[8] + v11), &ProcNumber);
  }
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (_LIST_ENTRY *)NdisAllocateRWLock(&ndisDummyObject);
  if ( !WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink
    || (Parameters.Header = (_NDIS_OBJECT_HEADER)1048960,
        *(_DWORD *)&Parameters.ProtocolId = 256,
        *(_QWORD *)&Parameters.PoolTag = 1953645646LL,
        (WPP_MAIN_CB.Dpc.SystemArgument1 = NdisAllocateNetBufferListPool(0LL, &Parameters)) == 0LL) )
  {
LABEL_15:
    ProcessorNumberFromIndex = -1073741823;
    goto LABEL_14;
  }
  v12 = MmSizeOfMdl((PVOID)0xFFF, 0x64uLL);
  ExInitializeNPagedLookasideList(
    (PNPAGED_LOOKASIDE_LIST)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead,
    0LL,
    0LL,
    0x200u,
    ((v12 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 100,
    0x7270444Eu,
    0);
  v13 = MmSizeOfMdl((PVOID)0xFFF, 0x5EEuLL);
  ExInitializeNPagedLookasideList(
    &Lookaside,
    0LL,
    0LL,
    0x200u,
    ((v13 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 1518,
    0x7270444Eu,
    0);
  LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 1;
  ndisConfigurePeriodicReceives(0LL);
  if ( ProcessorNumberFromIndex )
LABEL_14:
    ndisUnloadPeriodicReceives();
  return ProcessorNumberFromIndex;
}
