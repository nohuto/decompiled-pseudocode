/*
 * XREFs of ?ndisNsiSetAllNetworkInfo@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C0065700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C002527C (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C00361C8 (-COMPARTMENTBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z.c)
 *     ?ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_RW@@PEAPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00364AC (-ndisIfCreateNetworkBlock@@YAJPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEAU_GUID@@PEAU_NDIS_NSI_NETWORK_R.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003671C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C00367A8 (ndisGetNsiClientInfo.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C00368BC (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     __security_check_cookie @ 0x1C0040760 (__security_check_cookie.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00630CC (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ?ndisIfReleaseSiteId@@YAXK@Z @ 0x1C0063D4C (-ndisIfReleaseSiteId@@YAXK@Z.c)
 *     ?ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z @ 0x1C0063F24 (-ndisNsiChangeNetworkInfo@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@PEAU_NDIS_NSI_NETWORK_RW@@KKPEAK@Z.c)
 *     ?ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@@Z @ 0x1C01146B8 (-ndisNsiNotifyClientNetworkChange@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_.c)
 */

__int64 __fastcall ndisNsiSetAllNetworkInfo(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  int v2; // edi
  struct _NDIS_IF_COMPARTMENT_BLOCK *v3; // r15
  char v4; // r13
  unsigned int v5; // ebx
  _OWORD *v6; // rcx
  struct _NDIS_NSI_NETWORK_RW *v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  struct _GUID *v10; // r12
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // rax
  struct _NDIS_IF_NETWORK_BLOCK *v12; // rsi
  int v13; // r11d
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int v15; // r11d
  int v16; // r11d
  unsigned int Flags; // eax
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v20; // r9
  _LIST_ENTRY *v21; // rcx
  _LIST_ENTRY *v22; // rax
  KIRQL v23; // bl
  unsigned __int8 v24; // r15
  int v25; // eax
  __int64 *v26; // r8
  int v27; // edx
  KIRQL NewIrql[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct _NDIS_IF_NETWORK_BLOCK *v30; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+60h] [rbp-A8h]
  __int64 v33; // [rsp+68h] [rbp-A0h]
  struct _KEVENT Event; // [rsp+70h] [rbp-98h] BYREF
  struct _NDIS_NSI_NETWORK_RW v35; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v36[3]; // [rsp+298h] [rbp+190h] BYREF

  *(_DWORD *)&NewIrql[4] = 0;
  v31 = 0LL;
  v2 = 0;
  v32 = 0LL;
  v3 = 0LL;
  v33 = 0LL;
  v4 = 0;
  memset(v36, 0, sizeof(v36));
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      110,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((__int64)v36);
  KeEnterCriticalRegion();
  NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(&v35, 0, sizeof(v35));
  if ( *((_DWORD *)a1 + 6) != 16 || *((_DWORD *)a1 + 10) != 528 )
    goto LABEL_4;
  v6 = (_OWORD *)*((_QWORD *)a1 + 4);
  v7 = &v35;
  v8 = 4LL;
  do
  {
    *(_OWORD *)&v7->Header.Type = *v6;
    *(_OWORD *)&v7->NetworkName.String[1] = v6[1];
    *(_OWORD *)&v7->NetworkName.String[9] = v6[2];
    *(_OWORD *)&v7->NetworkName.String[17] = v6[3];
    *(_OWORD *)&v7->NetworkName.String[25] = v6[4];
    *(_OWORD *)&v7->NetworkName.String[33] = v6[5];
    *(_OWORD *)&v7->NetworkName.String[41] = v6[6];
    v7 = (struct _NDIS_NSI_NETWORK_RW *)((char *)v7 + 128);
    v9 = v6[7];
    v6 += 8;
    *(_OWORD *)&v7[-1].NetworkName.String[249] = v9;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&v7->Header.Type = *v6;
  if ( v35.Header.Type != 0xAC || v35.Header.Revision != 1 || v35.Header.Size != 528 )
    v35.Header = (_NDIS_OBJECT_HEADER)34603436;
  v10 = (struct _GUID *)*((_QWORD *)a1 + 2);
  NetworkBlock = ndisIfFindNetworkBlock(v10);
  v30 = NetworkBlock;
  v12 = NetworkBlock;
  if ( NetworkBlock && !ndisIsCompartmentAccessibleByClient((__int64)NetworkBlock->Compartment, (__int64)v36, 1) )
    goto LABEL_14;
  v13 = *((_DWORD *)a1 + 12);
  if ( v13 != 3 )
  {
    CompartmentBlock = ndisIfFindCompartmentBlock(v35.CompartmentId);
    v3 = CompartmentBlock;
    if ( !CompartmentBlock || !ndisIsCompartmentAccessibleByClient((__int64)CompartmentBlock, (__int64)v36, 1) )
      goto LABEL_14;
  }
  if ( !v13 )
  {
    if ( !v12 )
      goto LABEL_14;
    goto LABEL_37;
  }
  v15 = v13 - 1;
  if ( !v15 )
  {
    if ( v12 )
    {
      v2 = -1073741270;
      goto LABEL_44;
    }
    goto LABEL_32;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    if ( !v12 )
    {
LABEL_32:
      v2 = ndisIfCreateNetworkBlock(v3, (_LIST_ENTRY *)v10, &v35, &v30);
      if ( v2 < 0 )
        goto LABEL_44;
      v12 = v30;
      v24 = 1;
LABEL_39:
      ++v12->Ref;
      if ( v4 )
      {
        v32 = *((_QWORD *)a1 + 4);
        HIDWORD(v31) = 0;
        v33 = v5;
      }
      KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
      v26 = &v31;
      if ( v4 != 1 )
        v26 = 0LL;
      ndisNsiNotifyClientNetworkChange(v12, v24, v26);
      NewIrql[0] = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      NETWORKBLOCK_DECREMENT_REF(v12);
      goto LABEL_44;
    }
LABEL_37:
    v25 = ndisNsiChangeNetworkInfo(v12, (_LIST_ENTRY *)&v35, *((_DWORD *)a1 + 10), 0, (unsigned int *)&NewIrql[4]);
    v5 = *(_DWORD *)&NewIrql[4];
    v2 = v25;
    if ( !*(_DWORD *)&NewIrql[4] )
      goto LABEL_44;
    v24 = 0;
    v4 = 1;
    goto LABEL_39;
  }
  if ( v16 != 1 )
  {
LABEL_4:
    v2 = -1073741811;
LABEL_44:
    KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
    goto LABEL_45;
  }
  if ( !v12 )
  {
LABEL_14:
    v2 = -1073741072;
    goto LABEL_44;
  }
  if ( v12->InterfaceLink.Flink != &v12->InterfaceLink )
    goto LABEL_4;
  Flags = v12->Flags;
  if ( (Flags & 1) != 0 )
    goto LABEL_4;
  v12->Flags = Flags | 1;
  Flink = v12->CompartmentLink.Flink;
  if ( Flink->Blink != &v12->CompartmentLink )
    goto LABEL_30;
  Blink = v12->CompartmentLink.Blink;
  if ( Blink->Flink != &v12->CompartmentLink
    || (--ndisIfNetworkCount,
        Blink->Flink = Flink,
        Flink->Blink = Blink,
        ndisIfReleaseSiteId(v12->NetworkInfo.SiteId),
        COMPARTMENTBLOCK_DECREMENT_REF(v20),
        v21 = v12->Link.Flink,
        (struct _NDIS_IF_NETWORK_BLOCK *)v12->Link.Flink->Blink != v12)
    || (v22 = v12->Link.Blink, (struct _NDIS_IF_NETWORK_BLOCK *)v22->Flink != v12) )
  {
LABEL_30:
    __fastfail(3u);
  }
  v22->Flink = v21;
  v21->Blink = v22;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v12->AsyncEvent = &Event;
  KeReleaseSpinLock(&ndisIfListLock, NewIrql[0]);
  ndisNsiNotifyClientNetworkChange(v12, 2LL, 0LL);
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  NETWORKBLOCK_DECREMENT_REF(v12);
  KeReleaseSpinLock(&ndisIfListLock, v23);
  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v12->AsyncEvent = 0LL;
  ExFreePoolWithTag(v12, 0);
LABEL_45:
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v27) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v27,
      22,
      111,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v2);
  }
  return (unsigned int)v2;
}
