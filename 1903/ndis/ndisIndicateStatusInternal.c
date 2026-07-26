/*
 * XREFs of ndisIndicateStatusInternal @ 0x1C0015988
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017430 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0028914 (ndisIndicateInitialStateToBinding.c)
 *     ndisUpdateOperationalStatus @ 0x1C003F7B8 (ndisUpdateOperationalStatus.c)
 *     NdisMIndicateStatus @ 0x1C0098170 (NdisMIndicateStatus.c)
 *     ?ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C00A56CC (-ndisSendSystemPowerStateIndication@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_SYSTEM_POWER_STATE@@@Z.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisMRestoreOpenHandlers @ 0x1C00145B4 (ndisMRestoreOpenHandlers.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     WPP_RECORDER_SF_qdq @ 0x1C0016A08 (WPP_RECORDER_SF_qdq_ea_1C0016A08.c)
 *     ndisWriteWmiStatusIndication @ 0x1C0016CD8 (ndisWriteWmiStatusIndication.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0016F28 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ndisScheduleWorkItemInternal @ 0x1C001B218 (ndisScheduleWorkItemInternal.c)
 *     WPP_RECORDER_SF_qLq @ 0x1C001BBB4 (WPP_RECORDER_SF_qLq.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisMSwapOpenHandlers @ 0x1C001BD5C (ndisMSwapOpenHandlers.c)
 *     WPP_RECORDER_SF_qLLL @ 0x1C001BF94 (WPP_RECORDER_SF_qLLL.c)
 *     ndisInvokeStatus @ 0x1C001C274 (ndisInvokeStatus.c)
 *     ndisCancelMediaDisconnectTimer @ 0x1C001CA48 (ndisCancelMediaDisconnectTimer.c)
 *     ndisSetMediaDisconnectTimer @ 0x1C001CB1C (ndisSetMediaDisconnectTimer.c)
 *     ?ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0021C60 (-ndisMIndicateReceiveFilterCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ?ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z @ 0x1C0022090 (-ndisMIndicateNicSwitchCapsChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKE@Z.c)
 *     ndisDeletePatternEntry @ 0x1C0022CDC (ndisDeletePatternEntry.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ndisIndicateOffloadChangeInternal @ 0x1C0039798 (ndisIndicateOffloadChangeInternal.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     McTemplateK0jqxqd @ 0x1C00617F8 (McTemplateK0jqxqd.c)
 *     ndisUpdateMiniportPortStates @ 0x1C0062D80 (ndisUpdateMiniportPortStates.c)
 *     ndisIfScheduleTimestampCapabilityChangeNotification @ 0x1C0067BB0 (ndisIfScheduleTimestampCapabilityChangeNotification.c)
 *     McTemplateK0jqxqqq @ 0x1C0068C00 (McTemplateK0jqxqqq.c)
 *     ndisMAllocateRequest @ 0x1C006AF20 (ndisMAllocateRequest.c)
 *     ndisQueueRequestOnTopAsync @ 0x1C006F920 (ndisQueueRequestOnTopAsync.c)
 *     ndisOpenIndicatePMCapabilities @ 0x1C0074CF4 (ndisOpenIndicatePMCapabilities.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C0077328 (ndisUpdateAndIndicatePMCapabilities.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C00971C8 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ndisMIndicateQosParametersChange @ 0x1C009A8E4 (ndisMIndicateQosParametersChange.c)
 *     ndisTopTcpConnectionOffloadStatus @ 0x1C00AB628 (ndisTopTcpConnectionOffloadStatus.c)
 *     ndisMFinishClose @ 0x1C0137820 (ndisMFinishClose.c)
 */

