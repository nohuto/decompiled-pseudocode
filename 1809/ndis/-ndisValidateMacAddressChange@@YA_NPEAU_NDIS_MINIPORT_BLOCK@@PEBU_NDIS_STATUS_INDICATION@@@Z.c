/*
 * XREFs of ?ndisValidateMacAddressChange@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@PEBU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00604BC
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C00176B8 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisValidateMacAddressChange(struct _NDIS_MINIPORT_BLOCK *a1, const struct _NDIS_STATUS_INDICATION *a2)
{
  unsigned __int8 MajorNdisVersion; // al
  bool result; // al

  MajorNdisVersion = a1->MajorNdisVersion;
  if ( MajorNdisVersion <= 6u && (MajorNdisVersion != 6 || a1->MinorNdisVersion < 0x32u) )
    return 0;
  if ( a2->Header.Type != 0x98 )
    return 0;
  result = 1;
  if ( !a2->Header.Revision
    || a2->Header.Size < 0x70u
    || a2->DestinationHandle
    || a2->SourceHandle != a1
    || a2->PortNumber
    || a2->StatusBufferSize != 34
    || *(_WORD *)a2->StatusBuffer > 0x20u )
  {
    return 0;
  }
  return result;
}
