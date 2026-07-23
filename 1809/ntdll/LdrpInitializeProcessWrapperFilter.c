/*
 * XREFs of LdrpInitializeProcessWrapperFilter @ 0x1800D6804
 * Callers:
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800DDD10 (RtlReportException.c)
 */

__int64 __fastcall LdrpInitializeProcessWrapperFilter(const void **a1, _DWORD *a2)
{
  char v2; // al
  int v5; // ebx
  bool v6; // sf
  __int64 result; // rax

  v2 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1991,
      "LdrpInitializeProcessWrapperFilter",
      0,
      "Process initialization raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      *(_DWORD *)*a1,
      *a1,
      a1[1]);
    v2 = LdrpDebugFlags;
  }
  if ( (v2 & 0x10) != 0 )
    __debugbreak();
  v5 = 0;
  if ( g_LdrBreakOnLdrpInitializeProcessFailure )
    __debugbreak();
  v6 = RtlReportException((PEXCEPTION_RECORD)*a1, (PCONTEXT)a1[1], 2u) < 0;
  result = 1LL;
  LOBYTE(v5) = !v6;
  *a2 = v5;
  return result;
}
