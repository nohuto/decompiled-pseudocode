/*
 * XREFs of RtlDeleteRegistryValue @ 0x18008C010
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwDeleteValueKey @ 0x18009E8C0 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlDeleteRegistryValue(int a1, __int64 a2, const WCHAR *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  result = RtlpGetRegistryHandle(a1, a2, 1, &Handle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v6 = ZwDeleteValueKey(Handle, &DestinationString);
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return v6;
  }
  return result;
}
