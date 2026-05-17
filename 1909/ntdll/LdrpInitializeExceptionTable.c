/*
 * XREFs of LdrpInitializeExceptionTable @ 0x1800D1760
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     RtlInsertInvertedFunctionTable @ 0x180020D8C (RtlInsertInvertedFunctionTable.c)
 */

__int64 __fastcall LdrpInitializeExceptionTable(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  RtlImageNtHeaderEx(3, a1, 0LL, &v4);
  v2 = *(_DWORD *)(v4 + 80);
  RtlInsertInvertedFunctionTable(a1, v2);
  return RtlCreateInvertedFunctionTableCacheEntry(a1, v2);
}
