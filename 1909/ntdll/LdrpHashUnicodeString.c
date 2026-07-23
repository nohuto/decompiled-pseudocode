/*
 * XREFs of LdrpHashUnicodeString @ 0x18002952C
 * Callers:
 *     LdrpLoadKnownDll @ 0x180029560 (LdrpLoadKnownDll.c)
 *     LdrpInsertDataTableEntry @ 0x18002A63C (LdrpInsertDataTableEntry.c)
 *     LdrpMapDllSearchPath @ 0x18002DEC8 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x18002E4A8 (LdrpMapDllFullPath.c)
 *     LdrpAddRedirectedFunction @ 0x1800D5124 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x1800273F0 (RtlHashUnicodeString.c)
 */

__int64 __fastcall LdrpHashUnicodeString(_UNICODE_STRING *a1)
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