__int64 __fastcall ndisIndicateStatusInternal(struct _NDIS_MINIPORT_BLOCK *a1, __int128 *a2)
{
  int v2; // ebx
  struct _NDIS_MINIPORT_BLOCK *v3; // rsi
  __int64 v4; // rdi
  __int128 *v5; // r15
  unsigned int v6; // r14d
  KIRQL v7; // r12
  _BYTE *v8; // rax
  int v9; // r13d
  int v10; // edx
  _UNKNOWN **v11; // r8
  _BYTE *v12; // rax
  void *v13; // rdx
  bool v14; // zf
  __int64 result; // rax
  __int64 v16; // rdx
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int64 v20; // r9
  struct _NDIS_MINIPORT_BLOCK *v21; // rdi
  int v22; // r9d
  int v23; // r8d
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 BaseMiniport; // rdi
  char v27; // r15
  KIRQL v28; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // r14
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rax
  char v31; // r14
  int v32; // edx
  struct _NDIS_REFCOUNT_BLOCK *v33; // rcx
  int v34; // ecx
  KIRQL v35; // al
  KIRQL v36; // di
  struct _KEVENT *v37; // rcx
  int v38; // edx
  KIRQL v39; // al
  int v40; // edx
  ULONG_PTR v41; // rcx
  KIRQL v42; // r14
  int v43; // edi
  int v44; // edx
  char v45; // bl
  _DWORD *v46; // r14
  bool v47; // cl
  int v48; // edx
  KIRQL v49; // r12
  _ULONG_REFERENCE *p_Ref; // rbx
  KIRQL v51; // al
  int v52; // edx
  ULONG_PTR RefCountTracker; // rcx
  KIRQL v54; // r14
  int v55; // edi
  int v56; // edx
  char v57; // al
  _UNKNOWN **v58; // r8
  __int64 v59; // rdx
  char v60; // bl
  _NDIS_OPEN_BLOCK *OpenQueue; // rdi
  _NDIS_OPEN_BLOCK *v62; // rax
  _NDIS_OPEN_BLOCK *MiniportNextOpen; // r14
  KIRQL v64; // bl
  int v65; // edx
  int v66; // ebx
  int v67; // edx
  int v68; // ebx
  unsigned int v69; // ebx
  _NET_IF_MEDIA_CONNECT_STATE v70; // ecx
  bool v71; // cf
  int v72; // ecx
  int v73; // ecx
  unsigned __int16 v74; // ax
  char v75; // bl
  unsigned int v76; // ecx
  int Flags; // ecx
  int v78; // ecx
  _NDIS_IF_BLOCK *IfBlock; // rcx
  unsigned __int64 MaxXmitLinkSpeed; // rax
  unsigned __int64 MaxRcvLinkSpeed; // rax
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  void *v88; // r14
  int v89; // ebx
  char v90; // al
  struct _KEVENT *v91; // rcx
  struct _KEVENT *v92; // rcx
  _NDIS_STATUS_UNBIND_WORKITEM *StatusUnbindWorkItem; // rbx
  _SINGLE_LIST_ENTRY *p_WOLPatternList; // rcx
  int v95; // eax
  __int64 v96; // r9
  void *v97; // r8
  void (__fastcall *StatusCompleteHandler)(void *); // rax
  unsigned int PnPFlags; // eax
  char v100[8]; // [rsp+38h] [rbp-C8h]
  char v101; // [rsp+50h] [rbp-B0h]
  bool v102; // [rsp+51h] [rbp-AFh]
  char v103; // [rsp+52h] [rbp-AEh]
  char v104; // [rsp+53h] [rbp-ADh]
  bool v105; // [rsp+54h] [rbp-ACh]
  char v106; // [rsp+55h] [rbp-ABh]
  KIRQL NewIrql; // [rsp+56h] [rbp-AAh]
  KIRQL NewIrqla; // [rsp+56h] [rbp-AAh]
  char v109; // [rsp+57h] [rbp-A9h]
  unsigned __int8 v110; // [rsp+58h] [rbp-A8h] BYREF
  char v111; // [rsp+59h] [rbp-A7h]
  char v112; // [rsp+5Ah] [rbp-A6h]
  char v113[4]; // [rsp+5Ch] [rbp-A4h]
  KIRQL v114; // [rsp+60h] [rbp-A0h]
  int v115; // [rsp+64h] [rbp-9Ch]
  char v116[4]; // [rsp+68h] [rbp-98h]
  char v117[8]; // [rsp+70h] [rbp-90h]
  int v118; // [rsp+78h] [rbp-88h]
  int v119; // [rsp+7Ch] [rbp-84h]
  _NDIS_MINIPORT_BLOCK *v120; // [rsp+80h] [rbp-80h]
  char v121[8]; // [rsp+88h] [rbp-78h]
  void *Src; // [rsp+90h] [rbp-70h]
  _BYTE *v123; // [rsp+98h] [rbp-68h]
  struct _NDIS_M_DRIVER_BLOCK *v124; // [rsp+A0h] [rbp-60h]
  struct _NDIS_MINIPORT_BLOCK *v125; // [rsp+A8h] [rbp-58h]
  __int128 *v126; // [rsp+B0h] [rbp-50h]
  char v127[8]; // [rsp+B8h] [rbp-48h]
  __int128 v128; // [rsp+C0h] [rbp-40h]
  __int128 v129; // [rsp+D0h] [rbp-30h]
  __int128 v130; // [rsp+E0h] [rbp-20h]
  __int128 v131; // [rsp+F0h] [rbp-10h]
  __int128 v132; // [rsp+100h] [rbp+0h]
  __int128 v133; // [rsp+110h] [rbp+10h]
  __int128 v134; // [rsp+120h] [rbp+20h]
  _QWORD v135[14]; // [rsp+130h] [rbp+30h] BYREF
  _QWORD v136[2]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v137[5]; // [rsp+1B0h] [rbp+B0h] BYREF

  v2 = *((_DWORD *)a2 + 5);
  v3 = a1;
  v4 = *((_QWORD *)a2 + 6);
  v5 = a2;
  v6 = *((_DWORD *)a2 + 14);
  v7 = 2;
  v8 = (_BYTE *)*((_QWORD *)a2 + 4);
  v125 = a1;
  v126 = a2;
  v9 = 0;
  v118 = 0;
  v106 = 0;
  v103 = 0;
  v112 = 0;
  v104 = 0;
  v109 = 0;
  *(_DWORD *)v116 = v2;
  Src = (void *)v4;
  *(_DWORD *)v113 = v6;
  v123 = v8;
  memset(v135, 0, sizeof(v135));
  memset(v136, 0, 12);
  v102 = 0;
  v101 = 0;
  v111 = 0;
  v105 = 0;
  memset(v137, 0, sizeof(v137));
  NewIrql = 0;
  v110 = 0;
  v11 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)&v100[4] = HIDWORD(v123);
    WPP_RECORDER_SF_qdq(*((_QWORD *)WPP_GLOBAL_Control + 8), v10, (unsigned int)&WPP_RECORDER_INITIALIZED, 63);
    v11 = &WPP_RECORDER_INITIALIZED;
  }
  v12 = 0LL;
  v13 = &ndisIntReqWmi;
  if ( v123 != (_BYTE *)&ndisIntReqWmi )
    v12 = v123;
  *(_QWORD *)v117 = v12;
  if ( v12 )
  {
    v14 = *v12 == 18;
    *(_QWORD *)v117 = v12;
    if ( !v14 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)v13,
          24,
          64,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)v3);
        v11 = &WPP_RECORDER_INITIALIZED;
      }
      *(_QWORD *)v117 = 0LL;
    }
  }
  result = (unsigned int)(v2 - 1073807371);
  v16 = 1LL;
  v17 = v5[1];
  v128 = *v5;
  v129 = v17;
  v18 = v5[3];
  v130 = v5[2];
  v131 = v18;
  v19 = v5[5];
  v132 = v5[4];
  v133 = v19;
  v134 = v5[6];
  if ( (unsigned int)result > 1 )
  {
    v20 = 1073807371LL;
    if ( v2 == 1073807383 )
    {
      v69 = *((_DWORD *)v5 + 6);
      v3->LinkStateIndicationFlags |= 7u;
      v2 = v69 >> 3;
      LOBYTE(v2) = v2 & 1;
      v103 = v2;
      if ( !v4 )
        goto LABEL_13;
      v103 = v2;
      if ( v6 < 0x28 )
        goto LABEL_13;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v16,
          24,
          65,
          (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
          (char)v3,
          *(_DWORD *)(v4 + 4));
      }
      if ( v6 == -2 )
      {
        *(_DWORD *)v113 = 40;
        *((_DWORD *)v5 + 14) = 40;
      }
      v70 = *(_DWORD *)(v4 + 4);
      if ( v70 == MediaConnectStateConnected )
      {
        v14 = v3->MediaConnectState == MediaConnectStateConnected;
        v9 = 1073807371;
        v118 = 1073807371;
        v102 = v14;
        v105 = !v14;
      }
      else if ( v70 == MediaConnectStateDisconnected )
      {
        v14 = v3->MediaConnectState == MediaConnectStateConnected;
        v9 = 1073807372;
        v118 = 1073807372;
        v102 = !v14;
        v105 = v14;
      }
      else
      {
        v102 = 1;
      }
      v71 = v3->MajorNdisVersion < 6u;
      v3->MediaConnectState = v70;
      v3->MediaDuplexState = *(_DWORD *)(v4 + 8);
      v3->RcvLinkSpeed = *(_QWORD *)(v4 + 24);
      v3->XmitLinkSpeed = *(_QWORD *)(v4 + 16);
      v3->PauseFunctions = *(_DWORD *)(v4 + 32);
      if ( v71 )
      {
        MaxXmitLinkSpeed = v3->MaxXmitLinkSpeed;
        if ( MaxXmitLinkSpeed == 0x40000000 || MaxXmitLinkSpeed < *(_QWORD *)(v4 + 16) )
          v3->MaxXmitLinkSpeed = *(_QWORD *)(v4 + 16);
        MaxRcvLinkSpeed = v3->MaxRcvLinkSpeed;
        if ( MaxRcvLinkSpeed == 0x40000000 || MaxRcvLinkSpeed < *(_QWORD *)(v4 + 24) )
          v3->MaxRcvLinkSpeed = *(_QWORD *)(v4 + 24);
        v82 = v3->TopFilterRestartAttributes.MaxXmitLinkSpeed;
        if ( v82 == 0x40000000 || v82 < *(_QWORD *)(v4 + 16) )
          v3->TopFilterRestartAttributes.MaxXmitLinkSpeed = *(_QWORD *)(v4 + 16);
        v83 = v3->TopFilterRestartAttributes.MaxRcvLinkSpeed;
        if ( v83 == 0x40000000 || v83 < *(_QWORD *)(v4 + 24) )
          v3->TopFilterRestartAttributes.MaxRcvLinkSpeed = *(_QWORD *)(v4 + 24);
      }
      LOBYTE(v11) = 2;
      v3->AutoNegotiationFlags = *(_DWORD *)(v4 + 36);
      v103 = v2;
      v2 = *(_DWORD *)v116;
      v104 = ndisIfSetInterfaceState(v3, 1LL, v11, 1073807371LL);
    }
    if ( v2 != 1073807394 )
    {
LABEL_10:
      if ( v2 == 1073807379 )
      {
        v3->LinkStateIndicationFlags |= 2u;
        v87 = ndisMAllocateRequest(&ndisIntReqGeneric, 65799LL, 0LL, 0LL, 4);
        v88 = (void *)v87;
        if ( v87 )
        {
          *(_DWORD *)(v87 + 88) |= 2u;
          v3->MiniportThread = 0LL;
          KeReleaseSpinLock(&v3->Lock, 2u);
          v89 = ndisQueueRequestOnTopAsync((char)v3, (char)v88);
          v7 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
          v3->MiniportThread = KeGetCurrentThread();
          if ( v89 != 259 )
            ExFreePoolWithTag(v88, 0);
          v2 = *(_DWORD *)v116;
        }
        v112 = 1;
      }
      if ( ((v2 - 1073872897) & 0xFFFFFFFD) == 0
        && !(unsigned __int8)ndisTopTcpConnectionOffloadStatus(v3, v5, v11, v20) )
      {
        result = (__int64)&WPP_RECORDER_INITIALIZED;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 4;
          return WPP_RECORDER_SF_D(
                   *((_QWORD *)WPP_GLOBAL_Control + 8),
                   v16,
                   24,
                   67,
                   (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                   v2);
        }
        return result;
      }
      if ( v2 == 1073807384 && (*((_DWORD *)v5 + 6) & 4) != 0 )
      {
        v105 = 1;
        v9 = 1073807371;
        v118 = 1073807371;
        v3->MediaConnectState = MediaConnectStateConnected;
        LOBYTE(v11) = v7;
        LOBYTE(v16) = 1;
        v90 = ndisIfSetInterfaceState(v3, v16, v11, v20);
        HIDWORD(v137[1]) = 0;
        DWORD2(v129) |= 0x1000u;
        v104 = v90;
        LODWORD(v137[1]) = v3->MiniportMediaDuplexState;
        v137[2] = v3->MiniportXmitLinkSpeed;
        v137[3] = v3->MiniportRcvLinkSpeed;
        v137[4] = *(_QWORD *)&v3->MiniportPauseFunctions;
        *(_QWORD *)&v131 = v137;
        v137[0] = 0x100280180LL;
        DWORD1(v129) = 1073807383;
        DWORD2(v131) = 40;
      }
      goto LABEL_13;
    }
    if ( (unsigned int)ndisUpdateMiniportPortStates((char)v3) )
    {
      result = (__int64)&WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return WPP_RECORDER_SF_qLq(
                 *((_QWORD *)WPP_GLOBAL_Control + 8),
                 v84,
                 24,
                 66,
                 (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                 (char)v3,
                 34,
                 v117[0]);
      return result;
    }
    if ( !*((_DWORD *)v5 + 4) )
    {
      LOBYTE(v85) = 2;
      LOBYTE(v84) = 1;
      v104 = ndisIfSetInterfaceState(v3, v84, v85, v86);
      goto LABEL_10;
    }
LABEL_13:
    if ( v104 )
    {
      *(_QWORD *)((char *)v136 + 4) = 0LL;
      IfBlock = v3->IfBlock;
      LODWORD(v136[0]) = 786816;
      v109 = 1;
      HIDWORD(v136[0]) = IfBlock->ifOperStatus;
      LODWORD(v136[1]) = IfBlock->ifOperStatusFlags;
      v135[6] = v136;
      LODWORD(v135[0]) = 7340440;
      v135[1] = v3;
      HIDWORD(v135[2]) = 1073807395;
      LODWORD(v135[7]) = 12;
    }
    v119 = 0;
    v3->MiniportThread = 0LL;
    v21 = v3;
    *(_QWORD *)v121 = v3;
    KeReleaseSpinLock(&v3->Lock, v7);
    LOBYTE(v22) = v3->MiniportMediaType == NdisMediumNative802_11;
    v24 = ndisReferenceTopMiniportByNameForNsi((_DWORD)v3, 0x200000, v23, v22, 1, 57);
    *(_QWORD *)v127 = v24;
    v25 = v24;
    if ( !v24 )
    {
      v119 = -1073741823;
      goto LABEL_50;
    }
    if ( (struct _NDIS_MINIPORT_BLOCK *)v24 != v3 )
    {
      v119 = -1073741823;
      goto LABEL_37;
    }
    BaseMiniport = (__int64)v3->BaseMiniport;
    LOBYTE(v2) = 0;
    v27 = 0;
    v115 = v2;
    v28 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = ndisMiniDriverList;
    v124 = ndisMiniDriverList;
    do
    {
      if ( !NextDriver )
        break;
      KeReleaseSpinLock(&ndisMiniDriverListLock, v28);
      v114 = KeAcquireSpinLockRaiseToDpc(&NextDriver->Ref.SpinLock);
      MiniportQueue = NextDriver->MiniportQueue;
      v120 = MiniportQueue;
      while ( MiniportQueue )
      {
        if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)BaseMiniport )
        {
          v2 = BaseMiniport + 4432;
          v27 = 1;
          v31 = 1;
          NewIrqla = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BaseMiniport + 4432));
          if ( !*(_BYTE *)(BaseMiniport + 4444) )
          {
            v33 = *(struct _NDIS_REFCOUNT_BLOCK **)(BaseMiniport + 4888);
            if ( v33 )
              NdisReferenceWithTag(v33, 0x38u);
            v34 = *(_DWORD *)(BaseMiniport + 4440);
            *(_DWORD *)(BaseMiniport + 4440) = v34 + 1;
            if ( v34 != -1 )
            {
LABEL_26:
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v32) = 4;
                WPP_RECORDER_SF_qL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v32,
                  20,
                  12,
                  (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
                  BaseMiniport,
                  *(_DWORD *)(BaseMiniport + 4440));
              }
              KeReleaseSpinLock((PKSPIN_LOCK)(BaseMiniport + 4432), NewIrqla);
              if ( v31 )
              {
                LOBYTE(v2) = 1;
                goto LABEL_30;
              }
              if ( (*(_DWORD *)(BaseMiniport + 120) & 0x80200020) != 0
                || (*(_DWORD *)(BaseMiniport + 124) & 0x1084110) != 0
                || *(_DWORD *)(BaseMiniport + 1520) != 1
                || *(_DWORD *)(BaseMiniport + 3868) != 1 )
              {
                LOBYTE(v2) = v115;
              }
              else
              {
                v2 = (unsigned __int8)v115;
                if ( (unsigned __int8)ndisReferenceMiniport(BaseMiniport) )
                  v2 = 1;
LABEL_30:
                v115 = v2;
              }
              MiniportQueue = v120;
              goto LABEL_32;
            }
            *(_DWORD *)(BaseMiniport + 4440) = -1;
          }
          v31 = 0;
          goto LABEL_26;
        }
