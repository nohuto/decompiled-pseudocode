/*
 * XREFs of LdrpHashUnicodeString @ 0x1800714C4
 * Callers:
 *     LdrpLoadKnownDll @ 0x1800223F4 (LdrpLoadKnownDll.c)
 *     LdrpInsertDataTableEntry @ 0x180070B38 (LdrpInsertDataTableEntry.c)
 *     LdrpMapDllFullPath @ 0x180070F28 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 *     LdrpAddRedirectedFunction @ 0x1800D7210 (LdrpAddRedirectedFunction.c)
 * Callees:
 *     RtlHashUnicodeString @ 0x18000BF90 (RtlHashUnicodeString.c)
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
