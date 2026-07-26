/*
 * XREFs of ndisIndicateStatusInternal @ 0x1C0018E1C
 * Callers:
 *     ndisUpdateOperationalStatus @ 0x1C0017108 (ndisUpdateOperationalStatus.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisFIndicateStatusInternal @ 0x1C001817C (ndisFIndicateStatusInternal.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C00188F4 (ndisIndicateInitialStateToBinding.c)
 *     NdisMIndicateStatus @ 0x1C0060B30 (NdisMIndicateStatus.c)
 *     ndisSendSystemPowerStateIndication @ 0x1C0069D10 (ndisSendSystemPowerStateIndication.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     NdisDereferenceWithTag @ 0x1C000AB90 (NdisDereferenceWithTag.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ndisMRestoreOpenHandlers @ 0x1C0010C30 (ndisMRestoreOpenHandlers.c)
 *     ndisMIndicateReceiveFilterCapsChange @ 0x1C0014368 (ndisMIndicateReceiveFilterCapsChange.c)
 *     ndisMIndicateNicSwitchCapsChange @ 0x1C0014404 (ndisMIndicateNicSwitchCapsChange.c)
 *     ndisDeletePatternEntry @ 0x1C0014B7C (ndisDeletePatternEntry.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisScheduleWorkItemInternal @ 0x1C00170D0 (ndisScheduleWorkItemInternal.c)
 *     ndisInvokeStatus @ 0x1C0017254 (ndisInvokeStatus.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0019904 (ndisWriteWmiStatusIndication.c)
 *     ndisIfSetInterfaceState @ 0x1C0019BD4 (ndisIfSetInterfaceState.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C0019F54 (ndisIndicateOffloadChangeInternal.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001C600 (ndisCancelMediaDisconnectTimer.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C6F8 (ndisMSwapOpenHandlers.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C0025324 (ndisSetMediaDisconnectTimer.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C003D2DC (McTemplateK0jqxqd.c)
 *     ndisUpdateMiniportPortStates @ 0x1C003E658 (ndisUpdateMiniportPortStates.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     ndisIfScheduleTimestampCapabilityChangeNotification @ 0x1C00429B8 (ndisIfScheduleTimestampCapabilityChangeNotification.c)
 *     McTemplateK0jqxqdq @ 0x1C00434F0 (McTemplateK0jqxqdq.c)
 *     WPP_SF_qLq @ 0x1C0043DA4 (WPP_SF_qLq.c)
 *     ndisMAllocateRequest @ 0x1C0045580 (ndisMAllocateRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C0048694 (ndisQueueRequestOnTopAsync.c)
 *     ndisOpenIndicatePMCapabilities @ 0x1C004B0E0 (ndisOpenIndicatePMCapabilities.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004BB4C (ndisUpdateAndIndicatePMCapabilities.c)
 *     WPP_SF_qLLL @ 0x1C0061844 (WPP_SF_qLLL.c)
 *     ndisMIndicateHwTimestampCapabilitiesChange @ 0x1C0062A74 (ndisMIndicateHwTimestampCapabilitiesChange.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0062CD0 (ndisMIndicateQosParametersChange.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C006BC04 (ndisTopTcpConnectionOffloadStatus.c)
 *     ndisMFinishClose @ 0x1C01168D0 (ndisMFinishClose.c)
 */

