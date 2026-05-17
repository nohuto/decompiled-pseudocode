/*
 * XREFs of LdrpInitializationFailure @ 0x1800D2AE4
 * Callers:
 *     LdrpLoadShimEngine @ 0x1800703EC (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180070688 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x18007874C (_LdrpInitialize.c)
 * Callees:
 *     NtRaiseHardError @ 0x1800A2ED0 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D13C8 (LdrpLogFatalLdrEtwEvent.c)
 */

_WORD *__fastcall LdrpInitializationFailure(int a1)
{
  char v1; // al
  _WORD *result; // rax

  v1 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1929,
      "LdrpInitializationFailure",
      0,
      "Process initialization failed with status 0x%08lx\n",
      a1);
    v1 = LdrpDebugFlags;
  }
  if ( (v1 & 0x10) != 0 )
    __debugbreak();
  result = LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LdrFatalInitError);
  if ( !LdrpFatalHardErrorCount )
    return (_WORD *)NtRaiseHardError();
  return result;
}
