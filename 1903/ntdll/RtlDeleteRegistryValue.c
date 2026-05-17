/*
 * XREFs of RtlDeleteRegistryValue @ 0x18008B970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x18009E110 (ZwDeleteValueKey.c)
 */

__int64 __fastcall RtlDeleteRegistryValue(int a1, __int64 a2, const WCHAR *a3)
{
  __int64 result; // rax
  unsigned int v6; // ebx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  result = sub_180003D40(a1, a2, 1, &v8);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v6 = ZwDeleteValueKey(v8, &DestinationString);
    if ( (a1 & 0x40000000) == 0 )
      ZwClose(v8);
    return v6;
  }
  return result;
}
