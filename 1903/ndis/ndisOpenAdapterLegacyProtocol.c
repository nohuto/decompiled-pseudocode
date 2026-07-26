/*
 * XREFs of ndisOpenAdapterLegacyProtocol @ 0x1C0093A48
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D50C (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x1C0138A50 (NdisOpenAdapter.c)
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisAllocateOpenBlock @ 0x1C0024A5C (ndisAllocateOpenBlock.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C0026E48 (ndisUpdateCheckForLoopbackFlag.c)
 *     WPP_RECORDER_SF_qZZ @ 0x1C0027554 (WPP_RECORDER_SF_qZZ.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027818 (ndisNotifyWmiBindUnbind.c)
 *     ndisDereferenceProtocol @ 0x1C00280F0 (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C0028420 (ndisReferenceProtocol.c)
 *     WPP_RECORDER_SF_Zq @ 0x1C0028658 (WPP_RECORDER_SF_Zq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisFreeOpenBlock @ 0x1C0081DA0 (ndisFreeOpenBlock.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C009C1F0 (ndisRemoveOpenFromGlobalList.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00FC47C (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FCE84 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FD4B0 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00FF02C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00FF6D4 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisPktMonOpenRegister @ 0x1C0102588 (ndisPktMonOpenRegister.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C0102CE8 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ndisMDoMiniportOp @ 0x1C0108AA8 (ndisMDoMiniportOp.c)
 *     ?ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z @ 0x1C0116E3C (-ndisInvokeOpenAdapterComplete@@_Y2PAGE@@AXPEAU_NDIS_OPEN_BLOCK@@H@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01279C0 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C01279F8 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C0136458 (ndisFindRootDevice.c)
 */

