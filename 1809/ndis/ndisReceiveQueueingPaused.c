/*
 * XREFs of ndisReceiveQueueingPaused @ 0x1C0050B34
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReceiveQueueingPaused(__int64 a1)
{
  bool v1; // zf

  v1 = *(_DWORD *)(a1 + 3184) == 1;
  *(_BYTE *)(a1 + 3244) = 1;
  if ( v1 )
    *(_DWORD *)(a1 + 3184) = 2;
}
