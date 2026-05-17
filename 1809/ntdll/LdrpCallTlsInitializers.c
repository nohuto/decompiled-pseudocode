/*
 * XREFs of LdrpCallTlsInitializers @ 0x180025DE4
 * Callers:
 *     LdrShutdownThread @ 0x1800232A0 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x18002356C (LdrpInitializeThread.c)
 *     LdrpInitializeNode @ 0x180028428 (LdrpInitializeNode.c)
 *     LdrShutdownProcess @ 0x1800290F0 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x180055D48 (LdrpProcessDetachNode.c)
 *     LdrpInitializeProcess @ 0x1800D3FB4 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     LdrpCallInitRoutine @ 0x180025CC8 (LdrpCallInitRoutine.c)
 *     LdrpFindTlsEntry @ 0x180025ECC (LdrpFindTlsEntry.c)
 *     LdrpLogDbgPrint @ 0x1800CFAF8 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800DDD10 (RtlReportException.c)
 */

char __fastcall LdrpCallTlsInitializers(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 TlsEntry; // rbx
  char result; // al
  __int64 *v8; // rbx
  __int64 v9; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock, (char *)a2, a3, a4);
  TlsEntry = LdrpFindTlsEntry(a2);
  result = RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( TlsEntry )
  {
    v8 = *(__int64 **)(TlsEntry + 40);
    if ( v8 )
    {
      while ( 1 )
      {
        v9 = *v8;
        if ( !*v8 )
          break;
        ++v8;
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1060,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            "Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v9,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        result = LdrpCallInitRoutine(v9, *(_QWORD *)(a2 + 48), a1);
      }
    }
  }
  return result;
}