LABEL_32:
        MiniportQueue = MiniportQueue->NextMiniport;
        v120 = MiniportQueue;
        if ( v27 )
          break;
      }
      KeReleaseSpinLock(&v124->Ref.SpinLock, v114);
      v28 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
      NextDriver = v124->NextDriver;
      v124 = NextDriver;
    }
    while ( !v27 );
    KeReleaseSpinLock(&ndisMiniDriverListLock, v28);
    v3 = v125;
    v5 = v126;
    v9 = v118;
    v25 = *(_QWORD *)v127;
    if ( (_BYTE)v2 )
      *(_QWORD *)v121 = v125->BaseMiniport;
    NewIrql = (_BYTE)v2 != 0;
LABEL_37:
    v35 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v25 + 96));
    *(_QWORD *)(v25 + 520) = KeGetCurrentThread();
    v36 = v35;
    NdisDereferenceWithTag(*(_QWORD *)(v25 + 4896), 1u);
    v14 = (*(_DWORD *)(v25 + 3124))-- == 1;
    if ( v14 )
    {
      v37 = *(struct _KEVENT **)(v25 + 3136);
      if ( v37 )
        KeSetEvent(v37, 0, 0);
    }
    *(_QWORD *)(v25 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(v25 + 96), v36);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v38) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v38,
        20,
        25,
        (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
        v25);
    }
    v39 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v25 + 4432));
    v41 = *(_QWORD *)(v25 + 4888);
    v42 = v39;
    if ( v41 )
      NdisDereferenceWithTag(v41, 0x39u);
    v43 = *(_DWORD *)(v25 + 4440) - 1;
    *(_DWORD *)(v25 + 4440) = v43;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v40) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v40,
        20,
        14,
        (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
        v25,
        *(_DWORD *)(v25 + 4440));
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v25 + 4432), v42);
    if ( !v43 )
    {
      v91 = *(struct _KEVENT **)(v25 + 1608);
      if ( v91 )
        KeSetEvent(v91, 0, 0);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v44) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v44,
        20,
        26,
        (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
        v25);
    }
    v21 = *(struct _NDIS_MINIPORT_BLOCK **)v121;
