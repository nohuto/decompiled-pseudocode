/*
 * XREFs of LdrpGenericExceptionFilter @ 0x1800D7988
 * Callers:
 *     LdrpSnapModule @ 0x1800072B0 (LdrpSnapModule.c)
 *     LdrpHandleTlsData @ 0x18003629C (LdrpHandleTlsData.c)
 *     LdrpAllocateTls @ 0x18003673C (LdrpAllocateTls.c)
 *     LdrpAllocateTlsEntry @ 0x18003699C (LdrpAllocateTlsEntry.c)
 *     LdrpProtectedCopyMemory @ 0x18007FB60 (LdrpProtectedCopyMemory.c)
 *     LdrLockLoaderLock @ 0x180081050 (LdrLockLoaderLock.c)
 *     LdrUnlockLoaderLock @ 0x180081CB0 (LdrUnlockLoaderLock.c)
 *     LdrpTouchThreadStack @ 0x180085B48 (LdrpTouchThreadStack.c)
 *     LdrpProtectAndRelocateImage @ 0x1800873B4 (LdrpProtectAndRelocateImage.c)
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008C7C0 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     DbgPrint @ 0x18004F300 (DbgPrint.c)
 *     ZwTerminateProcess @ 0x1800A0880 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x1800A0D60 (NtTerminateThread.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     LdrpLogFatalLdrEtwEvent @ 0x1800D13C8 (LdrpLogFatalLdrEtwEvent.c)
 *     DbgPrompt @ 0x1800E1F80 (DbgPrompt.c)
 */

__int64 __fastcall LdrpGenericExceptionFilter(const void **a1, const char *a2)
{
  char v3; // al
  NTSTATUS v4; // edi
  bool v5; // zf
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  CHAR Response; // [rsp+60h] [rbp+8h] BYREF

  v3 = LdrpDebugFlags;
  v4 = *(_DWORD *)*a1;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrutil.c",
      563,
      "LdrpGenericExceptionFilter",
      0,
      "Function %s raised exception 0x%08lx\n\tException record: .exr %p\n\tContext record: .cxr %p\n",
      a2,
      v4,
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
      DbgPrompt("Break repeatedly, break Once, Ignore, terminate Process or terminate Thread (boipt)? ", &Response, 2u);
      if ( Response > 98 )
      {
        v6 = Response - 105;
        v5 = Response == 105;
      }
      else
      {
        if ( Response == 98 || Response == 66 )
          goto LABEL_17;
        v6 = Response - 73;
        v5 = Response == 73;
      }
      if ( v5 )
        return 1LL;
      v7 = v6 - 6;
      if ( !v7 )
      {
LABEL_17:
        DbgPrint("Execute '.cxr %p' to dump context\n", a1[1]);
        __debugbreak();
      }
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 == 4 )
        {
          LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorThread);
          NtTerminateThread((HANDLE)0xFFFFFFFFFFFFFFFELL, v4);
        }
      }
      else
      {
        LdrpLogFatalLdrEtwEvent(&NtCurrentPeb()->ProcessParameters->ImagePathName.Length, &LoaderFatalErrorProc);
        ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4);
      }
    }
  }
  return 1LL;
}
