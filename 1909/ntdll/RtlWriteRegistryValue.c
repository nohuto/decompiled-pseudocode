/*
 * XREFs of RtlWriteRegistryValue @ 0x18008B800
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1800EB3A0 (RtlSetPortableOperatingSystem.c)
 *     RtlpSetTimeZoneInformationWorker @ 0x1800EB658 (RtlpSetTimeZoneInformationWorker.c)
 * Callees:
 *     RtlpGetRegistryHandle @ 0x180003D40 (RtlpGetRegistryHandle.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     ZwSetValueKey @ 0x18009DA80 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlWriteRegistryValue(int a1, __int64 a2, const WCHAR *a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax
  unsigned int v10; // ebx
  HANDLE Handle; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  result = RtlpGetRegistryHandle(a1, a2, 1, &Handle);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v10 = ZwSetValueKey(Handle, &DestinationString, 0LL, a4 & 0xFFFFFF, a5, a6);
    if ( (a1 & 0x40000000) == 0 )
      NtClose(Handle);
    return v10;
  }
  return result;
}
