/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00BED24
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C00BF4C4 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0009B60 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovGetNicSwitchList @ 0x1C0014154 (ndisIovGetNicSwitchList.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00172B0 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C00188F4 (ndisIndicateInitialStateToBinding.c)
 *     ndisGetPortList @ 0x1C001A1E8 (ndisGetPortList.c)
 *     ndisIsMiniportStarted @ 0x1C001A37C (ndisIsMiniportStarted.c)
 *     ndisReferenceProtocol @ 0x1C001A488 (ndisReferenceProtocol.c)
 *     ndisReferenceOpenByHandle @ 0x1C001BC04 (ndisReferenceOpenByHandle.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004FC88 (ndisBindUnbindPeriodicReceives.c)
 *     McTemplateK0jqxzd @ 0x1C007A394 (McTemplateK0jqxzd.c)
 *     WPP_SF_ZZL @ 0x1C007A46C (WPP_SF_ZZL.c)
 *     ndisMDoMiniportOp @ 0x1C00BD33C (ndisMDoMiniportOp.c)
 *     ndisNotifyBindFailure @ 0x1C00BE2E0 (ndisNotifyBindFailure.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C00BEB5C (ndisNotifyWmiBindUnbind.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C00BF3E8 (ndisIfQueryBindingMiniportIfIndex.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, _NDIS_PROTOCOL_BLOCK *this)
{
  unsigned int Blink; // esi
  char v5; // r12
  __int64 v6; // rdx
  struct _KMUTANT *p_Mutex; // r15
  char v8; // r13
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r12
  UNICODE_STRING v11; // xmm0
  SIZE_T v12; // rdx
  wchar_t *PoolWithTag; // rax
  unsigned __int8 MajorNdisVersion; // r8
  unsigned __int8 MinorNdisVersion; // al
  char v16; // dl
  __int16 v17; // ax
  unsigned int v18; // eax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  _NET_IF_MEDIA_DUPLEX_STATE MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _NDIS_HD_SPLIT_CURRENT_CONFIG *HDSplitCurrentConfig; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _NDIS_RECEIVE_FILTER_CAPABILITIES *v24; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _NDIS_NIC_SWITCH_CAPABILITIES *v26; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  _NDIS_IF_BLOCK *v28; // rdx
  _NDIS_IF_BLOCK *v29; // rcx
  int v30; // eax
  struct _NDIS_MINIPORT_BLOCK *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // zf
  _NDIS_IF_BLOCK *IfBlock; // rcx
  char v37; // cl
  int v38; // edx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-E0h]
  char v40; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v43[8]; // [rsp+68h] [rbp-98h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _KEVENT BugCheckParameter3[6]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v46[40]; // [rsp+110h] [rbp+10h] BYREF

  memset(v46, 0, 0x138uLL);
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  Blink = 0;
  v40 = 0;
  v5 = 0;
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x1Au, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1, this);
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
    ndisMDoMiniportOp(a1, 1, 65812, (__int64)v43, 4, 1u, 1);
  if ( ndisReferenceProtocol((__int64)this, 8u) )
  {
    if ( !a1->EthDB )
    {
      Blink = -1073741823;
      if ( (unsigned __int8)byte_1C00A0255 >= 2u )
        WPP_SF_qq(0x1Bu, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1, this);
      goto LABEL_65;
    }
    p_Mutex = &this->Mutex;
    v8 = 1;
    KeWaitForSingleObject(&this->Mutex, Executive, 0, 0, 0LL);
    ++this->MutexOwnerCount;
    this->MutexOwnerThread = KeGetCurrentThread();
    this->MutexOwner = 3932870;
    if ( this->Ref.Closing )
    {
LABEL_60:
      v34 = this->MutexOwnerCount-- == 1;
      this->MutexOwner = 0;
      if ( v34 )
        this->MutexOwnerThread = 0LL;
      KeReleaseMutex(p_Mutex, 0);
      if ( v5 )
      {
        ndisMDereferenceOpenUnlocked((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2);
        BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
      }
      if ( v8 && Blink )
        ndisNotifyBindFailure((__int64)a1, (__int64)this);
LABEL_65:
      ndisDereferenceProtocol(this, v6, 8u);
      goto LABEL_66;
    }
    if ( !ndisIsMiniportStarted(a1)
      || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
      || PnPDeviceState == NdisPnPDeviceStopped )
    {
      v8 = 0;
      goto LABEL_60;
    }
    Paths = a1->BindPaths->Paths;
    this->BindDeviceName = &a1->MiniportName;
    this->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v11 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v11) - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    v12 = (unsigned __int16)(DestinationString.Length + this->Name.Length + Paths->Length - ndisDeviceStr.Length + 2);
    Destination.Length = 0;
    Destination.MaximumLength = v12;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = 0;
      goto LABEL_59;
    }
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &this->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = this->MajorNdisVersion;
    LOBYTE(v46[0]) = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion == 6 )
    {
      MinorNdisVersion = this->MinorNdisVersion;
      if ( MinorNdisVersion >= 0x1Eu )
      {
LABEL_14:
        v16 = 4;
        v17 = 312;
        goto LABEL_15;
      }
      if ( MinorNdisVersion >= 0x14u )
      {
        v16 = 3;
        v17 = 280;
        goto LABEL_15;
      }
      if ( MinorNdisVersion )
      {
        v16 = 2;
        v17 = 256;
        goto LABEL_15;
      }
    }
    v16 = 1;
    v17 = 248;
LABEL_15:
    WORD1(v46[0]) = v17;
    BYTE1(v46[0]) = v16;
    v46[1] = &Destination;
    v46[3] = a1->PhysicalDeviceObject;
    v18 = a1->MacOptions & 0x80000001;
    v46[2] = Paths;
    v46[30] = &a1->MiniportName;
    if ( v18 == -2147483647 )
      LODWORD(v46[4]) = 3;
    else
      LODWORD(v46[4]) = a1->MediaType;
    HighestFilter = a1->HighestFilter;
    if ( HighestFilter )
    {
      v46[6] = HighestFilter->XmitLinkSpeedIndicateUp;
      v46[8] = HighestFilter->RcvLinkSpeedIndicateUp;
      LODWORD(v46[9]) = HighestFilter->MediaConnectStateIndicateUp;
      MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
    }
    else
    {
      IfBlock = a1->IfBlock;
      v46[6] = a1->XmitLinkSpeed;
      v46[8] = a1->RcvLinkSpeed;
      LODWORD(v46[9]) = IfBlock->MediaConnectState;
      MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
    }
    HIDWORD(v46[9]) = MediaDuplexStateIndicateUp;
    HIDWORD(v46[4]) = a1->TopFilterRestartAttributes.MtuSize;
    v46[5] = a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
    v46[7] = a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
    LODWORD(v46[10]) = a1->TopFilterRestartAttributes.LookaheadSize;
    v46[12] = *(_QWORD *)&a1->TopFilterRestartAttributes.SupportedPacketFilters;
    HIDWORD(v46[17]) = a1->PhysicalMediumType;
    v46[18] = &a1->TopRecvScaleCapabilities;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && this->MinorNdisVersion >= 0x14u )
      v46[33] = &a1->PMAdvertisedCapabilities;
    else
      v46[11] = &a1->PMCapabilities61;
    Offload = a1->Offload;
    if ( Offload )
    {
      if ( Offload->SupportsTopOffload == 1 )
        v46[28] = &Offload->TopCapabilities;
      if ( Offload->SupportsTopTcpConnectionOffload == 1 )
        v46[29] = &Offload->TopTcpConnectionOffloadCapabilities;
    }
    HDSplitCurrentConfig = (_NDIS_HD_SPLIT_CURRENT_CONFIG *)v46[31];
    if ( a1->HDSplitCurrentConfig )
      HDSplitCurrentConfig = a1->HDSplitCurrentConfig;
    TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
    v46[31] = HDSplitCurrentConfig;
    v24 = (_NDIS_RECEIVE_FILTER_CAPABILITIES *)v46[32];
    if ( TopReceiveFilterCurrentCapabilities )
      v24 = TopReceiveFilterCurrentCapabilities;
    TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
    v46[32] = v24;
    v26 = (_NDIS_NIC_SWITCH_CAPABILITIES *)v46[34];
    if ( TopNicSwitchCurrentCapabilities )
      v26 = TopNicSwitchCurrentCapabilities;
    v46[34] = v26;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && this->MinorNdisVersion >= 0x1Eu )
    {
      NDKBlock = ndisGetNDKBlock(a1);
      if ( NDKBlock )
      {
        v37 = *((_BYTE *)NDKBlock + 24);
        v46[36] = (char *)NDKBlock + 32;
        LOBYTE(v46[35]) = v37;
      }
      else
      {
        LOBYTE(v46[35]) = 0;
        v46[36] = 0LL;
      }
    }
    if ( (unsigned __int8)v16 >= 4u )
    {
      if ( a1->SriovCurrentCapabilities )
      {
        v46[37] = a1->SriovCurrentCapabilities;
        if ( (unsigned int)ndisIovGetNicSwitchList((__int64)a1, &v46[38]) )
          goto LABEL_74;
      }
    }
    v28 = a1->IfBlock;
    LOWORD(v46[13]) = v28->ifPhysAddress.Length;
    memmove((char *)&v46[13] + 2, v28->ifPhysAddress.Address, LOWORD(v46[13]));
    ndisIfQueryBindingMiniportIfIndex(
      (_DWORD)a1,
      (unsigned int)&v46[20],
      (unsigned int)&v46[19],
      (unsigned int)&v46[22],
      (__int64)&v46[21]);
    v29 = a1->IfBlock;
    HIDWORD(v46[22]) = a1->TopFilterRestartAttributes.AccessType;
    LODWORD(v46[23]) = v29->DirectionType;
    HIDWORD(v46[23]) = a1->TopFilterRestartAttributes.ConnectionType;
    LOWORD(v46[24]) = v29->ifType;
    BYTE2(v46[24]) = v29->ifConnectorPresent;
    v46[26] = *(_QWORD *)&a1->TopFilterRestartAttributes.DataBackFillSize;
    LODWORD(v46[27]) = a1->TopFilterRestartAttributes.MacOptions;
    HIDWORD(v46[27]) = v29->CompartmentId;
    if ( (unsigned int)ndisGetPortList((__int64)a1, &v46[25]) )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_74:
      v5 = 0;
LABEL_59:
      p_Mutex = &this->Mutex;
      goto LABEL_60;
    }
    *(_QWORD *)&BugCheckParameter3[0].Header.Lock = 0LL;
    BugCheckParameter3[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)this;
    BugCheckParameter3[1].Header.WaitListHead = (_LIST_ENTRY)Destination;
    *(_QWORD *)&BugCheckParameter3[1].Header.Lock = a1;
    *(_QWORD *)&BugCheckParameter3[2].Header.Lock = Paths;
    BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
    KeInitializeEvent(&BugCheckParameter3[4], NotificationEvent, 0);
    this->BindingAdapter = a1;
    v8 = 0;
    if ( (unsigned __int8)byte_1C00A0255 >= 4u )
      WPP_SF_q(0x5Eu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)this);
    v30 = this->BindAdapterHandlerEx(this->ProtocolDriverContext, BugCheckParameter3, (_NDIS_BIND_PARAMETERS *)v46);
    Blink = v30;
    if ( (unsigned __int8)byte_1C00A0255 >= 4u )
      WPP_SF_qD(0x5Fu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)this, v30);
    if ( Blink == 259 )
    {
      KeWaitForSingleObject(&BugCheckParameter3[4], Executive, 0, 0, 0LL);
      Blink = (unsigned int)BugCheckParameter3[3].Header.WaitListHead.Blink;
    }
    if ( Blink )
    {
LABEL_54:
      ExFreePoolWithTag(Destination.Buffer, 0);
      if ( (unsigned __int8)byte_1C00A0255 >= 4u )
      {
        LODWORD(Timeout) = Blink;
        WPP_SF_ZZL(0x1Cu, v32, &this->Name.Length, &a1->pAdapterInstanceName->Length, Timeout);
      }
      if ( (byte_1C00A2081 & 2) != 0 )
        McTemplateK0jqxzd(
          v33,
          v32,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          this->Name.Buffer,
          Blink);
      v5 = v40;
      goto LABEL_59;
    }
    if ( BugCheckParameter3[0].Header.WaitListHead.Blink )
    {
      if ( !ndisReferenceOpenByHandle((struct _NDIS_OPEN_BLOCK *)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u) )
        KeBugCheckEx(
          0x7Cu,
          0x16uLL,
          (ULONG_PTR)this,
          (ULONG_PTR)BugCheckParameter3,
          (ULONG_PTR)BugCheckParameter3[0].Header.WaitListHead.Blink);
      v40 = 1;
      ndisIndicateInitialStateToBinding((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink);
    }
    if ( MiniportSupportsReceiveThrottle(a1) )
    {
LABEL_53:
      ndisNotifyWmiBindUnbind((__int64)a1, (__int64)this, 1u);
      goto LABEL_54;
    }
    if ( this->IsIPv4 == 1 )
    {
      v38 = 0;
    }
    else if ( this->IsIPv6 == 1 )
    {
      v38 = 1;
    }
    else
    {
      if ( this->IsNdisTest6 != 1 )
        goto LABEL_53;
      v38 = 2;
    }
    ndisBindUnbindPeriodicReceives(v31, v38);
    goto LABEL_53;
  }
  Blink = -1073741823;
LABEL_66:
  if ( v46[25] )
    ExFreePoolWithTag((PVOID)v46[25], 0);
  if ( v46[38] )
    ExFreePoolWithTag((PVOID)v46[38], 0);
  if ( (unsigned __int8)byte_1C00A0255 >= 4u )
    WPP_SF_qq(0x1Du, &WPP_ad8539c49f35340fb85ef52817a344b2_Traceguids, a1, this);
  return Blink;
}
