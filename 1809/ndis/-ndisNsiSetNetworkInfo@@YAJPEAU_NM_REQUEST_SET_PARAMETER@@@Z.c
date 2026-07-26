/*
 * XREFs of ?ndisNsiSetNetworkInfo@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040D40
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001C2F0 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C001EBA8 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C001F9F4 (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C001FA80 (ndisGetNsiClientInfo.c)
 *     ndisIfFindCompartmentBlock @ 0x1C001FB00 (ndisIfFindCompartmentBlock.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C003F008 (-ndisIfReleaseSiteId@@YAXK@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C003F1CC (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0041344 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C00E2CA4 (-ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_.c)
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
  _LIST_ENTRY *CompartmentBlock; // r11
  int v10; // eax
  unsigned int Flags; // eax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  __int64 v14; // r11
  _LIST_ENTRY *v15; // rcx
  _LIST_ENTRY *v16; // rax
  KIRQL v17; // bl
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v23; // [rsp+30h] [rbp-D0h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-C8h] BYREF
  struct _NDIS_NSI_NETWORK_RW v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v26[2]; // [rsp+260h] [rbp+160h] BYREF
  __int64 v27; // [rsp+268h] [rbp+168h]
  unsigned __int64 v28; // [rsp+270h] [rbp+170h]

  v1 = 0;
  v2 = 0;
  v23 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(0x6Bu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo(v26);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(&v25, 0, sizeof(v25));
  if ( *((_DWORD *)a1 + 6) != 16
    || *((_DWORD *)a1 + 8)
    || (v5 = *((unsigned int *)a1 + 13), v6 = *((_DWORD *)a1 + 12), v6 + (unsigned int)v5 > 0x210)
    || v6 + (unsigned int)v5 < v6 )
  {
    v1 = -1073741808;
    goto LABEL_30;
  }
  memmove(&v25.Header.Type + v5, *((const void **)a1 + 5), v6);
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
  if ( !NetworkBlock || !ndisIsCompartmentAccessibleByClient((__int64)NetworkBlock->Compartment, (__int64)v26, 1) )
    goto LABEL_8;
  if ( v2 )
    CompartmentBlock = ndisIfFindCompartmentBlock(v25.CompartmentId);
  if ( !CompartmentBlock )
    goto LABEL_8;
  v10 = *((_DWORD *)a1 + 14);
  if ( !v10 )
  {
    v18 = ndisNsiChangeNetworkInfo(v8, &v25, *((_DWORD *)a1 + 12), *((_DWORD *)a1 + 13), &v23);
    v19 = v23;
    v1 = v18;
    if ( v23 )
    {
      ++v8->Ref;
      v20 = *((_QWORD *)a1 + 5);
      v28 = 0LL;
      *(_QWORD *)v26 = 0LL;
      v21 = *((_DWORD *)a1 + 13);
      v27 = v20;
      v28 = __PAIR64__(v21, v19);
      KeReleaseSpinLock(&ndisIfListLock, v4);
      ndisNsiNotifyClientNetworkChange(v8, 0LL, v26);
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NETWORKBLOCK_DECREMENT_REF(v8);
    }
    goto LABEL_30;
  }
  if ( v10 != 3 )
    goto LABEL_8;
  if ( v8->InterfaceLink.Flink != &v8->InterfaceLink )
    goto LABEL_8;
  Flags = v8->Flags;
  if ( (Flags & 1) != 0 )
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
        COMPARTMENTBLOCK_DECREMENT_REF(v14),
        v15 = v8->Link.Flink,
        (struct _NDIS_IF_NETWORK_BLOCK *)v8->Link.Flink->Blink != v8)
    || (v16 = v8->Link.Blink, (struct _NDIS_IF_NETWORK_BLOCK *)v16->Flink != v8) )
  {
LABEL_26:
    __fastfail(3u);
  }
  v16->Flink = v15;
  v15->Blink = v16;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v8->AsyncEvent = &Event;
  KeReleaseSpinLock(&ndisIfListLock, v4);
  ndisNsiNotifyClientNetworkChange(v8, 2LL, 0LL);
  v17 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NETWORKBLOCK_DECREMENT_REF(v8);
  KeReleaseSpinLock(&ndisIfListLock, v17);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v8->AsyncEvent = 0LL;
  ExFreePoolWithTag(v8, 0);
LABEL_31:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(0x6Cu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1, v1);
  return v1;
}
