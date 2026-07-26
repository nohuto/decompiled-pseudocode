/*
 * XREFs of ndisReceiveQueueingPaused @ 0x1C007E970
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReceiveQueueingPaused(__int64 a1)
{
  bool v1; // zf

  v1 = *(_DWORD *)(a1 + 3168) == 1;
  *(_BYTE *)(a1 + 3220) = 1;
  if ( v1 )
    *(_DWORD *)(a1 + 3168) = 2;
}
