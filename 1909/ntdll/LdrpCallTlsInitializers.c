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

void __fastcall LdrpCallTlsInitializers(int a1, __int64 a2)
{
  __int64 TlsEntry; // rbx
  __int64 *v5; // rbx
  __int64 v6; // rdi

  RtlAcquireSRWLockShared(&LdrpTlsLock);
  TlsEntry = LdrpFindTlsEntry(a2);
  RtlReleaseSRWLockShared(&LdrpTlsLock);
  if ( TlsEntry )
  {
    v5 = *(__int64 **)(TlsEntry + 40);
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        ++v5;
        if ( (LdrpDebugFlags & 5) != 0 )
          LdrpLogDbgPrint(
            (unsigned int)"minkernel\\ntdll\\ldrtls.c",
            1060,
            (unsigned int)"LdrpCallTlsInitializers",
            2,
            (__int64)"Calling TLS callback %p for DLL \"%wZ\" at %p\n",
            v6,
            a2 + 72,
            *(_QWORD *)(a2 + 48));
        LdrpCallInitRoutine(v6, *(_QWORD *)(a2 + 48), a1);
      }
    }
  }
}
