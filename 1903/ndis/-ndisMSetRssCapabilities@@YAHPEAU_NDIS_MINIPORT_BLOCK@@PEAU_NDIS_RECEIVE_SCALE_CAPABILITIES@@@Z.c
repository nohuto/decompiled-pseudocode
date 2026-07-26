/*
 * XREFs of ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C00301C0
 * Callers:
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x1C002FBC4 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 * Callees:
 *     ndisRssPmObjectHeaderFixup @ 0x1C0030254 (ndisRssPmObjectHeaderFixup.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 */

__int64 __fastcall ndisMSetRssCapabilities(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_RECEIVE_SCALE_CAPABILITIES *a2)
{
  _NDIS_RECEIVE_SCALE_CAPABILITIES *p_RecvScaleCapabilities; // rsi
  char v5; // r10
  int v6; // r8d
  int v7; // r9d
  unsigned __int8 MajorNdisVersion; // al
  __int16 v10; // [rsp+20h] [rbp-18h]

  p_RecvScaleCapabilities = &a1->RecvScaleCapabilities;
  *(_QWORD *)&a1->RecvScaleCapabilities.Header.Type = 0LL;
  *(_QWORD *)&a1->RecvScaleCapabilities.NumberOfInterruptMessages = 0LL;
  *(_DWORD *)&a1->RecvScaleCapabilities.NumberOfIndirectionTableEntries = 0;
  v5 = 3;
  v6 = 18;
  v7 = a2->Header.Revision - 1;
  if ( a2->Header.Revision == 1 )
  {
    v5 = 1;
    v6 = 16;
  }
  else
  {
    v7 = a2->Header.Revision - 2;
    if ( a2->Header.Revision == 2 )
      v5 = 2;
  }
  v10 = v6;
  LOBYTE(v6) = -120;
  LOBYTE(v7) = v5;
  if ( (unsigned __int8)ndisRssPmObjectHeaderFixup((unsigned int)"RecvScaleCapabilities", (_DWORD)a2, v6, v7, v10) )
  {
    MajorNdisVersion = a1->MajorNdisVersion;
    if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x50u )
      return 3223519276LL;
  }
  memmove(p_RecvScaleCapabilities, a2, a2->Header.Size);
  return 0LL;
}
