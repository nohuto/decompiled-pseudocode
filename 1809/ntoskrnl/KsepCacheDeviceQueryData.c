/*
 * XREFs of KsepCacheDeviceQueryData @ 0x1407221C0
 * Callers:
 *     KsepDbCacheQueryDeviceData @ 0x14072214C (KsepDbCacheQueryDeviceData.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 */

const UNICODE_STRING *__fastcall KsepCacheDeviceQueryData(__int64 a1, const WCHAR *a2)
{
  const UNICODE_STRING *v2; // rdi
  const UNICODE_STRING *v3; // rbx
  const UNICODE_STRING *v4; // rsi
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v2 = (const UNICODE_STRING *)(a1 + 56);
  v3 = *(const UNICODE_STRING **)(a1 + 56);
  RtlInitUnicodeString(&DestinationString, a2);
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = *(const UNICODE_STRING **)&v3->Length;
    if ( RtlEqualUnicodeString(v4 + 1, &DestinationString, 1u) )
      return v4;
  }
  return 0LL;
}
