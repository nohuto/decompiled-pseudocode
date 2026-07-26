/*
 * XREFs of NdisFreeRefCount @ 0x1C00C7CE0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C00026B0 (ndisMTimerDpcX.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C0003030 (ndisFOidRequestCompleteInternal.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0004090 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisOidRequestComplete @ 0x1C00076F0 (ndisOidRequestComplete.c)
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ndisDoOidRequests @ 0x1C0016AC0 (ndisDoOidRequests.c)
 *     ndisDereferenceDriver @ 0x1C00172A0 (ndisDereferenceDriver.c)
 *     ndisDereferenceRef @ 0x1C0018014 (ndisDereferenceRef.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C001B4E4 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisMTimerObjectDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C001E7F0 (-ndisMTimerObjectDpc@@YAXPEAU_KDPC@@PEAX11@Z.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C003DAE8 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ?ndisIfDetachMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0063A90 (-ndisIfDetachMiniportBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisFreeOpenBlock @ 0x1C0081F70 (ndisFreeOpenBlock.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C009A390 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ndisDeinitializeZeroBasedRef @ 0x1C01284D4 (ndisDeinitializeZeroBasedRef.c)
 * Callees:
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C0006570 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001B74C (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisBugCheckEx @ 0x1C007E5C0 (ndisBugCheckEx.c)
 *     ?ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C00C7A78 (-ndisGetAnyActiveRefTag@@YAKPEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 */

void __fastcall NdisFreeRefCount(struct NDIS_REFCOUNT_HANDLE__ *BugCheckParameter3)
{
  ULONG AnyActiveRefTag; // eax
  struct _NDIS_REFCOUNT_BLOCK *v3; // rax
  struct _NDIS_REFCOUNT_BLOCK *v4; // rbx

  if ( BugCheckParameter3 )
  {
    AnyActiveRefTag = ndisGetAnyActiveRefTag(BugCheckParameter3);
    if ( AnyActiveRefTag != -2 )
      ndisBugCheckEx(0x1EuLL, 4uLL, (ULONG_PTR)BugCheckParameter3, AnyActiveRefTag);
    v3 = ndisRefCountBlockFromRefCountHandle((ULONG_PTR)BugCheckParameter3);
    v4 = v3;
    if ( v3 )
    {
      ndisFreeRefCountAuxiliaryMemory(v3);
      ExFreePoolWithTag(v4, 0);
    }
  }
}
