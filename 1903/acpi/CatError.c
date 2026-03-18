/*
 * XREFs of CatError @ 0x1C00657F8
 * Callers:
 *     AMLIInitialize @ 0x1C00BC5B4 (AMLIInitialize.c)
 * Callees:
 *     RtlStringCchCatA @ 0x1C005DE70 (RtlStringCchCatA.c)
 *     RtlStringCchVPrintfA @ 0x1C0062C90 (RtlStringCchVPrintfA.c)
 *     AMLIDebugger @ 0x1C00657A8 (AMLIDebugger.c)
 *     ConPrintf @ 0x1C0065888 (ConPrintf.c)
 */

__int64 CatError(const char *a1, ...)
{
  __int64 v1; // rax
  __int64 result; // rax
  va_list argList; // [rsp+48h] [rbp+10h] BYREF

  va_start(argList, a1);
  RtlStringCchCatA(pszDest, 0x100uLL, "\n");
  v1 = -1LL;
  do
    ++v1;
  while ( pszDest[v1] );
  RtlStringCchVPrintfA(&pszDest[v1], 256 - v1, a1, argList);
  ConPrintf(pszDest);
  result = ConPrintf("\n");
  if ( (gDebugger & 0x4000) != 0 )
    return AMLIDebugger();
  return result;
}
