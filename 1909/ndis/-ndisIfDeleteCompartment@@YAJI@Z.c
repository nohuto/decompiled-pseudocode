/*
 * XREFs of ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C00634A8
 * Callers:
 *     ndisIfDereferenceCompartmentForUser @ 0x1C00204B8 (ndisIfDereferenceCompartmentForUser.c)
 *     ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00655E0 (-ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C001D754 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00361C8 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368BC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     WPP_RECORDER_SF_Ll @ 0x1C0066C24 (WPP_RECORDER_SF_Ll_ea_1C0066C24.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C0109030 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     NdisIfDeregisterInterface @ 0x1C0114940 (NdisIfDeregisterInterface.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0114960 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfDeleteCompartment(unsigned int a1)
{
  int v2; // ebx
  int v3; // edx
  char v4; // di
  KIRQL v5; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int v7; // edx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v8; // rsi
  unsigned int Flags; // eax
  int UserRef; // eax
  _LIST_ENTRY *Flink; // rcx
  _NDIS_IF_NETWORK_BLOCK *LoopbackNetwork; // r8
  _LIST_ENTRY *v13; // rcx
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  _NDIS_IF_BLOCK *LoopbackIf; // rax
  NET_IFTYPE ifType; // bx
  __int64 v19; // rdi
  KIRQL v20; // di
  _LIST_ENTRY *v21; // r8
  _LIST_ENTRY *Blink; // rdx
  void **p_Flink; // r14
  PVOID *v24; // rdi
  PVOID v25; // rcx
  void **v26; // rax
  int Timeout; // [rsp+28h] [rbp-E0h]
  _QWORD v29[10]; // [rsp+48h] [rbp-C0h] BYREF
  struct _KEVENT Event; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v31[132]; // [rsp+B8h] [rbp-50h] BYREF

  v2 = 0;
  memset(v29, 0, 0x48uLL);
  memset(v31, 0, sizeof(v31));
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      22,
      152,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      a1);
  }
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v8 = CompartmentBlock;
  if ( !CompartmentBlock )
  {
    v2 = -1073741072;
    goto LABEL_20;
  }
  if ( CompartmentBlock->CompartmentId == 1 || (Flags = CompartmentBlock->Flags, (Flags & 1) != 0) )
  {
LABEL_31:
    v2 = -1073741811;
    goto LABEL_20;
  }
  if ( (Flags & 2) == 0 )
  {
    v4 = 1;
    v8->Flags = Flags | 2;
  }
  UserRef = v8->UserRef;
  if ( UserRef <= 0 )
  {
    Flink = v8->NetworkLink.Flink;
    if ( Flink == &v8->NetworkLink )
    {
LABEL_16:
      LoopbackNetwork = v8->LoopbackNetwork;
      v13 = LoopbackNetwork->InterfaceLink.Flink;
      if ( v13 == &LoopbackNetwork->InterfaceLink )
      {
LABEL_19:
        v8->Flags |= 1u;
        LoopbackNetwork->Flags |= 2u;
        goto LABEL_20;
      }
      while ( &v13[-79] == (_LIST_ENTRY *)v8->LoopbackIf )
      {
        v13 = v13->Flink;
        if ( v13 == &LoopbackNetwork->InterfaceLink )
          goto LABEL_19;
      }
    }
    else
    {
      while ( &Flink[-1] == (_LIST_ENTRY *)v8->LoopbackNetwork )
      {
        Flink = Flink->Flink;
        if ( Flink == &v8->NetworkLink )
          goto LABEL_16;
      }
    }
    goto LABEL_31;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v7,
      22,
      153,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      a1,
      UserRef);
  v2 = -1073740024;
LABEL_20:
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( v4 )
    ndisNsiNotifyClientCompartmentChange(v8, 2LL);
  if ( v2 >= 0 )
  {
    LoopbackIf = v8->LoopbackIf;
    ifType = LoopbackIf->ifType;
    v19 = (LoopbackIf->NetLuid.Value >> 24) & 0xFFFFFF;
    NdisIfDeregisterInterface(LoopbackIf->ifIndex);
    NdisIfFreeNetLuidIndex(ifType, v19);
    v29[0] = 0LL;
    v29[1] = 0LL;
    v29[2] = &NPI_MS_NDIS_MODULEID;
    v29[5] = &v8->LoopbackInfo.LoopbackIfNetworkGuid;
    v29[3] = 6LL;
    v29[4] = 0x300000002LL;
    v29[6] = 16LL;
    memset(&v31[1], 0, 0x20CuLL);
    v31[0] = 34603436;
    v29[8] = 528LL;
    v29[7] = v31;
    v2 = NsiSetAllParametersEx(v29);
    if ( v2 >= 0 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v20 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      v8->AsyncEvent = &Event;
      v21 = v8->Link.Flink;
      if ( (struct _NDIS_IF_COMPARTMENT_BLOCK *)v8->Link.Flink->Blink != v8
        || (Blink = v8->Link.Blink, (struct _NDIS_IF_COMPARTMENT_BLOCK *)Blink->Flink != v8) )
      {
LABEL_36:
        __fastfail(3u);
      }
      Blink->Flink = v21;
      v21->Blink = Blink;
      _InterlockedDecrement((volatile signed __int32 *)&ndisIfCompartmentCount);
      COMPARTMENTBLOCK_DECREMENT_REF(v8);
      KeReleaseSpinLock(&ndisIfListLock, v20);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v8->AsyncEvent = 0LL;
      p_Flink = (void **)&v8->JobLink.Flink;
      while ( 1 )
      {
        v24 = (PVOID *)*p_Flink;
        if ( *p_Flink == p_Flink )
          break;
        ObfDereferenceObject(v24[2]);
        v25 = *v24;
        if ( *((PVOID **)*v24 + 1) != v24 )
          goto LABEL_36;
        v26 = (void **)v24[1];
        if ( *v26 != v24 )
          goto LABEL_36;
        *v26 = v25;
        *((_QWORD *)v25 + 1) = v26;
        --v8->JobCount;
        ExFreePoolWithTag(v24, 0);
      }
      ExFreePoolWithTag(v8, 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Ll(*((_QWORD *)WPP_GLOBAL_Control + 8), v14, v15, v16, Timeout, v2, a1);
  return (unsigned int)v2;
}
