/*
 * XREFs of UsbhInitializeHighResTimer @ 0x1C002A1B0
 * Callers:
 *     DriverEntry @ 0x1C0029F14 (DriverEntry.c)
 * Callees:
 *     <none>
 */

bool UsbhInitializeHighResTimer()
{
  bool result; // al
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"ExAllocateTimer");
  g_ExAllocateTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  result = 0;
  if ( g_ExAllocateTimer )
  {
    RtlInitUnicodeString(&DestinationString, L"ExDeleteTimer");
    g_ExDeleteTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
    if ( g_ExDeleteTimer )
    {
      RtlInitUnicodeString(&DestinationString, L"ExSetTimer");
      g_ExSetTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
      if ( g_ExSetTimer )
      {
        RtlInitUnicodeString(&DestinationString, L"ExCancelTimer");
        g_ExCancelTimer = (__int64)MmGetSystemRoutineAddress(&DestinationString);
        if ( g_ExCancelTimer )
          return 1;
      }
    }
  }
  return result;
}
