/*
 * XREFs of NdisOpenAdapterEx @ 0x1C012B900
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     ndisDereferencePackage @ 0x1C001B95C (ndisDereferencePackage.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisAllocateOpenBlock @ 0x1C0024A5C (ndisAllocateOpenBlock.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0026E48 (ndisUpdateCheckForLoopbackFlag.c)
 *     WPP_RECORDER_SF_qZZ @ 0x1C0027554 (WPP_RECORDER_SF_qZZ.c)
 *     ndisDereferenceProtocol @ 0x1C00280F0 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0028420 (ndisReferenceProtocol.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C009C1F0 (ndisRemoveOpenFromGlobalList.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00FC47C (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0102CE8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C0136458 (ndisFindRootDevice.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  BOOL v5; // r13d
  volatile signed __int32 *OpenBlock; // r14
  char v9; // r12
  __int64 MediumArraySize; // rdx
  int MediaType; // r9d
  __int64 v12; // rsi
  __int64 v13; // r13
  struct _NDIS_MINIPORT_BLOCK *v14; // rdi
  __int64 i; // rcx
  unsigned int FrameTypeArraySize; // eax
  __int64 v17; // r8
  KIRQL v18; // al
  KSPIN_LOCK *p_Lock; // rsi
  KIRQL v20; // al
  void **p_MiniportThread; // r13
  unsigned int *p_Flags; // rbx
  int v23; // edx
  int v24; // r13d
  unsigned int v25; // ecx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  struct _NDIS_MINIPORT_BLOCK *v27; // rdx
  NDIS_STATUS v28; // esi
  _QWORD *v29; // rbx
  int v30; // edx
  int v32; // edx
  _QWORD *v33; // rcx
  void (__fastcall **BusInterface)(_QWORD); // rcx
  int v35; // [rsp+28h] [rbp-61h]
  KIRQL NewIrql; // [rsp+58h] [rbp-31h]
  struct _NDIS_MINIPORT_BLOCK *v37; // [rsp+60h] [rbp-29h] BYREF
  unsigned int j; // [rsp+68h] [rbp-21h]
  int v39; // [rsp+6Ch] [rbp-1Dh] BYREF
  BOOL v40; // [rsp+70h] [rbp-19h]
  _QWORD *PoolWithTag; // [rsp+78h] [rbp-11h]
  __int64 v42; // [rsp+80h] [rbp-9h]
  __int64 v43; // [rsp+88h] [rbp-1h]
  void **v44; // [rsp+90h] [rbp+7h]
  unsigned int *p_PnPFlags; // [rsp+98h] [rbp+Fh]
  char v46; // [rsp+E8h] [rbp+5Fh]
  NDIS_HANDLE v47; // [rsp+F0h] [rbp+67h]

  v47 = ProtocolBindingContext;
  v37 = 0LL;
  PoolWithTag = 0LL;
  LOBYTE(v5) = 0;
  v46 = 0;
  *NdisBindingHandle = 0LL;
  v39 = -1073741823;
  OpenBlock = 0LL;
  v40 = v5;
  v9 = 0;
  if ( NdisProtocolHandle )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)ProtocolBindingContext,
        (__int64)OpenParameters,
        0x41u,
        v35,
        (char)NdisProtocolHandle,
        (unsigned __int16 *)NdisProtocolHandle + 36,
        &OpenParameters->AdapterName->Length);
    ndisReferencePackage((__int64)&ndisPkgs);
    if ( *((struct _KTHREAD **)NdisProtocolHandle + 52) == KeGetCurrentThread() )
    {
      if ( ndisReferenceProtocol((__int64)NdisProtocolHandle, 9u) )
      {
        v12 = *((_QWORD *)NdisProtocolHandle + 54);
        v9 = 1;
        v42 = v12;
        if ( v12 )
        {
          v13 = *((_QWORD *)NdisProtocolHandle + 55);
          v14 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)NdisProtocolHandle + 57);
          v43 = v13;
          v37 = v14;
        }
        else
        {
          ndisFindRootDevice((__int64)OpenParameters->AdapterName, (__int64)&v37, 45);
          v14 = v37;
          v12 = v42;
          v40 = v37 != 0LL;
          v13 = v43;
        }
        *((_QWORD *)NdisProtocolHandle + 54) = 0LL;
        if ( v14 )
        {
          OpenBlock = (volatile signed __int32 *)ndisAllocateOpenBlock((__int64)v14, (__int64)NdisProtocolHandle, 1);
          if ( !OpenBlock )
            goto LABEL_50;
          p_PnPFlags = &v14->PnPFlags;
          if ( (v14->PnPFlags & 0x100) == 0
            && (v14->InitMode || v14->State == NdisMiniportPaused || v14->MajorNdisVersion < 6u) )
          {
            if ( !v14->Miniport5HasNdis6Component )
              v14->Miniport5HasNdis6Component = 1;
            *((_QWORD *)OpenBlock + 4) = v47;
            *((_QWORD *)OpenBlock + 51) = v12;
            *((_QWORD *)OpenBlock + 52) = v13;
            *((_QWORD *)OpenBlock + 2) = v14;
            *((_QWORD *)OpenBlock + 3) = NdisProtocolHandle;
            *NdisBindingHandle = (PVOID)OpenBlock;
            MediumArraySize = OpenParameters->MediumArraySize;
            if ( (v14->MacOptions & 0x80000001) == 0x80000001 )
            {
              for ( i = 0LL; (unsigned int)i < (unsigned int)MediumArraySize; i = (unsigned int)(i + 1) )
              {
                if ( OpenParameters->MediumArray[i] == NdisMediumWan )
                  break;
              }
            }
            else
            {
              i = 0LL;
              if ( (_DWORD)MediumArraySize )
              {
                MediaType = v14->MediaType;
                do
                {
                  if ( OpenParameters->MediumArray[i] == MediaType )
                    break;
                  i = (unsigned int)(i + 1);
                }
                while ( (unsigned int)i < (unsigned int)MediumArraySize );
              }
            }
            if ( (_DWORD)i == (_DWORD)MediumArraySize )
            {
              v28 = -1073676263;
              goto LABEL_80;
            }
            *OpenParameters->SelectedMediumIndex = i;
            FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
            if ( FrameTypeArraySize <= 4 )
            {
              v17 = 0LL;
              for ( *((_DWORD *)OpenBlock + 62) = FrameTypeArraySize;
                    (unsigned int)v17 < OpenParameters->FrameTypeArraySize;
                    v17 = (unsigned int)(v17 + 1) )
              {
                *((_WORD *)OpenBlock + v17 + 126) = __ROL2__(OpenParameters->FrameTypeArray[v17], 8);
              }
              if ( ndisDatapathVerifierMode == 1 )
              {
                if ( !MmIsDriverVerifyingByAddress(*((PVOID *)NdisProtocolHandle + 13)) )
                  goto LABEL_24;
              }
              else if ( ndisDatapathVerifierMode != 2 )
              {
                goto LABEL_24;
              }
              v14 = v37;
              *((_DWORD *)OpenBlock + 56) |= 1u;
LABEL_24:
              v18 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
              *((_QWORD *)OpenBlock + 48) = *(_QWORD *)ndisGlobalOpenList;
              *(_QWORD *)ndisGlobalOpenList = OpenBlock;
              v46 = 1;
              KeReleaseSpinLock(&ndisGlobalOpenListLock, v18);
              p_Lock = &v14->Lock;
              v20 = KeAcquireSpinLockRaiseToDpc(&v14->Lock);
              p_MiniportThread = &v14->MiniportThread;
              v14 = v37;
              *p_MiniportThread = KeGetCurrentThread();
              NewIrql = v20;
              v44 = p_MiniportThread;
              p_Flags = &v14->Flags;
              if ( (v14->Flags & 0x40000) == 0 )
              {
                while ( v14->LockAcquired )
                {
                  *p_MiniportThread = 0LL;
                  KeReleaseSpinLockFromDpcLevel(p_Lock);
                  for ( j = 0; j < 0x32; ++j )
                    ;
                  KeAcquireSpinLockAtDpcLevel(p_Lock);
                  *p_MiniportThread = KeGetCurrentThread();
                }
                v14->LockAcquired = 1;
                v14 = v37;
                v37->LockThread = KeGetCurrentThread();
              }
              ndisMOpenAdapter(&v39, OpenBlock, v14);
              v24 = v39;
              if ( !v39 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v23) = 4;
                  WPP_RECORDER_SF_qqq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v23,
                    v39 + 6,
                    v39 + 66,
                    (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
                    (char)OpenBlock,
                    (char)NdisProtocolHandle,
                    (char)v14);
                }
                v25 = *p_Flags;
                if ( (*p_Flags & 0x20000000) == 0 && (*p_Flags & 0x20000) == 0 )
                {
                  ndisMSwapOpenHandlers(v14, 2);
                  v25 = *p_Flags;
                }
                if ( (v25 & 0x20000) != 0 && *((_QWORD *)NdisProtocolHandle + 25) )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedAdd(OpenBlock + 266, 1u);
                    v33 = PoolWithTag;
                    v14 = v37;
                    v24 = v39;
                    *PoolWithTag = OpenBlock;
                    v33[1] = 0LL;
                    v33[3] = ndisMFinishQueuedPendingOpen;
                    v33[4] = v33;
                  }
                  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v32) = 2;
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v32,
                      19,
                      67,
                      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
                      (char)OpenBlock);
                  }
                }
              }
              if ( (*p_Flags & 0x40000) == 0 )
              {
                v14->LockAcquired = 0;
                v14->LockThread = 0LL;
              }
              *v44 = 0LL;
              KeReleaseSpinLock(p_Lock, NewIrql);
              Ndis::BindEngine::BeginPolicyUpdates(&v14->BindEngine);
              CurrentLink = Ndis::BindEngine::GetCurrentLink(&v14->BindEngine);
              *((_QWORD *)OpenBlock + 107) = CurrentLink;
              if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, (void *)OpenBlock) )
                v24 = -1073741670;
              v28 = v24;
              Ndis::BindEngine::EndPolicyUpdates(&v14->BindEngine, v27);
              if ( !v24 )
              {
                if ( (*p_PnPFlags & 0x2000) != 0 )
                {
                  BusInterface = (void (__fastcall **)(_QWORD))v14->BusInterface;
                  if ( BusInterface )
                    BusInterface[4](BusInterface[1]);
                }
                ndisPktMonOpenRegister((__int64)OpenBlock);
                v29 = PoolWithTag;
                *((_QWORD *)BindContext + 2) = OpenBlock;
                if ( !v29 )
                  goto LABEL_39;
                (*((void (__fastcall **)(_QWORD, _QWORD))NdisProtocolHandle + 14))(*((_QWORD *)OpenBlock + 4), 0LL);
                ndisUpdateCheckForLoopbackFlag((__int64)v14);
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(v29 + 1), (WORK_QUEUE_TYPE)40);
                v28 = 259;
              }
              if ( v28 == 259 )
              {
LABEL_39:
                ndisDereferencePackage((__int64)&ndisPkgs);
                if ( v40 )
                  ndisDereferenceMiniport((__int64)v14, 0x2Du);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  WPP_RECORDER_SF_qqqL(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v30,
                    6u,
                    0x44u,
                    (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
                    (char)NdisProtocolHandle,
                    (char)v14,
                    (char)OpenBlock,
                    v28);
                return v28;
              }
LABEL_80:
              *NdisBindingHandle = 0LL;
              if ( v9 )
                ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)NdisProtocolHandle, MediumArraySize, 9u, MediaType);
              if ( v46 )
                ndisRemoveOpenFromGlobalList((__int64)OpenBlock);
              goto LABEL_39;
            }
LABEL_50:
            v28 = -1073741670;
            goto LABEL_80;
          }
        }
        v28 = -1073676282;
        goto LABEL_80;
      }
      v28 = -1073676286;
    }
    else
    {
      v28 = v39;
    }
    v14 = v37;
    goto LABEL_80;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(ProtocolBindingContext) = 2;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)ProtocolBindingContext,
      6,
      64,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids);
  }
  return -1073741823;
}