char __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, __int128 *a2)
{
  __int64 v2; // rdi
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  void *v4; // rbx
  KIRQL v5; // r15
  unsigned int v6; // r12d
  __int128 *v7; // r14
  unsigned int v8; // eax
  int v9; // r13d
  __int64 (__fastcall *v10)(); // rax
  __int64 (__fastcall *v11)(); // rax
  __int64 v12; // rdx
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm1
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // r15
  _NDIS_MINIPORT_BLOCK *BaseMiniport; // rbx
  char v23; // r15
  char v24; // r12
  KIRQL v25; // al
  struct _NDIS_M_DRIVER_BLOCK *v26; // r14
  KIRQL v27; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rdi
  bool v29; // zf
  int v30; // r12d
  KIRQL v31; // al
  KIRQL v32; // di
  ULONG_PTR v33; // rcx
  struct _KEVENT *v34; // rcx
  char v35; // bl
  unsigned int *v36; // r15
  bool v37; // cl
  KIRQL v38; // bl
  __int64 v39; // rdx
  char v40; // bl
  __int64 OpenQueue; // rdi
  __int64 v42; // r15
  KIRQL v43; // bl
  unsigned int v44; // ebx
  int v45; // ebx
  int v46; // ebx
  bool v47; // bl
  unsigned int v48; // eax
  _NET_IF_MEDIA_CONNECT_STATE v49; // ecx
  bool v50; // cf
  unsigned int v51; // ecx
  unsigned __int16 v52; // ax
  char v53; // bl
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned int Flags; // edx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 (__fastcall *v64)(); // rax
  __int64 v65; // rcx
  __int64 v66; // r9
  __int64 v67; // rax
  void *v68; // r15
  int v69; // ebx
  KIRQL v70; // al
  _NET_IF_MEDIA_DUPLEX_STATE MiniportMediaDuplexState; // eax
  __int64 v72; // rbx
  void **v73; // rcx
  int v74; // eax
  __int64 v75; // r9
  void *v76; // r8
  void (__fastcall *v77)(_QWORD); // rax
  unsigned int PnPFlags; // eax
  int Src; // [rsp+20h] [rbp-E0h]
  char v81; // [rsp+50h] [rbp-B0h]
  bool v82; // [rsp+51h] [rbp-AFh]
  bool v83; // [rsp+52h] [rbp-AEh]
  char v84; // [rsp+53h] [rbp-ADh]
  bool v85; // [rsp+54h] [rbp-ACh]
  char v86; // [rsp+55h] [rbp-ABh]
  bool v87; // [rsp+56h] [rbp-AAh]
  KIRQL v88; // [rsp+56h] [rbp-AAh]
  unsigned int v89; // [rsp+58h] [rbp-A8h]
  char v90; // [rsp+5Ch] [rbp-A4h]
  char v91; // [rsp+5Dh] [rbp-A3h]
  char v92; // [rsp+5Eh] [rbp-A2h] BYREF
  char v93; // [rsp+5Fh] [rbp-A1h]
  char v94; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall *v95)(); // [rsp+68h] [rbp-98h]
  int v96; // [rsp+70h] [rbp-90h]
  int v97; // [rsp+74h] [rbp-8Ch]
  int v98[2]; // [rsp+78h] [rbp-88h]
  void *v99; // [rsp+80h] [rbp-80h]
  struct _NDIS_MINIPORT_BLOCK *v100; // [rsp+88h] [rbp-78h]
  int v101[2]; // [rsp+90h] [rbp-70h]
  __int64 v102; // [rsp+98h] [rbp-68h]
  void *v103; // [rsp+A0h] [rbp-60h]
  __int128 v104; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v105; // [rsp+C0h] [rbp-40h]
  __int128 v106; // [rsp+D0h] [rbp-30h]
  __int128 v107; // [rsp+E0h] [rbp-20h]
  __int128 v108; // [rsp+F0h] [rbp-10h]
  __int128 v109; // [rsp+100h] [rbp+0h]
  __int128 v110; // [rsp+110h] [rbp+10h]
  _QWORD v111[14]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v112; // [rsp+190h] [rbp+90h] BYREF
  unsigned int ifOperStatusFlags; // [rsp+198h] [rbp+98h]
  _QWORD v114[5]; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = *((_QWORD *)a2 + 6);
  v3 = a1;
  v4 = (void *)*((_QWORD *)a2 + 4);
  v5 = 2;
  v6 = *((_DWORD *)a2 + 5);
  v7 = a2;
  v8 = *((_DWORD *)a2 + 14);
  v100 = a1;
  v9 = 0;
  v86 = 0;
  v83 = 0;
  v94 = 0;
  v84 = 0;
  v91 = 0;
  v82 = 0;
  v81 = 0;
  v93 = 0;
  v85 = 0;
  v87 = 0;
  v92 = 0;
  *(_QWORD *)v101 = a2;
  v90 = 2;
  v96 = v6;
  v99 = (void *)v2;
  v89 = v8;
  v103 = v4;
  if ( (unsigned __int8)byte_1C00A0267 >= 4u )
    WPP_SF_qLq(63LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, v6, v4);
  v10 = 0LL;
  if ( v4 != &ndisIntReqWmi )
    v10 = (__int64 (__fastcall *)())v4;
  v95 = v10;
  if ( v10 )
  {
    v29 = *(_BYTE *)v10 == 18;
    v95 = v10;
    if ( !v29 )
    {
      if ( (unsigned __int8)byte_1C00A0267 >= 2u )
        WPP_SF_q(64LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v3);
      v95 = 0LL;
    }
  }
  LOBYTE(v11) = v6 - 11;
  v12 = 1LL;
  v13 = v7[1];
  v104 = *v7;
  v105 = v13;
  v14 = v7[3];
  v106 = v7[2];
  v107 = v14;
  v15 = v7[5];
  v108 = v7[4];
  v109 = v15;
  v110 = v7[6];
  if ( v6 - 1073807371 > 1 )
  {
    v16 = 40LL;
    v17 = 1073807371LL;
    if ( v6 == 1073807383 )
    {
      v46 = *((_DWORD *)v7 + 6);
      v3->LinkStateIndicationFlags |= 7u;
      v47 = (v46 & 8) != 0;
      v83 = v47;
      if ( !v2 )
        goto LABEL_14;
      v48 = v89;
      v83 = v47;
      if ( v89 < 0x28 )
        goto LABEL_14;
      if ( (unsigned __int8)byte_1C00A0267 >= 4u )
      {
        WPP_SF_qD(65LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v3, *(unsigned int *)(v2 + 4));
        v48 = v89;
        v16 = 40LL;
      }
      if ( v48 == -2 )
      {
        v89 = 40;
        *((_DWORD *)v7 + 14) = 40;
      }
      v49 = *(_DWORD *)(v2 + 4);
      if ( v49 == MediaConnectStateConnected )
      {
        v9 = 1073807371;
        v82 = v3->MediaConnectState == MediaConnectStateConnected;
        v85 = v3->MediaConnectState != MediaConnectStateConnected;
      }
      else if ( v49 == MediaConnectStateDisconnected )
      {
        v9 = 1073807372;
        v82 = v3->MediaConnectState != MediaConnectStateConnected;
        v85 = v3->MediaConnectState == MediaConnectStateConnected;
      }
      else
      {
        v82 = 1;
      }
      v50 = v3->MajorNdisVersion < 6u;
      v3->MediaConnectState = v49;
      v3->MediaDuplexState = *(_DWORD *)(v2 + 8);
      v3->RcvLinkSpeed = *(_QWORD *)(v2 + 24);
      v3->XmitLinkSpeed = *(_QWORD *)(v2 + 16);
      v3->PauseFunctions = *(_DWORD *)(v2 + 32);
      if ( v50 )
      {
        MaxXmitLinkSpeed = v3->MaxXmitLinkSpeed;
        if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *(_QWORD *)(v2 + 16) )
          v3->MaxXmitLinkSpeed = *(_QWORD *)(v2 + 16);
        MaxRcvLinkSpeed = v3->MaxRcvLinkSpeed;
        if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *(_QWORD *)(v2 + 24) )
          v3->MaxRcvLinkSpeed = *(_QWORD *)(v2 + 24);
        v60 = v3->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        if ( v60 == 0x40000000 || v60 < *(_QWORD *)(v2 + 16) )
          v3->TopFilterRestartAttributes.MaxXmitLinkSpeed = *(_QWORD *)(v2 + 16);
        v61 = v3->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        if ( v61 == 0x40000000 || v61 < *(_QWORD *)(v2 + 24) )
          v3->TopFilterRestartAttributes.MaxRcvLinkSpeed = *(_QWORD *)(v2 + 24);
      }
      LOBYTE(v16) = 2;
      v3->AutoNegotiationFlags = *(_DWORD *)(v2 + 36);
      v84 = ndisIfSetInterfaceState(v3, 1LL, v16);
      v83 = v47;
    }
    if ( v6 == 1073807394 )
    {
      LODWORD(v11) = ndisUpdateMiniportPortStates(v3, v7, v16, v17);
      if ( (_DWORD)v11 )
      {
        if ( (unsigned __int8)byte_1C00A0267 < 4u )
          return (char)v11;
        v64 = v95;
        v65 = 66LL;
        v66 = 1073807394LL;
        goto LABEL_210;
      }
      if ( *((_DWORD *)v7 + 4) )
        goto LABEL_13;
      LOBYTE(v63) = 2;
      LOBYTE(v62) = 1;
      v84 = ndisIfSetInterfaceState(v3, v62, v63);
    }
    if ( v6 == 1073807379 )
    {
      v3->LinkStateIndicationFlags |= 2u;
      v67 = ndisMAllocateRequest(&ndisIntReqGeneric, 65799LL, 0LL, 0LL, 4);
      v68 = (void *)v67;
      if ( v67 )
      {
        *(_DWORD *)(v67 + 88) |= 2u;
        v3->MiniportThread = 0LL;
        v3->LockDbg = 0;
        KeReleaseSpinLock(&v3->Lock, 2u);
        v69 = ndisQueueRequestOnTopAsync(v3, v68);
        v70 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
        v3->MiniportThread = KeGetCurrentThread();
        v90 = v70;
        v3->LockDbg = 725086;
        if ( v69 != 259 )
          ExFreePoolWithTag(v68, 0);
      }
      v5 = v90;
      v94 = 1;
    }
    if ( ((v6 - 1073872897) & 0xFFFFFFFD) == 0 )
    {
      LOBYTE(v11) = ndisTopTcpConnectionOffloadStatus(v3, v7, v16, v17);
      if ( !(_BYTE)v11 )
      {
        if ( (unsigned __int8)byte_1C00A0267 >= 4u )
          LOBYTE(v11) = WPP_SF_D(67LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v6);
        return (char)v11;
      }
    }
    if ( v6 == 1073807384 && (*((_DWORD *)v7 + 6) & 4) != 0 )
    {
      LOBYTE(v16) = v5;
      v85 = 1;
      LOBYTE(v12) = 1;
      v3->MediaConnectState = MediaConnectStateConnected;
      v9 = 1073807371;
      v84 = ndisIfSetInterfaceState(v3, v12, v16);
      memset(v114, 0, sizeof(v114));
      MiniportMediaDuplexState = v3->MiniportMediaDuplexState;
      LOBYTE(v12) = 1;
      DWORD2(v105) |= 0x1000u;
      LODWORD(v114[1]) = MiniportMediaDuplexState;
      v114[2] = v3->MiniportXmitLinkSpeed;
      v114[3] = v3->MiniportRcvLinkSpeed;
      v114[4] = *(_QWORD *)&v3->MiniportPauseFunctions;
      *(_QWORD *)&v107 = v114;
      v114[0] = 0x100280180LL;
      DWORD1(v105) = 1073807383;
      DWORD2(v107) = 40;
      goto LABEL_14;
    }
