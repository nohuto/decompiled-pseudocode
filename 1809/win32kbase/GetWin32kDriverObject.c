/*
 * XREFs of GetWin32kDriverObject @ 0x1C00042C0
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 GetWin32kDriverObject()
{
  __int64 result; // rax
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  if ( gbFirstConnectionDone )
    return 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  dword_1C01CC6C8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  result = ObReferenceObjectByName(&DestinationString, 64LL, 0LL);
  dword_1C01CC6CC = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( (int)result < 0 )
    return 0LL;
  return result;
}
