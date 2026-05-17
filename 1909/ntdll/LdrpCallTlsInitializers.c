/*
 * XREFs of LdrpCallTlsInitializers @ 0x18002507C
 * Callers:
 *     LdrShutdownThread @ 0x180022A20 (LdrShutdownThread.c)
 *     LdrpInitializeThread @ 0x180022CE8 (LdrpInitializeThread.c)
 *     LdrpInitializeNode @ 0x180069AA4 (LdrpInitializeNode.c)
 *     LdrShutdownProcess @ 0x18006B220 (LdrShutdownProcess.c)
 *     LdrpProcessDetachNode @ 0x18006D950 (LdrpProcessDetachNode.c)
 *     LdrpInitializeProcess @ 0x1800D25F8 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     LdrpCallInitRoutine @ 0x180024FBC (LdrpCallInitRoutine.c)
 *     LdrpFindTlsEntry @ 0x180025164 (LdrpFindTlsEntry.c)
 *     LdrpLogDbgPrint @ 0x1800CE3D8 (LdrpLogDbgPrint.c)
 *     RtlReportException @ 0x1800DB9E0 (RtlReportException.c)
 */

char __fastcall LdrpCallTlsInitializers(int a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 TlsEntry; // rbx
  char result; // al
  __int64 *v8; // rbx
  __int64 v9; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock, a2, a3, a4);
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
            (__int64)"Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v9,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        result = LdrpCallInitRoutine(v9, *(_QWORD *)(a2 + 48), a1);
      }
    }
  }
  return result;
}
