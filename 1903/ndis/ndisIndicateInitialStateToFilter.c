/*
 * XREFs of ndisIndicateInitialStateToFilter @ 0x1C0028F20
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ?ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C0C (-ndisFInvokeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0017A6C (-ndisFIndicateStatusInternal@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0018498 (-ndisMAcquireStInLockWithSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0018688 (-ndisUpdateFilterFakeStatus@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     NdisMSleep @ 0x1C001BEC0 (NdisMSleep.c)
 *     ?ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0029408 (-ndisMReleaseStInLockAndSpinLock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisFAllocateFilterOffload @ 0x1C0029830 (ndisFAllocateFilterOffload.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z @ 0x1C008CAD8 (-ndisAllocateAndInitializeTimestampForFilter@@YAPEAU_NDIS_TIMESTAMP_CAPABILITIES@@PEAU1@@Z.c)
 */

_UNKNOWN **__fastcall ndisIndicateInitialStateToFilter(struct _NDIS_FILTER_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // r14
  _NDIS_FILTER_BLOCK *HigherFilter; // rdi
  _NDIS_FILTER_BLOCK *LowerFilter; // r13
  char v5; // r12
  int v6; // edx
  unsigned __int64 *p_Lock; // rsi
  KIRQL v8; // al
  unsigned int Flags; // ecx
  KIRQL v10; // dl
  _NDIS_MINIPORT_OFFLOAD *v11; // rax
  _NDIS_OFFLOAD *p_TopCapabilities; // rax
  __int128 v13; // xmm1
  _NDIS_FILTER_TASK_OFFLOAD *v14; // rcx
  void (__fastcall *v15)(__int64, struct _NET_BUFFER_LIST *, int, unsigned int, unsigned int); // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopHwTimestampCapabilities; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *TopTimestampConfig; // rax
  unsigned __int8 XState; // al
  void (__fastcall *v19)(void *, void *); // rax
  void (__fastcall *v20)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int); // rcx
  KIRQL v21; // dl
  int v22; // edx
  _UNKNOWN **result; // rax
  KIRQL v24; // r15
  unsigned int v25; // eax
  _NDIS_FILTER_TASK_OFFLOAD *Offload; // rax
  __int128 v27; // xmm1
  unsigned int *p_UdpEsp; // rax
  bool v29; // zf
  _NDIS_FILTER_TASK_OFFLOAD *v30; // rcx
  void *v31; // rax
  unsigned int v32; // eax
  void (__fastcall *v33)(__int64, struct _NET_BUFFER_LIST *, int, unsigned int, unsigned int); // rax
  void *v34; // rax
  KIRQL v35; // r15
  unsigned int v36; // ecx
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCapabilities; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v38; // rax
  void *v39; // rax
  KIRQL v40; // r15
  unsigned int v41; // eax
  _NDIS_TIMESTAMP_CAPABILITIES *HwTimestampCurrentConfig; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v43; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v44; // rax
  _NDIS_TIMESTAMP_CAPABILITIES *v45; // rax
  unsigned __int8 v46[4]; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int i; // [rsp+3Ch] [rbp-CCh]
  KIRQL NewIrql[8]; // [rsp+40h] [rbp-C8h]
  struct _NDIS_STATUS_INDICATION v49; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v50[5]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v51[56]; // [rsp+E0h] [rbp-28h] BYREF
  _OWORD v52[14]; // [rsp+118h] [rbp+10h] BYREF

  v46[0] = 0;
  memset(&v49, 0, sizeof(v49));
  Miniport = a1->Miniport;
  HigherFilter = a1->HigherFilter;
  LowerFilter = a1->LowerFilter;
  memset(v52, 0, 0xD8uLL);
  v5 = 1;
  memset(v51, 0, sizeof(v51));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1,
      72,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)a1);
  }
  memset(v50, 0, sizeof(v50));
  p_Lock = &a1->Lock;
  v8 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  Flags = a1->Flags;
  v10 = v8;
  NewIrql[0] = v8;
  if ( (Flags & 0x2000) != 0 )
  {
    do
    {
      a1->LockThread = 0LL;
      KeReleaseSpinLock(&a1->Lock, v10);
      if ( KeGetCurrentIrql() == 2 )
      {
        for ( i = 0; i < 0x32; ++i )
          ;
      }
      else
      {
        NdisMSleep(0x32u);
      }
      v10 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
      a1->LockThread = KeGetCurrentThread();
      Flags = a1->Flags;
    }
    while ( (Flags & 0x2000) != 0 );
    NewIrql[0] = v10;
  }
  a1->LockThread = 0LL;
  a1->Flags = Flags | 0x2000;
  KeReleaseSpinLockFromDpcLevel(&a1->Lock);
  HIDWORD(v50[0]) = a1->MediaConnectState;
  LODWORD(v50[1]) = a1->MediaDuplexState;
  v50[2] = a1->XmitLinkSpeed;
  v50[3] = a1->RcvLinkSpeed;
  v50[4] = *(_QWORD *)&a1->PauseFunctions;
  LODWORD(v50[0]) = 2621824;
  if ( HigherFilter )
  {
    v24 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
    v46[0] = v24;
    while ( 1 )
    {
      v25 = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (v25 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, v24);
      if ( KeGetCurrentIrql() == 2 )
      {
        for ( i = 0; i < 0x32; ++i )
          ;
      }
      else
      {
        NdisMSleep(0x32u);
      }
      v46[0] = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
      v24 = v46[0];
      HigherFilter->LockThread = KeGetCurrentThread();
    }
    HigherFilter->Flags = v25 | 0x2000;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    Offload = HigherFilter->Offload;
    if ( Offload )
    {
      v52[0] = *(_OWORD *)&Offload->OffloadCaps.Header.Type;
      v52[1] = *(_OWORD *)((char *)&Offload->OffloadCaps.Checksum.IPv4Receive + 4);
      v52[2] = *(_OWORD *)((char *)&Offload->OffloadCaps.Checksum.IPv6Receive + 4);
      v52[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&Offload->OffloadCaps.LsoV1.IPv4 + 12);
      v52[4] = *(_OWORD *)&Offload->OffloadCaps.IPsecV1.Supported.IPv4Options;
      v52[5] = *(_OWORD *)&Offload->OffloadCaps.LsoV2.IPv4.Encapsulation;
      v52[6] = *(_OWORD *)&Offload->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize;
      v27 = *(_OWORD *)&Offload->OffloadCaps.IPsecV2.Encapsulation;
      p_UdpEsp = &Offload->OffloadCaps.IPsecV2.UdpEsp;
      v29 = a1->Offload == 0LL;
      v52[7] = v27;
      v52[8] = *(_OWORD *)p_UdpEsp;
      v52[9] = *((_OWORD *)p_UdpEsp + 1);
      v52[10] = *((_OWORD *)p_UdpEsp + 2);
      v52[11] = *((_OWORD *)p_UdpEsp + 3);
      v52[12] = *((_OWORD *)p_UdpEsp + 4);
      *(_QWORD *)&v52[13] = *((_QWORD *)p_UdpEsp + 10);
      if ( v29 && (unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v5 = 0;
      }
      else
      {
        v30 = a1->Offload;
        *(_OWORD *)&v30->OffloadCaps.Header.Type = v52[0];
        *(_OWORD *)((char *)&v30->OffloadCaps.Checksum.IPv4Receive + 4) = v52[1];
        *(_OWORD *)((char *)&v30->OffloadCaps.Checksum.IPv6Receive + 4) = v52[2];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v30->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v52[3];
        *(_OWORD *)&v30->OffloadCaps.IPsecV1.Supported.IPv4Options = v52[4];
        *(_OWORD *)&v30->OffloadCaps.LsoV2.IPv4.Encapsulation = v52[5];
        *(_OWORD *)&v30->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v52[6];
        v30 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v30 + 128);
        v30[-1].OffloadCaps.UdpSegmentation.IPv6 = (_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6>)v52[7];
        *(_OWORD *)&v30->OffloadCaps.Header.Type = v52[8];
        *(_OWORD *)((char *)&v30->OffloadCaps.Checksum.IPv4Receive + 4) = v52[9];
        *(_OWORD *)((char *)&v30->OffloadCaps.Checksum.IPv6Receive + 4) = v52[10];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v30->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v52[11];
        *(_OWORD *)&v30->OffloadCaps.IPsecV1.Supported.IPv4Options = v52[12];
        *(_QWORD *)&v30->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v52[13];
        memset(&v49, 0, sizeof(v49));
        v49.Header = (_NDIS_OBJECT_HEADER)7340440;
        v31 = Miniport;
        v49.StatusCode = 1073872902;
        if ( LowerFilter )
          v31 = LowerFilter;
        v49.StatusBufferSize = 216;
        v49.SourceHandle = v31;
        v49.StatusBuffer = v52;
        KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
        HigherFilter->Flags &= ~0x2000u;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v24);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v49);
        else
          ndisFIndicateStatusInternal(a1, &v49);
        v24 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
        v46[0] = v24;
        while ( 1 )
        {
          v32 = HigherFilter->Flags;
          HigherFilter->LockThread = 0LL;
          if ( (v32 & 0x2000) == 0 )
            break;
          KeReleaseSpinLock(&HigherFilter->Lock, v24);
          if ( KeGetCurrentIrql() == 2 )
          {
            for ( i = 0; i < 0x32; ++i )
              ;
          }
          else
          {
            NdisMSleep(0x32u);
          }
          v46[0] = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
          v24 = v46[0];
          HigherFilter->LockThread = KeGetCurrentThread();
        }
        HigherFilter->Flags = v32 | 0x2000;
        KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
      }
    }
    v33 = ndisFilterIndicateReceiveNetBufferLists;
    if ( HigherFilter->MediaConnectState != MediaConnectStateConnected )
      v33 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, int, unsigned int, unsigned int))&ndisFakeFilterReceiveHandler;
    a1->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))v33;
    memset(&v49, 0, sizeof(v49));
    v49.Header = (_NDIS_OBJECT_HEADER)7340440;
    v34 = Miniport;
    v49.StatusCode = 1073807383;
    if ( LowerFilter )
      v34 = LowerFilter;
    v49.SourceHandle = v34;
    v49.StatusBuffer = v50;
    v49.StatusBufferSize = 40;
    KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
    HigherFilter->Flags &= ~0x2000u;
    HigherFilter->LockThread = 0LL;
    KeReleaseSpinLock(&HigherFilter->Lock, v24);
    if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
      ndisFInvokeStatus(a1, &v49);
    else
      ndisFIndicateStatusInternal(a1, &v49);
    v35 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
    v46[0] = v35;
    while ( 1 )
    {
      v36 = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (v36 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, v35);
      if ( KeGetCurrentIrql() == 2 )
      {
        for ( i = 0; i < 0x32; ++i )
          ;
      }
      else
      {
        NdisMSleep(0x32u);
      }
      v46[0] = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
      v35 = v46[0];
      HigherFilter->LockThread = KeGetCurrentThread();
    }
    HigherFilter->Flags = v36 | 0x2000;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    HwTimestampCapabilities = HigherFilter->HwTimestampCapabilities;
    if ( HwTimestampCapabilities )
    {
      v29 = a1->HwTimestampCapabilities == 0LL;
      *(_OWORD *)v51 = *(_OWORD *)&HwTimestampCapabilities->Header.Type;
      *(_OWORD *)&v51[16] = *(_OWORD *)&HwTimestampCapabilities->CrossTimestamp;
      *(_OWORD *)&v51[32] = *(_OWORD *)&HwTimestampCapabilities->Reserved2;
      *(_QWORD *)&v51[48] = *(_QWORD *)&HwTimestampCapabilities->TimestampFlags.AllReceiveHw;
      if ( v29 )
      {
        v38 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCapabilities);
        a1->HwTimestampCapabilities = v38;
        v5 = v38 != 0LL ? v5 : 0;
      }
      if ( v5 )
      {
        memset(&v49, 0, sizeof(v49));
        v49.Header = (_NDIS_OBJECT_HEADER)7340440;
        v39 = Miniport;
        v49.StatusCode = 1074073600;
        if ( LowerFilter )
          v39 = LowerFilter;
        v49.StatusBufferSize = 56;
        v49.SourceHandle = v39;
        v49.StatusBuffer = v51;
        KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
        HigherFilter->Flags &= ~0x2000u;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v35);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v49);
        else
          ndisFIndicateStatusInternal(a1, &v49);
      }
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
      HigherFilter->Flags &= ~0x2000u;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v35);
    }
    v40 = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
    v46[0] = v40;
    while ( 1 )
    {
      v41 = HigherFilter->Flags;
      HigherFilter->LockThread = 0LL;
      if ( (v41 & 0x2000) == 0 )
        break;
      KeReleaseSpinLock(&HigherFilter->Lock, v40);
      if ( KeGetCurrentIrql() == 2 )
      {
        for ( i = 0; i < 0x32; ++i )
          ;
      }
      else
      {
        NdisMSleep(0x32u);
      }
      v46[0] = KeAcquireSpinLockRaiseToDpc(&HigherFilter->Lock);
      v40 = v46[0];
      HigherFilter->LockThread = KeGetCurrentThread();
    }
    HigherFilter->Flags = v41 | 0x2000;
    KeReleaseSpinLockFromDpcLevel(&HigherFilter->Lock);
    HwTimestampCurrentConfig = HigherFilter->HwTimestampCurrentConfig;
    if ( HwTimestampCurrentConfig )
    {
      v29 = a1->HwTimestampCurrentConfig == 0LL;
      *(_OWORD *)v51 = *(_OWORD *)&HwTimestampCurrentConfig->Header.Type;
      *(_OWORD *)&v51[16] = *(_OWORD *)&HwTimestampCurrentConfig->CrossTimestamp;
      *(_OWORD *)&v51[32] = *(_OWORD *)&HwTimestampCurrentConfig->Reserved2;
      *(_QWORD *)&v51[48] = *(_QWORD *)&HwTimestampCurrentConfig->TimestampFlags.AllReceiveHw;
      if ( v29 )
      {
        v43 = ndisAllocateAndInitializeTimestampForFilter(HigherFilter->HwTimestampCurrentConfig);
        a1->HwTimestampCurrentConfig = v43;
        v5 &= -(v43 != 0LL);
      }
      if ( v5 )
      {
        memset(&v49, 0, sizeof(v49));
        v49.Header = (_NDIS_OBJECT_HEADER)7340440;
        v49.StatusCode = 1074073601;
        v49.StatusBuffer = v51;
        if ( LowerFilter )
          Miniport = (_NDIS_MINIPORT_BLOCK *)LowerFilter;
        v49.StatusBufferSize = 56;
        v49.SourceHandle = Miniport;
        KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
        HigherFilter->Flags &= ~0x2000u;
        HigherFilter->LockThread = 0LL;
        KeReleaseSpinLock(&HigherFilter->Lock, v40);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v49);
        else
          ndisFIndicateStatusInternal(a1, &v49);
      }
    }
    else
    {
      KeAcquireSpinLockAtDpcLevel(&HigherFilter->Lock);
      HigherFilter->Flags &= ~0x2000u;
      HigherFilter->LockThread = 0LL;
      KeReleaseSpinLock(&HigherFilter->Lock, v40);
    }
    p_Lock = &a1->Lock;
  }
  else
  {
    ndisMAcquireStInLockWithSpinLock(Miniport, v46);
    v11 = Miniport->Offload;
    if ( v11 && v11->SupportsOffload )
    {
      p_TopCapabilities = &v11->TopCapabilities;
      v52[0] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v52[1] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v52[2] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v52[3] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v52[4] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      v52[5] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      v52[6] = *(_OWORD *)&p_TopCapabilities->LsoV2.IPv6.MaxOffLoadSize;
      v13 = *(_OWORD *)&p_TopCapabilities->IPsecV2.Encapsulation;
      p_TopCapabilities = (_NDIS_OFFLOAD *)((char *)p_TopCapabilities + 128);
      v52[7] = v13;
      v52[8] = *(_OWORD *)&p_TopCapabilities->Header.Type;
      v52[9] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv4Receive + 4);
      v52[10] = *(_OWORD *)((char *)&p_TopCapabilities->Checksum.IPv6Receive + 4);
      v52[11] = *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&p_TopCapabilities->LsoV1.IPv4 + 12);
      v52[12] = *(_OWORD *)&p_TopCapabilities->IPsecV1.Supported.IPv4Options;
      *(_QWORD *)&v52[13] = *(_QWORD *)&p_TopCapabilities->LsoV2.IPv4.Encapsulation;
      if ( !a1->Offload && (unsigned int)ndisFAllocateFilterOffload(a1) )
      {
        v5 = 0;
      }
      else
      {
        v14 = a1->Offload;
        *(_OWORD *)&v14->OffloadCaps.Header.Type = v52[0];
        *(_OWORD *)((char *)&v14->OffloadCaps.Checksum.IPv4Receive + 4) = v52[1];
        *(_OWORD *)((char *)&v14->OffloadCaps.Checksum.IPv6Receive + 4) = v52[2];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v14->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v52[3];
        *(_OWORD *)&v14->OffloadCaps.IPsecV1.Supported.IPv4Options = v52[4];
        *(_OWORD *)&v14->OffloadCaps.LsoV2.IPv4.Encapsulation = v52[5];
        *(_OWORD *)&v14->OffloadCaps.LsoV2.IPv6.MaxOffLoadSize = v52[6];
        v14 = (_NDIS_FILTER_TASK_OFFLOAD *)((char *)v14 + 128);
        v14[-1].OffloadCaps.UdpSegmentation.IPv6 = (_NDIS_UDP_SEGMENTATION_OFFLOAD::<unnamed_type_IPv6>)v52[7];
        *(_OWORD *)&v14->OffloadCaps.Header.Type = v52[8];
        *(_OWORD *)((char *)&v14->OffloadCaps.Checksum.IPv4Receive + 4) = v52[9];
        *(_OWORD *)((char *)&v14->OffloadCaps.Checksum.IPv6Receive + 4) = v52[10];
        *(_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4> *)((char *)&v14->OffloadCaps.LsoV1.IPv4 + 12) = (_NDIS_TCP_LARGE_SEND_OFFLOAD_V1::<unnamed_type_IPv4>)v52[11];
        *(_OWORD *)&v14->OffloadCaps.IPsecV1.Supported.IPv4Options = v52[12];
        *(_QWORD *)&v14->OffloadCaps.LsoV2.IPv4.Encapsulation = *(_QWORD *)&v52[13];
        memset(&v49, 0, sizeof(v49));
        v49.StatusBuffer = v52;
        v49.Header = (_NDIS_OBJECT_HEADER)7340440;
        v49.SourceHandle = Miniport;
        v49.StatusCode = 1073872902;
        v49.StatusBufferSize = 216;
        ndisMReleaseStInLockAndSpinLock(Miniport, v46[0]);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v49);
        else
          ndisFIndicateStatusInternal(a1, &v49);
        ndisMAcquireStInLockWithSpinLock(Miniport, v46);
      }
    }
    HIDWORD(v50[0]) = Miniport->MediaConnectState;
    LODWORD(v50[1]) = Miniport->MediaDuplexState;
    v50[2] = Miniport->XmitLinkSpeed;
    v50[3] = Miniport->RcvLinkSpeed;
    v15 = ndisFilterIndicateReceiveNetBufferLists;
    if ( Miniport->MediaConnectState != MediaConnectStateConnected )
      v15 = (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, int, unsigned int, unsigned int))&ndisFakeFilterReceiveHandler;
    a1->FilterIndicateReceiveNetBufferListsHandler = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int, unsigned int))v15;
    memset(&v49, 0, sizeof(v49));
    v49.StatusBuffer = v50;
    v49.Header = (_NDIS_OBJECT_HEADER)7340440;
    v49.StatusBufferSize = 40;
    v49.SourceHandle = Miniport;
    v49.StatusCode = 1073807383;
    ndisMReleaseStInLockAndSpinLock(Miniport, v46[0]);
    if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
      ndisFInvokeStatus(a1, &v49);
    else
      ndisFIndicateStatusInternal(a1, &v49);
    ndisMAcquireStInLockWithSpinLock(Miniport, v46);
    TopHwTimestampCapabilities = Miniport->TopHwTimestampCapabilities;
    if ( TopHwTimestampCapabilities )
    {
      *(_OWORD *)v51 = *(_OWORD *)&TopHwTimestampCapabilities->Header.Type;
      *(_OWORD *)&v51[16] = *(_OWORD *)&TopHwTimestampCapabilities->CrossTimestamp;
      *(_OWORD *)&v51[32] = *(_OWORD *)&TopHwTimestampCapabilities->Reserved2;
      *(_QWORD *)&v51[48] = *(_QWORD *)&TopHwTimestampCapabilities->TimestampFlags.AllReceiveHw;
      if ( !a1->HwTimestampCapabilities )
      {
        v44 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopHwTimestampCapabilities);
        a1->HwTimestampCapabilities = v44;
        v5 = v44 != 0LL ? v5 : 0;
      }
      if ( v5 )
      {
        memset(&v49, 0, sizeof(v49));
        v49.StatusBuffer = v51;
        v49.Header = (_NDIS_OBJECT_HEADER)7340440;
        v49.SourceHandle = Miniport;
        v49.StatusCode = 1074073600;
        v49.StatusBufferSize = 56;
        ndisMReleaseStInLockAndSpinLock(Miniport, v46[0]);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v49);
        else
          ndisFIndicateStatusInternal(a1, &v49);
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v46[0]);
    }
    ndisMAcquireStInLockWithSpinLock(Miniport, v46);
    TopTimestampConfig = Miniport->TopTimestampConfig;
    if ( TopTimestampConfig )
    {
      *(_OWORD *)v51 = *(_OWORD *)&TopTimestampConfig->Header.Type;
      *(_OWORD *)&v51[16] = *(_OWORD *)&TopTimestampConfig->CrossTimestamp;
      *(_OWORD *)&v51[32] = *(_OWORD *)&TopTimestampConfig->Reserved2;
      *(_QWORD *)&v51[48] = *(_QWORD *)&TopTimestampConfig->TimestampFlags.AllReceiveHw;
      if ( !a1->HwTimestampCurrentConfig )
      {
        v45 = ndisAllocateAndInitializeTimestampForFilter(Miniport->TopTimestampConfig);
        a1->HwTimestampCurrentConfig = v45;
        v5 &= -(v45 != 0LL);
      }
      if ( v5 )
      {
        memset(&v49, 0, sizeof(v49));
        v49.StatusBuffer = v51;
        v49.Header = (_NDIS_OBJECT_HEADER)7340440;
        v49.SourceHandle = Miniport;
        v49.StatusCode = 1074073601;
        v49.StatusBufferSize = 56;
        ndisMReleaseStInLockAndSpinLock(Miniport, v46[0]);
        if ( a1->FilterDriver->DefaultFilterCharacteristics.StatusHandler )
          ndisFInvokeStatus(a1, &v49);
        else
          ndisFIndicateStatusInternal(a1, &v49);
      }
    }
    else
    {
      ndisMReleaseStInLockAndSpinLock(Miniport, v46[0]);
    }
  }
  XState = a1->XState;
  if ( a1->MediaConnectState == MediaConnectStateConnected )
  {
    v20 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))ndisFilterSendNetBufferLists;
    a1->XState = XState & 0xFE;
    v19 = (void (__fastcall *)(void *, void *))ndisFilterCancelSendNetBufferLists;
  }
  else
  {
    a1->XState = XState | 1;
    ndisUpdateFilterFakeStatus(a1);
    v19 = (void (__fastcall *)(void *, void *))ndisFakeMiniportCancelSendPackets;
    v20 = (void (__fastcall *)(void *, _NET_BUFFER_LIST *, unsigned int, unsigned int))&ndisFakeFilterSendHandler;
  }
  a1->FilterSendNetBufferListsHandler = v20;
  a1->FilterCancelSendNetBufferListsHandler = v19;
  KeAcquireSpinLockAtDpcLevel(p_Lock);
  v21 = NewIrql[0];
  a1->Flags &= ~0x2000u;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(p_Lock, v21);
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 8),
                          v22,
                          1,
                          73,
                          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
                          (char)a1);
  }
  return result;
}
