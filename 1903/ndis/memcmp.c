/*
 * XREFs of memcmp @ 0x1C0040FC0
 * Callers:
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0001230 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003210 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004CE0 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C0008BE0 (ndisDeviceControlHandler.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0016F28 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisCompareWoLPatterns @ 0x1C001D6A0 (ndisCompareWoLPatterns.c)
 *     ndisComparePMProtocolOffloads @ 0x1C0023864 (ndisComparePMProtocolOffloads.c)
 *     ndisFSetRestartAttributes @ 0x1C002E034 (ndisFSetRestartAttributes.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0038D04 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisSetOpenRSSParameters @ 0x1C003B1AC (ndisSetOpenRSSParameters.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0063C58 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C00680E0 (ndisIfUpdateCurrentMacAddress.c)
 *     ndisPostRemoveMiniportWakeUpPattern @ 0x1C007516C (ndisPostRemoveMiniportWakeUpPattern.c)
 *     ndisPreRemoveMiniportWakeUpPattern @ 0x1C0075894 (ndisPreRemoveMiniportWakeUpPattern.c)
 *     ndisPreRemoveOpenWakeUpPattern @ 0x1C0075A64 (ndisPreRemoveOpenWakeUpPattern.c)
 *     ndisRemoveOpenWakeUpPattern @ 0x1C0076484 (ndisRemoveOpenWakeUpPattern.c)
 *     ndisSetAddWakeUpPattern @ 0x1C007668C (ndisSetAddWakeUpPattern.c)
 *     ndisSetOpenAddWakeUpPattern @ 0x1C0076DCC (ndisSetOpenAddWakeUpPattern.c)
 *     ?ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_NDIS_MP_REFTAG@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C007C6D8 (-ndisMapOpenByName@@YAPEAU_NDIS_OPEN_BLOCK@@PEBU_UNICODE_STRING@@PEAU_NDIS_PROTOCOL_BLOCK@@W4_ND.c)
 *     ?ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z @ 0x1C007F64C (-ndisIMQueueDeviceInstance@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEBU_UNICODE_STRING@@PEAX@Z.c)
 *     ?ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z @ 0x1C00971C8 (-ndisMIndicateHwTimestampCapabilitiesChange@@YAEPEAU_NDIS_MINIPORT_BLOCK@@HPEAXKEPEAE@Z.c)
 *     ndisMIndicateQosParametersChange @ 0x1C009A8E4 (ndisMIndicateQosParametersChange.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00C6580 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisCaptureStackTrace @ 0x1C00C7DC0 (ndisCaptureStackTrace.c)
 *     ?ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C0113DA8 (-ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C0113E38 (-ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     operator_ @ 0x1C0125114 (operator_.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 *     ndisFindRootDevice @ 0x1C0136458 (ndisFindRootDevice.c)
 *     ndisReferenceProtocolByName @ 0x1C0138BCC (ndisReferenceProtocolByName.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C013A410 (ndisFindMiniportOnGlobalList.c)
 * Callees:
 *     <none>
 */

int __cdecl memcmp(const void *Buf1, const void *Buf2, size_t Size)
{
  signed __int64 v3; // rdx
  bool v4; // cf
  size_t v6; // r9
  unsigned __int64 v7; // rax
  size_t v8; // r9

  v3 = (_BYTE *)Buf2 - (_BYTE *)Buf1;
  if ( Size < 8 )
    goto LABEL_6;
  for ( ; ((unsigned __int8)Buf1 & 7) != 0; --Size )
  {
    v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
    if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
      return -v4 - (v4 - 1);
    Buf1 = (char *)Buf1 + 1;
  }
  if ( !(Size >> 3) )
  {
LABEL_6:
    if ( !Size )
      return 0;
    while ( 1 )
    {
      v4 = *(_BYTE *)Buf1 < *((_BYTE *)Buf1 + v3);
      if ( *(_BYTE *)Buf1 != *((_BYTE *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 1;
      if ( !--Size )
        return 0;
    }
    return -v4 - (v4 - 1);
  }
  v6 = Size >> 5;
  if ( Size >> 5 )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      v7 = *((_QWORD *)Buf1 + 1);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 8) )
        goto LABEL_24;
      v7 = *((_QWORD *)Buf1 + 2);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 16) )
        goto LABEL_23;
      v7 = *((_QWORD *)Buf1 + 3);
      if ( v7 != *(_QWORD *)((char *)Buf1 + v3 + 24) )
      {
        Buf1 = (char *)Buf1 + 8;
LABEL_23:
        Buf1 = (char *)Buf1 + 8;
LABEL_24:
        Buf1 = (char *)Buf1 + 8;
        break;
      }
      Buf1 = (char *)Buf1 + 32;
      if ( !--v6 )
      {
        Size &= 0x1Fu;
        goto LABEL_18;
      }
    }
  }
  else
  {
LABEL_18:
    v8 = Size >> 3;
    if ( !(Size >> 3) )
      goto LABEL_6;
    while ( 1 )
    {
      v7 = *(_QWORD *)Buf1;
      if ( *(_QWORD *)Buf1 != *(_QWORD *)((char *)Buf1 + v3) )
        break;
      Buf1 = (char *)Buf1 + 8;
      if ( !--v8 )
      {
        Size &= 7u;
        goto LABEL_6;
      }
    }
  }
  v4 = _byteswap_uint64(v7) < _byteswap_uint64(*(_QWORD *)((char *)Buf1 + v3));
  return -v4 - (v4 - 1);
}