LABEL_13:
    LOBYTE(v12) = 1;
LABEL_14:
    if ( v84 )
    {
      IfBlock = v3->IfBlock;
      ifOperStatusFlags = 0;
      v91 = v12;
      v112 = 786816LL;
      HIDWORD(v112) = IfBlock->ifOperStatus;
      ifOperStatusFlags = IfBlock->ifOperStatusFlags;
      memset(v111, 0, sizeof(v111));
      LODWORD(v111[0]) = 7340440;
      v111[6] = &v112;
      v111[1] = v3;
      HIDWORD(v111[2]) = 1073807395;
      LODWORD(v111[7]) = 12;
    }
    v97 = 0;
    v3->MiniportThread = 0LL;
    v18 = (__int64)v3;
    v3->LockDbg = 0;
    *(_QWORD *)v98 = v3;
    KeReleaseSpinLock(&v3->Lock, v5);
    v20 = ndisReferenceTopMiniportByNameForNsi(
            (__int64)v3,
            0x200000,
            v19,
            v3->MiniportMediaType == NdisMediumNative802_11,
            1u,
            0x39u);
    v102 = v20;
    v21 = v20;
    if ( v20 )
    {
      if ( (struct _NDIS_MINIPORT_BLOCK *)v20 == v3 )
      {
        BaseMiniport = v3->BaseMiniport;
        v23 = 0;
        v24 = 0;
        v25 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
        v26 = ndisMiniDriverList;
        do
        {
          if ( !v26 )
            break;
          KeReleaseSpinLock(&ndisMiniDriverListLock, v25);
          v27 = KeAcquireSpinLockRaiseToDpc(&v26->Ref.SpinLock);
          MiniportQueue = v26->MiniportQueue;
          v88 = v27;
          do
          {
            if ( !MiniportQueue )
              break;
            if ( MiniportQueue == BaseMiniport )
            {
              v23 = 1;
              if ( ndisReferenceMiniport((__int64)BaseMiniport) )
              {
                v24 = 1;
              }
              else if ( (BaseMiniport->Flags & 0x80200020) == 0
                     && (BaseMiniport->PnPFlags & 0x1084110) == 0
                     && BaseMiniport->PnPDeviceState == NdisPnPDeviceStarted
                     && BaseMiniport->CurrentDevicePowerState == PowerDeviceD0
                     && ndisReferenceMiniport((__int64)BaseMiniport) )
              {
                v24 = 1;
              }
            }
            MiniportQueue = MiniportQueue->NextMiniport;
          }
          while ( !v23 );
          KeReleaseSpinLock(&v26->Ref.SpinLock, v88);
          v25 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
          v26 = v26->NextDriver;
        }
        while ( !v23 );
        KeReleaseSpinLock(&ndisMiniDriverListLock, v25);
        v3 = v100;
        v7 = *(__int128 **)v101;
        v21 = v102;
        v29 = v24 == 0;
        if ( v24 )
          *(_QWORD *)v98 = v100->BaseMiniport;
        v30 = v97;
        v87 = !v29;
      }
      else
      {
        v30 = -1073741823;
      }
      v31 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v21 + 96));
      *(_QWORD *)(v21 + 520) = KeGetCurrentThread();
      v32 = v31;
      v33 = *(_QWORD *)(v21 + 4936);
      *(_DWORD *)(v21 + 1864) = 71257;
      NdisDereferenceWithTag(v33, 1u);
      v29 = (*(_DWORD *)(v21 + 3140))-- == 1;
      if ( v29 )
      {
        v34 = *(struct _KEVENT **)(v21 + 3152);
        if ( v34 )
          KeSetEvent(v34, 0, 0);
      }
      *(_QWORD *)(v21 + 520) = 0LL;
      *(_DWORD *)(v21 + 1864) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v21 + 96), v32);
      ndisDereferenceMiniport(v21, 0x39u);
      v18 = *(_QWORD *)v98;
    }
    else
    {
      v30 = -1073741823;
    }
    v35 = 0;
    v36 = (unsigned int *)v99;
    if ( !v30 )
      v35 = v91;
    ndisWriteWmiStatusIndication(v18, *(_QWORD *)(v18 + 3888), (int)v7, v96, v99, v89);
    v37 = 0;
    if ( !v30 )
      v37 = v85;
    if ( v37 )
      ndisWriteWmiStatusIndication(v18, *(_QWORD *)(v18 + 3888), (int)v7, v9, 0LL, 0);
    if ( v35 )
      ndisWriteWmiStatusIndication(v18, *(_QWORD *)(v18 + 3888), (int)v7, 1073807395, &v112, 12);
    v38 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
    v3->MiniportThread = KeGetCurrentThread();
    v3->LockDbg = 725217;
    if ( v87 )
      ndisDereferenceMiniport(v18, 0x38u);
    if ( v96 != 1073807383 )
      v9 = v96;
    v39 = 1073807371LL;
    if ( v9 == 1073807384 )
    {
      v9 = 1073807384;
      if ( (*((_BYTE *)v7 + 24) & 4) != 0 )
        v9 = 1073807371;
    }
    if ( v9 == 1073872902 )
    {
      v81 = 1;
      v40 = 1;
      ndisIndicateOffloadChangeInternal(v3, v36, v89);
    }
    else
    {
      if ( v9 > 1073872902 )
      {
        if ( v9 == 1073872912 )
        {
          ndisMIndicateReceiveFilterCapsChange((__int64)v3, 1073872912, v36, v89, 1);
        }
        else
        {
          v39 = 1073872960LL;
          if ( v9 == 1073872960 )
          {
            ndisMIndicateNicSwitchCapsChange(v3, 1073872960, v36, v89, 1);
          }
          else if ( v9 > 1073873055 )
          {
            if ( v9 <= 1073873057 )
            {
              ndisMIndicateQosParametersChange(v3);
            }
            else if ( (unsigned int)(v9 - 1074073600) <= 1 )
            {
              LOBYTE(Src) = 1;
              ndisMIndicateHwTimestampCapabilitiesChange(v3, (unsigned int)v9, v36, v89, Src, &v92);
              if ( v9 == 1074073601 )
              {
                if ( v92 )
                {
                  LOBYTE(v39) = v38;
                  ndisIfScheduleTimestampCapabilityChangeNotification(v3, v39);
                }
              }
            }
          }
        }
      }
      else
      {
        switch ( v9 )
        {
          case 1073807371:
            Flags = v3->Flags;
            ++v3->MediaSenseConnectCount;
            if ( (Flags & 0x20000000) == 0 )
            {
              v86 = 1;
              v57 = Flags;
              if ( (unsigned __int8)byte_1C00A0267 >= 4u )
              {
                WPP_SF_qLLL(
                  69LL,
                  &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
                  v3,
                  Flags,
                  v3->PnPFlags,
                  v3->CurrentDevicePowerState);
                v57 = v3->Flags;
              }
              Flags = v57;
              if ( byte_1C00A2084 < 0 )
              {
                McTemplateK0jqxqdq(
                  v57,
                  (unsigned int)&MiniportStatusIndicationConnect,
                  (_DWORD)v3 + 4040,
                  (_DWORD)v3 + 4040,
                  v3->IfIndex,
                  v3->NetLuid.Value,
                  v57,
                  v3->PnPFlags,
                  v3->CurrentDevicePowerState);
                Flags = v3->Flags;
              }
            }
            v39 = Flags | 0x20000000;
            v3->MediaConnectState = MediaConnectStateConnected;
            v3->Flags = v39;
            if ( !v83 )
            {
              v3->Flags = v39 | 0x4000000;
              ndisCancelMediaDisconnectTimer(v3);
            }
            break;
          case 1073807372:
            v39 = v3->Flags;
            v52 = v3->MediaSenseDisconnectCount + 1;
            v3->MediaSenseDisconnectCount = v52;
            if ( (v39 & 0x20000000) != 0 || v52 == 1 )
            {
              v53 = 1;
              v86 = 1;
              v56 = v39;
              if ( (unsigned __int8)byte_1C00A0267 >= 4u )
              {
                WPP_SF_qLLL(
                  68LL,
                  &WPP_f453a6740ca1326a168191528118e90e_Traceguids,
                  v3,
                  (unsigned int)v39,
                  v3->PnPFlags,
                  v3->CurrentDevicePowerState);
                v56 = v3->Flags;
              }
              v39 = v56;
              if ( byte_1C00A2084 < 0 )
              {
                McTemplateK0jqxqdq(
                  v56,
                  (unsigned int)&MiniportStatusIndicationDisconnect,
                  (_DWORD)v3 + 4040,
                  (_DWORD)v3 + 4040,
                  v3->IfIndex,
                  v3->NetLuid.Value,
                  v56,
                  v3->PnPFlags,
                  v3->CurrentDevicePowerState);
                v39 = v3->Flags;
              }
            }
            else
            {
              v53 = 0;
            }
            LODWORD(v39) = v39 & 0xDFFFFFFF;
            v3->MediaConnectState = MediaConnectStateDisconnected;
            v3->Flags = v39;
            if ( !v83 )
            {
              LODWORD(v39) = v39 | 0x4000000;
              v3->Flags = v39;
              if ( v53 )
                ndisSetMediaDisconnectTimer(v3);
            }
            break;
          case 1073807384:
            v82 = 1;
            if ( v89 >= 4 && (byte_1C00A2085 & 1) != 0 )
              McTemplateK0jqxq(
                0,
                (unsigned int)&MiniportStatusIndicationNetworkChange,
                (_DWORD)v3 + 4040,
                (_DWORD)v3 + 4040,
                v3->IfIndex,
                v3->NetLuid.Value,
                *v36);
            break;
          case 1073807395:
            v82 = 1;
            if ( v89 >= 0xC )
            {
              if ( (unsigned __int8)byte_1C00A0267 >= 4u )
                WPP_SF_qdD(70LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v3, v36[1], v36[2]);
              v51 = v36[1];
              if ( v51 == 1 )
              {
                if ( (byte_1C00A2085 & 1) != 0 )
                  McTemplateK0jqxqd(
                    1,
                    (unsigned int)&MiniportStatusIndicationOperStatusUp,
                    (_DWORD)v3 + 4040,
                    (_DWORD)v3 + 4040,
                    v3->IfIndex,
                    v3->NetLuid.Value,
                    1,
                    v36[2]);
              }
              else if ( (byte_1C00A2085 & 1) != 0 )
              {
                McTemplateK0jqxqd(
                  v51,
                  (unsigned int)&MiniportStatusIndicationOperStatusNotUp,
                  (_DWORD)v3 + 4040,
                  (_DWORD)v3 + 4040,
                  v3->IfIndex,
                  v3->NetLuid.Value,
                  v51,
                  v36[2]);
              }
            }
            break;
        }
      }
      v40 = 0;
    }
    v11 = (__int64 (__fastcall *)())&ndisIntReqWmi;
    if ( v103 != &ndisIntReqWmi )
    {
      OpenQueue = (__int64)v3->OpenQueue;
      if ( OpenQueue )
      {
        v11 = v95;
        while ( v11 && v11 != (__int64 (__fastcall *)())OpenQueue )
        {
          v42 = *(_QWORD *)(OpenQueue + 392);
LABEL_80:
          v40 = v81;
          OpenQueue = v42;
          if ( !v42 )
            goto LABEL_81;
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(OpenQueue + 232));
        if ( (*(_DWORD *)(OpenQueue + 224) & 0x8000) != 0 )
          goto LABEL_185;
        if ( v40 && *(_BYTE *)(*(_QWORD *)(OpenQueue + 24) + 56LL) < 6u )
        {
          if ( !v93 )
          {
            v72 = *(_QWORD *)(OpenQueue + 704);
            if ( v72 )
            {
              ndisReferenceMiniportNoCheck((__int64)v3, 0x36u);
              *(_QWORD *)(OpenQueue + 704) = 0LL;
              v93 = 1;
              ndisScheduleWorkItemInternal(v72);
            }
          }
          goto LABEL_185;
        }
        if ( v9 == 1073938515 )
          ndisOpenIndicatePMCapabilities(OpenQueue, v7);
        if ( v9 == 1073938513 )
        {
          if ( *((_DWORD *)v7 + 14) < 4u )
            goto LABEL_185;
          v73 = (void **)(OpenQueue + 504);
        }
        else
        {
          if ( v9 != 1073938514 )
          {
LABEL_66:
            v43 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(OpenQueue + 600));
            NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(OpenQueue + 592), 7u);
            ++*(_DWORD *)(OpenQueue + 228);
            KeReleaseSpinLock((PKSPIN_LOCK)(OpenQueue + 600), v43);
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(OpenQueue + 232));
            if ( *(_QWORD *)(OpenQueue + 208) )
            {
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(OpenQueue + 232));
              *(_DWORD *)(OpenQueue + 224) |= 0x100u;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(OpenQueue + 232));
              v3->MiniportThread = 0LL;
              v3->LockDbg = 0;
              KeReleaseSpinLockFromDpcLevel(&v3->Lock);
              if ( *(_BYTE *)(*(_QWORD *)(OpenQueue + 24) + 56LL) < 6u )
              {
                if ( !v82 && !*((_DWORD *)v7 + 4) )
                {
                  v74 = *((_DWORD *)v7 + 5);
                  if ( v74 == 1073807383 || v74 == 1073807384 && (*((_DWORD *)v7 + 6) & 4) != 0 )
                  {
                    v75 = 0LL;
                    v76 = 0LL;
                  }
                  else
                  {
                    v75 = v89;
                    v76 = v99;
                  }
                  (*(void (__fastcall **)(_QWORD, _QWORD, void *, __int64))(OpenQueue + 208))(
                    *(_QWORD *)(OpenQueue + 32),
                    (unsigned int)v9,
                    v76,
                    v75);
                  v77 = *(void (__fastcall **)(_QWORD))(OpenQueue + 216);
                  if ( v77 )
                    v77(*(_QWORD *)(OpenQueue + 32));
                }
              }
              else if ( !v94 )
              {
                v44 = *((_DWORD *)v7 + 5);
                if ( (unsigned __int8)byte_1C00A0267 >= 4u )
                  WPP_SF_qD(108LL, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, OpenQueue, v44);
                (*(void (__fastcall **)(_QWORD, __int128 *))(OpenQueue + 208))(*(_QWORD *)(OpenQueue + 32), v7);
                if ( (unsigned __int8)byte_1C00A0267 >= 4u )
                  WPP_SF_qD(109LL, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, OpenQueue, v44);
                if ( *((_DWORD *)v7 + 5) == 1073807384 && (*((_DWORD *)v7 + 6) & 4) != 0 )
                  ndisInvokeStatus(OpenQueue, (__int64)&v104);
                if ( v84 )
                  ndisInvokeStatus(OpenQueue, (__int64)v111);
              }
              KeAcquireSpinLockAtDpcLevel(&v3->Lock);
              v3->MiniportThread = KeGetCurrentThread();
              v3->LockDbg = 725575;
              KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(OpenQueue + 232));
              *(_DWORD *)(OpenQueue + 224) &= ~0x100u;
              KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(OpenQueue + 232));
            }
            v42 = *(_QWORD *)(OpenQueue + 392);
            KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(OpenQueue + 600));
            NdisDereferenceWithTag(*(_QWORD *)(OpenQueue + 592), 7u);
            v45 = --*(_DWORD *)(OpenQueue + 228);
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(OpenQueue + 600));
            if ( !v45 )
              ndisMFinishClose(OpenQueue);
            goto LABEL_79;
          }
          if ( *((_DWORD *)v7 + 14) < 4u )
          {
LABEL_185:
            v42 = *(_QWORD *)(OpenQueue + 392);
            KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(OpenQueue + 232));
