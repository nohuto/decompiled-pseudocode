/*
 * XREFs of ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104790
 * Callers:
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0104448 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0012380 (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIsMiniportStarted @ 0x1C001B528 (ndisIsMiniportStarted.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001C784 (-MiniportSupportsReceiveThrottle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIovGetNicSwitchList @ 0x1C001E4F8 (ndisIovGetNicSwitchList.c)
 *     ndisReferenceOpenByHandle @ 0x1C0023DC4 (ndisReferenceOpenByHandle.c)
 *     ndisNotifyWmiBindUnbind @ 0x1C0027808 (ndisNotifyWmiBindUnbind.c)
 *     WPP_RECORDER_SF_ZZL @ 0x1C0027984 (WPP_RECORDER_SF_ZZL.c)
 *     ndisDereferenceProtocol @ 0x1C00280E0 (ndisDereferenceProtocol.c)
 *     ndisGetPortList @ 0x1C0028234 (ndisGetPortList.c)
 *     ndisReferenceProtocol @ 0x1C0028410 (ndisReferenceProtocol.c)
 *     ndisIndicateInitialStateToBinding @ 0x1C0028904 (ndisIndicateInitialStateToBinding.c)
 *     ndisNotifyBindFailure @ 0x1C003A804 (ndisNotifyBindFailure.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C007E440 (ndisBindUnbindPeriodicReceives.c)
 *     McTemplateK0jqxzd @ 0x1C00BE840 (McTemplateK0jqxzd.c)
 *     ndisInvokeBindAdapter @ 0x1C0104EDC (ndisInvokeBindAdapter.c)
 *     ndisIfQueryBindingMiniportIfIndex @ 0x1C0104FA8 (ndisIfQueryBindingMiniportIfIndex.c)
 *     ndisMDoMiniportOp @ 0x1C0108AA8 (ndisMDoMiniportOp.c)
 */

