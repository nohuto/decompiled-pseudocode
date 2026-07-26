/*
 * XREFs of NdisReferenceWithTag @ 0x1C000CF50
 * Callers:
 *     ndisInterruptDpc @ 0x1C0006B20 (ndisInterruptDpc.c)
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0009F20 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C000AE50 (ndisFOidRequestCompleteInternal.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C000B1B0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C000BF50 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C000C300 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisIfReferenceMiniport @ 0x1C000E020 (ndisIfReferenceMiniport.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C000E670 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C000F540 (ndisMTimerDpcX.c)
 *     ndisMWakeUpDpcX @ 0x1C000F720 (ndisMWakeUpDpcX.c)
 *     ndisCreateHandler @ 0x1C000F8B0 (ndisCreateHandler.c)
 *     ndisMTimerObjectDpc @ 0x1C0011B90 (ndisMTimerObjectDpc.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0011FC0 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C0016028 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisMOidRequest @ 0x1C0016B50 (ndisMOidRequest.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C0017000 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisIndicateStatusInternal @ 0x1C0018E1C (ndisIndicateStatusInternal.c)
 *     ndisMReferenceIfBlock @ 0x1C0019EC8 (ndisMReferenceIfBlock.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C001BD74 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisReferenceRefEx @ 0x1C001C808 (ndisReferenceRefEx.c)
 *     ndisMUpdateHiddenFlag @ 0x1C001E3B0 (ndisMUpdateHiddenFlag.c)
 *     ndisQueueRequestWorkItem @ 0x1C0020FA4 (ndisQueueRequestWorkItem.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003FBE0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003FE90 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0040B00 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C00421A8 (ndisIfAliasChange.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0042394 (ndisIfCreateOrUpdateInterface.c)
 *     ndisIfScheduleTimestampCapabilityChangeNotification @ 0x1C00429B8 (ndisIfScheduleTimestampCapabilityChangeNotification.c)
 *     ndisIfSetIfDescr @ 0x1C0042C40 (ndisIfSetIfDescr.c)
 *     ndisReferenceRefNoCheck @ 0x1C0072308 (ndisReferenceRefNoCheck.c)
 * Callees:
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C002365C (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C00236F4 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0072050 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall NdisReferenceWithTag(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *v4; // rcx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r8
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 v7; // r9
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
        if ( v4 )
        {
          v4->Tag = a2;
          v4->RefCount = 1;
          return;
        }
      }
    }
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
