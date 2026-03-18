/*
 * XREFs of IoGetSilo @ 0x140009A50
 * Callers:
 *     IopAllocRealFileObject @ 0x1405D8060 (IopAllocRealFileObject.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1406861CC (IopAllocateFoExtensionsOnCreate.c)
 * Callees:
 *     IopGetFileObjectExtension @ 0x14000A8E0 (IopGetFileObjectExtension.c)
 */

__int64 __fastcall IoGetSilo(__int64 a1)
{
  __int64 result; // rax

  result = IopGetFileObjectExtension(a1, 7LL, 0LL);
  if ( result )
    return *(_QWORD *)(result + 8);
  return result;
}
