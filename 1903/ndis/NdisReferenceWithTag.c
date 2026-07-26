/*
 * XREFs of NdisReferenceWithTag @ 0x1C0006160
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C00026B0 (ndisMTimerDpcX.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     ndisIfReferenceMiniport @ 0x1C0002E20 (ndisIfReferenceMiniport.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C0003030 (ndisFOidRequestCompleteInternal.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0004090 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ?ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C000F160 (-ndisInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisCreateHandler @ 0x1C000FBB0 (ndisCreateHandler.c)
 *     ndisMWakeUpDpcX @ 0x1C0010F50 (ndisMWakeUpDpcX.c)
 *     ndisMOidRequest @ 0x1C0015410 (ndisMOidRequest.c)
 *     ndisIndicateStatusInternal @ 0x1C0015988 (ndisIndicateStatusInternal.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0016F28 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisQueueRequestWorkItem @ 0x1C001A984 (ndisQueueRequestWorkItem.c)
 *     ndisIfSetInterfaceState @ 0x1C001AE84 (ndisIfSetInterfaceState.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001B148 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisReferenceRefEx @ 0x1C001B320 (ndisReferenceRefEx.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BC9C (ndisReferenceMiniportNoCheck.c)
 *     ndisMReferenceIfBlock @ 0x1C001C65C (ndisMReferenceIfBlock.c)
 *     ?ndisMTimerObjectDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C001E7F0 (-ndisMTimerObjectDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z @ 0x1C001EC30 (-ndisQueuedMiniportDpcWorkItem@@YAXPEAX@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0023F3C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C80 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C003DAF8 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisMUpdateHiddenFlag @ 0x1C003F3D0 (ndisMUpdateHiddenFlag.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00648B0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0064BA0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0065A00 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C0067650 (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0067870 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfScheduleTimestampCapabilityChangeNotification @ 0x1C0067BB0 (ndisIfScheduleTimestampCapabilityChangeNotification.c)
 *     ndisIfSetIfDescr @ 0x1C0067E28 (ndisIfSetIfDescr.c)
 *     ndisReferenceRefNoCheck @ 0x1C00C7C2C (ndisReferenceRefNoCheck.c)
 * Callees:
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001B6B4 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001B74C (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C7978 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisReferenceWithTag(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *v4; // rcx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r9
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 v7; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v8; // rdx
  unsigned __int8 RefCount; // al
  unsigned __int8 v10; // dl
  unsigned __int8 v11; // dl

  while ( (unsigned __int64)a1[-1].RefWithStack + 62 > 1 )
  {
    if ( (unsigned __int64)a1 < 2 )
      ndisBugCheckEx(0x1EuLL, 3uLL, (ULONG_PTR)a1, 0LL);
    if ( a2 == 0xFF )
      ndisBugCheckEx(0x1EuLL, 1uLL, (ULONG_PTR)a1, 0xFFuLL);
    if ( a2 >= a1->NumRefTags )
      ndisBugCheckEx(0x1EuLL, 2uLL, (ULONG_PTR)a1, a2);
    if ( a1->Type )
    {
      if ( a1->Type == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&a1->8 + a2, 1u);
      return;
    }
    v4 = 0LL;
    if ( !_bittestandset((signed __int32 *)a1->TaggedRefCounts.RefMask, a2) )
      return;
    Tags = a1->TaggedRefCounts.Tags;
    if ( Tags )
    {
      NumOverflowTaggedEntries = a1->NumOverflowTaggedEntries;
      v7 = 0;
      if ( NumOverflowTaggedEntries )
      {
        do
        {
          v8 = &Tags[v7];
          RefCount = v8->RefCount;
          if ( v8->Tag == a2 )
          {
            if ( RefCount != 0xFF )
            {
              v8->RefCount = RefCount + 1;
              return;
            }
          }
          else if ( !RefCount )
          {
            v4 = &Tags[v7];
          }
          ++v7;
        }
        while ( v7 < NumOverflowTaggedEntries );
        if ( !v4 )
          goto LABEL_18;
        v4->Tag = a2;
        v4->RefCount = 1;
        return;
      }
    }
LABEL_18:
    if ( !a1->Type )
    {
      v10 = a1->NumOverflowTaggedEntries;
      if ( v10 == 0xFF )
      {
        ndisFreeRefCountAuxiliaryMemory(a1);
        a1->Type = 2;
      }
      else
      {
        if ( (unsigned int)v10 + 2 > 0xFF )
          v11 = -1;
        else
          v11 = v10 + 2;
        ndisResizeRefCountBlockTagged(a1, v11);
      }
    }
  }
}