LABEL_79:
            v11 = v95;
            goto LABEL_80;
          }
          v73 = (void **)(OpenQueue + 512);
        }
        if ( ndisDeletePatternEntry(v73, **((_DWORD **)v7 + 6)) )
        {
          --*((_DWORD *)v7 + 24);
          goto LABEL_66;
        }
        goto LABEL_185;
      }
LABEL_81:
      if ( v9 == 1073938516 )
        LOBYTE(v11) = ndisUpdateAndIndicatePMCapabilities(v3);
      if ( v86 )
      {
        LODWORD(v11) = *((_DWORD *)v7 + 6);
        if ( ((unsigned __int8)v11 & 2) == 0 )
        {
          PnPFlags = v3->PnPFlags;
          LOBYTE(v39) = 2;
          if ( v9 == 1073807371 )
          {
            v3->PnPFlags = PnPFlags & 0xEFFFFFFF;
            ndisMRestoreOpenHandlers((__int64)v3, v39);
            v3->PacketIndicateHandler = v3->SavedPacketIndicateHandler;
            LOBYTE(v11) = v3->SavedReceivePathEnabled;
            v3->ReceivePathEnabled = (unsigned __int8)v11;
          }
          else
          {
            v3->PnPFlags = PnPFlags | 0x10000000;
            ndisMSwapOpenHandlers(v3, v39);
            v11 = ndisMDummyIndicatePacket;
            v3->ReceivePathEnabled = 0;
            v3->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
          }
        }
      }
    }
    if ( (unsigned __int8)byte_1C00A0267 < 4u )
      return (char)v11;
    v64 = (__int64 (__fastcall *)())*((_QWORD *)v7 + 4);
    v65 = 71LL;
    v66 = (unsigned int)v9;
LABEL_210:
    LOBYTE(v11) = WPP_SF_qLq(v65, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v3, v66, v64);
  }
  return (char)v11;
}
