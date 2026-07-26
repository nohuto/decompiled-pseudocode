/*
 * XREFs of ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C0101314
 * Callers:
 *     ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C00FECD0 (-NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z.c)
 *     NdisPDStartup @ 0x1C0101EF0 (NdisPDStartup.c)
 * Callees:
 *     ndisDereferenceFilterDriver @ 0x1C0016FB0 (ndisDereferenceFilterDriver.c)
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 */

void __fastcall ndisPDDereferenceClientDriver(_NDIS_PROTOCOL_BLOCK *a1, __int64 a2)
{
  if ( a1->Header.Type == 3 )
  {
    ndisDereferenceProtocol(a1, a2, 0xEu);
  }
  else if ( a1->Header.Type == 4 )
  {
    ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)a1);
  }
}
