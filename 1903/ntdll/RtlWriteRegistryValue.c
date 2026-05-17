/*
 * XREFs of RtlWriteRegistryValue @ 0x18008B160
 * Callers:
 *     RtlSetPortableOperatingSystem @ 0x1800EB2B0 (RtlSetPortableOperatingSystem.c)
 *     sub_1800EB568 @ 0x1800EB568 (sub_1800EB568.c)
 * Callees:
 *     sub_180003D40 @ 0x180003D40 (sub_180003D40.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwSetValueKey @ 0x18009D2D0 (ZwSetValueKey.c)
 */

__int64 __fastcall RtlWriteRegistryValue(int a1, __int64 a2, const WCHAR *a3, int a4, __int64 a5, int a6)
{
  __int64 result; // rax
  unsigned int v10; // ebx
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  result = sub_180003D40(a1, a2, 1, &v11);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, a3);
    v10 = ZwSetValueKey(v11, &DestinationString, 0LL, a4 & 0xFFFFFF, a5, a6);
    if ( (a1 & 0x40000000) == 0 )
      ZwClose(v11);
    return v10;
  }
  return result;
}
