/*
 * XREFs of ndisOpenAdapterLegacyProtocol @ 0x1C005EBE8
 * Callers:
 *     ?ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00FDA58 (-ndisBindLegacyProtocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAUNDIS_BIND_PR.c)
 *     NdisOpenAdapter @ 0x1C01178C0 (NdisOpenAdapter.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C001A488 (ndisReferenceProtocol.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001B314 (ndisUpdateCheckForLoopbackFlag.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C6F8 (ndisMSwapOpenHandlers.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     WPP_SF_Zq @ 0x1C004F838 (WPP_SF_Zq.c)
 *     WPP_SF_qZZ @ 0x1C005E828 (WPP_SF_qZZ.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C006439C (ndisRemoveOpenFromGlobalList.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00B4308 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisMDoMiniportOp @ 0x1C00BD33C (ndisMDoMiniportOp.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00BEB5C (ndisNotifyWmiBindUnbind.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BFE54 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00C0590 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00C2A58 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisPktMonOpenRegister @ 0x1C00C37D0 (ndisPktMonOpenRegister.c)
 *     ndisAllocateOpenBlock @ 0x1C00C3978 (ndisAllocateOpenBlock.c)
 *     ndisFreeOpenBlock @ 0x1C00EC434 (ndisFreeOpenBlock.c)
 *     ndisInvokeOpenAdapterComplete @ 0x1C00EE19C (ndisInvokeOpenAdapterComplete.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C01075F8 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 *     ?CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_NDIS_MINIPORT_BLOCK@@W4Flags@BindSource@2@@Z @ 0x1C0107630 (-CreateDynamicBinding@BindStack@Ndis@@QEAAPEAUNDIS_BIND_PROTOCOL_LINK@@AEAV-$KRef@UNDIS_BIND_PRO.c)
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C0114F94 (ndisFindRootDevice.c)
 */

