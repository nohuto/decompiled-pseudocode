/*
 * XREFs of NdisMRegisterInterruptEx @ 0x1C012F4F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?GetMsgDpc@@YAPEAU_KDPC@@PEAU_NDIS_INTERRUPT_BLOCK@@KK@Z @ 0x1C0011A2C (-GetMsgDpc@@YAPEAU_KDPC@@PEAU_NDIS_INTERRUPT_BLOCK@@KK@Z.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     McTemplateK0jqxqqq @ 0x1C0068DD0 (McTemplateK0jqxqqq.c)
 *     NdisMDeregisterInterruptEx @ 0x1C013B000 (NdisMDeregisterInterruptEx.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterruptEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportInterruptContext,
        PNDIS_MINIPORT_INTERRUPT_CHARACTERISTICS MiniportInterruptCharacteristics,
        PNDIS_HANDLE NdisInterruptHandle)
{
  struct _NDIS_INTERRUPT_BLOCK *v7; // rdi
  NDIS_STATUS v9; // r14d
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  struct _NDIS_INTERRUPT_BLOCK *v15; // rax
  KIRQL v16; // al
  unsigned __int64 v17; // r12
  ULONG v18; // ebx
  _KDPC *Dpc; // rcx
  unsigned __int64 v20; // r15
  _KDPC *v21; // rax
  unsigned int v22; // r15d
  __int64 v23; // r12
  unsigned int i; // ebx
  struct _KDPC *MsgDpc; // rax
  struct _KDPC *v26; // rax
  struct _KDPC *v27; // rax
  struct _KDPC *v28; // rax
  struct _KDPC *v29; // rax
  unsigned int v30; // r15d
  __int64 v31; // rax
  _NDIS_DPC_WORK_ITEM *v32; // rcx
  $F2B7BB606B58D2BCCAA83C24398D7E83 *v33; // r15
  bool v34; // zf
  NTSTATUS v35; // eax
  int v36; // edx
  _DWORD *Generic; // r15
  unsigned int v38; // r12d
  _OWORD *PoolWithTag; // rax
  _OWORD *v40; // rbx
  _OWORD *v41; // rax
  __int64 v42; // r15
  __int64 v43; // rcx
  __int128 v44; // xmm1
  KIRQL v46; // al
  _NDIS_INTERRUPT_BLOCK **p_NextInterrupt; // rdx
  struct _NDIS_INTERRUPT_BLOCK *v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // [rsp+50h] [rbp-39h]
  unsigned __int64 v51; // [rsp+58h] [rbp-31h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+60h] [rbp-29h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+F0h] [rbp+67h] BYREF
  _PROCESSOR_NUMBER v54; // [rsp+100h] [rbp+77h] BYREF
  PNDIS_HANDLE v55; // [rsp+108h] [rbp+7Fh]

  v55 = NdisInterruptHandle;
  v7 = 0LL;
  v9 = 0;
  memset(&Parameters, 0, sizeof(Parameters));
  v10 = *((unsigned int *)MiniportAdapterHandle + 853);
  v11 = (unsigned __int64)ndisMaxNumberOfProcessors << 6;
  v12 = (v10 * (ndisMaxNumberOfProcessors + 1)) << 6;
  v50 = v12;
  if ( !(_DWORD)v10 )
    LODWORD(v10) = 1;
  v13 = 80 * ndisMaxNumberOfProcessors * (unsigned __int64)(unsigned int)v10;
  v51 = v13;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      1,
      18,
      (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
      (char)MiniportAdapterHandle);
    v12 = v50;
    v13 = v51;
  }
  *NdisInterruptHandle = 0LL;
  MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
  MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
  if ( (*((_DWORD *)MiniportAdapterHandle + 922) & 2) != 0
    || (v14 = v13 + v12,
        v15 = (struct _NDIS_INTERRUPT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v13 + v12 + v11 + 232, 0x6D61444Eu),
        (v7 = v15) == 0LL) )
  {
    v9 = -1073741670;
  }
  else
  {
    memset(v15, 0, v14 + v11 + 232);
    v7->MiniportInterruptContext = MiniportInterruptContext;
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    v7->NextInterrupt = (_NDIS_INTERRUPT_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 98);
    *((_QWORD *)MiniportAdapterHandle + 98) = v7;
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v16);
    _InterlockedAdd((volatile signed __int32 *)MiniportAdapterHandle + 476, 1u);
    v7->Header = (_NDIS_OBJECT_HEADER)15204614;
    v7->DpcCount = 0;
    v7->IsDeregistered = 0;
    v7->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
    v7->MiniportIsr = MiniportInterruptCharacteristics->InterruptHandler;
    v7->MiniportDpc = MiniportInterruptCharacteristics->InterruptDpcHandler;
    *(_WORD *)&v7->SharedInterrupt = 257;
    if ( MiniportInterruptCharacteristics->MessageInterruptHandler )
    {
      v7->MsiSupported = 1;
      v7->MiniportMessageIsr = MiniportInterruptCharacteristics->MessageInterruptHandler;
      v7->MiniportMessageInterruptDpc = MiniportInterruptCharacteristics->MessageInterruptDpcHandler;
    }
    KeInitializeEvent(&v7->DpcsCompletedEvent, SynchronizationEvent, 0);
    KeInitializeDpc(&v7->InterruptDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v7);
    KeSetImportanceDpc(&v7->InterruptDpc, MediumImportance);
    v17 = v11 + 232;
    v18 = 0;
    for ( v7->Dpc = (_KDPC *)&v7[1]; v18 < ndisMaxNumberOfProcessors; ++v18 )
    {
      Dpc = v7->Dpc;
      ProcNumber = 0;
      v20 = (unsigned __int64)v18 << 6;
      KeInitializeDpc((_KDPC *)((char *)Dpc + v20), (PKDEFERRED_ROUTINE)ndisInterruptDpc, v7);
      KeSetImportanceDpc((PRKDPC)((char *)v7->Dpc + v20), MediumHighImportance);
      if ( KeGetProcessorNumberFromIndex(v18, &ProcNumber) >= 0 )
        KeSetTargetProcessorDpcEx((PKDPC)((char *)v7->Dpc + v20), &ProcNumber);
    }
    v21 = (_KDPC *)(&v7->Header.Type + v17);
    v22 = 0;
    v23 = v50 + v17;
    for ( v7->MsgDpc = v21; v22 < *((_DWORD *)MiniportAdapterHandle + 853); ++v22 )
    {
      for ( i = 0; i < ndisMaxNumberOfProcessors; ++i )
      {
        v54 = 0;
        MsgDpc = GetMsgDpc(v7, v22, i);
        KeInitializeDpc(MsgDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v7);
        v26 = GetMsgDpc(v7, v22, i);
        KeSetImportanceDpc(v26, MediumHighImportance);
        if ( KeGetProcessorNumberFromIndex(i, &v54) >= 0 )
        {
          v27 = GetMsgDpc(v7, v22, i);
          KeSetTargetProcessorDpcEx(v27, &v54);
        }
      }
      v28 = GetMsgDpc(v7, v22, i);
      KeInitializeDpc(v28, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v7);
      v29 = GetMsgDpc(v7, v22, i);
      KeSetImportanceDpc(v29, MediumHighImportance);
    }
    v7->DpcWorkItems = (_NDIS_DPC_WORK_ITEM *)(&v7->Header.Type + v23);
    v30 = 0;
    if ( v51 / 0x50 )
    {
      v31 = 0LL;
      do
      {
        v32 = &v7->DpcWorkItems[v31];
        v32->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisQueuedMiniportDpcWorkItem;
        v32->WorkItem.Parameter = v32;
        v32->WorkItem.List.Flink = 0LL;
        KeInitializeSpinLock(&v7->DpcWorkItems[v31].Lock);
        v31 = ++v30;
      }
      while ( v30 < v51 / 0x50 );
    }
    *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
    v33 = &v7->120;
    v34 = v7->MsiSupported == 0;
    Parameters.FullySpecified.PhysicalDeviceObject = (PDEVICE_OBJECT)*((_QWORD *)MiniportAdapterHandle + 479);
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)&v7->120;
    Parameters.FullySpecified.ServiceContext = v7;
    if ( v34 )
    {
      Parameters.Version = 2;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      Parameters.FullySpecified.SpinLock = 0LL;
    }
    else
    {
      Parameters.Version = 3;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportMessageIsr;
      Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      if ( MiniportInterruptCharacteristics->MsiSyncWithAllMessages )
      {
        KeInitializeSpinLock(&v7->MessagesSyncLock);
        Parameters.FullySpecified.SpinLock = &v7->MessagesSyncLock;
      }
    }
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    v35 = IoConnectInterruptEx(&Parameters);
    if ( v35 < 0 )
    {
      v9 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v36) = 2;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v36,
          1,
          19,
          (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
          (char)MiniportAdapterHandle,
          v35);
      }
      v33->Generic = 0LL;
    }
    else
    {
      if ( Parameters.Version != 3 )
      {
LABEL_34:
        if ( Parameters.Version == 2 )
        {
          MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
          MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
          v7->InterruptMode = LevelSensitive;
        }
        *v55 = v7;
        goto LABEL_37;
      }
      Generic = v33->Generic;
      v38 = Generic[1];
      v7->MessageUsed = 1;
      v7->InterruptMode = Latched;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 48 * (v38 - 1) + 56, 0x6D61444Eu);
      v40 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x38uLL);
        *v40 = *(_OWORD *)Generic;
        v40[1] = *((_OWORD *)Generic + 1);
        v40[2] = *((_OWORD *)Generic + 2);
        *((_QWORD *)v40 + 6) = *((_QWORD *)Generic + 6);
        if ( v38 )
        {
          v41 = (_OWORD *)((char *)v40 + 8);
          v42 = (char *)Generic - (char *)v40;
          v43 = v38;
          do
          {
            *v41 = *(_OWORD *)((char *)v41 + v42);
            v44 = *(_OWORD *)((char *)v41 + v42 + 16);
            v41 += 3;
            *(v41 - 2) = v44;
            *(v41 - 1) = *(_OWORD *)((char *)v41 + v42 - 16);
            --v43;
          }
          while ( v43 );
        }
        MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_MESSAGE_BASED;
        MiniportInterruptCharacteristics->MessageInfoTable = (_IO_INTERRUPT_MESSAGE_INFO *)v40;
        v7->NdisMessageInfoTable = (_IO_INTERRUPT_MESSAGE_INFO *)v40;
        v7->InterruptMode = Latched;
        if ( v38 > 1 )
        {
          *((_BYTE *)MiniportAdapterHandle + 1992) = 1;
          if ( *((_WORD *)MiniportAdapterHandle + 1347) )
          {
            *((_DWORD *)MiniportAdapterHandle + 674) |= 0x8000000u;
            *((_DWORD *)MiniportAdapterHandle + 777) |= 0x8000000u;
          }
        }
        goto LABEL_34;
      }
      v9 = -1073741670;
      NdisMDeregisterInterruptEx(v7);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  ndisReferencePackage((__int64)&ndisPkgs);
  v46 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  p_NextInterrupt = (_NDIS_INTERRUPT_BLOCK **)((char *)MiniportAdapterHandle + 784);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  while ( 1 )
  {
    v48 = *p_NextInterrupt;
    if ( !*p_NextInterrupt )
      break;
    if ( v48 == v7 )
    {
      *p_NextInterrupt = v7->NextInterrupt;
      break;
    }
    p_NextInterrupt = &v48->NextInterrupt;
  }
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v46);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (byte_1C00E8081 & 1) != 0 )
    McTemplateK0jqxqqq(
      v49,
      &RegisterInterruptFailed,
      (const GUID *)((char *)MiniportAdapterHandle + 4008),
      (__int64)MiniportAdapterHandle + 4008,
      *((_DWORD *)MiniportAdapterHandle + 1014),
      *((_QWORD *)MiniportAdapterHandle + 503),
      v9,
      3,
      0);
LABEL_37:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v36) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v36,
      1,
      20,
      (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
      (char)MiniportAdapterHandle,
      v9);
  }
  return v9;
}
