/*
 * XREFs of LdrpGenericExceptionFilter @ 0x1800D7988
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18003673C (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x18003699C (LdrpAllocateTlsEntry.c)
 *     LdrpProtectedCopyMemory @ 0x18007FB50 (LdrpProtectedCopyMemory.c)
 *     LdrLockLoaderLock @ 0x180081040 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180081CA0 (LdrUnlockLoaderLock.c)
 *     LdrpTouchThreadStack @ 0x180085B38 (LdrpTouchThreadStack.c)
 *     LdrpProtectAndRelocateImage @ 0x1800873A4 (LdrpProtectAndRelocateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7B0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A0D40 (NtTerminateThread.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D13C8 (LdrpLogFatalLdrEtwEvent.c)
 *     DbgPrompt @ 0x1800E1F80 (DbgPrompt.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  char v3; // al
  bool v4; // zf
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  char v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      563,
      "LdrpGenericExceptionFilter",
      0,
      "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      a2,
      *(_DWORD *)*a1,
      *a1,
      a1[1]);
    v3 = LdrpDebugFlags;
  }
  if ( (v3 & 0x10) != 0 )
    __debugbreak();
  if ( (v3 & 0x30) == 0x20 )
  {
    while ( 1 )
    {
      DbgPrint("\n***Exception thrown within loader***\n");
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &v9, 2LL);
      if ( v9 > 98 )
      {
        v5 = v9 - 105;
        v4 = v9 == 105;
      }
      else
      {
        if ( v9 == 98 || v9 == 66 )
          goto LABEL_17;
        v5 = v9 - 73;
        v4 = v9 == 73;
      }
      if ( v4 )
        return 1LL;
      v6 = v5 - 6;
      if ( !v6 )
      {
LABEL_17:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorThread);
          NtTerminateThread();
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorProc);
        ZwTerminateProcess();
      }
    }
  }
  return 1LL;
}
