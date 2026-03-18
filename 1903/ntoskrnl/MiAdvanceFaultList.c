/*
 * XREFs of MiAdvanceFaultList @ 0x1400F57E0
 * Callers:
 *     MiBuildMdlForMappedFileFault @ 0x14002DEF0 (MiBuildMdlForMappedFileFault.c)
 *     MiInPagePageTable @ 0x14005D730 (MiInPagePageTable.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 *     MiResolveSharedZeroFault @ 0x1400C8250 (MiResolveSharedZeroFault.c)
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 *     MiResolvePrivateZeroFault @ 0x1400CD460 (MiResolvePrivateZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiCreateSharedZeroPages @ 0x1400EFE70 (MiCreateSharedZeroPages.c)
 *     MiPrefetchVirtualMemory @ 0x1400F5100 (MiPrefetchVirtualMemory.c)
 *     MiComputeFaultCluster @ 0x1400F55B4 (MiComputeFaultCluster.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x1402CAE80 (MiCopyFileOnlyGlobalSubsectionPage.c)
 *     MiCopyImageExtentContents @ 0x1402CB23C (MiCopyImageExtentContents.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiAdvanceFaultList(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r10
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx

  v2 = a1[3];
  result = 2 * v2;
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 16 * v2 + 8);
  v6 = *(_DWORD *)(v4 + 16 * v2) & 0xFFF;
  if ( ++a1[4] == (unsigned __int64)(v6 + v5 + 4095) >> 12 )
  {
    a1[4] = 0LL;
    v7 = v2 + 1;
    v8 = a1[2];
    a1[3] = v7;
    if ( v7 < v8 )
    {
      result = 2 * v7;
      if ( !*(_QWORD *)(v4 + 16 * v7 + 8) )
        v7 = v8;
      a1[3] = v7;
    }
  }
  return result;
}