__int64 __fastcall ndisBindNdis6Protocol(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_PROTOCOL_BLOCK *a2)
{
  struct _NDIS_PROTOCOL_BLOCK *v2; // rdi
  unsigned int v4; // esi
  char v5; // r12
  __int64 v6; // rdx
  int v7; // r9d
  struct _KMUTANT *p_Mutex; // r15
  char v9; // r13
  _NDIS_PNP_DEVICE_STATE PnPDeviceState; // ecx
  _UNICODE_STRING *Paths; // r12
  UNICODE_STRING v12; // xmm0
  SIZE_T v13; // rdx
  wchar_t *PoolWithTag; // rax
  unsigned __int8 MajorNdisVersion; // r8
  unsigned __int8 MinorNdisVersion; // al
  unsigned __int8 v17; // dl
  __int16 v18; // ax
  unsigned int v19; // eax
  _NDIS_FILTER_BLOCK *HighestFilter; // rcx
  int MediaDuplexStateIndicateUp; // eax
  _NDIS_MINIPORT_OFFLOAD *Offload; // rcx
  _LIST_ENTRY *Flink; // rax
  _NDIS_RECEIVE_FILTER_CAPABILITIES *TopReceiveFilterCurrentCapabilities; // rcx
  _LIST_ENTRY *Blink; // rax
  _NDIS_NIC_SWITCH_CAPABILITIES *TopNicSwitchCurrentCapabilities; // rcx
  _LIST_ENTRY *v27; // rax
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  _NDIS_IF_BLOCK *v29; // rdx
  _NDIS_IF_BLOCK *v30; // rcx
  struct _NDIS_MINIPORT_BLOCK *v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  _NDIS_IF_BLOCK *IfBlock; // rcx
  char v38; // cl
  int v39; // edx
  int Timeout; // [rsp+20h] [rbp-E0h]
  char v41; // [rsp+40h] [rbp-C0h]
  _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING Source; // [rsp+58h] [rbp-A8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  char v45; // [rsp+78h] [rbp-88h] BYREF
  struct _KEVENT BugCheckParameter3[19]; // [rsp+80h] [rbp-80h] BYREF

  v2 = a2;
  memset(BugCheckParameter3, 0, sizeof(BugCheckParameter3));
  v41 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  v4 = 0;
  Destination.Buffer = 0LL;
  v5 = 0;
  *(_QWORD *)&Source.Length = 0LL;
  Source.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      6,
      26,
      (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
      (char)a1,
      (char)v2);
  }
  if ( a1->MajorNdisVersion < 6u && (a1->LinkStateIndicationFlags & 1) == 0 )
  {
    LOBYTE(a2) = 1;
    ndisMDoMiniportOp((_DWORD)a1, (_DWORD)a2, 65812, (unsigned int)&v45, 4, 1, 1);
  }
  if ( ndisReferenceProtocol((__int64)v2, 8u) )
  {
    if ( !a1->EthDB )
    {
      v4 = -1073741823;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2,
          6,
          27,
          (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
          (char)a1,
          (char)v2);
      goto LABEL_61;
    }
    p_Mutex = &v2->Mutex;
    v9 = 1;
    KeWaitForSingleObject(&v2->Mutex, Executive, 0, 0, 0LL);
    ++v2->MutexOwnerCount;
    v2->MutexOwnerThread = KeGetCurrentThread();
    if ( v2->Ref.Closing )
    {
LABEL_56:
      if ( v2->MutexOwnerCount-- == 1 )
        v2->MutexOwnerThread = 0LL;
      KeReleaseMutex(p_Mutex, 0);
      if ( v5 )
      {
        ndisMDereferenceOpenUnlocked((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2);
        BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
      }
      if ( v9 && v4 )
        ndisNotifyBindFailure((__int64)a1, (__int64)v2);
LABEL_61:
      ndisDereferenceProtocol(v2, v6, 8u, v7);
      goto LABEL_62;
    }
    if ( !ndisIsMiniportStarted(a1)
      || (PnPDeviceState = a1->PnPDeviceState, ((PnPDeviceState - 1) & 0xFFFFFFFC) != 0)
      || PnPDeviceState == NdisPnPDeviceStopped )
    {
      v9 = 0;
      goto LABEL_56;
    }
    Paths = a1->BindPaths->Paths;
    v2->BindDeviceName = &a1->MiniportName;
    v2->RootDeviceName = Paths;
    RtlInitUnicodeString(&DestinationString, L"\\Parameters\\Adapters\\");
    Source = *Paths;
    v12 = Source;
    Source.MaximumLength -= ndisDeviceStr.Length;
    Source.Length = _mm_cvtsi128_si32((__m128i)v12) - ndisDeviceStr.Length;
    Source.Buffer += (unsigned __int64)ndisDeviceStr.Length >> 1;
    v13 = (unsigned __int16)(DestinationString.Length + v2->Name.Length + Paths->Length - ndisDeviceStr.Length + 2);
    Destination.Length = 0;
    Destination.MaximumLength = v13;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      v5 = 0;
      goto LABEL_55;
    }
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &v2->Name);
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    MajorNdisVersion = v2->MajorNdisVersion;
    BugCheckParameter3[6].Header.Type = -122;
    if ( MajorNdisVersion > 6u )
      goto LABEL_14;
    if ( MajorNdisVersion == 6 )
    {
      MinorNdisVersion = v2->MinorNdisVersion;
      if ( MinorNdisVersion >= 0x1Eu )
      {
LABEL_14:
        v17 = 4;
        v18 = 312;
        goto LABEL_15;
      }
      if ( MinorNdisVersion >= 0x14u )
      {
        v17 = 3;
        v18 = 280;
        goto LABEL_15;
      }
      if ( MinorNdisVersion )
      {
        v17 = 2;
        v18 = 256;
        goto LABEL_15;
      }
    }
    v17 = 1;
    v18 = 248;