_UNKNOWN **__fastcall ndisOpenAdapterLegacyProtocol(
        unsigned int *a1,
        __int64 a2,
        struct _NDIS_OPEN_BLOCK **a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        _NDIS_PROTOCOL_BLOCK *NewIrql,
        void *a8,
        unsigned __int16 *a9,
        char a10,
        int a11,
        unsigned int *a12)
{
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rsi
  struct _NDIS_MINIPORT_BLOCK *BindingAdapter; // rbx
  char v15; // r15
  __int64 v18; // rdx
  int v19; // r9d
  char v20; // r12
  _UNICODE_STRING *BindDeviceName; // r15
  _UNICODE_STRING *RootDeviceName; // r12
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r15
  int v24; // edx
  __int64 v25; // rdx
  int v26; // r9d
  KIRQL v27; // al
  __int64 v28; // rcx
  _DWORD *v29; // rax
  unsigned int *p_PnPFlags; // r13
  KSPIN_LOCK *p_Lock; // r15
  KIRQL v32; // al
  void **p_MiniportThread; // r12
  unsigned int *v34; // rax
  int v35; // edx
  unsigned int v36; // ecx
  int v37; // edx
  _QWORD *v38; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  unsigned int v40; // edx
  void *BusInterface; // rcx
  _QWORD *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  int v46; // edx
  _UNKNOWN **result; // rax
  int v48; // [rsp+20h] [rbp-E0h]
  struct _NDIS_MINIPORT_BLOCK *v49; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v50; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int *p_Flags; // [rsp+60h] [rbp-A0h]
  _QWORD *PoolWithTag; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING *v53; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING *v54; // [rsp+78h] [rbp-88h]
  UNICODE_STRING String1; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v56; // [rsp+90h] [rbp-70h] BYREF
  struct _NDIS_OPEN_BLOCK **v57; // [rsp+98h] [rbp-68h]
  _DWORD *v58; // [rsp+A0h] [rbp-60h]
  __int64 v59; // [rsp+A8h] [rbp-58h]
  unsigned int v60; // [rsp+B0h] [rbp-50h]
  int v61; // [rsp+B4h] [rbp-4Ch]
  _NDIS_PROTOCOL_BLOCK *v62; // [rsp+B8h] [rbp-48h]
  __int64 v63; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v64; // [rsp+C8h] [rbp-38h]
  char v65[208]; // [rsp+D0h] [rbp-30h] BYREF
  char v66; // [rsp+1B0h] [rbp+B0h]
  KIRQL NewIrqla; // [rsp+1E0h] [rbp+E0h]
  char v69; // [rsp+1F8h] [rbp+F8h]
  unsigned int i; // [rsp+200h] [rbp+100h]

  *(_QWORD *)&String1.Length = 2359330LL;
  OpenBlock = 0LL;
  v49 = 0LL;
  BindingAdapter = 0LL;
  PoolWithTag = 0LL;
  v66 = 0;
  v15 = 0;
  v69 = 0;
  v50 = 0LL;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      (__int64)a3,
      0x15u,
      v48,
      (char)NewIrql,
      &NewIrql->Name.Length,
      a9);
  ndisReferencePackage((__int64)&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol((__int64)NewIrql, 9u) )
  {
    *a1 = -1073676286;
    v20 = 0;
    goto LABEL_81;
  }
  BindDeviceName = NewIrql->BindDeviceName;
  v53 = BindDeviceName;
  if ( BindDeviceName )
  {
    RootDeviceName = NewIrql->RootDeviceName;
    BindingAdapter = NewIrql->BindingAdapter;
    v54 = RootDeviceName;
    v49 = BindingAdapter;
    goto LABEL_19;
  }
  ndisFindRootDevice((__int64)a9, (__int64)&v49, 44);
  BindingAdapter = v49;
  if ( !v49 )
  {
    BindDeviceName = v53;
    RootDeviceName = v54;
    v69 = 1;
LABEL_19:
    NewIrql->BindDeviceName = 0LL;
    if ( BindingAdapter && (p_Flags = &BindingAdapter->Flags, (BindingAdapter->Flags & 0x10000) != 0) )
    {
      if ( RtlPrefixUnicodeString(&String1, &BindingAdapter->SymbolicLinkName, 1u) )
      {
        *a1 = -1073676281;
      }
      else
      {
        OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock((__int64)BindingAdapter, (__int64)NewIrql, 0);
        if ( OpenBlock )
        {
          v27 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
          OpenBlock->NextGlobalOpen = *(_NDIS_OPEN_BLOCK **)ndisGlobalOpenList;
          *(_QWORD *)ndisGlobalOpenList = OpenBlock;
          v66 = 1;
          KeReleaseSpinLock(&ndisGlobalOpenListLock, v27);
          v18 = a6;
          OpenBlock->ProtocolBindingContext = a8;
          OpenBlock->BindDeviceName = BindDeviceName;
          OpenBlock->RootDeviceName = RootDeviceName;
          OpenBlock->MiniportHandle = BindingAdapter;
          OpenBlock->ProtocolHandle = NewIrql;
          *a3 = OpenBlock;
          if ( (BindingAdapter->MacOptions & 0x80000001) == 0x80000001 )
          {
            LODWORD(v28) = 0;
            if ( a6 )
            {
              v29 = a5;
              do
              {
                if ( *v29 == 3 )
                  break;
                LODWORD(v28) = v28 + 1;
                ++v29;
              }
              while ( (unsigned int)v28 < a6 );
            }
          }
          else
          {
            v28 = 0LL;
            if ( a6 )
            {
              v19 = (int)a5;
              do
              {
                if ( a5[v28] == BindingAdapter->MediaType )
                  break;
                v28 = (unsigned int)(v28 + 1);
              }
              while ( (unsigned int)v28 < a6 );
            }
          }
          if ( (_DWORD)v28 == a6 )
          {
            *a1 = -1073676263;
          }
          else
          {
            *a4 = v28;
            p_PnPFlags = &BindingAdapter->PnPFlags;
            if ( (BindingAdapter->PnPFlags & 0x40000000) != 0
              && (v50 = 0x100080180LL,
                  (unsigned int)ndisMDoMiniportOp((_DWORD)BindingAdapter, 0, 66078, (unsigned int)&v50, 8, 1, 1)) )
            {
              *a1 = -1073741823;
            }
            else
            {
              p_Lock = &BindingAdapter->Lock;
              v32 = KeAcquireSpinLockRaiseToDpc(&BindingAdapter->Lock);
              p_MiniportThread = &BindingAdapter->MiniportThread;
              BindingAdapter = v49;
              NewIrqla = v32;
              v34 = p_Flags;
              *p_MiniportThread = KeGetCurrentThread();
              if ( (*v34 & 0x40000) == 0 )
              {
                while ( BindingAdapter->LockAcquired )
                {
                  *p_MiniportThread = 0LL;
                  KeReleaseSpinLockFromDpcLevel(p_Lock);
                  for ( i = 0; i < 0x32; ++i )
                    ;
                  KeAcquireSpinLockAtDpcLevel(p_Lock);
                  *p_MiniportThread = KeGetCurrentThread();
                }
                BindingAdapter->LockAcquired = 1;
                BindingAdapter = v49;
                v49->LockThread = KeGetCurrentThread();
              }
              ndisMOpenAdapter(a1, OpenBlock, BindingAdapter);
              if ( !*a1 )
              {
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v35) = 4;
                  WPP_RECORDER_SF_qqq(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v35,
                    6,
                    23,
                    (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
                    (char)OpenBlock,
                    (char)NewIrql,
                    (char)BindingAdapter);
                }
                if ( v69 )
                {
                  BindingAdapter = v49;
                  OpenBlock->OpenFlags |= 0x400000u;
                }
                v36 = *p_Flags;
                if ( (*p_Flags & 0x20000000) == 0 && (*p_Flags & 0x20000) == 0 )
                {
                  ndisMSwapOpenHandlers(BindingAdapter, 2);
                  v36 = *p_Flags;
                }
                if ( (v36 & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
                    v38 = PoolWithTag;
                    BindingAdapter = v49;
                    *PoolWithTag = OpenBlock;
                    v38[1] = 0LL;
                    v38[3] = ndisMFinishQueuedPendingOpen;
                    v38[4] = v38;
                  }
                  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v37) = 2;
                    WPP_RECORDER_SF_q(
                      *((_QWORD *)WPP_GLOBAL_Control + 8),
                      v37,
                      19,
                      24,
                      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
                      (char)OpenBlock);
                  }
                }
              }
              if ( (*p_Flags & 0x40000) == 0 )
              {
                BindingAdapter->LockAcquired = 0;
                BindingAdapter->LockThread = 0LL;
              }
              *p_MiniportThread = 0LL;
              KeReleaseSpinLock(p_Lock, NewIrqla);
              if ( !*a1 )
              {
                Ndis::BindEngine::BeginPolicyUpdates(&BindingAdapter->BindEngine);
                CurrentLink = Ndis::BindEngine::GetCurrentLink(&BindingAdapter->BindEngine);
                OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
                if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                  *a1 = -1073741670;
                Ndis::BindEngine::EndPolicyUpdates(&BindingAdapter->BindEngine);
                if ( !*a1 )
                {
                  v40 = 0;
                  if ( (*p_PnPFlags & 0x2000) != 0 )
                  {
                    BusInterface = BindingAdapter->BusInterface;
                    if ( BusInterface )
                    {
                      (*((void (__fastcall **)(_QWORD, _QWORD))BusInterface + 4))(*((_QWORD *)BusInterface + 1), 0LL);
                      v40 = *a1;
                    }
                  }
                  if ( a12 )
                  {
                    *a12 = v40;
                    a12 = 0LL;
                  }
                  ndisPktMonOpenRegister((char)OpenBlock);
                  v42 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    v43 = *a1;
                    if ( NewIrql->MajorNdisVersion < 6u )
                      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v43, v43);
                    else
                      ndisInvokeOpenAdapterComplete(OpenBlock, v43);
                    ndisUpdateCheckForLoopbackFlag((__int64)BindingAdapter);
                    if ( v69 )
                    {
                      ndisNotifyWmiBindUnbind(v44, (__int64)NewIrql, 1);
                      v69 = 0;
                    }
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v42 + 1), (WORK_QUEUE_TYPE)40);
                    *a1 = 259;
                  }
                }
              }
            }
          }
        }
        else
        {
          *a1 = -1073741670;
        }
      }
    }
    else
    {
      *a1 = -1073676282;
    }
    v20 = 1;
    v15 = v69;
    goto LABEL_81;
  }
  v61 = 0;
  v57 = a3;
  v59 = (__int64)a5;
  v64 = a9;
  v60 = a6;
  v63 = (__int64)a8;
  v56 = a1;
  v58 = a4;
  v62 = NewIrql;
  Ndis::BindEngine::BeginPolicyUpdates(&v49->BindEngine);
  DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                       &BindingAdapter->Bindings,
                                                       &NewIrql->Bind,
                                                       BindingAdapter,
                                                       4LL);
  if ( DynamicBinding )
  {
    DynamicBinding->BindState.m_AdditionalContext = &v56;
    if ( Ndis::BindState::SetBinding(
           &DynamicBinding->BindState,
           BindingEnabled,
           Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed) )
    {
      memset(v65, 0, 0xA0uLL);
      if ( (unsigned __int8)byte_1C00E673B >= 4u )
      {
        ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v65);
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Zq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v24,
            0x1Cu,
            0x16u,
            (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
            *(unsigned __int16 **)&v65[8],
            *(_QWORD *)v65);
      }
    }
  }
  else
  {
    *a1 = -1073741670;
  }
  Ndis::BindEngine::EndPolicyUpdates(&BindingAdapter->BindEngine);
  Ndis::BindEngine::ApplyBindChanges(&BindingAdapter->BindEngine, RunSynchronous, 0);
  if ( !*v57 && !*a1 )
    *a1 = -1073676271;
  v20 = 0;
  ndisDereferenceProtocol(NewIrql, v25, 9u, v26);
  ndisDereferenceMiniport((__int64)BindingAdapter, 0x2Cu);
  v15 = 0;
LABEL_81:
  if ( a12 )
    *a12 = *a1;
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v20 )
        ndisDereferenceProtocol(NewIrql, v18, 9u, v19);
      if ( v66 )
        ndisRemoveOpenFromGlobalList((char)OpenBlock);
      if ( OpenBlock )
      {
        StatusUnbindWorkItem = OpenBlock->StatusUnbindWorkItem;
        if ( StatusUnbindWorkItem )
        {
          ExFreePoolWithTag(StatusUnbindWorkItem, 0);
          OpenBlock->StatusUnbindWorkItem = 0LL;
        }
        ndisFreeOpenBlock(OpenBlock);
      }
      *a3 = 0LL;
    }
  }
  else if ( v15 && BindingAdapter )
  {
    ndisNotifyWmiBindUnbind((__int64)BindingAdapter, (__int64)NewIrql, 1);
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return (_UNKNOWN **)WPP_RECORDER_SF_qqqL(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v46,
                          6u,
                          0x19u,
                          (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
                          (char)NewIrql,
                          (char)v49,
                          (char)OpenBlock,
                          *a1);
  return result;
}
