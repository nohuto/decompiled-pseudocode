/*
 * XREFs of ndisMDeleteMiniportBlockOnRemove @ 0x1C00F03E4
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x1C00F1A90 (NdisLWMUninitializeNetworkInterface.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisAddDevice @ 0x1C010DDE4 (ndisAddDevice.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0009B54 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0060110 (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ndisReleaseStackTrace @ 0x1C0071DA0 (ndisReleaseStackTrace.c)
 *     ?ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z @ 0x1C0071E80 (-ndisGetNthEntry@@YAPEAU_NDIS_EVENT_LOG_ENTRY@@PEAU_NDIS_EVENT_LOG@@K@Z.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 *     PdcTaskClientUnregister @ 0x1C010989C (PdcTaskClientUnregister.c)
 */

void __fastcall ndisMDeleteMiniportBlockOnRemove(_NDIS_MINIPORT_BLOCK *this)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rcx
  void *PdcHandle; // rcx
  void *BusInterface; // rcx
  _DEVICE_RESET_INTERFACE_STANDARD *ReenumerateSelfInterface; // rcx
  wchar_t *Buffer; // rcx
  unsigned __int16 *NumaDistances; // rcx
  wchar_t *v8; // rax
  wchar_t *v9; // rcx
  _UNICODE_STRING *pAdapterInstanceName; // rcx
  _UNICODE_STRING *pModifiedInstanceName; // rcx
  wchar_t *PnPInstanceId; // rcx
  void *ConfigurationHandle; // rcx
  void *SecurityDescriptor; // rcx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _CM_RESOURCE_LIST *AllocatedResources; // rcx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _NDIS_GUID *pNdisGuidMap; // rcx
  void *FakeMac; // rcx
  _NDIS_RECEIVE_QUEUE_BLOCK *DefaultReceiveQueue; // rcx
  NDIS_REFCOUNT_HANDLE__ *NsiRefCountTracker; // rcx
  NDIS_EVENT_LOG_HANDLE__ *PnpEventLog; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v23; // rax
  struct _NDIS_EVENT_LOG *v24; // rdi
  unsigned int v25; // esi
  ULONG_PTR StackTrace; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v27; // rax
  _NDIS_PD_BLOCK *PDBlock; // rax
  KLockHolder v29; // [rsp+20h] [rbp-28h] BYREF

  AoAc = this->AoAc;
  if ( AoAc )
  {
    ExFreePoolWithTag(AoAc, 0);
    this->AoAc = 0LL;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x9Bu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)this);
  PdcHandle = this->PdcHandle;
  if ( PdcHandle )
  {
    PdcTaskClientUnregister(PdcHandle);
    this->PdcHandle = 0LL;
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_q(0x9Cu, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, (__int64)this);
  BusInterface = this->BusInterface;
  if ( BusInterface )
  {
    ExFreePoolWithTag(BusInterface, 0);
    this->BusInterface = 0LL;
  }
  ReenumerateSelfInterface = this->ReenumerateSelfInterface;
  if ( ReenumerateSelfInterface )
  {
    ReenumerateSelfInterface->InterfaceDereference(ReenumerateSelfInterface->Context);
    ExFreePoolWithTag(this->ReenumerateSelfInterface, 0);
    this->ReenumerateSelfInterface = 0LL;
  }
  Buffer = this->FdoName.Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    this->FdoName.Buffer = 0LL;
    this->FdoName.Length = 0;
  }
  NumaDistances = this->NumaDistances;
  if ( NumaDistances )
  {
    ExFreePoolWithTag(NumaDistances, 0);
    this->NumaDistances = 0LL;
  }
  v29.m_State = Unlocked;
  v29.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v29.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v29);
  v8 = this->Reserved4.Buffer;
  if ( v8 )
  {
    --*((_DWORD *)v8 + 42);
    *((_QWORD *)this->Reserved4.Buffer + 22) = 0LL;
    v9 = this->Reserved4.Buffer;
    if ( !*((_DWORD *)v9 + 42) )
      ExFreePoolWithTag(v9, 0);
  }
  KLockHolder::~KLockHolder(&v29);
  pAdapterInstanceName = this->pAdapterInstanceName;
  if ( pAdapterInstanceName )
  {
    ExFreePoolWithTag(pAdapterInstanceName, 0);
    this->pAdapterInstanceName = 0LL;
  }
  pModifiedInstanceName = this->pModifiedInstanceName;
  if ( pModifiedInstanceName )
  {
    ExFreePoolWithTag(pModifiedInstanceName, 0);
    this->pModifiedInstanceName = 0LL;
  }
  PnPInstanceId = this->PnPInstanceId;
  if ( PnPInstanceId )
  {
    ExFreePoolWithTag(PnPInstanceId, 0);
    this->PnPInstanceId = 0LL;
  }
  ConfigurationHandle = this->ConfigurationHandle;
  if ( ConfigurationHandle )
  {
    ExFreePoolWithTag(ConfigurationHandle, 0);
    this->ConfigurationHandle = 0LL;
  }
  SecurityDescriptor = this->SecurityDescriptor;
  if ( SecurityDescriptor )
  {
    ExFreePoolWithTag(SecurityDescriptor, 0);
    this->SecurityDescriptor = 0LL;
  }
  BindPaths = this->BindPaths;
  if ( BindPaths )
  {
    ExFreePoolWithTag(BindPaths, 0);
    this->BindPaths = 0LL;
  }
  AllocatedResources = this->AllocatedResources;
  if ( AllocatedResources )
  {
    ExFreePoolWithTag(AllocatedResources, 0);
    this->AllocatedResources = 0LL;
  }
  if ( this->BlackBoxHandle )
  {
    imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    this->BlackBoxHandle = 0LL;
  }
  while ( 1 )
  {
    Next = this->WorkQueue[6].Next;
    if ( !Next )
      break;
    this->WorkQueue[6] = (_SINGLE_LIST_ENTRY)Next->Next;
    ExFreePoolWithTag(Next, 0);
  }
  pNdisGuidMap = this->pNdisGuidMap;
  if ( pNdisGuidMap )
  {
    ExFreePoolWithTag(pNdisGuidMap, 0);
    this->pNdisGuidMap = 0LL;
  }
  FakeMac = this->FakeMac;
  if ( FakeMac )
  {
    ExFreePoolWithTag(FakeMac, 0);
    this->FakeMac = 0LL;
  }
  DefaultReceiveQueue = this->DefaultReceiveQueue;
  if ( DefaultReceiveQueue )
  {
    ExFreePoolWithTag(DefaultReceiveQueue, 0);
    this->DefaultReceiveQueue = 0LL;
  }
  NdisFreeRefCount(this->RefCountTracker);
  NsiRefCountTracker = this->NsiRefCountTracker;
  this->RefCountTracker = 0LL;
  NdisFreeRefCount(NsiRefCountTracker);
  PnpEventLog = this->PnpEventLog;
  this->NsiRefCountTracker = 0LL;
  if ( PnpEventLog )
  {
    v23 = ndisRefCountHandleFromRefCountBlock((struct _NDIS_REFCOUNT_BLOCK *)PnpEventLog);
    v24 = (struct _NDIS_EVENT_LOG *)v23;
    if ( (*(_BYTE *)&v23->RefWithStack[0].Block.References[2] & 2) != 0 )
    {
      v25 = 0;
      if ( HIDWORD(v23->RefWithStack[0].Block.Next) )
      {
        do
        {
          StackTrace = ndisGetNthEntry(v24, v25)->StackTrace;
          if ( (_DWORD)StackTrace )
            ndisReleaseStackTrace(StackTrace);
          ++v25;
        }
        while ( v25 < v24->NumEntries );
      }
    }
    ExFreePoolWithTag(v24, 0);
  }
  v27 = ndisVerifierNdisDispatch;
  this->PnpEventLog = 0LL;
  if ( v27 && this->VerifierContext )
  {
    ((void (*)(void))v27->NdisFreeVerifierContext)();
    this->VerifierContext = 0LL;
  }
  PDBlock = this->PDBlock;
  if ( PDBlock )
  {
    PDBlock->Miniport = 0LL;
    ExFreePoolWithTag(this->PDBlock, 0);
    this->PDBlock = 0LL;
  }
  _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(this);
  if ( (this->Flags & 0x100) != 0 )
    ExFreePoolWithTag(this, 0);
}