LABEL_15:
    HIWORD(BugCheckParameter3[6].Header.LockNV) = v18;
    BugCheckParameter3[6].Header.Signalling = v17;
    BugCheckParameter3[6].Header.WaitListHead.Flink = (_LIST_ENTRY *)&Destination;
    *(_QWORD *)&BugCheckParameter3[7].Header.Lock = a1->PhysicalDeviceObject;
    v19 = a1->MacOptions & 0x80000001;
    BugCheckParameter3[6].Header.WaitListHead.Blink = (_LIST_ENTRY *)Paths;
    *(_QWORD *)&BugCheckParameter3[16].Header.Lock = &a1->MiniportName;
    if ( v19 == -2147483647 )
      LODWORD(BugCheckParameter3[7].Header.WaitListHead.Flink) = 3;
    else
      LODWORD(BugCheckParameter3[7].Header.WaitListHead.Flink) = a1->MediaType;
    HighestFilter = a1->HighestFilter;
    if ( HighestFilter )
    {
      *(_QWORD *)&BugCheckParameter3[8].Header.Lock = HighestFilter->XmitLinkSpeedIndicateUp;
      BugCheckParameter3[8].Header.WaitListHead.Blink = (_LIST_ENTRY *)HighestFilter->RcvLinkSpeedIndicateUp;
      BugCheckParameter3[9].Header.LockNV = HighestFilter->MediaConnectStateIndicateUp;
      MediaDuplexStateIndicateUp = HighestFilter->MediaDuplexStateIndicateUp;
    }
    else
    {
      IfBlock = a1->IfBlock;
      *(_QWORD *)&BugCheckParameter3[8].Header.Lock = a1->XmitLinkSpeed;
      BugCheckParameter3[8].Header.WaitListHead.Blink = (_LIST_ENTRY *)a1->RcvLinkSpeed;
      BugCheckParameter3[9].Header.LockNV = IfBlock->MediaConnectState;
      MediaDuplexStateIndicateUp = IfBlock->MediaDuplexState;
    }
    BugCheckParameter3[9].Header.SignalState = MediaDuplexStateIndicateUp;
    HIDWORD(BugCheckParameter3[7].Header.WaitListHead.Flink) = a1->TopFilterRestartAttributes.MtuSize;
    BugCheckParameter3[7].Header.WaitListHead.Blink = (_LIST_ENTRY *)a1->TopFilterRestartAttributes.MaxXmitLinkSpeed;
    BugCheckParameter3[8].Header.WaitListHead.Flink = (_LIST_ENTRY *)a1->TopFilterRestartAttributes.MaxRcvLinkSpeed;
    LODWORD(BugCheckParameter3[9].Header.WaitListHead.Flink) = a1->TopFilterRestartAttributes.LookaheadSize;
    BugCheckParameter3[10].Header.LockNV = a1->TopFilterRestartAttributes.SupportedPacketFilters;
    BugCheckParameter3[10].Header.SignalState = a1->TopFilterRestartAttributes.MaxMulticastListSize;
    HIDWORD(BugCheckParameter3[11].Header.WaitListHead.Blink) = a1->PhysicalMediumType;
    *(_QWORD *)&BugCheckParameter3[12].Header.Lock = &a1->TopRecvScaleCapabilities;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && v2->MinorNdisVersion >= 0x14u )
      *(_QWORD *)&BugCheckParameter3[17].Header.Lock = &a1->PMAdvertisedCapabilities;
    else
      BugCheckParameter3[9].Header.WaitListHead.Blink = (_LIST_ENTRY *)&a1->PMCapabilities61;
    Offload = a1->Offload;
    if ( Offload )
    {
      if ( Offload->SupportsTopOffload == 1 )
        BugCheckParameter3[15].Header.WaitListHead.Flink = (_LIST_ENTRY *)&Offload->TopCapabilities;
      if ( Offload->SupportsTopTcpConnectionOffload == 1 )
        BugCheckParameter3[15].Header.WaitListHead.Blink = (_LIST_ENTRY *)&Offload->TopTcpConnectionOffloadCapabilities;
    }
    Flink = BugCheckParameter3[16].Header.WaitListHead.Flink;
    if ( a1->HDSplitCurrentConfig )
      Flink = (_LIST_ENTRY *)a1->HDSplitCurrentConfig;
    TopReceiveFilterCurrentCapabilities = a1->TopReceiveFilterCurrentCapabilities;
    BugCheckParameter3[16].Header.WaitListHead.Flink = Flink;
    Blink = BugCheckParameter3[16].Header.WaitListHead.Blink;
    if ( TopReceiveFilterCurrentCapabilities )
      Blink = (_LIST_ENTRY *)TopReceiveFilterCurrentCapabilities;
    TopNicSwitchCurrentCapabilities = a1->TopNicSwitchCurrentCapabilities;
    BugCheckParameter3[16].Header.WaitListHead.Blink = Blink;
    v27 = BugCheckParameter3[17].Header.WaitListHead.Flink;
    if ( TopNicSwitchCurrentCapabilities )
      v27 = (_LIST_ENTRY *)TopNicSwitchCurrentCapabilities;
    BugCheckParameter3[17].Header.WaitListHead.Flink = v27;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && v2->MinorNdisVersion >= 0x1Eu )
    {
      NDKBlock = ndisGetNDKBlock(a1);
      if ( NDKBlock )
      {
        v38 = *((_BYTE *)NDKBlock + 24);
        *(_QWORD *)&BugCheckParameter3[18].Header.Lock = (char *)NDKBlock + 32;
        LOBYTE(BugCheckParameter3[17].Header.WaitListHead.Blink) = v38;
      }
      else
      {
        LOBYTE(BugCheckParameter3[17].Header.WaitListHead.Blink) = 0;
        *(_QWORD *)&BugCheckParameter3[18].Header.Lock = 0LL;
      }
    }
    if ( v17 >= 4u )
    {
      if ( a1->SriovCurrentCapabilities )
      {
        BugCheckParameter3[18].Header.WaitListHead.Flink = (_LIST_ENTRY *)a1->SriovCurrentCapabilities;
        if ( (unsigned int)ndisIovGetNicSwitchList(
                             (__int64)a1,
                             (__int64 *)&BugCheckParameter3[18].Header.WaitListHead.Blink) )
          goto LABEL_70;
      }
    }
    v29 = a1->IfBlock;
    LOWORD(BugCheckParameter3[10].Header.WaitListHead.Flink) = v29->ifPhysAddress.Length;
    memmove(
      (char *)&BugCheckParameter3[10].Header.WaitListHead.Flink + 2,
      v29->ifPhysAddress.Address,
      LOWORD(BugCheckParameter3[10].Header.WaitListHead.Flink));
    ndisIfQueryBindingMiniportIfIndex((char)a1, (__int64)&BugCheckParameter3[13]);
    v30 = a1->IfBlock;
    HIDWORD(BugCheckParameter3[13].Header.WaitListHead.Flink) = a1->TopFilterRestartAttributes.AccessType;
    LODWORD(BugCheckParameter3[13].Header.WaitListHead.Blink) = v30->DirectionType;
    HIDWORD(BugCheckParameter3[13].Header.WaitListHead.Blink) = a1->TopFilterRestartAttributes.ConnectionType;
    LOWORD(BugCheckParameter3[14].Header.Lock) = v30->ifType;
    BugCheckParameter3[14].Header.Size = v30->ifConnectorPresent;
    BugCheckParameter3[14].Header.WaitListHead.Blink = *(_LIST_ENTRY **)&a1->TopFilterRestartAttributes.DataBackFillSize;
    BugCheckParameter3[15].Header.LockNV = a1->TopFilterRestartAttributes.MacOptions;
    BugCheckParameter3[15].Header.SignalState = v30->CompartmentId;
    if ( (unsigned int)ndisGetPortList((__int64)a1, &BugCheckParameter3[14].Header.WaitListHead.Flink) )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_70:
      v5 = 0;
