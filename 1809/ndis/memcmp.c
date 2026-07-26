/*
 * XREFs of memcmp @ 0x1C0026D30
 * Callers:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001589C (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisSetOpenRSSParameters @ 0x1C001F030 (ndisSetOpenRSSParameters.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C003F0F0 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ndisIfUpdateCurrentMacAddress @ 0x1C0042EBC (ndisIfUpdateCurrentMacAddress.c)
 *     ndisPostRemoveMiniportWakeUpPattern @ 0x1C004B28C (ndisPostRemoveMiniportWakeUpPattern.c)
 *     ndisRemoveOpenWakeUpPattern @ 0x1C004B954 (ndisRemoveOpenWakeUpPattern.c)
 *     ndisMapOpenByName @ 0x1C00503C4 (ndisMapOpenByName.c)
 *     ndisMIndicateHwTimestampCapabilitiesChange @ 0x1C0062A74 (ndisMIndicateHwTimestampCapabilitiesChange.c)
 *     ndisMIndicateQosParametersChange @ 0x1C0062CD0 (ndisMIndicateQosParametersChange.c)
 *     ndisCaptureStackTrace @ 0x1C0071B98 (ndisCaptureStackTrace.c)
 *     ?ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0081340 (-ndisSetOpenRSSv2Parameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisComparePMProtocolOffloads @ 0x1C00BA298 (ndisComparePMProtocolOffloads.c)
 *     ndisCompareWoLPatterns @ 0x1C00BBE90 (ndisCompareWoLPatterns.c)
 *     ndisFSetRestartAttributes @ 0x1C00BD8B0 (ndisFSetRestartAttributes.c)
 *     ?ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00E2438 (-ndisIfFindNextRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ?ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z @ 0x1C00E24C8 (-ndisIfFindRcvAddress@@YAPEAU_NDIS_IF_RCV_ADDRESS@@PEAU_NDIS_IF_BLOCK@@PEAE@Z.c)
 *     ndisPreRemoveMiniportWakeUpPattern @ 0x1C00E7820 (ndisPreRemoveMiniportWakeUpPattern.c)
 *     ndisPreRemoveOpenWakeUpPattern @ 0x1C00E7998 (ndisPreRemoveOpenWakeUpPattern.c)
 *     ndisSetAddWakeUpPattern @ 0x1C00E8424 (ndisSetAddWakeUpPattern.c)
 *     ndisSetOpenAddWakeUpPattern @ 0x1C00E8A2C (ndisSetOpenAddWakeUpPattern.c)
 *     ndisIMQueueDeviceInstance @ 0x1C00EB840 (ndisIMQueueDeviceInstance.c)
 *     operator_ @ 0x1C0104D74 (operator_.c)
 *     ndisReferenceMiniportByName @ 0x1C010A008 (ndisReferenceMiniportByName.c)
 *     ndisFindRootDevice @ 0x1C0114F94 (ndisFindRootDevice.c)
 *     ndisReferenceProtocolByName @ 0x1C01179F0 (ndisReferenceProtocolByName.c)
 *     ndisFindMiniportOnGlobalList @ 0x1C0118BB0 (ndisFindMiniportOnGlobalList.c)
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
