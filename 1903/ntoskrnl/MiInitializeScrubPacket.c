/*
 * XREFs of MiInitializeScrubPacket @ 0x14089D10C
 * Callers:
 *     MiScrubMemoryWorker @ 0x14089D280 (MiScrubMemoryWorker.c)
 *     MiScrubProcesses @ 0x14089D350 (MiScrubProcesses.c)
 * Callees:
 *     MiInitializePageColorBase @ 0x1400A60A8 (MiInitializePageColorBase.c)
 *     MiGetNextPageColor @ 0x1400DAF0C (MiGetNextPageColor.c)
 *     MiCreateUltraThreadContext @ 0x14012372C (MiCreateUltraThreadContext.c)
 *     MiReferencePageRuns @ 0x14012C230 (MiReferencePageRuns.c)
 *     MiCreatePteCopyList @ 0x14012F194 (MiCreatePteCopyList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiReleaseScrubPacket @ 0x14089D230 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiInitializeScrubPacket(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // esi
  unsigned int NextPageColor; // eax
  PVOID PoolWithTag; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0LL;
  v12[1] = 0LL;
  v6 = 0;
  MiInitializePageColorBase((__int64)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[6], 0, (__int64)v12);
  NextPageColor = MiGetNextPageColor((__int64)v12);
  if ( !(unsigned int)MiCreateUltraThreadContext(a4, NextPageColor, 8) )
    return 3221225626LL;
  MiCreatePteCopyList(0x100uLL, 0x100uLL, a4 + 128);
  if ( *(_DWORD *)(a4 + 132)
    && (*(_DWORD *)(a4 + 184) = a2,
        *(_QWORD *)(a4 + 152) = 0LL,
        *(_QWORD *)(a4 + 176) = 0LL,
        *(_QWORD *)(a4 + 160) = a3,
        *(_QWORD *)(a4 + 168) = 0LL,
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x6363454Du),
        (*(_QWORD *)(a4 + 152) = PoolWithTag) != 0LL) )
  {
    if ( a2 != -1 )
      *(_QWORD *)(a4 + 176) = MiReferencePageRuns(a1, 1u);
  }
  else
  {
    MiReleaseScrubPacket(a4);
    return (unsigned int)-1073741670;
  }
  return v6;
}
