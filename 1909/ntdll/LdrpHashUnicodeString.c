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

__int64 __fastcall LdrpHashUnicodeString(unsigned __int16 *a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  RtlHashUnicodeString(a1, 1, 0, (int *)&v2);
  result = v2;
  if ( !v2 )
    return 0x80000000LL;
  return result;
}