LABEL_55:
      p_Mutex = &v2->Mutex;
      goto LABEL_56;
    }
    BugCheckParameter3[0].Header.WaitListHead.Flink = (_LIST_ENTRY *)v2;
    *(_QWORD *)&BugCheckParameter3[1].Header.Lock = a1;
    BugCheckParameter3[1].Header.WaitListHead = (_LIST_ENTRY)Destination;
    *(_QWORD *)&BugCheckParameter3[2].Header.Lock = Paths;
    BugCheckParameter3[0].Header.WaitListHead.Blink = 0LL;
    KeInitializeEvent(&BugCheckParameter3[4], NotificationEvent, 0);
    v2->BindingAdapter = a1;
    v9 = 0;
    v4 = ndisInvokeBindAdapter((char)v2);
    if ( v4 == 259 )
    {
      KeWaitForSingleObject(&BugCheckParameter3[4], Executive, 0, 0, 0LL);
      v4 = (unsigned int)BugCheckParameter3[3].Header.WaitListHead.Blink;
    }
    if ( v4 )
    {
LABEL_50:
      ExFreePoolWithTag(Destination.Buffer, 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_ZZL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v32,
          v34,
          0x1Cu,
          Timeout,
          &v2->Name.Length,
          (__int64)a1->pAdapterInstanceName);
      if ( (byte_1C00E8081 & 2) != 0 )
        McTemplateK0jqxzd(
          v33,
          v32,
          &a1->InterfaceGuid,
          (__int64)&a1->InterfaceGuid,
          a1->IfIndex,
          a1->NetLuid.Value,
          v2->Name.Buffer,
          v4);
      v5 = v41;
      goto LABEL_55;
    }
    if ( BugCheckParameter3[0].Header.WaitListHead.Blink )
    {
      if ( !ndisReferenceOpenByHandle((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink, 2u) )
        KeBugCheckEx(
          0x7Cu,
          0x16uLL,
          (ULONG_PTR)v2,
          (ULONG_PTR)BugCheckParameter3,
          (ULONG_PTR)BugCheckParameter3[0].Header.WaitListHead.Blink);
      v41 = 1;
      ndisIndicateInitialStateToBinding((__int64)BugCheckParameter3[0].Header.WaitListHead.Blink);
    }
    if ( MiniportSupportsReceiveThrottle(a1) )
    {
LABEL_49:
      ndisNotifyWmiBindUnbind((__int64)a1, (__int64)v2, 1);
      goto LABEL_50;
    }
    if ( v2->IsIPv4 == 1 )
    {
      v39 = 0;
    }
    else if ( v2->IsIPv6 == 1 )
    {
      v39 = 1;
    }
    else
    {
      if ( v2->IsNdisTest6 != 1 )
        goto LABEL_49;
      v39 = 2;
    }
    ndisBindUnbindPeriodicReceives(v31, v39);
    goto LABEL_49;
  }
  v4 = -1073741823;
LABEL_62:
  if ( BugCheckParameter3[14].Header.WaitListHead.Flink )
    ExFreePoolWithTag(BugCheckParameter3[14].Header.WaitListHead.Flink, 0);
  if ( BugCheckParameter3[18].Header.WaitListHead.Blink )
    ExFreePoolWithTag(BugCheckParameter3[18].Header.WaitListHead.Blink, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      6,
      29,
      (struct _GUID *)&WPP_9a24f6ed26863a1258e184bd1c2f5497_Traceguids,
      (char)a1,
      (char)v2);
  }
  return v4;
}
