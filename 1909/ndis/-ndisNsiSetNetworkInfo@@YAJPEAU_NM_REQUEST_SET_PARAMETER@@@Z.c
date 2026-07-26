/*
 * XREFs of ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065E50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002527C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00361C8 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003671C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C00367A8 (ndisGetNsiClientInfo.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368BC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00630CC (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C0063D4C (-ndisIfReleaseSiteId@@YAXK@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C0063F24 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C01146B8 (-ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_.c)
 */

__int64 __fastcall ndisNsiSetNetworkInfo(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  unsigned int v1; // edi
  char v2; // r15
  KIRQL v4; // r12
  __int64 v5; // rsi
  unsigned int v6; // ebx
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v8; // rsi
  unsigned __int8 v9; // r8
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // r11
  int v11; // eax
  unsigned int Flags; // eax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v15; // r11
  _LIST_ENTRY *v16; // rcx
  _LIST_ENTRY *v17; // rax
  KIRQL v18; // bl
  unsigned int v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  int v22; // edx
  unsigned int v24; // [rsp+40h] [rbp-C0h] BYREF
  struct _KEVENT Event; // [rsp+48h] [rbp-B8h] BYREF
  struct _NDIS_NSI_NETWORK_RW v26; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+270h] [rbp+170h] BYREF
  __int64 v28; // [rsp+278h] [rbp+178h]
  __int64 v29; // [rsp+280h] [rbp+180h]

  v1 = 0;
  v2 = 0;
  v24 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      108,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((__int64)&v27);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(&v26, 0, sizeof(v26));
  if ( *((_DWORD *)a1 + 6) != 16
    || *((_DWORD *)a1 + 8)
    || (v5 = *((unsigned int *)a1 + 13), v6 = *((_DWORD *)a1 + 12), v6 + (unsigned int)v5 > 0x210)
    || v6 + (unsigned int)v5 < v6 )
  {
    v1 = -1073741808;
    goto LABEL_30;
  }
  memmove(&v26.Header.Type + v5, *((const void **)a1 + 5), v6);
  if ( !(_DWORD)v5 )
  {
LABEL_8:
    v1 = -1073741811;
LABEL_30:
    KeReleaseSpinLock(&ndisIfListLock, v4);
    goto LABEL_31;
  }
  if ( (unsigned int)v5 <= 4 )
  {
    if ( v6 < 4 )
      goto LABEL_8;
    v2 = 1;
  }
  NetworkBlock = ndisIfFindNetworkBlock(*((const struct _GUID **)a1 + 2));
  v8 = NetworkBlock;
  if ( !NetworkBlock || !ndisIsCompartmentAccessibleByClient((__int64)NetworkBlock->Compartment, (__int64)&v27, 1) )
    goto LABEL_8;
  if ( v2 )
    CompartmentBlock = ndisIfFindCompartmentBlock(v26.CompartmentId);
  if ( !CompartmentBlock )
    goto LABEL_8;
  v11 = *((_DWORD *)a1 + 14);
  if ( !v11 )
  {
    v19 = ndisNsiChangeNetworkInfo(v8, (_LIST_ENTRY *)&v26, *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 13), &v24);
    v20 = v24;
    v1 = v19;
    if ( v24 )
    {
      ++v8->Ref;
      v21 = *((_QWORD *)a1 + 5);
      v27 = 0LL;
      v28 = v21;
      HIDWORD(v29) = *((_DWORD *)a1 + 13);
      LODWORD(v29) = v20;
      KeReleaseSpinLock(&ndisIfListLock, v4);
      ndisNsiNotifyClientNetworkChange(v8, 0LL, &v27);
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NETWORKBLOCK_DECREMENT_REF(v8);
    }
    goto LABEL_30;
  }
  if ( v11 != 3 )
    goto LABEL_8;
  if ( v8->InterfaceLink.Flink != &v8->InterfaceLink )
    goto LABEL_8;
  Flags = v8->Flags;
  if ( ((unsigned __int8)Flags & v9) != 0 )
    goto LABEL_8;
  v8->Flags = Flags | 1;
  Flink = v8->CompartmentLink.Flink;
  if ( Flink->Blink != &v8->CompartmentLink )
    goto LABEL_26;
  Blink = v8->CompartmentLink.Blink;
  if ( Blink->Flink != &v8->CompartmentLink
    || (--ndisIfNetworkCount,
        Blink->Flink = Flink,
        Flink->Blink = Blink,
        ndisIfReleaseSiteId(v8->NetworkInfo.SiteId),
        COMPARTMENTBLOCK_DECREMENT_REF(v15),
        v16 = v8->Link.Flink,
        (struct _NDIS_IF_NETWORK_BLOCK *)v8->Link.Flink->Blink != v8)
    || (v17 = v8->Link.Blink, (struct _NDIS_IF_NETWORK_BLOCK *)v17->Flink != v8) )
  {
LABEL_26:
    __fastfail(3u);
  }
  v17->Flink = v16;
  v16->Blink = v17;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8->AsyncEvent = &Event;
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ndisNsiNotifyClientNetworkChange(v8, 2LL, 0LL);
  v18 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NETWORKBLOCK_DECREMENT_REF(v8);
  KeReleaseSpinLock(&ndisIfListLock, v18);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v8->AsyncEvent = 0LL;
  ExFreePoolWithTag(v8, 0);
LABEL_31:
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      22,
      109,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v1);
  }
  return v1;
}
