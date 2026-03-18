/*
 * XREFs of WheaHighIrqlLogSelEventHandlerUnregister @ 0x1403417A0
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x140341860 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

__int64 __fastcall WheaHighIrqlLogSelEventHandlerUnregister(__int64 a1)
{
  __int64 result; // rax
  struct _LIST_ENTRY *v2; // r9

  if ( WheapDispatchPtr.DeviceType )
  {
    LOBYTE(a1) = 1;
    result = WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    WheapDispatchPtr.Queue.ListEntry.Flink = v2;
    WheapDispatchPtr.Queue.ListEntry.Blink = v2;
    WheapDispatchPtr.DeviceType = (unsigned int)v2;
    _InterlockedExchange((volatile __int32 *)&WheapDispatchPtr.StackSize, (__int32)v2);
  }
  return result;
}
