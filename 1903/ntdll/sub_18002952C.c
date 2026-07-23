/*
 * XREFs of sub_18002952C @ 0x18002952C
 * Callers:
 *     sub_180029560 @ 0x180029560 (sub_180029560.c)
 *     sub_18002A63C @ 0x18002A63C (sub_18002A63C.c)
 *     sub_18002DEC8 @ 0x18002DEC8 (sub_18002DEC8.c)
 *     sub_18002E4A8 @ 0x18002E4A8 (sub_18002E4A8.c)
 *     sub_1800D5064 @ 0x1800D5064 (sub_1800D5064.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x1800273F0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall sub_18002952C(_UNICODE_STRING *a1)
{
  __int64 result; // rax
  ULONG HashValue; // [rsp+38h] [rbp+10h] BYREF

  HashValue = 0;
  RtlHashUnicodeString(a1, 1u, 0, &HashValue);
  result = HashValue;
  if ( !HashValue )
    return 0x80000000LL;
  return result;
}
