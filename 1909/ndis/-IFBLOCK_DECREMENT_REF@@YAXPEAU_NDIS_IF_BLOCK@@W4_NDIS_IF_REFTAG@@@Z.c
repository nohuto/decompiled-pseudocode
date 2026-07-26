/*
 * XREFs of ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4
 * Callers:
 *     ?ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C001B3C0 (-ndisNsiQueuedIfBlockRodChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C70 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisMUpdateHiddenFlag @ 0x1C003F3C0 (ndisMUpdateHiddenFlag.c)
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00638AC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     ?ndisIfDetachMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0063A90 (-ndisIfDetachMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0064A80 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064D70 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiQueuedTimestampingChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0065490 (-ndisNsiQueuedTimestampingChangeNotification@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065BD0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C0067820 (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0067A40 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfSetIfDescr @ 0x1C0067FF8 (ndisIfSetIfDescr.c)
 * Callees:
 *     NdisDereferenceWithTag @ 0x1C0002EB0 (NdisDereferenceWithTag.c)
 *     ?NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z @ 0x1C00630CC (-NETWORKBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@@Z.c)
 *     ndisIfFreeIfIndex @ 0x1C0063D00 (ndisIfFreeIfIndex.c)
 *     ndisIfDeleteStackEntries @ 0x1C0067BB4 (ndisIfDeleteStackEntries.c)
 *     NdisFreeRefCount @ 0x1C00C7CE0 (NdisFreeRefCount.c)
 */

void __fastcall IFBLOCK_DECREMENT_REF(char *P, unsigned __int8 a2)
{
  char **v4; // rdx
  PVOID *v5; // rcx
  char **v6; // rdx
  PVOID *v7; // rcx
  char **v8; // rdx
  PVOID *v9; // rcx
  ULONG_PTR v10; // rcx
  void *v11; // rcx
  void *v12; // rcx
  struct _KEVENT *v13; // rcx

  NdisDereferenceWithTag(*((_QWORD *)P + 179), a2);
  if ( (*((_DWORD *)P + 326))-- == 1 )
  {
    KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
    ndisIfDeleteStackEntries(P);
    *((_DWORD *)P + 324) = 0;
    *((_DWORD *)P + 325) = 0;
    KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
    v4 = (char **)*((_QWORD *)P + 154);
    if ( v4[1] != P + 1232 )
      goto LABEL_16;
    v5 = (PVOID *)*((_QWORD *)P + 155);
    if ( *v5 != P + 1232 )
      goto LABEL_16;
    *v5 = v4;
    v4[1] = (char *)v5;
    v6 = (char **)*((_QWORD *)P + 156);
    if ( v6[1] != P + 1248
      || (v7 = (PVOID *)*((_QWORD *)P + 157), *v7 != P + 1248)
      || (*v7 = v6, v6[1] = (char *)v7, v8 = (char **)*((_QWORD *)P + 158), v8[1] != P + 1264)
      || (v9 = (PVOID *)*((_QWORD *)P + 159), *v9 != P + 1264) )
    {
LABEL_16:
      __fastfail(3u);
    }
    *v9 = v8;
    v8[1] = (char *)v9;
    NETWORKBLOCK_DECREMENT_REF(*((struct _NDIS_IF_NETWORK_BLOCK **)P + 171));
    ndisIfFreeIfIndex(*((unsigned int *)P + 1));
    v10 = *((_QWORD *)P + 179);
    --ndisInterfaceCount;
    NdisFreeRefCount(v10);
    v11 = (void *)*((_QWORD *)P + 178);
    *((_QWORD *)P + 179) = 0LL;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      *((_QWORD *)P + 178) = 0LL;
    }
    v12 = (void *)*((_QWORD *)P + 160);
    if ( v12 )
    {
      ExFreePoolWithTag(v12, 0);
      *((_QWORD *)P + 160) = 0LL;
      *((_DWORD *)P + 322) = 0;
      *((_DWORD *)P + 323) = 0;
    }
    v13 = (struct _KEVENT *)*((_QWORD *)P + 173);
    if ( v13 )
      KeSetEvent(v13, 0, 0);
    ExFreePoolWithTag(P, 0);
  }
}
