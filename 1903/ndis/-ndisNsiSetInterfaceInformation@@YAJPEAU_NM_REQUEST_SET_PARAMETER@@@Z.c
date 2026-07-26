/*
 * XREFs of ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065A00
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0029FF0 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C003672C (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C00367B8 (ndisGetNsiClientInfo.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0039EF8 (ndisIfFindInterfaceByNetLuid.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00FF488 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSetInterfaceInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  unsigned int v1; // r14d
  struct _NDIS_IF_BLOCK *v2; // rsi
  KIRQL v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int v7; // ebx
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  unsigned int v9; // eax
  __int64 v10; // rax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  int v12; // edx
  unsigned int v14[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v16; // [rsp+58h] [rbp-B0h]
  __int64 v17; // [rsp+60h] [rbp-A8h]
  _BYTE v18[1088]; // [rsp+68h] [rbp-A0h] BYREF

  v1 = 0;
  v2 = 0LL;
  v14[0] = 0;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      77,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  ndisGetNsiClientInfo((__int64)&v15);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(v18, 0, sizeof(v18));
  if ( *((_DWORD *)a1 + 6) != 8 )
    goto LABEL_4;
  if ( *((_DWORD *)a1 + 8) || *((_DWORD *)a1 + 14) )
  {
    v5 = -1073741811;
  }
  else
  {
    v6 = *((unsigned int *)a1 + 13);
    v7 = *((_DWORD *)a1 + 12);
    if ( v7 + (unsigned int)v6 > 0x440
      || v7 + (unsigned int)v6 < v7
      || (memmove(&v18[v6], *((const void **)a1 + 5), v7),
          InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(**((_LIST_ENTRY ***)a1 + 2)),
          (v2 = (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid) == 0LL)
      || !ndisIsCompartmentAccessibleByClient((__int64)InterfaceByNetLuid[86].Flink, (__int64)&v15, 1) )
    {
LABEL_4:
      v5 = -1073741811;
      goto LABEL_15;
    }
    v9 = ndisNsiChangeInterfaceInfo(v2, (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v18, v7, v6, (wchar_t *)v14);
    v1 = v14[0];
    v5 = v9;
  }
  if ( v1 )
  {
    v10 = *((_QWORD *)a1 + 5);
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v2->RefCountTracker;
    v15 = 0LL;
    v16 = v10;
    HIDWORD(v17) = *((_DWORD *)a1 + 13);
    LODWORD(v17) = v1;
    NdisReferenceWithTag(RefCountTracker, 5u);
    ++v2->Ref;
    KeReleaseSpinLock(&ndisIfListLock, v4);
    ndisNsiNotifyClientInterfaceChange(v2, 0LL, &v15);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF((char *)v2, 5u);
  }
LABEL_15:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  KeLeaveCriticalRegion();
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      22,
      78,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v5);
  }
  return v5;
}
