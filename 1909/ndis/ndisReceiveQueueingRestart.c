/*
 * XREFs of ndisReceiveQueueingRestart @ 0x1C007E994
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisReceiveQueueingRestart(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_BYTE *)(a1 + 3220) = 0;
  if ( HIBYTE(WPP_MAIN_CB.DeviceQueue.Type) == 1
    && *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) != -1
    && *(_DWORD *)(a1 + 3216)
    && !*(_DWORD *)(a1 + 464) )
  {
    *(_DWORD *)(a1 + 3168) = 1;
  }
  return result;
}
