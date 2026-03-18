/*
 * XREFs of MiScrubProcesses @ 0x14089D350
 * Callers:
 *     MmScrubMemory @ 0x14089D464 (MmScrubMemory.c)
 * Callees:
 *     MiGetProcessPartition @ 0x140052438 (MiGetProcessPartition.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiProcessHasAwePrivatePages @ 0x1402D7168 (MiProcessHasAwePrivatePages.c)
 *     MiScrubProcessLargePages @ 0x1402ECF14 (MiScrubProcessLargePages.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
 *     MiScrubProcessPhysicalPages @ 0x140896CF8 (MiScrubProcessPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x14089D10C (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x14089D230 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubProcesses(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  _QWORD *i; // rcx
  __int64 v8; // rcx
  _KPROCESS *v9; // rcx
  unsigned __int64 NextProcess; // rax
  unsigned __int64 v11; // rbx
  _BYTE v12[48]; // [rsp+20h] [rbp-118h] BYREF
  _QWORD v13[24]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(v13, 0, sizeof(v13));
  result = MiInitializeScrubPacket(a1, -1, a2, (__int64)v13);
  if ( (int)result >= 0 )
  {
    for ( i = 0LL; ; i = (_QWORD *)v11 )
    {
      NextProcess = PsGetNextProcess(i);
      v11 = NextProcess;
      if ( !NextProcess )
        break;
      if ( MiGetProcessPartition(NextProcess) == a1 )
      {
        if ( *(_DWORD *)(a2 + 4) )
          break;
        if ( MiProcessHasAwePrivatePages(v8) || *(_DWORD *)(v11 + 1756) )
        {
          KiStackAttachProcess(v9, 0, (__int64)v12);
          MiScrubProcessLargePages((__int64)v13, a2);
          MiScrubProcessPhysicalPages((__int64)v13, a2);
          KiUnstackDetachProcess((struct _KTHREAD *)v12, 0);
        }
      }
    }
    *a3 = v13[21];
    MiReleaseScrubPacket((__int64)v13);
    return 0LL;
  }
  return result;
}
