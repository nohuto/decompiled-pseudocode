/*
 * XREFs of GetWin32kDriverObject @ 0x1C00A7B10
 * Callers:
 *     DriverEntry @ 0x1C0266500 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 GetWin32kDriverObject()
{
  __int64 result; // rax
  struct _UNICODE_STRING v1; // [rsp+40h] [rbp-18h] BYREF

  result = 0LL;
  *(_QWORD *)&v1.Length = 0LL;
  v1.Buffer = 0LL;
  if ( !gbFirstConnectionDone )
  {
    RtlInitUnicodeString(&v1, L"\\Driver\\Win32k");
    dword_1C0214370 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    result = ObReferenceObjectByName(&v1, 64LL, 0LL);
    dword_1C0214374 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (int)result < 0 )
      return 0LL;
  }
  return result;
}