void __fastcall ndisOpenAdapterLegacyProtocol(
        int *a1,
        __int64 a2,
        struct _NDIS_OPEN_BLOCK **a3,
        _DWORD *a4,
        _DWORD *a5,
        unsigned int a6,
        _NDIS_PROTOCOL_BLOCK *a7,
        void *a8,
        PCUNICODE_STRING SourceString,
        char a10,
        KIRQL NewIrql,
        int *a12)
{
  __int64 BindingAdapter; // rbx
  struct _NDIS_OPEN_BLOCK *OpenBlock; // rsi
  char v14; // r15
  _NDIS_PROTOCOL_BLOCK *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // r8
  char v20; // r12
  _UNICODE_STRING *BindDeviceName; // r15
  _UNICODE_STRING *RootDeviceName; // r12
  struct NDIS_BIND_PROTOCOL_LINK *DynamicBinding; // r15
  __int64 v24; // rdx
  KIRQL v25; // al
  __int64 v26; // rcx
  _DWORD *v27; // rax
  KSPIN_LOCK *v28; // r12
  KIRQL v29; // al
  _QWORD *v30; // r13
  _DWORD *v31; // rcx
  _DWORD *v32; // r15
  _BYTE *v33; // r15
  _DWORD *v34; // r14
  int v35; // eax
  _QWORD *v36; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  int v38; // edx
  __int64 v39; // rcx
  int *v40; // rcx
  _QWORD *v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rcx
  __int64 v46; // [rsp+28h] [rbp-D8h]
  unsigned int i; // [rsp+40h] [rbp-C0h]
  __int64 v48; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v49[2]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD *v50; // [rsp+58h] [rbp-A8h]
  _QWORD *PoolWithTag; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING *v52; // [rsp+68h] [rbp-98h]
  _UNICODE_STRING *v53; // [rsp+70h] [rbp-90h]
  _DWORD *v54; // [rsp+78h] [rbp-88h]
  _DWORD *v55; // [rsp+80h] [rbp-80h]
  UNICODE_STRING String1; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v57[8]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v58[26]; // [rsp+E0h] [rbp-20h] BYREF
  char v59; // [rsp+1C0h] [rbp+C0h]
  char v61; // [rsp+208h] [rbp+108h]
  KIRQL NewIrqla; // [rsp+210h] [rbp+110h]

  BindingAdapter = 0LL;
  *(_DWORD *)&String1.Length = 2359330;
  PoolWithTag = 0LL;
  OpenBlock = 0LL;
  v59 = 0;
  v14 = 0;
  v48 = 0LL;
  v61 = 0;
  String1.Buffer = L"\\??\\ROOT#VMS_VSMP";
  v17 = a7;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qZZ(0x15u, a2, (__int64)a7, &a7->Name.Length, &SourceString->Length);
  ndisReferencePackage(&ndisPkgs);
  *a3 = 0LL;
  if ( !ndisReferenceProtocol((__int64)a7, 9u) )
  {
    *a1 = -1073676286;
    v20 = 0;
    goto LABEL_81;
  }
  BindDeviceName = a7->BindDeviceName;
  v52 = BindDeviceName;
  if ( BindDeviceName )
  {
    RootDeviceName = a7->RootDeviceName;
    BindingAdapter = (__int64)a7->BindingAdapter;
    v53 = RootDeviceName;
    v48 = BindingAdapter;
    goto LABEL_18;
  }
  ndisFindRootDevice(SourceString, (__int64)&v48, 44);
  BindingAdapter = v48;
  if ( !v48 )
  {
    BindDeviceName = v52;
    RootDeviceName = v53;
    v61 = 1;
LABEL_18:
    a7->BindDeviceName = 0LL;
    if ( BindingAdapter && (v50 = (_DWORD *)(BindingAdapter + 120), (*(_DWORD *)(BindingAdapter + 120) & 0x10000) != 0) )
    {
      if ( RtlPrefixUnicodeString(&String1, (PCUNICODE_STRING)(BindingAdapter + 360), 1u) )
      {
        *a1 = -1073676281;
      }
      else
      {
        OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(BindingAdapter, a7, 0LL);
        if ( OpenBlock )
        {
          v25 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
          OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
          ndisGlobalOpenList = OpenBlock;
          v59 = 1;
          KeReleaseSpinLock(&ndisGlobalOpenListLock, v25);
          v18 = a6;
          OpenBlock->ProtocolBindingContext = a8;
          OpenBlock->BindDeviceName = BindDeviceName;
          OpenBlock->RootDeviceName = RootDeviceName;
          OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)BindingAdapter;
          OpenBlock->ProtocolHandle = a7;
          *a3 = OpenBlock;
          if ( (*(_DWORD *)(BindingAdapter + 568) & 0x80000001) == 0x80000001 )
          {
            LODWORD(v26) = 0;
            if ( a6 )
            {
              v27 = a5;
              do
              {
                if ( *v27 == 3 )
                  break;
                LODWORD(v26) = v26 + 1;
                ++v27;
              }
              while ( (unsigned int)v26 < a6 );
            }
          }
          else
          {
            v26 = 0LL;
            if ( a6 )
            {
              v19 = *(unsigned int *)(BindingAdapter + 464);
              do
              {
                if ( a5[v26] == (_DWORD)v19 )
                  break;
                v26 = (unsigned int)(v26 + 1);
              }
              while ( (unsigned int)v26 < a6 );
            }
          }
          if ( (_DWORD)v26 == a6 )
          {
            *a1 = -1073676263;
          }
          else
          {
            *a4 = v26;
            v55 = (_DWORD *)(BindingAdapter + 124);
            if ( (*(_DWORD *)(BindingAdapter + 124) & 0x40000000) != 0
              && (v49[0] = 524672,
                  v49[1] = 1,
                  (unsigned int)ndisMDoMiniportOp(BindingAdapter, 0, 66078, (unsigned int)v49, 8, 1, 1)) )
            {
              *a1 = -1073741823;
            }
            else
            {
              v28 = (KSPIN_LOCK *)(BindingAdapter + 96);
              v29 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BindingAdapter + 96));
              v30 = (_QWORD *)(BindingAdapter + 520);
              BindingAdapter = v48;
              *v30 = KeGetCurrentThread();
              v31 = v50;
              NewIrqla = v29;
              v32 = (_DWORD *)(BindingAdapter + 1864);
              *(_DWORD *)(BindingAdapter + 1864) = 984196;
              LODWORD(v31) = *v31;
              v54 = (_DWORD *)(BindingAdapter + 1864);
              if ( ((unsigned int)v31 & 0x40000) == 0 )
              {
                v33 = (_BYTE *)(BindingAdapter + 89);
                if ( *(_BYTE *)(BindingAdapter + 89) )
                {
                  v34 = v54;
                  do
                  {
                    *v30 = 0LL;
                    *v34 = 0;
                    KeReleaseSpinLockFromDpcLevel(v28);
                    for ( i = 0; i < 0x32; ++i )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v28);
                    *v30 = KeGetCurrentThread();
                    *v34 = 984203;
                  }
                  while ( *v33 );
                  BindingAdapter = v48;
                  v17 = a7;
                }
                *v33 = 1;
                v32 = v54;
                *(_DWORD *)(BindingAdapter + 1868) = 984203;
                BindingAdapter = v48;
                *(_QWORD *)(v48 + 1872) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(a1, OpenBlock, BindingAdapter);
              if ( !*a1 )
              {
                if ( (unsigned __int8)byte_1C00A0255 >= 4u )
                  WPP_SF_qqq(0x17u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, OpenBlock, v17, BindingAdapter);
                if ( v61 )
                {
                  BindingAdapter = v48;
                  OpenBlock->OpenFlags |= 0x400000u;
                }
                v35 = *v50;
                if ( (*v50 & 0x20000000) == 0 && (*v50 & 0x20000) == 0 )
                {
                  ndisMSwapOpenHandlers(BindingAdapter, 2u);
                  v35 = *v50;
                }
                if ( (v35 & 0x20000) != 0 && OpenBlock->ProtocolHandle->CoAfRegisterNotifyHandler )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedIncrement(&OpenBlock->PendingAfNotifications);
                    v36 = PoolWithTag;
                    BindingAdapter = v48;
                    *PoolWithTag = OpenBlock;
                    v36[1] = 0LL;
                    v36[3] = ndisMFinishQueuedPendingOpen;
                    v36[4] = v36;
                  }
                  else if ( (unsigned __int8)byte_1C00A0262 >= 2u )
                  {
                    WPP_SF_q(0x18u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v50 & 0x40000) == 0 )
              {
                *(_BYTE *)(BindingAdapter + 89) = 0;
                *(_DWORD *)(BindingAdapter + 1868) = 0;
                *(_QWORD *)(BindingAdapter + 1872) = 0LL;
              }
              *v30 = 0LL;
              *v32 = 0;
              KeReleaseSpinLock(v28, NewIrqla);
              if ( !*a1 )
              {
                Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5144));
                CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(BindingAdapter + 5144));
                OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
                if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                  *a1 = -1073741670;
                Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5144));
                if ( !*a1 )
                {
                  v38 = 0;
                  if ( (*v55 & 0x2000) != 0 )
                  {
                    v39 = *(_QWORD *)(BindingAdapter + 4016);
                    if ( v39 )
                    {
                      (*(void (__fastcall **)(_QWORD, _QWORD))(v39 + 32))(*(_QWORD *)(v39 + 8), 0LL);
                      v38 = *a1;
                    }
                  }
                  v40 = a12;
                  if ( a12 )
                  {
                    a12 = 0LL;
                    *v40 = v38;
                  }
                  ndisPktMonOpenRegister(OpenBlock);
                  v41 = PoolWithTag;
                  if ( PoolWithTag )
                  {
                    v42 = (unsigned int)*a1;
                    if ( v17->MajorNdisVersion < 6u )
                      OpenBlock->ProtocolHandle->OpenAdapterCompleteHandler(OpenBlock->ProtocolBindingContext, v42, v42);
                    else
                      ndisInvokeOpenAdapterComplete(OpenBlock, v42);
                    ndisUpdateCheckForLoopbackFlag(BindingAdapter);
                    if ( v61 )
                    {
                      LOBYTE(v44) = 1;
                      ndisNotifyWmiBindUnbind(v43, v17, v44);
                      v61 = 0;
                    }
                    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v41 + 1), (WORK_QUEUE_TYPE)40);
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
    v14 = v61;
    goto LABEL_81;
  }
  memset(v57, 0, sizeof(v57));
  v57[1] = a3;
  v57[3] = a5;
  v57[7] = SourceString;
  LODWORD(v57[4]) = a6;
  v57[6] = a8;
  v57[0] = a1;
  v57[2] = a4;
  v57[5] = a7;
  Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v48 + 5144));
  DynamicBinding = (struct NDIS_BIND_PROTOCOL_LINK *)Ndis::BindStack::CreateDynamicBinding(
                                                       BindingAdapter + 5040,
                                                       &a7->Bind,
                                                       BindingAdapter,
                                                       4LL);
  if ( DynamicBinding )
  {
    DynamicBinding->BindState.m_AdditionalContext = v57;
    if ( Ndis::BindState::SetBinding(
           &DynamicBinding->BindState,
           BindingEnabled,
           Reason_DisabledByLegacyIoctl|Reason_DriverRejectedBinding|Reason_LastRestartAttemptFailed|Reason_LastBindAttemptFailed)
      && (unsigned __int8)byte_1C00A026B >= 4u )
    {
      ndisGetBindLinkNameForTracing(DynamicBinding, (struct NDIS_PNPTRACE_LOCALS *)v58);
      WPP_SF_Zq(0x16u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (const wchar_t *)v58[1], v58[0]);
    }
  }
  else
  {
    *a1 = -1073741670;
  }
  Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(BindingAdapter + 5144));
  Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(BindingAdapter + 5144), RunSynchronous, 0);
  if ( !*(_QWORD *)v57[1] && !*a1 )
    *a1 = -1073676271;
  v20 = 0;
  ndisDereferenceProtocol(a7, v24, 9u);
  ndisDereferenceMiniport(BindingAdapter, 0x2Cu);
  v14 = 0;
LABEL_81:
  if ( a12 )
    *a12 = *a1;
  if ( *a1 )
  {
    if ( *a1 != 259 )
    {
      if ( v20 )
        ndisDereferenceProtocol(v17, v18, 9u);
      if ( v59 )
        ndisRemoveOpenFromGlobalList(OpenBlock);
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
  else if ( v14 && BindingAdapter )
  {
    LOBYTE(v19) = 1;
    ndisNotifyWmiBindUnbind(BindingAdapter, v17, v19);
  }
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
  {
    LODWORD(v46) = *a1;
    WPP_SF_qqqL(0x19u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, v17, BindingAdapter, OpenBlock, v46);
  }
}
