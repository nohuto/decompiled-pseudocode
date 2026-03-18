/*
 * XREFs of WheaHighIrqlLogSelEventHandlerRegister @ 0x140341190
 * Callers:
 *     <none>
 * Callees:
 *     WheapHighIrqlLogSelEventHandlerAcquireLock @ 0x1403412C0 (WheapHighIrqlLogSelEventHandlerAcquireLock.c)
 */

char __fastcall WheaHighIrqlLogSelEventHandlerRegister(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v1; // rbx
  __int32 v2; // r9d
  ULONG v3; // r10d
  struct _LIST_ENTRY *v4; // r11

  v1 = a1;
  if ( WheapDispatchPtr.DeviceType )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    if ( WheapDispatchPtr.DeviceType == v2 )
    {
      WheapDispatchPtr.Queue.ListEntry.Flink = v1;
      WheapDispatchPtr.Queue.ListEntry.Blink = v4;
      WheapDispatchPtr.DeviceType = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange((volatile __int32 *)&WheapDispatchPtr.StackSize, v2);
  }
  return v3;
}
