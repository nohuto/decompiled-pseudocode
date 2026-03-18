/*
 * XREFs of rimReadHidKeyboardFlags @ 0x1C01043D4
 * Callers:
 *     RIMCreateHidKeyboardDeviceInfo @ 0x1C01036C0 (RIMCreateHidKeyboardDeviceInfo.c)
 * Callees:
 *     rimRegQueryRegistryDWord @ 0x1C0109414 (rimRegQueryRegistryDWord.c)
 */

__int64 __fastcall rimReadHidKeyboardFlags(_DWORD *a1)
{
  __int64 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  result = 3221225473LL;
  if ( a1 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SYSTEM\\KEYBOARD");
    *a1 = rimRegQueryRegistryDWord(&DestinationString, L"Flags", 0LL);
    return 0LL;
  }
  return result;
}
