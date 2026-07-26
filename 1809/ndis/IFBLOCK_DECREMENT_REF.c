/*
 * XREFs of IFBLOCK_DECREMENT_REF @ 0x1C001C21C
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C001BD74 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001C630 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ndisMUpdateHiddenFlag @ 0x1C001E3B0 (ndisMUpdateHiddenFlag.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003FBE0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003FE90 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiQueuedTimestampingChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0040490 (-ndisNsiQueuedTimestampingChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040B00 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C00421A8 (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0042394 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C0042598 (ndisIfDeregisterInterfaceEx.c)
 *     ndisIfDetachMiniportBlock @ 0x1C0042740 (ndisIfDetachMiniportBlock.c)
 *     ndisIfSetIfDescr @ 0x1C0042C40 (ndisIfSetIfDescr.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C000AB90 (NdisDereferenceWithTag.c)
 *     ndisIfFreeIfIndex @ 0x1C003EFBC (ndisIfFreeIfIndex.c)
 *     NETWORKBLOCK_DECREMENT_REF @ 0x1C0041344 (NETWORKBLOCK_DECREMENT_REF.c)
 *     ndisIfDeleteStackEntries @ 0x1C0042508 (ndisIfDeleteStackEntries.c)
 *     NdisFreeRefCount @ 0x1C00721F0 (NdisFreeRefCount.c)
 */

void __fastcall IFBLOCK_DECREMENT_REF(_QWORD *P, unsigned __int8 a2)
{
  _QWORD **v4; // rdx
  PVOID *v5; // rcx
  _QWORD **v6; // rdx
  PVOID *v7; // rcx
  _QWORD **v8; // rdx
  PVOID *v9; // rcx
  ULONG_PTR v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  struct _KEVENT *v13; // rcx

  NdisDereferenceWithTag(P[180], a2);
  if ( (*((_DWORD *)P + 326))-- == 1 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
    ndisIfDeleteStackEntries(P);
    *((_DWORD *)P + 324) = 0;
    *((_DWORD *)P + 325) = 0;
    KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
    v4 = (_QWORD **)P[154];
    if ( v4[1] != P + 154 )
      goto LABEL_16;
    v5 = (PVOID *)P[155];
    if ( *v5 != P + 154 )
      goto LABEL_16;
    *v5 = v4;
    v4[1] = v5;
    v6 = (_QWORD **)P[156];
    if ( v6[1] != P + 156
      || (v7 = (PVOID *)P[157], *v7 != P + 156)
      || (*v7 = v6, v6[1] = v7, v8 = (_QWORD **)P[158], v8[1] != P + 158)
      || (v9 = (PVOID *)P[159], *v9 != P + 158) )
    {
LABEL_16:
      __fastfail(3u);
    }
    *v9 = v8;
    v8[1] = v9;
    NETWORKBLOCK_DECREMENT_REF(P[172]);
    ndisIfFreeIfIndex(*((unsigned int *)P + 1));
    v10 = P[180];
    --ndisInterfaceCount;
    NdisFreeRefCount(v10);
    v11 = (void *)P[179];
    P[180] = 0LL;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      P[179] = 0LL;
    }
    v12 = (void *)P[160];
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      P[160] = 0LL;
      *((_DWORD *)P + 322) = 0;
      *((_DWORD *)P + 323) = 0;
    }
    v13 = (struct _KEVENT *)P[174];
    if ( v13 )
      KeSetEvent(v13, 0, 0);
    ExFreePoolWithTag(P, 0);
  }
}