LABEL_50:
    v45 = 0;
    v46 = Src;
    if ( !v119 )
      v45 = v109;
    ndisWriteWmiStatusIndication((char)v21, Src, *(int *)v113);
    v47 = 0;
    if ( !v119 )
      v47 = v105;
    if ( v47 )
      ndisWriteWmiStatusIndication((char)v21, 0LL, 0);
    if ( v45 )
      ndisWriteWmiStatusIndication((char)v21, v136, 12);
    v49 = KeAcquireSpinLockRaiseToDpc(&v3->Lock);
    v3->MiniportThread = KeGetCurrentThread();
    if ( NewIrql )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v48) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v48,
          20,
          25,
          (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
          (char)v21);
      }
      p_Ref = &v21->Ref;
      v51 = KeAcquireSpinLockRaiseToDpc(&v21->Ref.SpinLock);
      RefCountTracker = (ULONG_PTR)v21->RefCountTracker;
      v54 = v51;
      if ( RefCountTracker )
        NdisDereferenceWithTag(RefCountTracker, 0x38u);
      v55 = v21->Ref.ReferenceCount - 1;
      p_Ref->ReferenceCount = v55;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v52) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v52,
          20,
          14,
          (struct _GUID *)&WPP_ead076de49c5361e52622447ee4d867c_Traceguids,
          v121[0],
          *(_DWORD *)(*(_QWORD *)v121 + 4440LL));
      }
      KeReleaseSpinLock(&p_Ref->SpinLock, v54);
      v57 = v121[0];
      if ( !v55 )
      {
        v92 = *(struct _KEVENT **)(*(_QWORD *)v121 + 1608LL);
        if ( v92 )
        {
          KeSetEvent(v92, 0, 0);
          v57 = v121[0];
        }
      }
      v58 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v56) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v56,
          20,
          26,
          (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
          v57);
        v46 = Src;
        goto LABEL_68;
      }
      v46 = Src;
    }
    else
    {
LABEL_68:
      v58 = &WPP_RECORDER_INITIALIZED;
    }
    if ( *(_DWORD *)v116 != 1073807383 )
      v9 = *(_DWORD *)v116;
    LODWORD(v59) = 1073807371;
    if ( v9 == 1073807384 )
    {
      v9 = 1073807384;
      if ( (*((_BYTE *)v5 + 24) & 4) != 0 )
        v9 = 1073807371;
    }
    if ( v9 == 1073872902 )
    {
      v101 = 1;
      v60 = 1;
      ndisIndicateOffloadChangeInternal(v3, v46, *(unsigned int *)v113);
    }
    else
    {
      if ( v9 > 1073872902 )
      {
        if ( v9 == 1073872912 )
        {
          ndisMIndicateReceiveFilterCapsChange(v3, 1073872912, v46, *(unsigned int *)v113, 1u);
        }
        else
        {
          LODWORD(v59) = 1073872960;
          if ( v9 == 1073872960 )
          {
            ndisMIndicateNicSwitchCapsChange(v3, 1073872960, v46, *(unsigned int *)v113, 1u);
          }
          else if ( v9 > 1073873055 )
          {
            if ( v9 <= 1073873057 )
            {
              ndisMIndicateQosParametersChange((char)v3, v9, (char)v46, v113[0]);
            }
            else if ( (unsigned int)(v9 - 1074073600) <= 1 )
            {
              ndisMIndicateHwTimestampCapabilitiesChange(v3, v9, v46, *(unsigned int *)v113, 1, &v110);
              if ( v9 == 1074073601 )
              {
                if ( v110 )
                {
                  LOBYTE(v59) = v49;
                  ndisIfScheduleTimestampCapabilityChangeNotification(v3, v59);
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
              v106 = 1;
              LODWORD(v59) = Flags;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_qLLL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  Flags,
                  24,
                  69,
                  (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                  (char)v3,
                  Flags,
                  v3->PnPFlags,
                  v3->CurrentDevicePowerState);
                LODWORD(v59) = v3->Flags;
              }
              Flags = v59;
              if ( byte_1C00E8044 < 0 )
              {
                McTemplateK0jqxqqq(
                  v59,
                  (unsigned int)&MiniportStatusIndicationConnect,
                  (_DWORD)v3 + 4008,
                  (_DWORD)v3 + 4008,
                  v3->IfIndex,
                  v3->NetLuid.Value,
                  v59,
                  v3->PnPFlags,
                  v3->CurrentDevicePowerState);
                Flags = v3->Flags;
              }
            }
            v78 = Flags | 0x20000000;
            v3->MediaConnectState = MediaConnectStateConnected;
            v3->Flags = v78;
            if ( !v103 )
            {
              v3->Flags = v78 | 0x4000000;
              ndisCancelMediaDisconnectTimer((char)v3);
            }
            break;
          case 1073807372:
            v73 = v3->Flags;
            v74 = v3->MediaSenseDisconnectCount + 1;
            v3->MediaSenseDisconnectCount = v74;
            if ( (v73 & 0x20000000) != 0 || v74 == 1 )
            {
              v75 = 1;
              v106 = 1;
              LODWORD(v59) = v73;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                WPP_RECORDER_SF_qLLL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  v73,
                  24,
                  68,
                  (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                  (char)v3,
                  v73,
                  v3->PnPFlags,
                  v3->CurrentDevicePowerState);
                LODWORD(v59) = v3->Flags;
              }
              v73 = v59;
              if ( byte_1C00E8044 < 0 )
              {
                McTemplateK0jqxqqq(
                  v59,
                  (unsigned int)&MiniportStatusIndicationDisconnect,
                  (_DWORD)v3 + 4008,
                  (_DWORD)v3 + 4008,
                  v3->IfIndex,
                  v3->NetLuid.Value,
                  v59,
                  v3->PnPFlags,
                  v3->CurrentDevicePowerState);
                v73 = v3->Flags;
              }
            }
            else
            {
              v75 = 0;
            }
            v76 = v73 & 0xDFFFFFFF;
            v3->MediaConnectState = MediaConnectStateDisconnected;
            v3->Flags = v76;
            if ( !v103 )
            {
              v3->Flags = v76 | 0x4000000;
              if ( v75 )
                ndisSetMediaDisconnectTimer((char)v3);
            }
            break;
          case 1073807384:
            v102 = 1;
            if ( *(_DWORD *)v113 >= 4u && (byte_1C00E8045 & 1) != 0 )
              McTemplateK0jqxq(
                0,
                (unsigned int)&MiniportStatusIndicationNetworkChange,
                (_DWORD)v3 + 4008,
                (_DWORD)v3 + 4008,
                v3->IfIndex,
                v3->NetLuid.Value,
                *v46);
            break;
          case 1073807395:
            v102 = 1;
            if ( *(_DWORD *)v113 >= 0xCu )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                *(_DWORD *)v100 = v46[2];
                WPP_RECORDER_SF_qdL(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  1073807371,
                  0x18u,
                  0x46u,
                  (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
                  (char)v3,
                  v46[1],
                  *(_QWORD *)v100);
              }
              v72 = v46[1];
              if ( v72 == 1 )
              {
                if ( (byte_1C00E8045 & 1) != 0 )
                  McTemplateK0jqxqd(
                    1,
                    (unsigned int)&MiniportStatusIndicationOperStatusUp,
                    (_DWORD)v3 + 4008,
                    (_DWORD)v3 + 4008,
                    v3->IfIndex,
                    v3->NetLuid.Value,
                    1,
                    v46[2]);
              }
              else if ( (byte_1C00E8045 & 1) != 0 )
              {
                McTemplateK0jqxqd(
                  v72,
                  (unsigned int)&MiniportStatusIndicationOperStatusNotUp,
                  (_DWORD)v3 + 4008,
                  (_DWORD)v3 + 4008,
                  v3->IfIndex,
                  v3->NetLuid.Value,
                  v72,
                  v46[2]);
              }
            }
            break;
        }
      }
      v60 = 0;
    }
    if ( v123 != (_BYTE *)&ndisIntReqWmi )
    {
      OpenQueue = v3->OpenQueue;
      if ( OpenQueue )
      {
        v62 = *(_NDIS_OPEN_BLOCK **)v117;
        while ( v62 && v62 != OpenQueue )
        {
          MiniportNextOpen = OpenQueue->MiniportNextOpen;
LABEL_105:
          v60 = v101;
          OpenQueue = MiniportNextOpen;
          if ( !MiniportNextOpen )
            goto LABEL_106;
        }
        KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
        if ( (OpenQueue->OpenFlags & 0x8000) != 0 )
          goto LABEL_220;
        if ( v60 && OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
        {
          if ( !v111 )
          {
            StatusUnbindWorkItem = OpenQueue->StatusUnbindWorkItem;
            if ( StatusUnbindWorkItem )
            {
              ndisReferenceMiniportNoCheck((char)v3);
              OpenQueue->StatusUnbindWorkItem = 0LL;
              v111 = 1;
              ndisScheduleWorkItemInternal(StatusUnbindWorkItem);
            }
          }
          goto LABEL_220;
        }
        if ( v9 == 1073938515 )
          ndisOpenIndicatePMCapabilities(OpenQueue, v5);
        if ( v9 == 1073938513 )
        {
          if ( *((_DWORD *)v5 + 14) < 4u )
            goto LABEL_220;
          p_WOLPatternList = &OpenQueue->WOLPatternList;
        }
        else
        {
          if ( v9 != 1073938514 )
          {
LABEL_91:
            v64 = KeAcquireSpinLockRaiseToDpc(&OpenQueue->RefCountLock);
            NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)OpenQueue->RefCountTracker, 7u);
            ++OpenQueue->References;
            KeReleaseSpinLock(&OpenQueue->RefCountLock, v64);
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            if ( OpenQueue->StatusHandler )
            {
              KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
              OpenQueue->OpenFlags |= 0x100u;
              KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
              v3->MiniportThread = 0LL;
              KeReleaseSpinLockFromDpcLevel(&v3->Lock);
              if ( OpenQueue->ProtocolHandle->MajorNdisVersion < 6u )
              {
                if ( !v102 && !*((_DWORD *)v5 + 4) )
                {
                  v95 = *((_DWORD *)v5 + 5);
                  if ( v95 == 1073807383 || v95 == 1073807384 && (*((_DWORD *)v5 + 6) & 4) != 0 )
                  {
                    v96 = 0LL;
                    v97 = 0LL;
                  }
                  else
                  {
                    v96 = *(unsigned int *)v113;
                    v97 = Src;
                  }
                  OpenQueue->StatusHandler(OpenQueue->ProtocolBindingContext, v9, v97, v96);
                  StatusCompleteHandler = OpenQueue->StatusCompleteHandler;
                  if ( StatusCompleteHandler )
                    StatusCompleteHandler(OpenQueue->ProtocolBindingContext);
                }
              }
              else if ( !v112 )
              {
                v66 = *((_DWORD *)v5 + 5);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v65) = 4;
                  WPP_RECORDER_SF_qD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v65,
                    24,
                    108,
                    (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
                    (char)OpenQueue,
                    *((_DWORD *)v5 + 5));
                }
                ((void (__fastcall *)(void *, __int128 *))OpenQueue->StatusHandler)(
                  OpenQueue->ProtocolBindingContext,
                  v5);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v67) = 4;
                  WPP_RECORDER_SF_qD(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    v67,
                    24,
                    109,
                    (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
                    (char)OpenQueue,
                    v66);
                }
                if ( *((_DWORD *)v5 + 5) == 1073807384 && (*((_DWORD *)v5 + 6) & 4) != 0 )
                  ndisInvokeStatus((char)OpenQueue);
                if ( v104 )
                  ndisInvokeStatus((char)OpenQueue);
              }
              KeAcquireSpinLockAtDpcLevel(&v3->Lock);
              v3->MiniportThread = KeGetCurrentThread();
              KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
              OpenQueue->OpenFlags &= ~0x100u;
              KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
            }
            MiniportNextOpen = OpenQueue->MiniportNextOpen;
            KeAcquireSpinLockAtDpcLevel(&OpenQueue->RefCountLock);
            NdisDereferenceWithTag((ULONG_PTR)OpenQueue->RefCountTracker, 7u);
            v68 = --OpenQueue->References;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->RefCountLock);
            if ( !v68 )
              ndisMFinishClose((char)OpenQueue);
            goto LABEL_104;
          }
          if ( *((_DWORD *)v5 + 14) < 4u )
          {
LABEL_220:
            MiniportNextOpen = OpenQueue->MiniportNextOpen;
            KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
LABEL_104:
            v62 = *(_NDIS_OPEN_BLOCK **)v117;
            goto LABEL_105;
          }
          p_WOLPatternList = &OpenQueue->PMProtocolOffloadList;
        }
        if ( (unsigned __int8)ndisDeletePatternEntry(p_WOLPatternList, **((unsigned int **)v5 + 6)) )
        {
          --*((_DWORD *)v5 + 24);
          goto LABEL_91;
        }
        goto LABEL_220;
      }
LABEL_106:
      if ( v9 == 1073938516 )
        ndisUpdateAndIndicatePMCapabilities((char)v3);
      if ( v106 && (*((_DWORD *)v5 + 6) & 2) == 0 )
      {
        PnPFlags = v3->PnPFlags;
        LOBYTE(v59) = 2;
        if ( v9 == 1073807371 )
        {
          v3->PnPFlags = PnPFlags & 0xEFFFFFFF;
          ndisMRestoreOpenHandlers((__int64)v3, v59);
          v3->PacketIndicateHandler = v3->SavedPacketIndicateHandler;
          v3->ReceivePathEnabled = v3->SavedReceivePathEnabled;
        }
        else
        {
          v3->PnPFlags = PnPFlags | 0x10000000;
          ndisMSwapOpenHandlers(v3);
          v3->ReceivePathEnabled = 0;
          v3->PacketIndicateHandler = (void (__fastcall *)(void *, _NDIS_PACKET **, unsigned int))ndisMDummyIndicatePacket;
        }
      }
    }
    result = (__int64)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return WPP_RECORDER_SF_qdq(*((_QWORD *)WPP_GLOBAL_Control + 8), v59, (_DWORD)v58, 71);
  }
  return result;
}
