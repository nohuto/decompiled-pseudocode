/*
 * XREFs of WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140341860
 * Callers:
 *     WheaHighIrqlLogSelEventHandlerRegister @ 0x140341730 (WheaHighIrqlLogSelEventHandlerRegister.c)
 *     WheaHighIrqlLogSelEventHandlerUnregister @ 0x1403417A0 (WheaHighIrqlLogSelEventHandlerUnregister.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x140341920 (WheapLogIpmiSELEventHighIrql.c)
 * Callees:
 *     <none>
 */

char __fastcall WheapHighIrqlLogSelEventHandlerAcquireLock(char a1)
{
  char v1; // dl

  v1 = 0;
  while ( _InterlockedCompareExchange((volatile signed __int32 *)&WheapDispatchPtr.StackSize, 1, 0) )
  {
    if ( !a1 )
      return v1;
  }
  return 1;
}
