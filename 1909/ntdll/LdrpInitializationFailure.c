/*
 * XREFs of LdrpInitializationFailure @ 0x1800897F0
 * Callers:
 *     LdrpLoadShimEngine @ 0x180069284 (LdrpLoadShimEngine.c)
 *     LdrpInitializeShimDllDependencies @ 0x180069520 (LdrpInitializeShimDllDependencies.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 * Callees:
 *     LdrpLogFatalLdrEtwEvent @ 0x180089844 (LdrpLogFatalLdrEtwEvent.c)
 *     NtRaiseHardError @ 0x18009FAA0 (NtRaiseHardError.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 */

NTSTATUS __fastcall LdrpInitializationFailure(int a1)
{
  char v1; // al
  unsigned __int64 v2; // rbx
  NTSTATUS result; // eax
  ULONG Response; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 Parameters; // [rsp+50h] [rbp+18h] BYREF

  v1 = LdrpDebugFlags;
  v2 = a1;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      1923,
      (unsigned int)"LdrpInitializationFailure",
      0,
      (__int64)"Process initialization failed with status 0x%08lx\n",
      a1);
    v1 = LdrpDebugFlags;
  }
  if ( (v1 & 0x10) != 0 )
    __debugbreak();
  result = LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName, "\a");
  if ( !LdrpFatalHardErrorCount )
  {
    Parameters = v2;
    return NtRaiseHardError(-1073741499, 1u, 0, &Parameters, 1u, &Response);
  }
  return result;
}
