/*
 * XREFs of MiScrubProcesses @ 0x140860E20
 * Callers:
 *     MmScrubMemory @ 0x140860F24 (MmScrubMemory.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     MiGetProcessPartition @ 0x14004D19C (MiGetProcessPartition.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiProcessHasAwePrivatePages @ 0x1402B1790 (MiProcessHasAwePrivatePages.c)
 *     MiScrubProcessLargePages @ 0x1402CFD2C (MiScrubProcessLargePages.c)
 *     PsGetNextProcess @ 0x1405B31E0 (PsGetNextProcess.c)
 *     MiScrubProcessPhysicalPages @ 0x1408515B0 (MiScrubProcessPhysicalPages.c)
 *     MiInitializeScrubPacket @ 0x140860BE8 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140860D04 (MiReleaseScrubPacket.c)
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
        if ( MiProcessHasAwePrivatePages(v8) || *(_DWORD *)(v11 + 1708) )
        {
          KiStackAttachProcess(v9, 0LL, (__int64)v12);
          MiScrubProcessLargePages((__int64)v13, a2);
          MiScrubProcessPhysicalPages((__int64)v13, a2);
          KiUnstackDetachProcess((__int64)v12, 0LL);
        }
      }
    }
    *a3 = v13[21];
    MiReleaseScrubPacket((__int64)v13);
    return 0LL;
  }
  return result;
}
