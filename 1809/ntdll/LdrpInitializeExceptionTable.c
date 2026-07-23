/*
 * XREFs of LdrpInitializeExceptionTable @ 0x1800D3090
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x180007BB0 (RtlImageNtHeaderEx.c)
 *     RtlInsertInvertedFunctionTable @ 0x180027528 (RtlInsertInvertedFunctionTable.c)
 */

__int64 __fastcall LdrpInitializeExceptionTable(PVOID BaseAddress)
{
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+38h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(3u, BaseAddress, 0LL, &OutHeaders);
  RtlInsertInvertedFunctionTable((unsigned __int64)BaseAddress, OutHeaders->OptionalHeader.SizeOfImage);
  return RtlCreateInvertedFunctionTableCacheEntry(BaseAddress);
}
