/*
 * XREFs of ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C01217FC
 * Callers:
 *     NdisPDStartup @ 0x1C00C0340 (NdisPDStartup.c)
 *     ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C011EB90 (-NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z.c)
 * Callees:
 *     ndisDereferenceProtocol @ 0x1C00280F0 (ndisDereferenceProtocol.c)
 *     ndisDereferenceFilterDriver @ 0x1C0029C14 (ndisDereferenceFilterDriver.c)
 */

void __fastcall ndisPDDereferenceClientDriver(_NDIS_PROTOCOL_BLOCK *a1, __int64 a2, __int64 a3, int a4)
{
  if ( a1->Header.Type == 3 )
  {
    ndisDereferenceProtocol(a1, a2, 0xEu, a4);
  }
  else if ( a1->Header.Type == 4 )
  {
    ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)a1, a2, 4u);
  }
}
