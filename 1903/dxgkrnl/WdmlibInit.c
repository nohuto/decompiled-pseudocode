/*
 * XREFs of WdmlibInit @ 0x1C015B420
 * Callers:
 *     WdmlibIoCreateDeviceSecure @ 0x1C015D1A0 (WdmlibIoCreateDeviceSecure.c)
 * Callees:
 *     <none>
 */

PVOID WdmlibInit()
{
  PVOID result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoCreateDeviceSecure");
  PfnIoCreateDeviceSecure = (__int64)MmGetSystemRoutineAddress(&DestinationString);
  if ( !PfnIoCreateDeviceSecure )
    PfnIoCreateDeviceSecure = (__int64)IoDevObjCreateDeviceSecure;
  RtlInitUnicodeString(&DestinationString, L"IoValidateDeviceIoControlAccess");
  result = MmGetSystemRoutineAddress(&DestinationString);
  WdmlibInitialized = 1;
  return result;
}
