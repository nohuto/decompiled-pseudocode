/*
 * XREFs of ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040B00
 * Callers:
 *     <none>
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001C21C (IFBLOCK_DECREMENT_REF.c)
 *     ndisIsCompartmentAccessibleByClient @ 0x1C001F9F4 (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C001FA80 (ndisGetNsiClientInfo.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0022AB8 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C00241D4 (ndisIfFindInterfaceByNetLuid.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C4184 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSetInterfaceInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *v1; // rsi
  int v3; // r14d
  KIRQL v4; // r15
  unsigned int v5; // ebx
  __int64 v6; // r14
  unsigned int v7; // ebx
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  unsigned int v9; // eax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  _BYTE v12[1120]; // [rsp+38h] [rbp-D0h] BYREF

  v1 = 0LL;
  v3 = 0;
  *(_DWORD *)v12 = 0;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_q(0x4Cu, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1);
  ndisGetNsiClientInfo((unsigned int *)&v12[8]);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(&v12[32], 0, 0x440uLL);
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
      || (memmove(&v12[v6 + 32], *((const void **)a1 + 5), v7),
          InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(**((_LIST_ENTRY ***)a1 + 2)),
          (v1 = (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid) == 0LL)
      || !ndisIsCompartmentAccessibleByClient((__int64)InterfaceByNetLuid[86].Blink, (__int64)&v12[8], 1) )
    {
LABEL_4:
      v5 = -1073741811;
      goto LABEL_15;
    }
    v9 = ndisNsiChangeInterfaceInfo(
           v1,
           (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)&v12[32],
           v7,
           v6,
           (_IF_COUNTED_STRING_LH *)v12);
    v3 = *(_DWORD *)v12;
    v5 = v9;
  }
  if ( v3 )
  {
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v1->RefCountTracker;
    *(_QWORD *)&v12[24] = 0LL;
    *(_QWORD *)&v12[8] = 0LL;
    *(_QWORD *)&v12[16] = *((_QWORD *)a1 + 5);
    *(_DWORD *)&v12[28] = *((_DWORD *)a1 + 13);
    *(_DWORD *)&v12[24] = v3;
    NdisReferenceWithTag(RefCountTracker, 5u);
    ++v1->Ref;
    KeReleaseSpinLock(&ndisIfListLock, v4);
    ndisNsiNotifyClientInterfaceChange(v1, 0LL, &v12[8], 0LL);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF(v1, 5u);
  }
LABEL_15:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qD(0x4Du, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, (__int64)a1, v5);
  return v5;
}
